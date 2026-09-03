/*
OPTRE_fnc_Radar

Author: Big_Wilk

Description: Draws icons on a map relative to  player at [0,0,0], so when a player turn the map rotates facing the same way they do as do all the icons.
We now use the center instead of [0,0,0].

Command: call 
Return: bool   
Syntax: [ctrl] call ....
Parameters: 
0: ctrl: The GUI control the radar effect will be applied to. 

Demo Mission:
Media:

Example1:
_bool = [_ctrl] call OPTRE_fnc_Radar
Result: Unit Icons drawn on _ctrl 

Example2:
_bool = [((findDisplay 46) displayCtrl 1000)] call OPTRE_fnc_Radar;
Result: Unit Icons drawn on control 1000

MP: Client  
*/

private "_scaleMeters";
disableSerialization;

_ctrl = ( _this select 0 ); 

// Set Map Scale Based On Need
//_ctrl ctrlMapAnimAdd [0, OPTRE_Hud_RadarScale, [0,0,0] ]; // 0.01m on ~50m 

/*
Spartanjackwar's edit:
To fix the Arma 2.06 build border-overlap error, we should pick the center of the map.
Thus, we need to find the map dimensions and use the center since we don't draw it.
*/
//_mapSize = worldSize; This one does recalculating that isn't needed.
_mapSize = worldName call BIS_fnc_mapSize;
_mapAxis = _mapSize / 2;
_mapCenter = [_mapAxis, _mapAxis, 0];
OPTRE_HUD_mapCenter = _mapCenter;
_ctrl ctrlMapAnimAdd [0, OPTRE_Hud_RadarScale, _mapCenter]; // 0.01m on ~50m 
ctrlMapAnimCommit _ctrl;

// Icon Size Of Units on map based on mapscale. 
OPTRE_Hud_UnitSize = (4 * 0.60) * 8 ^(abs log (ctrlMapScale _ctrl)); 

_scale = [] call OPTRE_Fnc_MapScale;
OPTRE_Hud_ScaleMeters = (round (OPTRE_Hud_RadarScale / _scale) * 50);
//OPTRE_Hud_ScaleMetersString = ( OPTRE_Hud_ScaleMeters + "m" ); 

// Check the modes limits have been applyed correclty and are not nil. 
if (isNil "OPTRE_Hud_RadarMode2Allowed") then {OPTRE_Hud_RadarMode2Allowed = 2;};
if (OPTRE_HUd_RadarMode > OPTRE_Hud_RadarMode2Allowed) then {OPTRE_HUd_RadarMode = OPTRE_Hud_RadarMode2Allowed};

// 1 is maps useing targetsQuery 0 from array such as allUnits, units group.. 
if (OPTRE_HUd_RadarMode > 0) then {

	OPTRE_HUD_SideColorEast = if ( OPTRE_HUd_RadarMode == 2 ) then { [0.7,0.5,0,0.5] } else { [0,0,0,0] }; 
	//OPRE_HUD_SideColorWest = 
	
	_ctrl ctrlAddEventHandler ["Draw", {
	
		private ['_colour','_unitIcon','_blip'];
		
		_hCtrl = _this select 0; 
		//_dirPlayer = direction player;
		_dirPlayer = getCameraViewDirection player;
		_dirPlayer = ((_dirPlayer select 0) atan2 (_dirPlayer select 1));
		_dirPlayer = (_dirPlayer + 360) % 360;
		_sidePlayer = side player;

		_playerTeamColour = switch (assignedTeam player) do {
			case "MAIN": {[1,1,1,1]};
			case "RED": {[1,0,0,1]};
			case "GREEN": {[0,1,0,1]};
			case "BLUE": {[0,0,1,1]};
			case "YELLOW": {[1,1,0,1]};
			default {[1,1,1,1]};
		};
		
		_hCtrl drawIcon [
			OPTRE_UnitIcon_Friendly,
			_playerTeamColour,
			OPTRE_HUD_mapCenter, //[0,0,0],
			12,
			12,
			0,
			'',
			1,
			0.04,
			'TahomaB',
			'right'
		];

		{
		
			_blip = _x select 1; 
			_distance = (player distance _blip);
			_blipPos = getPos _blip;	
			
			if (_distance <= OPTRE_Hud_ScaleMeters OR _blipPos select 2 > 20) then {
			
			_blipSide = _x select 2;

			
				//_pos = [[0,0,0], _distance, (([player, _blipPos] call BIS_fnc_dirTo) - _dirPlayer)] call OPTRE_fnc_MathsTriangulatePos;
				_pos = [OPTRE_HUD_mapCenter, _distance, (([player, _blipPos] call BIS_fnc_dirTo) - _dirPlayer)] call OPTRE_fnc_MathsTriangulatePos;
				if ( _blipSide == _sidePlayer ) then {
					_colour = (if (group player == group _blip) then {
						(
							switch (assignedTeam _blip) do {
								case 'MAIN': {[1,1,1,1]};
								case 'RED': {[1,0,0,1]};
								case 'GREEN': {[0,1,0,1]};
								case 'BLUE': {[0,0,1,1]};
								case 'YELLOW': {[1,1,0,1]};
								default {[0,0,1,1]};
							}
						)
					} else {
						[0,0,1,1]
					});
					_unitIcon = if (_blip isKindOf 'man') then { OPTRE_UnitIcon_Friendly } else { (getText (configfile >> 'CfgVehicles' >> (typeOf vehicle _blip) >> 'icon')) };
				} else {
					_colour = OPTRE_HUD_SideColorEast;
					_unitIcon = if (_blip isKindOf 'man') then { OPTRE_UnitIcon_Unknown } else { (getText (configfile >> 'CfgVehicles' >> (typeOf vehicle _blip) >> 'icon')) };
				};
				
				_hCtrl drawIcon [
					_unitIcon,
					_colour,
					_pos,
					OPTRE_Hud_UnitSize,
					OPTRE_Hud_UnitSize,
					((getdir _blip) - _dirPlayer ),
					'',
					1,
					0.03,
					'TahomaB',
					'right'
				];
			
			};
			
		} forEach (player targetsQuery [objNull, sideUnknown, '', [], 0]);
		
	}];

	// https://community.bistudio.com/wiki/targetsQuery

} else {

	_ctrl ctrlAddEventHandler ["Draw", {

		_hCtrl = _this select 0; 
		//_dirPlayer = direction player;
		_dirPlayer = getCameraViewDirection player;
		_dirPlayer = ((_dirPlayer select 0) atan2 (_dirPlayer select 1));
		_dirPlayer = (_dirPlayer + 360) % 360;
		_sidePlayer = side player;
		
		{
		
			private ['_colour','_unitIcon'];
			
			_blip = _x; 
			_blipSide = side _x;
			_blipPos = getPos _blip;
			
			//_pos = [[0,0,0], (player distance _blip), (([player, _blipPos] call BIS_fnc_dirTo) - _dirPlayer)] call OPTRE_fnc_MathsTriangulatePos;
			_pos = [OPTRE_HUD_mapCenter, (player distance _blip), (([player, _blipPos] call BIS_fnc_dirTo) - _dirPlayer)] call OPTRE_fnc_MathsTriangulatePos;
			
			_teamColour = switch (assignedTeam _x) do {
				case "MAIN": {[1,1,1,1]};
				case "RED": {[1,0,0,1]};
				case "GREEN": {[0,1,0,1]};
				case "BLUE": {[0,0,1,1]};
				case "YELLOW": {[1,1,0,1]};
				default {[1,1,1,1]};
			};
			
			_hCtrl drawIcon [
				( if (_blip isKindOf 'man') then { OPTRE_UnitIcon_Friendly } else { (getText (configfile >> 'CfgVehicles' >> (typeOf vehicle _blip) >> 'icon')) } ),
				_teamColour,
				_pos,
				OPTRE_Hud_UnitSize,
				OPTRE_Hud_UnitSize,
				((getdir _blip) - _dirPlayer ),
				'',
				1,
				0.03,
				'TahomaB',
				'right'
			];
			
		} forEach units group player;
		
	}];

};

true