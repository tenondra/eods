/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

//-----------------------------------------------------------------------------------------------------------------

if ((!isServer) && (player != player)) then
{
  waitUntil {player == player};
};

if (!isServer) then {waitUntil {!isNull player};};

sleep 5;

private ["_talon"];

if (IsServer) then {

	_talon = _this select 0;

	if (isEngineOn _talon) then {_talon engineOn false};

	[_talon] spawn FNC_EODS_TALON_LOOP;

	[[_talon], "FNC_EODS_TALON_DESHABILITAR_IA", true, false] spawn BIS_fnc_MP;

	[[_talon], "FNC_EODS_TALON_CONTROL_BRAZO_INIT", true, true] spawn BIS_fnc_MP;
};