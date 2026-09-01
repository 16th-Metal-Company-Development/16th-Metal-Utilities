if (tfar_sound_on == false) exitWith {};

["tfar_sound_EH", "OnTangent"] call TFAR_fnc_removeEventHandler;

["tfar_sound_EH", "OnTangent", {
	if (_this select 2 == 0) then {
		if (_this select 4 == true) then {
			if (tfar_type_sound == 1) then {
				playSoundUI ["tfs_sr_on"];
				if (tfar_sound_external == true) then {
					[player, "tfs_sr_on", 3] call CBA_fnc_globalSay3d;
				};
			};
			if (tfar_type_sound == 2) then {
				playSoundUI ["tfs_sr_on_low"];
				if (tfar_sound_external == true) then {
					[player, "tfs_sr_on_low", 3] call CBA_fnc_globalSay3d;
				};
			};
		} else {
			if (tfar_type_sound == 1) then {
				playSoundUI ["tfs_sr_off"];
				if (tfar_sound_external == true) then {
					[player, "tfs_sr_off", 3] call CBA_fnc_globalSay3d;
				};
			};
			if (tfar_type_sound == 2) then {
				playSoundUI ["tfs_sr_off_low"];
				if (tfar_sound_external == true) then {
					[player, "tfs_sr_off_low", 3] call CBA_fnc_globalSay3d;
				};
			};
		};
	};

	if (_this select 2 == 1) then {
		if (_this select 4 == true) then {
			if (tfar_type_sound == 1) then {
				playSoundUI ["tfs_lr_on"];
				if (tfar_sound_external == true) then {
					[player, "tfs_lr_on", 3] call CBA_fnc_globalSay3d;
				};
			};
			if (tfar_type_sound == 2) then {
				playSoundUI ["tfs_lr_on_low"];
				if (tfar_sound_external == true) then {
					[player, "tfs_lr_on_low", 3] call CBA_fnc_globalSay3d;
				};
			};
		} else {
			if (tfar_type_sound == 1) then {
				playSoundUI ["tfs_lr_off"];
				if (tfar_sound_external == true) then {
					[player, "tfs_lr_off", 3] call CBA_fnc_globalSay3d;
				};
			};
			if (tfar_type_sound == 2) then {
				playSoundUI ["tfs_lr_off_low"];
				if (tfar_sound_external == true) then {
					[player, "tfs_lr_off_low", 3] call CBA_fnc_globalSay3d;
				};
			};
		};
	};
}, player] call TFAR_fnc_addEventHandler;

if (!isServer) exitWith {};

addMissionEventHandler ["EntityRespawned", {
	params ["_newEntity", "_oldEntity"];
	if (isPlayer _newEntity) then {
		[{
			["tfar_sound_EH", "OnTangent"] call TFAR_fnc_removeEventHandler;
			["tfar_sound_EH", "OnTangent", {
				if (_this select 2 == 0) then {
					if (_this select 4 == true) then {
						if (tfar_type_sound == 1) then {
							playSoundUI ["tfs_sr_on"];
							if (tfar_sound_external == true) then {
								[player, "tfs_sr_on", 3] call CBA_fnc_globalSay3d;
							};
						};
						if (tfar_type_sound == 2) then {
							playSoundUI ["tfs_sr_on_low"];
							if (tfar_sound_external == true) then {
								[player, "tfs_sr_on_low", 3] call CBA_fnc_globalSay3d;
							};
						};
					} else {
						if (tfar_type_sound == 1) then {
							playSoundUI ["tfs_sr_off"];
							if (tfar_sound_external == true) then {
								[player, "tfs_sr_off", 3] call CBA_fnc_globalSay3d;
							};
						};
						if (tfar_type_sound == 2) then {
							// playSound "tfs_sr_off_low";
							playSoundUI ["tfs_sr_off_low"];
							if (tfar_sound_external == true) then {
								[player, "tfs_sr_off_low", 3] call CBA_fnc_globalSay3d;
							};
						};
					};
				};

				if (_this select 2 == 1) then {
					if (_this select 4 == true) then {
						if (tfar_type_sound == 1) then {
							playSoundUI ["tfs_lr_on"];
							if (tfar_sound_external == true) then {
								[player, "tfs_lr_on", 3] call CBA_fnc_globalSay3d;
							};
						};
						if (tfar_type_sound == 2) then {
							playSoundUI ["tfs_lr_on_low"];
							if (tfar_sound_external == true) then {
								[player, "tfs_lr_on_low", 3] call CBA_fnc_globalSay3d;
							};
						};
					} else {
						if (tfar_type_sound == 1) then {
							playSoundUI ["tfs_lr_off"];
							if (tfar_sound_external == true) then {
								[player, "tfs_lr_off", 3] call CBA_fnc_globalSay3d;
							};
						};
						if (tfar_type_sound == 2) then {
							playSoundUI ["tfs_lr_off_low"];
							if (tfar_sound_external == true) then {
								[player, "tfs_lr_off_low", 3] call CBA_fnc_globalSay3d;
							};
						};
					};
				};
			}, player] call TFAR_fnc_addEventHandler;
		}] remoteExec ["call", _newEntity];
	};
}];