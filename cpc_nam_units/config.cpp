class CfgPatches
{
	class cpc_nam_units
	{
		units[] = 
		{
			"CPC_nam_soldier_us_r",
			"CPC_nam_soldier_us_tl",
			"CPC_nam_soldier_us_mg",
			"CPC_nam_soldier_us_doc",
			"CPC_nam_soldier_us_eng",
			"CPC_nam_soldier_us_m",
			"CPC_nam_soldier_vc_r",
			"CPC_nam_soldier_vc_tl",
			"CPC_nam_soldier_vc_ar",
			"CPC_nam_soldier_vc_at",
			"CPC_nam_soldier_vc_eng",
			"CPC_nam_soldier_vc_doc"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","cpc_nam_core","cpc_nam_weapons","cpc_nam_gear","CUP_Creatures_Military_Taki"};
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

class Extended_Init_Eventhandlers
{
	class CPC_nam_soldier_us_base
	{
		CPC_nam_us_soldier_init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	}
	class CPC_nam_soldier_vc_base
	{
		CPC_nam_vc_soldier_init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	}
};

#include "CfgVehicles.hpp"


class CfgFaces
{
	class Default;
	class Man_A3 : Default
	{
		class Default;
		class AsianHead_A3_01: Default
		{
			identityTypes[] += {"Head_CPC_nam_viet"};
		};
		class AsianHead_A3_02: AsianHead_A3_01
		{
			identityTypes[] += {"Head_CPC_nam_viet"};
		};
		class AsianHead_A3_03: AsianHead_A3_01
		{
			identityTypes[] += {"Head_CPC_nam_viet"};
		};
	};
};