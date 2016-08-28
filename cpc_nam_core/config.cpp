class CfgMods
{
	class Mod_Base;
	class cpc_nam : Mod_Base
	{
		picture = "\cpc_nam_core\data\cpc_nam_logo.paa";
		logo = "\cpc_nam_core\data\cpc_nam_logo.paa";
		logoOver = "\cpc_nam_core\data\cpc_nam_logo.paa";
		logoSmall = "\cpc_nam_core\data\cpc_nam_logo.paa";
		tooltip = "CPC NAM";
		tooltipOwned = "CPC NAM";
		action = "";
		dlcColor[] = {0.23,0.39,0.30,1};
		overview = "These Boots are made for walking.";
		hideName = 1;
		hidePicture = 0;
		name = "CPC NAM";
		dir = "CPC NAM";
	};
};

class CfgPatches
{
	class cpc_nam_core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"uns_main",
			"CSJ_heli",
			"CSJ_UH1Gun_c",
			"uns_A7_c",
			"uns_AH1G_c",
			"uns_ammo_c",
			"uns_armour_c",
			"uns_army",
			"UNS_Backpacks",
			"uns_boats_c",
			"UNS_Headgear",
			"uns_jetpil",
			"uns_m113_c",
			"uns_PBR_c",
			"uns_static_c",
			"uns_uh1d_c",
			"uns_uniforms_base",
			"uns_usmc"
		};
	};
};


#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
