class CfgPatches
{

	class A3_Adapt
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"Extended_EventHandlers"};

	};
};
class CfgMusic
{
	
	//class Track_Name
	//{
	////name = "Track Name (Best left in Comment mode)";
	//sound[] = {"z\MET\addons\adaptivecombatmusic\trackname.ogg",1.0,1.0};
	//duration=length of audio in seconds;
	//parameters[]    = {"parameter"}; 
	//};
	//
	//here are the list of parameters that can be used to create arrays
	
	//-- for infantry --
	//during daylight "daytime"
	//during night "nighttime"
	//during rain "rain"
	//during fog "fog"
	//during skydive "skydive"
	//during scuba diving "scubadive"
	

	//-- for vehicles --
	//for cars "car"
	//for tanks "tank"
	//for boats "boat"
	//for submarines "submarine"
	//for helicopters "helicopter"
	//for planes "plane"

	//-- for combat -- might do more
	//for infantry combat "infantrycombat"
	//for fog infantry combat "infantryfogcombat"
	//for get away or vehicle combat "vehiclecombat"

	class AdvanceOnTheCity
	{
		//name = "Advance On The City";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ADVANCE_ON_THE_CITY.ogg",1.0,1.0};
		duration = 208;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ANHImperialAttack2
	{
		//name = "ANH Imperial Attack 2";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ANH_IMPERIAL_ATTACK_2.ogg",1.0,1.0};
		duration = 102;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ANHMilleniumFalcon
	{
		//name = "ANH Millenium Falcon";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ANH_MILLENIUM_FALCON.ogg",1.0,1.0};
		duration = 109;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ANHTalesOfAJediKnight
	{
		//name = "ANH Tales Of A Jedi Knight";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ANH_TALES_OF_A_JEDI_KNIGHT.ogg",1.0,1.0};
		duration = 249;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ANHTheTractorBeam
	{
		//name = "ANH The Tractor Beam";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ANH_THE_TRACTOR_BEAM.ogg",1.0,1.0};
		duration = 121;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"nighttime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class AOTCAmbushOnCoruscant
	{
		//name = "AOTC Ambush On Coruscant";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\AOTC_AMBUSH_ON_CORUSCANT.ogg",1.0,1.0};
		duration = 141;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class AttackingTheBlockade
	{
		//name = "Attacking The Blockade";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ATTACKING_THE_BLOCKADE.ogg",1.0,1.0};
		duration = 194;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class BATTLE_PENDING_1
	{
		//name = "BATTLE PENDING 1";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\BATTLE_PENDING_1.ogg",1.0,1.0};
		duration = 25;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class BEGINNING_THE_APPROACH
	{
		//name = "BEGINNING THE APPROACH";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\BEGINNING_THE_APPROACH.ogg",1.0,1.0};
		duration = 158;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class BOARDING_THE_FEDERATION_BATTLESHIP
	{
		//name = "BOARDING THE FEDERATION BATTLESHIP";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\BOARDING_THE_FEDERATION_BATTLESHIP.ogg",1.0,1.0};
		duration = 151;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class CANTINA_1
	{
		//name = "CANTINA 1";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\CANTINA_1.ogg",1.0,1.0};
		duration = 168;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_trivial"
		};

	};

	class CANTINA_2
	{
		//name = "CANTINA 2";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\CANTINA_2.ogg",1.0,1.0};
		duration = 230;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_trivial"
		};

	};

	class COMPLETE_DEATH_STAR
	{
		//name = "COMPLETE DEATH STAR";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\COMPLETE_DEATH_STAR.ogg",1.0,1.0};
		duration = 9;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class CREDITS_2A
	{
		//name = "CREDITS 2A";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\CREDITS_2A.ogg",1.0,1.0};
		duration = 170;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class CREDITS_EP3
	{
		//name = "CREDITS EP3";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\CREDITS_EP3.ogg",1.0,1.0};
		duration = 381;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class DEATH_STAR_STORMTROOPERS
	{
		//name = "DEATH STAR STORMTROOPERS";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\DEATH_STAR_STORMTROOPERS.ogg",1.0,1.0};
		duration = 214;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class DESTRUCTION_OF_ALDERAAN
	{
		//name = "DESTRUCTION OF ALDERAAN";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\DESTRUCTION_OF_ALDERAAN.ogg",1.0,1.0};
		duration = 19;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class DS_INTO_THE_TRAP
	{
		//name = "DS INTO THE TRAP";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\DS_INTO_THE_TRAP.ogg",1.0,1.0};
		duration = 149;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class DS_THE_BATTLE_OF_YAVIN
	{
		//name = "DS THE BATTLE OF YAVIN";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\DS_THE_BATTLE_OF_YAVIN.ogg",1.0,1.0};
		duration = 421;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_ATTACK_OF_THE_SANDPEOPLE
	{
		//name = "E ATTACK OF THE SANDPEOPLE";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_ATTACK_OF_THE_SANDPEOPLE.ogg",1.0,1.0};
		duration = 98;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_BATTLE_IN_THE_SWAMPS
	{
		//name = "E BATTLE IN THE SWAMPS";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_BATTLE_IN_THE_SWAMPS.ogg",1.0,1.0};
		duration = 119;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_BINARY_SUNSET_ALTERNATE
	{
		//name = "E BINARY SUNSET ALTERNATE";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_BINARY_SUNSET_ALTERNATE.ogg",1.0,1.0};
		duration = 138;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"fog",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_DEN_OF_THE_RANCOR
	{
		//name = "E DEN OF THE RANCOR";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_DEN_OF_THE_RANCOR.ogg",1.0,1.0};
		duration = 221;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_SCOUT_WALKER_SCRAMBLE_1
	{
		//name = "E SCOUT WALKER SCRAMBLE 1";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_SCOUT_WALKER_SCRAMBLE_1.ogg",1.0,1.0};
		duration = 130;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_THE_BATTLE_OF_HOTH_2
	{
		//name = "E BATTLE OF HOTH 2";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_THE_BATTLE_OF_HOTH_2.ogg",1.0,1.0};
		duration = 210;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_THE_DROID_INVASION
	{
		//name = "E THE DROID INVASION";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_THE_DROID_INVASION.ogg",1.0,1.0};
		duration = 60;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_THE_GUNGANS_RETREAT
	{
		//name = "E THE GUNGANS RETREAT";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_THE_GUNGANS_RETREAT.ogg",1.0,1.0};
		duration = 138;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_THE_SENATE
	{
		//name = "E THE SENATE";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_THE_SENATE.ogg",1.0,1.0};
		duration = 72;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_THE_TRASH_COMPACTOR
	{
		//name = "E THE TRASH COMPACTOR";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_THE_TRASH_COMPACTOR.ogg",1.0,1.0};
		duration = 186;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"nighttime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_VOLCANIC_ASSAULT
	{
		//name = "E VOLCANIC ASSAULT";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_VOLCANIC_ASSAULT.ogg",1.0,1.0};
		duration = 176;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_WAMPAS_LAIR
	{
		//name = "E WAMPAS LAIR";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_WAMPAS_LAIR.ogg",1.0,1.0};
		duration = 96;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class E_WOOKIEE_PRISONER
	{
		//name = "E WOOKIEE PRISONER";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\E_WOOKIEE_PRISONER.ogg",1.0,1.0};
		duration = 86;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class EMPIRE_AT_WAR
	{
		//name = "EMPIRE AT WAR";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\EMPIRE_AT_WAR.ogg",1.0,1.0};
		duration = 125;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class EMPIRE_INTRO_3_MIX
	{
		//name = "EMPIRE INTRO 3 MIX";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\EMPIRE_INTRO_3_MIX.ogg",1.0,1.0};
		duration = 213;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class EMPIRE_LOSE_1
	{
		//name = "EMPIRE LOSE 1";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\EMPIRE_LOSE_1.ogg",1.0,1.0};
		duration = 10;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ESB_THE_IMPERIAL_PROBE
	{
		//name = "ESB THE IMPERIAL PROBE";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ESB_THE_IMPERIAL_PROBE.ogg",1.0,1.0};
		duration = 264;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ESCAPE_FROM_NABOO
	{
		//name = "ESB THE IMPERIAL PROBE";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ESCAPE_FROM_NABOO.ogg",1.0,1.0};
		duration = 107;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class FIGHTING_THE_DESTROYER_DROIDS
	{
		//name = "FIGHTING THE DESTROYER DROIDS";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\FIGHTING_THE_DESTROYER_DROIDS.ogg",1.0,1.0};
		duration = 76;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class HUTT_PALACE_JEDI_ROCKS
	{
		//name = "HUTT PALACE JEDI ROCKS";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\HUTT_PALACE_JEDI_ROCKS.ogg",1.0,1.0};
		duration = 164;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_trivial"
		};

	};

	class HUTT_PALACE_LAPTI_NEK
	{
		//name = "HUTT PALACE LAPTI NEK";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\HUTT_PALACE_LAPTI_NEK.ogg",1.0,1.0};
		duration = 172;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_trivial"
		};

	};

	class IMPERIAL_ATTACK_1
	{
		//name = "IMPERIAL ATTACK 1";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\IMPERIAL_ATTACK_1.ogg",1.0,1.0};
		duration = 63;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class IMPERIAL_CRUISER_PURSUIT
	{
		//name = "IMPERIAL CRUISER PURSUIT";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\IMPERIAL_CRUISER_PURSUIT.ogg",1.0,1.0};
		duration = 95;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class IMPERIAL_MARCH
	{
		//name = "IMPERIAL MARCH";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\IMPERIAL_MARCH.ogg",1.0,1.0};
		duration = 180;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class IMPERIAL_MARCH_EDIT
	{
		//name = "IMPERIAL MARCH EDIT";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\IMPERIAL_MARCH_EDIT.ogg",1.0,1.0};
		duration = 71;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_ANAKIN_AND_GROUP_TO_CORUSCANT
	{
		//name = "R ANAKIN AND GROUP TO CORUSCANT";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_ANAKIN_AND_GROUP_TO_CORUSCANT.ogg",1.0,1.0};
		duration = 65;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"nighttime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_ANAKIN_DEFEATS_SEBULBA
	{
		//name = "R ANAKIN DEFEATS SEBULBA";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_ANAKIN_DEFEATS_SEBULBA.ogg",1.0,1.0};
		duration = 137;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_DIANOGA
	{
		//name = "R DIANOGA";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_DIANOGA.ogg",1.0,1.0};
		duration = 93;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_FOREST_AMBUSH
	{
		//name = "R FOREST AMBUSH";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_FOREST_AMBUSH.ogg",1.0,1.0};
		duration = 67;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_JAR_JAR_LEADS_GROUP
	{
		//name = "R JAR JAR LEADS GROUP";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_JAR_JAR_LEADS_GROUP.ogg",1.0,1.0};
		duration = 61;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_QUEEN_AMIDALA_WARNS_FEDERATION
	{
		//name = "R QUEEN AMIDALA WARNS FEDERATION";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_QUEEN_AMIDALA_WARNS_FEDERATION.ogg",1.0,1.0};
		duration = 143;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_SAIL_BARGE_ASSAULT
	{
		//name = "R SAIL BARGE ASSAULT";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_SAIL_BARGE_ASSAULT.ogg",1.0,1.0};
		duration = 268;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_SAIL_BARGE_ASSAULT_ALTERNATE
	{
		//name = "R SAIL BARGE ASSAULT ALTERNATE";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_SAIL_BARGE_ASSAULT_ALTERNATE.ogg",1.0,1.0};
		duration = 204;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_SCOUT_WALKER_SCRAMBLE_2
	{
		//name = "R SCOUT WALKER SCRAMBLE 2";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_SCOUT_WALKER_SCRAMBLE_2.ogg",1.0,1.0};
		duration = 167;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_THE_BATTLE_OF_HOTH
	{
		//name = "R THE BATTLE OF HOTH";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_THE_BATTLE_OF_HOTH.ogg",1.0,1.0};
		duration = 193;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_THE_BATTLE_RAGES_ON
	{
		//name = "R THE BATTLE RAGES ON";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_THE_BATTLE_RAGES_ON.ogg",1.0,1.0};
		duration = 119;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_THE_CHASE_THROUGH_CORUSCANT_1
	{
		//name = "R THE CHASE THROUGH CORUSCANT 1";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_THE_CHASE_THROUGH_CORUSCANT_1.ogg",1.0,1.0};
		duration = 173;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_THE_DUNE_SEA_OF_TATOOINE
	{
		//name = "R THE DUNE SEA OF TATOOINE";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_THE_DUNE_SEA_OF_TATOOINE.ogg",1.0,1.0};
		duration = 57;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_THE_EWOK_BATTLE
	{
		//name = "R THE EWOK BATTLE";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_THE_EWOK_BATTLE.ogg",1.0,1.0};
		duration = 57;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class R_THE_ICE_PLANET_HOTH
	{
		//name = "R THE ICE PLANET HOTH";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\R_THE_ICE_PLANET_HOTH.ogg",1.0,1.0};
		duration = 67;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class REBEL_INTRO_1_MIX
	{
		//name = "REBEL INTRO 1 MIX";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\REBEL_INTRO_1_MIX.ogg",1.0,1.0};
		duration = 162;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class REBEL_LOSE_1
	{
		//name = "REBEL LOSE 1";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\REBEL_LOSE_1.ogg",1.0,1.0};
		duration = 18;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class REBEL_VICTORY
	{
		//name = "REBEL VICTORY";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\REBEL_VICTORY.ogg",1.0,1.0};
		duration = 83;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class REBELLION_ADVANTAGE
	{
		//name = "REBELLION ADVANTAGE";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\REBELLION_ADVANTAGE.ogg",1.0,1.0};
		duration = 208;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ROTJ_ALLIANCE_ASSEMBLY
	{
		//name = "ROTJ ALLIANCE ASSEMBLY";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ROTJ_ALLIANCE_ASSEMBLY.ogg",1.0,1.0};
		duration = 130;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ROTJ_APPROACHING_THE_DEATH_STAR
	{
		//name = "ROTJ APPROACHING THE DEATH STAR";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ROTJ_APPROACHING_THE_DEATH_STAR.ogg",1.0,1.0};
		duration = 252;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ROTJ_EMPERORS_THRONE_ROOM
	{
		//name = "ROTJ EMPERORS THRONE ROOM";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ROTJ_EMPERORS_THRONE_ROOM.ogg",1.0,1.0};
		duration = 205;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class ROTJ_SHUTTLE_TYDIRIUM_APPRACHES_ENDOR
	{
		//name = "ROTJ SHUTTLE TYDIRIUM APPRACHES ENDOR";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\ROTJ_SHUTTLE_TYDIRIUM_APPRACHES_ENDOR.ogg",1.0,1.0};
		duration = 246;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"daytime",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class SPACE_PURSUIT
	{
		//name = "SPACE PURSUIT";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\SPACE_PURSUIT.ogg",1.0,1.0};
		duration = 24;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class TEST_LOOP_SONG
	{
		//name = "TEST LOOP SONG";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\TEST_LOOP_SONG.ogg",1.0,1.0};
		duration = 103;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class THE_ASTEROID_FIELD
	{
		//name = "TEST ASTEROID FIELD";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\THE_ASTEROID_FIELD.ogg",1.0,1.0};
		duration = 255;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class TIE_FIGHTER_ATTACK
	{
		//name = "TEST ASTEROID FIELD";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\TIE_FIGHTER_ATTACK.ogg",1.0,1.0};
		duration = 96;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"infantrycombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class VADERS_PRESENCE
	{
		//name = "TEST ASTEROID FIELD";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\starwars\VADERS_PRESENCE.ogg",1.0,1.0};
		duration = 183;
		//parameters[] = {"daytime", "nighttime", "rain", "fog", "skydive", "scubadive"}; 
		parameters[] = 
		{
			"fogcombat",

			"theme_starwars",

			"difficulty_normal"
		};

	};

	class Track2
	{
		//name = "Track2";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\track2.ogg",1.0,1.0};
		duration = 0;
		parameters[] = {"car", "tank", "boat", "submarine", "helicopter", "plane"}; 

	};

	class Track3
	{
		//name = "Track3";
		sound[] = {"z\MET\addons\adaptivecombatmusic\music\track3.ogg",1.0,1.0};
		duration = 0;
		parameters[] = {"infantryfogcombat", "vehiclecombat", "infantrycombat"}; 

	};


};

//Script fire offs
class Extended_PostInit_EventHandlers
{
	class Adapt_Macleod
	{
		clientInit="[] execVM ""z\MET\addons\adaptivecombatmusic\init.sqf""";
	};
};
class Extended_PreInit_EventHandlers
{
	class Adapt_Macleod
	{
		clientInit="call compilescript [""z\MET\addons\adaptivecombatmusic\CBAsetting.sqf""]";
	};
};