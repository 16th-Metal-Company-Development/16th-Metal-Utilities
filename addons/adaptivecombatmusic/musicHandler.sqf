//Arma 3 Music Script
//Original script made by Niklas Brettschneider
//Music detection and script fixes made by Cheif22
//Other fixes and additions made by Phenosi

//The Playset lines below are where the music classnames will go. Enter 

// Get the theme and difficulty selected by the player
_selectedTheme = "theme_" + A3_Adapt_Theme;
_selectedDifficulty = "difficulty_" + A3_Adapt_Difficulty;

//---------------------- As infantry soldier (Non-combat)---------------------------

//Daytime peace tracks
_dayTracks = "('daytime' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");
//_dayTracks = "'daytime' in getArray(_x >> 'parameters')" configClasses (configFile >> "CfgMusic");

//night tracks
_nightTracks = "('nighttime' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//These tracks will play when player encounters medium to heavy rain.
_rainTracks = "('rain' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//These tracks will play when player enters fog area.
_fogTracks = "('fog' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//These tracks will play when Skydiving over 100 meters in the air above any surface. it will auto transition when you enter parachute and land. (Parachutes are using the helicopter music set for now)
_fallTracks = "('skydive' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//These tracks will play when player goes below five meters under water.
_scubaTracks = "('scubadive' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//---------------------- In vehicle (Non-combat) --------------------------

//Tracks that play when player enters a car. APCs are apparently cars in arma
_carTracks = "('car' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//Tank tracks that play in no combat. Artilary tanks apply to this.
_tankTracks = "('tank' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//Tracks that play when player is in a boat / submarine when on the surface of the water.
_boatTracks = "('boat' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//Tracks that play when Submarine reaches below 5 meters below the water line.
_subtracks = "('submarine' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//Tracks that play when you are in a helicopter. Parachutes are apparently helicopters in arma, Working on this.
_heliTracks = "('helicopter' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//Tracks that play when you are in a plane type aircraft.
_planeTracks = "('plane' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

//---------------------- Combat Playsets ---------------------------------

//night or day combat
_infantrycombatTracks = "('infantrycombat' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");
 
//infantry fog combat
_infantryfogcombatTracks = "('infantryfogcombat' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");
 
//These tracks are when you are under attack in a vehicle. If you are not under attack, it will then follow back to your vehicle's corosponding playset.
_vehiclecombatTracks = "('vehiclecombat' in getArray(_x >> 'parameters')) && ('" + _selectedTheme + "' in getArray(_x >> 'parameters')) && ('" + _selectedDifficulty + "' in getArray(_x >> 'parameters'))" configClasses (configFile >> "CfgMusic");

 
//Everything below the line is the main guts that control the mod. If you want to test some different ideas or make edits, I am not responsible
//for it breaking.
//-------------------------------------------------------------------------------------

//change out of car. Best to leave this alone.
_CarTransition = ["Empty"];

// Global variable initialization - declared here so musicPlayer.sqf can always access them
isMusicActive = 1;
duration = 0;
debugging = 0;
durationSinceTrackWasStarted = 0;
wasInCarBefore = 0;
currentMusicState = "save";
isMusicCurrentlyPlaying = 0;
VehicleIamIn = -1;
currentTrack = "";
battleIntensity = 0;
maxBattleIntensity = 60;
battleIntensityLowerer = -0.25;
isDay = 1;
Volume = 0.5;

execVM "z\MET\addons\adaptivecombatmusic\addEventHandlerForMusic.sqf";

if (isMultiplayer) then
{

//Every second
while{true} do
{//Main Loop
	if(isMusicActive == 1) then
	{
		//Check if day or night
		if(dayTime > 19 || dayTime < 6) then
		{
			isDay = 0;
			volume = 0.2;
		}
		else
		{
			isDay = 1;
			volume = 0.5;
		};
		
		//standart lower Battle intensity
		[battleIntensityLowerer] execVM "z\MET\addons\adaptivecombatmusic\battleIntensityChange.sqf";
		
		null = [_dayTracks, _nightTracks, _rainTracks, _fogTracks, _fallTracks, _scubaTracks, _carTracks, _tankTracks, _boatTracks, _subtracks, _heliTracks, _planeTracks, _infantrycombatTracks, _infantryfogcombatTracks, _vehiclecombatTracks] execVM "z\MET\addons\adaptivecombatmusic\musicPlayer.sqf";
		
	};
	sleep(0.2);
};
}
else
{

//Every second
while{true} do
{//Main Loop
	if(isMusicActive == 1) then
	{
		//Check if day or night
		if(dayTime > 19 || dayTime < 6) then
		{
			isDay = 0;
			volume = 0.2;
		}
		else
		{
			isDay = 1;
			volume = 0.5;
		};
		
		//standart lower Battle intensity
		[battleIntensityLowerer] execVM "z\MET\addons\adaptivecombatmusic\battleIntensityChange.sqf";
		
		null = [_dayTracks, _nightTracks, _rainTracks, _fogTracks, _fallTracks, _scubaTracks, _carTracks, _tankTracks, _boatTracks, _subtracks, _heliTracks, _planeTracks, _infantrycombatTracks, _infantryfogcombatTracks, _vehiclecombatTracks] execVM "z\MET\addons\adaptivecombatmusic\musicPlayer.sqf";
		
	};
	sleep(0.2);
};
};