class CfgPatches
{
	class EODS_module
	{
		units[]=
		{
			
			"EODS_MISSION_MODULE"
		};
		weapons[]=
		{
			
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"CBA_XEH",
			"CBA_MAIN",
			"A3_UI_F"
		};
		author[]=
		{
			"Burnes"
		};
		versionDesc="[EODS] 0.0.7";
		version="0.0.7";
		magazines[]={};
		ammo[]={};
	};
};
class cfgVehicles
{
	
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class EODS_MISSION_MODULE: Module_F
	{
		Author="Burnes";
		scope=2;
		category="EODS_ieds_modules";
		side=7;
		displayName="RANDOM IEDS";
		IEmodICON_Module="\EODS_module\EODS_module_random_icon.paa";
		picture="\EODS_module\EODS_module_random_icon.paa";
		icon="\EODS_module\EODS_module_random_icon.paa";
		mapsize=20;
		class Arguments: ArgumentsBaseUnits
		{
			class numberOfIEDs {
                displayName = "Number of IEDs";
                description = "Will determine the number of IEDs on the map";
                typeName = "NUMBER";
                defaultValue = 30;
            };
			
			class numberOfDuds {
                displayName = "Number of random objects without IEDs";
                description = "Will determine the number of objects on the map that do not contain IEDs";
                typeName = "NUMBER";
                defaultValue = 50;
            };
			
			class numberOfMines {
                displayName = "Number of mines";
                description = "Will determine the number of mines on the map";
                typeName = "NUMBER";
                defaultValue = 50;
            };
			
			class triggerManClasses
                        {
                                displayName = "Triggerman Classes";
                                description = "enter the classnames of trigger men for IEDs, separate with a comma (,). if left blank default civilian will be used";
                                defaultValue = "";
                        };
						
			class safeZoneRadius
			{
					displayName = "Safe Zone Radius";
					description = "distance around player start positions not to spawn IEDs";
					typeName = "NUMBER";
					defaultValue = 500;
			};
			
			class debug {
                displayName = "Debug Mode";
                description = "Will give hints about the module showing its activities";
                typeName = "BOOL";
                defaultValue = 0;
            };
		};
		class ModuleDescription
		{
			description="Use this module to set up random IEDs around the map";
			sync[]={};
		};
		class Eventhandlers
		{
			init="if (isServer) then {_ok = _this execVM '\EODS_module\iedInit.sqf';};";
		};
	};
	
	
	
	
};

