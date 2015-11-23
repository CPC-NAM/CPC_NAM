class UniformItem;
class ItemInfo;
class CfgWeapons
{
	//Uniforms
	
	class CUP_U_O_TK_Green;
	class CPC_nam_gear_us_uniform : CUP_U_O_TK_Green
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM US uniforme";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_u_o_tk_greens_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo : UniformItem
		{
				uniformModel = "-";
				uniformClass = CPC_nam_soldier_us_base;
				containerClass = Supply40;
				mass = 20;
		};
	};
	
	class U_I_OfficerUniform;
	class CPC_nam_gear_vc_uniform_1 : U_I_OfficerUniform
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM Vietcong clothes";
		picture = "\A3\characters_f\data\ui\icon_U_IR_Officer_spc_ca.paa";
		model = "A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_nam_soldier_vc_base";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	
	
	// Vests
	class VTE_gear_us_army_vest;
	class CPC_nam_gear_us_vest_belt: VTE_gear_us_army_vest
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM US ceinture";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\pmc\vte_chara\vte_gear_us_army_vest.p3d";
			containerClass = "Supply50";
			mass = 10;
			armor = 0;
			passThrough = 1;
		};
	};
	/*class TRYK_V_ChestRig_L;
	class CPC_nam_gear_us_vest_1: TRYK_V_ChestRig_L
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM US harnais";
	};*/
	class CUP_V_B_LHDVest_Green;
	class CPC_nam_gear_us_vest_flak : CUP_V_B_LHDVest_Green
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName="NAM Flak Vest";
		picture = "\cpc_nam_gear\data\icon_flakvest_us_green_ca.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_NAVY_LHDVest.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\cpc_nam_gear\data\flakvest_us_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply30";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_NAVY_LHDVest.p3d";
			armor=10;
			passThrough=0.7;
			mass=60;
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\cpc_nam_gear\data\flakvest_us_green_co.paa"
			};
		};
	};
	
	
	
	// Headgears
	class m1a1helmet_btk;
	class CPC_nam_gear_us_helmet_m1a1_1: m1a1helmet_btk
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Born To Kill)";
	};
	class m1a1helmet_pln;
	class CPC_nam_gear_us_helmet_m1a1_2: m1a1helmet_pln
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1";
	};
	class m1a1helmet_dsi;
	class CPC_nam_gear_us_helmet_m1a1_3: m1a1helmet_dsi
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Dont shoot)";
	};
	class m1a1helmet_net;
	class CPC_nam_gear_us_helmet_m1a1_4: m1a1helmet_net
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Camo Net)";
	};
	class m1a1helmet_things;
	class CPC_nam_gear_us_helmet_m1a1_5: m1a1helmet_things
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Items)";
	};
	class m1a1helmet_camothings;
	class CPC_nam_gear_us_helmet_m1a1_6: m1a1helmet_camothings
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Camo Items)";
	};
	class m1a1helmet_cigs;
	class CPC_nam_gear_us_helmet_m1a1_7: m1a1helmet_cigs
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Items2)";
	};
	class m1a1helmet_medic;
	class CPC_nam_gear_us_helmet_m1a1_doc: m1a1helmet_medic
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 Medic";
	};
	class m1a1helmet_camomedic;
	class CPC_nam_gear_us_helmet_m1a1_doc2: m1a1helmet_camomedic
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 Medic (Camo)";
	};
	class m1a1helmet_camoeng;
	class CPC_nam_gear_us_helmet_m1a1_eng2: m1a1helmet_camoeng
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 Engineer (Camo)";
	};
	class m1a1helmet_eng;
	class CPC_nam_gear_us_helmet_m1a1_eng: m1a1helmet_eng
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 Engineer";
	};
	
	class vietsh_Head;
	class CPC_nam_gear_vc_hat_1 : vietsh_Head
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM Chapeau asiatique";
	};
};