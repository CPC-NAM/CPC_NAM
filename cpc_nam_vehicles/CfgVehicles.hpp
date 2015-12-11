class Turrets;
class MainTurret;

class CfgVehicles
{
	class GR_UH1D_1;
	class CPC_nam_heli_UH1D : GR_UH1D_1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1D";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
	};
	class GR_UH1H_6;
	class CPC_nam_heli_UH1H_cargo : GR_UH1H_6
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1H (Transport)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
	};
	class GR_UH1H_3;
	class CPC_nam_heli_UH1H_search : GR_UH1H_3
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1H (Searchlight)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
		/*class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType = "CPC_nam_soldier_us_r2";
			};
		};*/
	};
	class GR_UH1H_2;
	class CPC_nam_heli_UH1H_lmg : GR_UH1H_2
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1H (LMG)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
		/*class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType = "CPC_nam_soldier_us_r2";
			};
		};*/
	};
	class GR_UH1H_4;
	class CPC_nam_heli_UH1H_medevac : GR_UH1H_4
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1H (Medevac)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
	};
	class GR_UH1H_5;
	class CPC_nam_heli_UH1H_rocket : GR_UH1H_5
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1H (Rocket)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
	};
	class GR_UH1H_1;
	class CPC_nam_heli_UH1H_xm16 : GR_UH1H_1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1H (XM16)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
	};
	class GR_UH1H_7;
	class CPC_nam_heli_UH1H_xm21 : GR_UH1H_7
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1H (XM21)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
	};
	class GR_UH1N_3;
	class CPC_nam_heli_UH1N_gunship : GR_UH1N_3
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1N (Gunship)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
		/*class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType = "CPC_nam_soldier_us_r2";
			};
		};*/
	};
	class GR_UH1N_2;
	class CPC_nam_heli_UH1N_cargo : GR_UH1N_2
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM UH-1N (Transport)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
	};
	
	class CUP_B_M113_USA;
	class CPC_nam_armor_M113 : CUP_B_M113_USA
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		displayName = "NAM M113";
		vehicleClass = "Armored";
		crew = "CPC_nam_soldier_us_r";		
		typicalCargo[] = {"CPC_nam_soldier_us_r"};
		hiddenSelectionsTextures[] = 
		{
			"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_co.paa",
			"cpc_nam_vehicles\data\NAM_m113a3_02_co.paa"
		};
	};
	class CUP_B_M113_Med_USA;
	class CPC_nam_armor_M113_med : CUP_B_M113_Med_USA
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Armored";
		displayName = "NAM M113 (Medevac)";
		crew = "CPC_nam_soldier_us_doc";		
		typicalCargo[] = {"CPC_nam_soldier_us_doc"};
		hiddenSelectionsTextures[] = 
		{
			"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_co.paa",
			"cpc_nam_vehicles\data\NAM_m113a3_02_co.paa"
		};
	};
	class CPC_nam_armor_M113_2 : CUP_B_M113_Med_USA
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Armored";
		displayName = "NAM M113 (Transport)";
		crew = "CPC_nam_soldier_us_r2";		
		typicalCargo[] = {"CPC_nam_soldier_us_r2"};
		hiddenSelectionsTextures[] = 
		{
			"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_co.paa",
			"cpc_nam_vehicles\data\NAM_m113a3_02_transport_co.paa"
		};
	};
	
	class CUP_I_DSHKM_AAF;
	class CPC_nam_static_dshkm_high_vc : CUP_I_DSHKM_AAF
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "CPC_nam_vietcong";
		crew = "CPC_nam_soldier_vc_r";	
	};
	
	class CUP_I_DSHkM_Mini_TriPod;
	class CPC_nam_static_dshkm_low_vc : CUP_I_DSHkM_Mini_TriPod
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "CPC_nam_vietcong";
		crew = "CPC_nam_soldier_vc_r";	
	};
	
	class Weapon_Bag_Base;
	class CUP_B_DShkM_Gun_Bag: Weapon_Bag_Base
	{
		scope = 2;
		scopeArsenal = 2;
	};
	class CUP_B_DShkM_TripodHigh_Bag: Weapon_Bag_Base
	{
		scope = 2;
		scopeArsenal = 2;
	};
	class CUP_B_DShkM_TripodLow_Bag: Weapon_Bag_Base
	{
		scope = 2;
		scopeArsenal = 2;
	};
};