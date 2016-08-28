class CfgPatches
{
	class cpc_nam_units
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","cpc_nam_core","cpc_nam_weapons","cpc_nam_gear"};
	};
};

class CfgFactionClasses
{
	class CPC_nam_US
	{
		displayName = "Nam US";
		author = "Sparfell";
		icon = "\cpc_nam_units\Data\us_flag_icon.paa";
		priority = 1;
		side = 1;
	};
	class CPC_nam_vietcong
	{
		displayName = "Nam Vietcong";
		author = "Sparfell";
		icon = "\cpc_nam_units\Data\vietcong_flag_icon.paa";
		priority = 1;
		side = 0;
	};
};

#include "CfgVehicles.hpp"

