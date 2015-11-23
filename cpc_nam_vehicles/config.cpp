class CfgPatches
{
	class cpc_nam_vehicles
	{
		units[] = 
		{
			"CPC_nam_heli_UH1D",
			"CPC_nam_heli_UH1H_cargo",
			"CPC_nam_heli_UH1H_search",
			"CPC_nam_heli_UH1H_lmg",
			"CPC_nam_heli_UH1H_medevac",
			"CPC_nam_heli_UH1H_rocket",
			"CPC_nam_heli_UH1H_xm16",
			"CPC_nam_heli_UH1H_xm21",
			"CPC_nam_heli_UH1N_gunship",
			"CPC_nam_heli_UH1N_cargo",
			"CPC_nam_armor_M113",
			"CPC_nam_armor_M113_med",
			"CPC_nam_armor_M113_2"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"GR_Medium_Utility_Helicopters","cpc_nam_units","CUP_TrackedVehicles_M113"};
	};
};



#include "CfgVehicles.hpp"