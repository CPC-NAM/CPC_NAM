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
		displayName = "NAM VC clothes";
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
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=0;
					PassThrough=1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=0;
					PassThrough=1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=0;
					passThrough=1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
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
		displayName="NAM US Flak Vest";
		picture = "\cpc_nam_gear\data\icon_flakvest_us_green_ca.paa";
		model="\cpc_nam_gear\CUP_NAVY_LHDVest.p3d";
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
			//armor=10;
			//passThrough=0.7;
			mass=60;
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\cpc_nam_gear\data\flakvest_us_green_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.7;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.7;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					passThrough=0.7;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.7;
				};
			};
		};
	};
	
	class CUP_V_B_PilotVest;
	class CPC_nam_gear_us_vest_pilot : CUP_V_B_PilotVest
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM US Pilot Vest";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=4;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=4;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=4;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
				};
			};
		};
	};
	
	class TRYK_LOC_AK_chestrig_OD;
	class CPC_nam_gear_vc_vest_chestrig_OD : TRYK_LOC_AK_chestrig_OD
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM VC Chestrig OD";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=0;
					PassThrough=1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=0;
					PassThrough=1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=0;
					passThrough=1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};
	class TRYK_LOC_AK_chestrig_TAN;
	class CPC_nam_gear_vc_vest_chestrig_TAN : TRYK_LOC_AK_chestrig_TAN
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM VC Chestrig TAN";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=0;
					PassThrough=1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=0;
					PassThrough=1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=0;
					passThrough=1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};
	
	class TRYK_V_ChestRig_L;
	class CPC_nam_gear_us_vest_chestrig_L : TRYK_V_ChestRig_L
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM US Chestrig 1";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=0;
					PassThrough=1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=0;
					PassThrough=1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=0;
					passThrough=1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};
	class TRYK_V_ChestRig;
	class CPC_nam_gear_us_vest_chestrig : TRYK_V_ChestRig
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM US Chestrig 2";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=0;
					PassThrough=1;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=0;
					PassThrough=1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=0;
					passThrough=1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};
	
	
	class CUP_V_B_RRV_Medic;
	class CPC_nam_gear_us_vest_1 : CUP_V_B_RRV_Medic
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM US Veste 1";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.7;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.7;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					passThrough=0.7;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.7;
				};
			};
		};
	};
	class CUP_V_B_RRV_Scout;
	class CPC_nam_gear_us_vest_2 : CUP_V_B_RRV_Scout
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM US Veste 2";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.7;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.7;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					passThrough=0.7;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.7;
				};
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
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_pln;
	class CPC_nam_gear_us_helmet_m1a1_2: m1a1helmet_pln
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_dsi;
	class CPC_nam_gear_us_helmet_m1a1_3: m1a1helmet_dsi
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Dont shoot)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_net;
	class CPC_nam_gear_us_helmet_m1a1_4: m1a1helmet_net
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Camo Net)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_things;
	class CPC_nam_gear_us_helmet_m1a1_5: m1a1helmet_things
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Items)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_camothings;
	class CPC_nam_gear_us_helmet_m1a1_6: m1a1helmet_camothings
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Camo Items)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_cigs;
	class CPC_nam_gear_us_helmet_m1a1_7: m1a1helmet_cigs
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 (Items2)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_medic;
	class CPC_nam_gear_us_helmet_m1a1_doc: m1a1helmet_medic
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 Medic";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_camomedic;
	class CPC_nam_gear_us_helmet_m1a1_doc2: m1a1helmet_camomedic
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 Medic (Camo)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_camoeng;
	class CPC_nam_gear_us_helmet_m1a1_eng2: m1a1helmet_camoeng
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 Engineer (Camo)";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class m1a1helmet_eng;
	class CPC_nam_gear_us_helmet_m1a1_eng: m1a1helmet_eng
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M1A1 Engineer";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	
	class vietsh_Head;
	class CPC_nam_gear_vc_hat_1 : vietsh_Head
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM Chapeau asiatique";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
};