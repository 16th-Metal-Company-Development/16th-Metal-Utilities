class CfgPatches
{
	class MET_Music
	{
		name = "Wolf's Music";
		author = "LCDR Wolf";
		requiredVersion = 1.00;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
      	worlds[] = {};
	};
};
class CfgMusic
{
	#include "FileListWithMusicTracks.hpp"
};
class CfgMusicClasses
{
	class Tron
	{
		displayName = "[16th] Tron";
	};
	class PacificRim
	{
		displayName = "[16th] Pacific Rim";
	};
	class other
	{
		displayName = "[16th] Other";
	};
	class Halo
	{
		displayName = "[16th] Halo";
	};
	class Fallout
	{
		displayName = "[16th] Fallout";
	};
};