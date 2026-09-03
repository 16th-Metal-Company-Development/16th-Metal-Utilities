//Arma 3 Music Script
//Original Script made by Niklas Brettschneider
//Edits and fixes made by Cheif22

//Hier werden die Schüsse in der Nähe des Spielers überwacht und verarbeitet.

_unit = _this select 0; // Object - Object the event handler is assigned to
_selectionName = _this select 1; // String - Name of the selection where the unit was damaged
_damage = _this select 2; // Number - Resulting level of damage 

//hint format ["Shot fired with from %1\nwith Weapon %2\n from distance %3", _firer, _weapon, _distance];

[10, "DamageTaken"] execVM "z\MET\addons\adaptivecombatmusic\battleIntensityChange.sqf";