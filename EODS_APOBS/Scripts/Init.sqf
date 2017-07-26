call compile preprocessFileLineNumbers "\EODS_ieds\funciones\GENERAL\EODS_GENERAL_FUCTIONS.sqf";

call compile preprocessFileLineNumbers "\EODS_APOBS\Scripts\Fire_and_CreateEmpty.sqf";

call compile preprocessFileLineNumbers "\EODS_APOBS\Scripts\Particles.sqf";

call compile preprocessFileLineNumbers "\EODS_APOBS\Scripts\MP_Spawn_Bug_Fix.sqf";

private ["_vehicule","_className"];

_vehicule = _this select 0;

_className = typeOf _vehicule;

if ((IsServer) && (_className == "APOBS")) then {

	[_vehicule] spawn EODS_APOBS_MP_SPAWN_BUG_FIX;
};