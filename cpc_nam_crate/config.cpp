class CfgPatches
{
	class cpc_nam_crate
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cpc_nam_core","cpc_nam_gear","cpc_nam_weapons","CUP_Weapons_AmmoBoxes"};
	};
};
/*
class Extended_Init_Eventhandlers
{
	class CPC_nam_crate_VA
	{
		CPC_nam_crate_VA_init = "null =[_this] execVM ""cpc_nam_crate\scripts\nam_va_box.sqf"";";
	}
};
*/

#include "CfgVehicles.hpp"
