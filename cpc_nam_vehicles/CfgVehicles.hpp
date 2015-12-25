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
	class A7;
	class CPC_nam_air_A7H : A7
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Air";
		displayName = "NAM A-7H Corsair II (CAS)";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
	};
    class ACV_PBR;
    class CPC_nam_boat_PBR : ACV_PBR
    {
        dlc = "cpc_nam";
		author = "Warzen";
		scope = 2;
		scopeArsenal = 2;
		side = 1;
		faction = "CPC_nam_US";
		vehicleClass = "Boats";
		displayName = "NAM PBR";
		crew = "CPC_nam_soldier_us_pilot";		
		typicalCargo[] = {"CPC_nam_soldier_us_pilot"};
    }
	/*
	class CUP_DSHKM_base;
	class CPC_nam_static_dshkm_high_vc : CUP_DSHKM_base
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		side = 0;
		faction = "CPC_nam_vietcong";
		crew = "CPC_nam_soldier_vc_r";
		typicalCargo[] = {"CPC_nam_soldier_vc_r"};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"CUP_B_DShkM_Gun_Bag","CUP_B_DShkM_TripodHigh_Bag"};
			displayName = "";
		};	
	};
	class CPC_nam_static_dshkm_low_vc : CUP_DSHKM_base
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayname = "DSHkM Minitripod";
		side = 0;
		faction = "CPC_nam_vietcong";
		crew = "CPC_nam_soldier_vc_r";
		typicalCargo[] = {"CPC_nam_soldier_vc_r"};
		model = "CUP\Weapons\CUP_Weapons_StaticWeapons\DShKM_mg2.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunneraction = "LowTripod_Gunner";
				initturn = 0;
				maxturn = 90;
				memorypointsgetingunner = "pos_gunner";
				memorypointsgetingunnerdir = "pos_gunner_dir";
				minturn = -90;
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"CUP_B_DShkM_Gun_Bag","CUP_B_DShkM_TripodLow_Bag"};
			displayName = "";
		};	
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
	*/
};