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
			"CPC_nam_armor_M113_2",
			"CPC_nam_air_A7H"
			/*
			"CPC_nam_static_dshkm_high_vc",
			"CPC_nam_static_dshkm_low_vc"
			*/
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"GR_Medium_Utility_Helicopters","cpc_nam_units","CUP_TrackedVehicles_M113","HAFM_Air"};
	};
};



#include "CfgVehicles.hpp"