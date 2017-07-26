class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Mortar_01_F_Turret="Mortar_01_F_Turret";
		Static_Turret="Static_Turret";
		Mk201_Turret="Mk201_Turret";
		Mk34_Turret="Mk34_Turret";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Static_Dead: DefaultDie
		{
			actions="DeadActions";
			file="\A3\cargoposes_F\anim\gunner_static_low01_KIA.rtm";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"DeadState",
				1
			};
		};
		class Static_Turret: Crew
		{
			file="\A3\cargoposes_F\anim\gunner_static_low01.rtm";
			interpolateTo[]=
			{
				"Static_Dead",
				1
			};
		};
		class Mk201_Dead: DefaultDie
		{
			actions="DeadActions";
			file="\A3\cargoposes_F\anim\gunner_static_low01_KIA.rtm";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"DeadState",
				1
			};
		};
		class Mk201_Turret: Crew
		{
			file="\A3\cargoposes_F\anim\gunner_static_low01.rtm";
			interpolateTo[]=
			{
				"Mk201_Dead",
				1
			};
		};
		class Mk34_Dead: DefaultDie
		{
			actions="DeadActions";
			file="\A3\cargoposes_F\anim\gunner_static_low01_KIA.rtm";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"DeadState",
				1
			};
		};
		class Mk34_Turret: Crew
		{
			file="\A3\cargoposes_F\anim\gunner_static_low01.rtm";
			interpolateTo[]=
			{
				"Mk34_Dead",
				1
			};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		Static_Turret="";
		Mk201_Turret="";
		Mk34_Turret="";
	};
};
class CfgPatches
{
	class EODS_APOBS
	{
		units[]=
		{
			"APOBS",
			"APOBS_A",
			"APOBS_B",
			"APOBS_E_B",
			"APOBS_E_W",
			"APOBS_Empty_Base",
			"APOBS_Empty",
			"APOBS_Fired",
			"APOBS_Charge_Script_Base",
			"APOBS_Charge_Script",
			"APOBS_Alternative_Rocket"
		};
		weapons[]=
		{
			"APOBS_Charge"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CBA_XEH",
			"CBA_MAIN",
			"A3_UI_F",
			"A3_Weapons_F",
			"EODS_ieds_main"
		};
		magazines[]=
		{
			"CA_Magazine",
			"VehicleMagazine",
			"1Rnd_APOBS_Charge"
		};
		ammo[]=
		{
			"ShellBase",
			"Fake_APOBS_Rocket_base",
			"Fake_APOBS_Rocket",
			"APOBS_Charge_Shell"
		};
	};
};
class CfgSounds
{
	class APOBS_rocket_Sound
	{
		name="APOBS_rocket_Sound";
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\new_rocket_7",
			1.7782794,
			1.2,
			1600
		};
		titles[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgAmmo
{
	class Default;
	class FakeAmmo;
	class EODS_ShellBase: FakeAmmo
	{
		soundHit[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		CraterEffects="";
		CraterWaterEffects="";
		ExplosionEffects="";
		visibleFire=0;
		audibleFire=0;
		timeToLive=360;
		muzzleEffect="";
		caliber=34;
		whistleOnFire=0;
		class HitEffects
		{
		};
		soundFakeFall0[]={};
		soundFakeFall1[]={};
		soundFakeFall2[]={};
		soundFakeFall3[]={};
		soundFakeFall[]={};
	};
	class Fake_APOBS_Rocket_base: FakeAmmo
	{
		soundHit[]={};
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		CraterEffects="";
		CraterWaterEffects="";
		ExplosionEffects="";
		visibleFire=0;
		audibleFire=0;
		timeToLive=5;
		muzzleEffect="";
		model="\EODS_APOBS\Fake_APOBS_Rocket";
		caliber=34;
		whistleOnFire=0;
		class HitEffects
		{
		};
		soundFakeFall0[]={};
		soundFakeFall1[]={};
		soundFakeFall2[]={};
		soundFakeFall3[]={};
		soundFakeFall[]={};
	};
	class Fake_APOBS_Rocket: Fake_APOBS_Rocket_base
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=5;
		explosive=0;
		cost=0;
		muzzleEffect="";
		model="";
		CraterEffects="";
		ExplosionEffects="";
		whistleDist=0;
		artilleryLock=0;
		thrust=0;
		timeToLive=2;
		airFriction=0;
		sideairFriction=0;
		class CamShakeExplode
		{
			power="";
			duration="";
			frequency=0;
			distance="";
		};
		class CamShakeHit
		{
			power=0;
			duration="";
			frequency=0;
			distance=0;
		};
		class CamShakeFire
		{
			power="";
			duration="";
			frequency=0;
			distance="";
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
	};
	class APOBS_Charge_Shell: EODS_ShellBase
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=400;
		explosive=0;
		cost=200;
		muzzleEffect="";
		model="";
		CraterEffects="";
		ExplosionEffects="";
		whistleDist=0;
		artilleryLock=0;
		thrust=0;
		timeToLive=2;
		airFriction=0;
		sideairFriction=0;
		class CamShakeExplode
		{
			power="";
			duration="";
			frequency=0;
			distance="";
		};
		class CamShakeHit
		{
			power=0;
			duration="";
			frequency=0;
			distance=0;
		};
		class CamShakeFire
		{
			power="";
			duration="";
			frequency=0;
			distance="";
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
		scope=1;
		value=1;
		displayName="";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="";
		modelSpecial="";
		useAction=0;
		useActionTitle="";
		reloadAction="";
		ammo="";
		count=30;
		type=256;
		initSpeed=900;
		selectionFireAnim="zasleh";
		nameSound="magazine";
		maxLeadSpeed=23;
		weaponpoolavailable=1;
		mass=8;
	};
	class VehicleMagazine: CA_Magazine
	{
		type=0;
		reloadAction="";
		maxLeadSpeed=100;
		weaponPoolAvailable=0;
	};
	class 1Rnd_APOBS_Charge: VehicleMagazine
	{
		displayName="1Rnd APOBS Charge";
		displayNameShort="APOBS Mag";
		count=1;
		ammo="APOBS_Charge_Shell";
		initSpeed=50;
	};
};
class cfgWeapons
{
	class Default;
	class CannonCore;
	class APOBS_Charge: CannonCore
	{
		scope=1;
		displayname="APOBS charge";
		nameSound="";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			class StandardSound
			{
				begin1[]={};
				soundBegin[]={};
				weaponSoundEffect="";
			};
			soundFly[]={};
			weaponSoundEffect="";
			burst=1;
			reloadTime=2;
			autoFire=0;
		};
		minRange=80;
		minRangeProbab=0.69999999;
		midRange=2000;
		midRangeProbab=0.69999999;
		maxRange=4000;
		maxRangeProbab=0.1;
		reloadTime=1.8;
		magazineReloadTime=5;
		maxLeadSpeed=100;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"1Rnd_APOBS_Charge"
		};
		ballisticsComputer=2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="";
				positionName="Usti Hlavne";
				directionName="Konec Hlavne";
			};
		};
		modes[]=
		{
			"Single1"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="$STR_A3_missiles_dar0";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]={};
				soundBegin[]={};
				weaponSoundEffect="";
			};
			soundFly[]={};
			weaponSoundEffect="";
			burst=1;
			reloadTime=2;
			autoFire=0;
		};
	};
};
class CfgDestructPos
{
	scope=1;
	class DelayedDestruction;
	class DelayedDestructionAmmo: DelayedDestruction
	{
		timeBeforeHiding="21";
		hideDuration="10";
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class APOBS_veh_Rocket_base: Car_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_armedcar_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_armedcar_p"
				};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound = "veh_vehicle_armedcar_s";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "APOBS_veh_Rocket_base";
		scope = 0;
		Model = "";
		Picture="";
		Icon="";
		mapSize = 6;
		displayName = "APOBS_veh_Rocket_base";
		vehicleClass = "EODS_ied_class";
		crew = "";
		typicalCargo[]=
		{
		};
		//accuracy=0.3;
		side=2;
		faction="Blu_f";
		//water resistance and effects on vehicle
		WaterLeakiness = 10;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		//
		wheelCircumference=2.8340001;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=50;
		crewVulnerable=1;
		crewCrashProtection=0.15000001;
		weapons[]=
		{
		};
		magazines[]={};
		damperSize=0.2;
		damperForce=1;
		damperDamping=1;
		armor=80;
		damageResistance=0.00562;
		turnCoef=2.5;
		steerAheadPlan=0.2;
		steerAheadSimul=0.40000001;
		predictTurnPlan=0.89999998;
		predictTurnSimul=0.5;
		brakeDistance=1;
		terrainCoef=1.5;
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.44999999;
		cost=200000;
		precision=15;
		armorGlass=0.5;
		armorWheels=0.1;
		soundServo[]=
		{
			"A3\sounds_f\dummysound",
			0.0099999998,
			1,
			10
		};
		soundEnviron[]=
		{
			"",
			0.56234133,
			1
		};
		transportMaxBackpacks=5;
		transportSoldier=3;
		class Library 
		{
			libTextDesc = "APOBS_veh_Rocket_base";
		};
		castDriverShadow="true";
		driverAction = ""; // rtm related to driver
		cargoAction[] = 
		{
		
		};

		threat[] = {0.8,0.6,0.3};
		// this part define the driver animations related to model.cfg an p3d named selection
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "pedal_thrust";
		//
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		//PhysX Part.....
		idleRpm = 800;
		redRpm = 4500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 250; 
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.75,
				"N",
				0,
				"D1",
				4.3000002,
				"D2",
				2.3,
				"D3",
				1.5,
				"D4",
				1,
				"D5",
				0.73000002
			};
			TransmissionRatios[]=
			{
				"High",
				6.7589998
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=20;
		enginePower=276;
		maxOmega=471;
		peakTorque=1253;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.278,0.5},
			{0.34999999,0.75},
			{0.461,1},
			{0.60000002,0.94999999},
			{0.69999999,0.85000002},
			{0.80000001,0.75},
			{1,0.5}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.31;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.126";
				mass=30;
				MOI=12.8;
				dampingRate=0.1;
				maxBrakeTorque=10000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				mMaxDroop=0.1;
				sprungMass=825;
				springStrength=51625; //default = 51625
				springDamperRate=8920; //default = 8920		
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=3500;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=3500;
			};
		};
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
		};
		soundGetOut[]=
		{
		};
		soundDammage[]=
		{
		};
		soundEngineOnInt[]=
		{
		};
		soundEngineOnExt[]=
		{
		};
		soundEngineOffInt[]=
		{
		};
		soundEngineOffExt[]=
		{
		};
		buildCrash0[]=
		{
		};
		buildCrash1[]=
		{
		};
		buildCrash2[]=
		{
		};
		buildCrash3[]=
		{
		};
		soundBuildingCrash[]=
		{
		};
		WoodCrash0[]=
		{
		};
		WoodCrash1[]=
		{
		};
		WoodCrash2[]=
		{
		};
		WoodCrash3[]=
		{
		};
		WoodCrash4[]=
		{
		};
		WoodCrash5[]=
		{
		};
		soundWoodCrash[]=
		{
		};
		ArmorCrash0[]=
		{
		};
		ArmorCrash1[]=
		{
		};
		ArmorCrash2[]=
		{
		};
		ArmorCrash3[]=
		{
		};
		soundArmorCrash[]=
		{
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume="engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume="engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
				};
				frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume="engineOn*camPos*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume="engineOn*camPos*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume="engineOn*camPos*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
				};
				frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class Idle_int
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine_int
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
				};
				frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
				};
				frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class Turrets: Turrets
		{
		};
 		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor=0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.1;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.1;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.38;
			};
			class HitLBWheel: HitLF2Wheel
			{
				armor=0.38;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.38;
			};
			class HitRBWheel: HitRF2Wheel
			{
				armor=0.38;
			};
			class HitFuel
			{
				armor=1.4;
				material=-1;
				name="palivo";
				visual="";
				passThrough=1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
			};
		};
		class Reflectors
		{
		};
		aggregateReflectors[]=
		{
		};
		class RenderTargets //PIP
		{
		};
	};
	class APOBS_veh_Rocket: APOBS_veh_Rocket_base
	{
		side=1;
		scope=2;
		model="\EODS_APOBS\Fake_APOBS_Rocket_alternative.p3d";
		faction = "BLU_F";
		vehicleClass = "EODS_ied_class";
		displayname = "APOBS_veh_Rocket";
		_generalMacro = "APOBS_veh_Rocket";
		hasGunner = 0;
		transportSoldier=0;
		cargoAction[] = 
		{
		};
		threat[]={0,0,0};
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "pedal_thrust";
		armor=120;
		damageResistance=0.030990001;
		Picture = ""; 
		icon = "";
		//attendant=1; //this is the basic can heal variable from a3
		/*class Eventhandlers
		{
		};*/
		class Library
		{
			libTextDesc = "APOBS_veh_Rocket";
		};
		class Turrets: Turrets
		{
		};
		class AnimationSources: AnimationSources
		{
		};
		class UserActions
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
			};
		};
		HiddenSelections[] =
		{
		};
		HiddenSelectionsTextures[] = 
		{
		};
	};
	class EODS_StaticWeapon: LandVehicle
	{
		vehicleClass="Static";
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		selectionClan="clan";
		selectionDashboard="podsvit pristroju";
		selectionShowDamage="poskozeni";
		selectionBackLights="light_back";
		bounding="usti hlavne";
		alphaTracks=0.69999999;
		textureTrackWheel=0;
		selectionLeftOffset="";
		selectionRightOffset="";
		memoryPointTrack1L="";
		memoryPointTrack1R="";
		memoryPointTrack2L="";
		memoryPointTrack2R="";
		tracksSpeed=1;
		unitInfoType="RscUnitInfoSoldier";
		waterLeakiness=100;
		selectionFireAnim="";
		fireDustEffect="FDustEffects";
		class DestructionEffects
		{
		};
		memoryPointMissile[]=
		{
			"spice rakety",
			"usti hlavne"
		};
		memoryPointMissileDir[]=
		{
			"konec rakety",
			"konec hlavne"
		};
		memoryPointCargoLight="cargo light";
		gunnerCanSee="2+8+32+4";
		gunnerHasFlares=1;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				selectionFireAnim="";
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				memoryPointGun="usti hlavne";
				outGunnerMayFire=1;
				optics=1;
				minTurn=-40;
				maxTurn=40;
				initTurn=0;
				minElev=-7;
				maxElev=70;
				initElev=0;
				castGunnerShadow=1;
				ejectDeadGunner=0;
				canEject=0;
				gunnerGetInAction="";
				gunnerGetOutAction="";
				gunnerForceOptics=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
					minMoveX=0;
					maxMoveX=0;
					minMoveY=0;
					maxMoveY=0;
					minMoveZ=0;
					maxMoveZ=0;
				};
			};
		};
		damperSize=1.4;
		damperForce=0.80000001;
		gearBox[]={-1,0,1};
		attenuationEffectType="OpenCarAttenuation";
		soundEnviron[]=
		{
			"",
			1,
			0.69999999
		};
		soundEngine[]=
		{
			"",
			10,
			1
		};
		soundCrash[]=
		{
			"",
			0.56234133,
			1
		};
		soundGear[]=
		{
			"",
			0.00031622776,
			1
		};
		soundDammage[]=
		{
			"",
			0.0099999998,
			1
		};
		getInAction="";
		getOutAction="";
		cargoGetInAction[]={};
		cargoGetOutAction[]={};
		class Wounds
		{
			tex[]={};
			mat[]={};
		};
		mapSize=2.55;
		getInRadius=3.5;
		fuelCapacity=0;
		irScanRangeMin=500;
		irScanRangeMax=4000;
		irScanToEyeFactor=1;
		irTarget=0;
		laserTarget=0;
		armorStructural=1;
		armor=24;
		class HitPoints
		{
			class HitEngine
			{
				armor=0.80000001;
				material=-1;
				name="motor";
				passThrough=1;
			};
			class HitHull
			{
				armor=1;
				material=-1;
				name="telo";
				passThrough=1;
			};
			class HitTurret
			{
				armor=0.80000001;
				material=-1;
				name="vez";
				passThrough=1;
			};
			class HitGun
			{
				armor=0.60000002;
				material=-1;
				name="otochlaven";
				passThrough=1;
			};
			class HitLTrack
			{
				armor=0.60000002;
				material=-1;
				name="pas_L";
				passThrough=1;
			};
			class HitRTrack
			{
				armor=0.60000002;
				material=-1;
				name="pas_P";
				passThrough=1;
			};
			class HitBody
			{
				armor=1;
				material=-1;
				name="Spine";
				visual="zbytek";
				passThrough=1;
			};
		};
		extCameraPosition[]={0,1.5,-9};
		class ViewPilot: ViewPilot
		{
			initAngleX=7;
			minAngleX=-15;
			maxAngleX=25;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
		};
		cost=10000;
		steerAheadSimul=0.40000001;
		steerAheadPlan=0.60000002;
		predictTurnSimul=1.2;
		predictTurnPlan=1.8;
		ejectDeadDriver=1;
		ejectDeadCargo=1;
		hasDriver=0;
		nightVision=1;
		driverAction="ManActCargo";
		driverInAction="ManActCargo";
		memoryPointsGetInCargo="pos_cargo";
		memoryPointsGetInCargoDir="pos_cargo_dir";
		simulation="tankX";
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		formationX=20;
		formationZ=30;
		precision=1;
		brakeDistance=0;
		turnCoef=0;
		maxSpeed=0;
		canFloat=0;
		weapons[]=
		{
			"APOBS_Charge"
		};
		magazines[]=
		{
			"1Rnd_APOBS_Charge"
		};
		type=1;
		threat[]={0.69999999,1,0.30000001};
		camouflage=1;
		audible=0;
		hideProxyInCombat=0;
		driverOpticsColor[]={0,0,0,1};
		class CargoLight
		{
			color[]={0,0,0,0};
			ambient[]={0.60000002,0,0.15000001,1};
			brightness=0.0070000002;
		};
		transportMaxMagazines=0;
		transportMaxWeapons=0;
		class Reflectors
		{
		};
		secondaryExplosion=0;
		class UserActions
		{
			class PressXToFlipTheThing
			{
				displayNameDefault="$STR_A3_StaticWeapon_UserActions_PressXToFlipTheThing0";
				displayName="$STR_A3_StaticWeapon_UserActions_PressXToFlipTheThing0";
				position="";
				radius=2.7;
				onlyForPlayer=1;
				condition="alive this AND not canmove this AND count crew this == 0";
				statement="this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+1]";
			};
		};
	};
	class EODS_StaticCannon: EODS_StaticWeapon
	{
		displayName="EODS_StaticCannon";
		accuracy=0.12;
		cost=100000;
		threat[]={0.80000001,0.80000001,0};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				gunnerForceOptics=0;
			};
		};
		icon="\EODS_APOBS\UI\Ico_Apobs_Armed_ca.paa";
		class Eventhandlers
		{
			fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class APOBS_base: EODS_StaticCannon
	{
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_base";
		scope=0;
		displayName="APOBS";
		class Armory
		{
			description="APOBS MANPACK";
		};
		model="\EODS_APOBS\APOBS_Open.p3d";
		picture="\EODS_APOBS\UI\Ico_Apobs_Armed_ca.paa";
		UiPicture="\EODS_APOBS\UI\Ico_Apobs_Armed_ca.paa";
		threat[]={1,0.30000001,0.30000001};
		cost=150000;
		cargoAction[]=
		{
			"Mortar_Gunner"
		};
		getInAction="GetInMortar";
		getOutAction="GetOutLow";
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode=1;
				initCamElev=0;
				minCamElev=-35;
				maxCamElev=35;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				cameraDir="look";
				discreteDistanceCameraPoint[]=
				{
					"VIEWGUN"
				};
				turretInfoType="RscWeaponEmpty";
				discreteDistance[]={100,200,300};
				discreteDistanceInitIndex=2;
				gunnerForceOptics=0;
				memoryPointGunnerOptics="VIEWGUN";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				weapons[]=
				{
					"APOBS_Charge"
				};
				magazines[]=
				{
					"1Rnd_APOBS_Charge"
				};
				gunnerAction="Mortar_Gunner";
				gunnergetInAction="GetinLow";
				gunnergetOutAction="GetOutLow";
				displayName="Base";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.117;
					minFov=0.028999999;
					maxFov=0.117;
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={0,1};
				};
				gunnerRightHandAnimName="OtocHlaven_shake";
				gunnerLeftHandAnimName="OtocHlaven_shake";
			};
		};
		class Eventhandlers
		{
		};
		class AnimationSources
		{
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.001,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			5
		};
	};
	class APOBS: APOBS_base
	{
		author="MrEwok & Monovdd";
		_generalMacro="APOBS";
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		class Eventhandlers
		{
			init="_ok = _this execVM '\EODS_APOBS\Scripts\Init.sqf'";
			fired="_ok = _this execVM '\EODS_APOBS\Scripts\GetTurretDir.sqf'";
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"APOBS_A",
				"APOBS_B"
			};
			displayName="";
		};
	};
	class Bag_Base;
	class EODS_Base_Weapon_Bag_Base: Bag_Base
	{
		author="MrEwok & Monovdd";
		_generalMacro="EODS_Base_Weapon_Bag_Base";
		model="\EODS_APOBS\Backpack\APOBS_A.p3d";
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";
		icon="iconBackpack";
		maximumLoad=0;
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
	};
	class EODS_Weapon_Bag_Base: Bag_Base
	{
		author="MrEwok & Monovdd";
		_generalMacro="EODS_Weapon_Bag_Base";
		model="\EODS_APOBS\Backpack\APOBS_A.p3d";
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";
		icon="iconBackpack";
		maximumLoad=0;
		class assembleInfo
		{
			primary=1;
			base="APOBS_B";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
	};
	class APOBS_A: EODS_Weapon_Bag_Base
	{
		author="MrEwok & Monovdd";
		model="\EODS_APOBS\Backpack\APOBS_A.p3d";
		_generalMacro="APOBS_A";
		scope=2;
		displayName="APOBS RearPack";
		hiddenSelectionsTextures[]={};
		picture="\EODS_APOBS\UI\Pic_Apobs_RearPack_ca.paa";
		faction="BLU_F";
		mass=320;
		class assembleInfo: assembleInfo
		{
			displayName="APOBS";
			assembleTo="APOBS";
			base[]=
			{
				"APOBS_B"
			};
		};
	};
	class APOBS_B: EODS_Base_Weapon_Bag_Base
	{
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_B";
		scope=2;
		hiddenSelectionsTextures[]={};
		picture="\EODS_APOBS\UI\Pic_Apobs_FrontPack_ca.paa";
		displayName="APOBS FrontPack";
		model="\EODS_APOBS\Backpack\APOBS_A.p3d";
		maximumLoad=0;
		mass=180;
		faction="BLU_F";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
	};
	class APOBS_E_B: EODS_Base_Weapon_Bag_Base
	{
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_E_B";
		scope=1;
		hiddenSelectionsTextures[]={};
		picture="\EODS_APOBS\UI\Pic_Apobs_EmptyPack_ca.paa";
		displayName="APOBS Empty RearPack";
		model="\EODS_APOBS\Backpack\APOBS_A.p3d";
		maximumLoad=0;
		mass=180;
		faction="BLU_F";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
	};
	class APOBS_E_W: EODS_Weapon_Bag_Base
	{
		author="MrEwok & Monovdd";
		model="\EODS_APOBS\Backpack\APOBS_A.p3d";
		_generalMacro="APOBS_E_W";
		scope=1;
		displayName="APOBS Empty Frontpack";
		hiddenSelectionsTextures[]={};
		picture="\EODS_APOBS\UI\Pic_Apobs_EmptyPack_ca.paa";
		faction="BLU_F";
		mass=320;
		class assembleInfo: assembleInfo
		{
			displayName="APOBS_EMPTY";
			assembleTo="APOBS_Empty";
			base[]=
			{
				"APOBS_E_B"
			};
		};
	};
	class APOBS_Empty_Base: EODS_StaticWeapon
	{
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_Empty_Base";
		scope=1;
		model="\EODS_APOBS\APOBS_Open_Empty.p3d";
	};
	class APOBS_Empty: APOBS_Empty_Base
	{
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_Empty";
		displayName="APOBS EMPTY";
		scope=1;
		cargoAction[]=
		{
			"Mortar_Gunner"
		};
		getInAction="GetInMortar";
		getOutAction="GetOutLow";
		class Eventhandlers
		{
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"APOBS_E_B",
				"APOBS_E_W"
			};
			displayName="";
		};
		class Armory
		{
			disabled=1;
		};
	};
	class APOBS_Fired: APOBS_Empty_Base
	{
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_Empty";
		displayName="APOBS EMPTY";
		scope=1;
		model="\EODS_APOBS\APOBS_Open_fired.p3d";
		cargoAction[]=
		{
			"Mortar_Gunner"
		};
		getInAction="GetInMortar";
		getOutAction="GetOutLow";
		class Eventhandlers
		{
		};
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"APOBS_E_B",
				"APOBS_E_W"
			};
			displayName="";
		};
		class Armory
		{
			disabled=1;
		};
	};
	class ThingX;
	class APOBS_Alternative_Rocket_base: ThingX
	{
		mapSize=1;
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_Alternative_Rocket_base";
		scope=0;
		displayName="";
		model="\A3\Weapons_F\empty.p3d";
		icon="iconObject";
		vehicleClass="EODS_ied_class";
		destrType="DestructNo";
		cost=100;
	};
	class APOBS_Alternative_Rocket: APOBS_Alternative_Rocket_base
	{
		mapSize=1;
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_Alternative_Rocket";
		scope=1;
		displayName="";
		model="\EODS_APOBS\Fake_APOBS_Rocket_alternative.p3d";
		icon="iconObject";
		vehicleClass="EODS_ied_class";
		destrType="DestructNo";
		cost=100;
	};
	class APOBS_Charge_Script_Base: ThingX
	{
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_Charge_Script_Base";
		scope=1;
		model="\EODS_APOBS\APOBS_Charge_Script.p3d";
	};
	class APOBS_Charge_Script: APOBS_Charge_Script_Base
	{
		author="MrEwok & Monovdd";
		_generalMacro="APOBS_Charge_Script";
		scope=1;
		side=1;
		cargoAction[]={};
		getInAction="";
		getOutAction="";
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_APOBS\Scripts\hide.sqf'";
		};
		class Armory
		{
			disabled=1;
		};
	};
};
