if(!isServer) exitwith {};
_RND_number = 2;

if (isServer) then  {
	_RND_number = Ceil random 3;
	};

if(!isServer) exitwith {};


//defining global arrays for RCIEDs and triggermen
EODS_Ieds_ia_con_celular = [];
EODS_Ieds_sincronizados = [];

//compiling the Cell phone function
call compile preprocessFileLineNumbers "EODS_ieds\funciones\IED_CA\EODS_CA_FNC_PRIMARIAS.sqf";

//compiling the bury IED function
call compile preprocessFileLineNumbers "EODS_ieds\funciones\HIDDEN_IEDS\EODS_HIDDEN_FNC.sqf";





//the passed ied
_ied = _this select 0;
_RND_number = _this select 1;
_iedtype = _this select 2;
_triggerman = _this select 3;

//arming and unhiding its battery/detonatornator
_ied setVariable ["EODS_Ieds_STATUS_ARMADO", true, true];

			sleep 0.1;

			_ied animate ["Detonator_hide", 1];
			_ied animate ["Battery_hide", 1];


			sleep 0.2;


			//creating triggerman
			_bomberGroup = createGroup east;
			_bomber = _bomberGroup createUnit [_triggerman, Position _ied, [], 100, "FORM"];



				_bomber addItem "EODS_cellphone_02";

				_bomber allowFleeing 0;

				EODS_Ieds_ia_con_celular = EODS_Ieds_ia_con_celular + [_bomber];





				EODS_Ieds_sincronizados = EODS_Ieds_sincronizados + [_ied];

				[_ied,_bomber] spawn FNC_EODS_CA_LOOP_CENTRAL;

				_ied setVariable ["EODS_Ieds_STATUS_ARMADO", true, true];

			//DECIDING ON IF BURIED OR HIDDEN

			if(_RND_number == 2) then
			{

				//burying the IED
			   [_ied] spawn FNC_EODS_HIDDEN_OCULTAR;
			};



			if(_RND_number == 1) then
			{
				//hiding ied in object

			_object = createVehicle [_iedtype, position _ied, [], 0, "NONE"];


			_ied attachTo [_object,[0,0,-1.1]];

			//[[ied,true], "FNC_EODS_HIDE", true, false] spawn BIS_fnc_MP;

			_ied setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO", true, true];

			_ied setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO_OBJETO", _object, true];

			_object setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO", true, true];

			_object setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO_IED", _ied, true];

			[[_ied], "FNC_EODS_PCU_ELIMINAR_ACCIONES", true, false] spawn BIS_fnc_MP;
			};




//broadcasting the arrays above
publicVariable "EODS_Ieds_ia_con_celular";
publicVariable "EODS_Ieds_sincronizados";
