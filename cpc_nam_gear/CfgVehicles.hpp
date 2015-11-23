class CfgVehicles
{
	class CUP_B_AlicePack_Base;
	class CPC_nam_gear_bag_alice_green: CUP_B_AlicePack_Base
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM Alice Pack (Green)";
		picture = "\CUP\Weapons\CUP_Weapons_Backpacks\data\ui\icon_b_c_alicepack_tk_ca.paa";
		hiddenSelectionsTextures[] = {"\cpc_nam_gear\data\alice_equip_green_co.paa"};
	};
	class CPC_nam_gear_bag_alice_DarkGreen: CUP_B_AlicePack_Base
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM Alice Pack (DarkGreen)";
		picture = "\CUP\Weapons\CUP_Weapons_Backpacks\data\ui\icon_b_c_alicepack_tk_ca.paa";
		hiddenSelectionsTextures[] = {"\cpc_nam_gear\data\alice_equip_darkgreen_co.paa"};
	};
	class CPC_nam_gear_bag_alice_Brown: CUP_B_AlicePack_Base
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM Alice Pack (Brown)";
		picture = "\CUP\Weapons\CUP_Weapons_Backpacks\data\ui\icon_b_c_alicepack_tk_ca.paa";
		hiddenSelectionsTextures[] = {"\cpc_nam_gear\data\alice_equip_brown_co.paa"};
	};
	class CUP_B_AlicePack_Khaki;
	class CPC_nam_gear_bag_alice_Khaki : CUP_B_AlicePack_Khaki
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM Alice Pack (Khaki)";
	};
	class CPC_nam_gear_bag_alice_doc : CPC_nam_gear_bag_alice_DarkGreen
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class CPC_nam_gear_bag_alice_eng : CPC_nam_gear_bag_alice_DarkGreen
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
		};
	};
	class CPC_nam_gear_bag_alice_mg : CPC_nam_gear_bag_alice_DarkGreen
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines
		{
			class _xx_CPC_nam_mag_100rnd_762x51
			{
				magazine = "CPC_nam_mag_100rnd_762x51";
				count = 3;
			};
		};
	};
	class CPC_nam_gear_bag_alice_vc_doc : CPC_nam_gear_bag_alice_Brown
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class CPC_nam_gear_bag_alice_vc_eng : CPC_nam_gear_bag_alice_Brown
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_CUP_PipeBomb_M
			{
				magazine = "CUP_PipeBomb_M";
				count = 2;
			};
			class _xx_CUP_MineE_M
			{
				magazine = "CUP_MineE_M";
				count = 1;
			};
		};
	};
	class CUP_B_RPGPack_Khaki;
	class CPC_nam_gear_bag_RPG_vcat : CUP_B_RPGPack_Khaki
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines
		{
			class _xx_CUP_PG7V_M
			{
				magazine = "CUP_PG7V_M";
				count = 3;
			};
		};
	};
	
	//test de sac ceinture
	class Bag_Base;
	class CPC_nam_gear_bag_vest_belt : Bag_Base
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM US belt";
		picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		model = "\pmc\vte_chara\vte_gear_us_army_vest.p3d";
		maximumLoad = 50;
		mass = 10;
	};
	class CPC_nam_gear_bag_vest_belt_r : CPC_nam_gear_bag_vest_belt
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines
		{
			class _xx_CPC_nam_mag_20rnd_556x45
			{
				magazine = "CPC_nam_mag_20rnd_556x45";
				count = 6;
			};
		};
	};
	class CPC_nam_gear_bag_vest_belt_m : CPC_nam_gear_bag_vest_belt
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines
		{
			class _xx_CUP_20Rnd_762x51_DMR
			{
				magazine = "CUP_20Rnd_762x51_DMR";
				count = 3;
			};
		};
	};
	class CPC_nam_gear_bag_vest_belt_gl : CPC_nam_gear_bag_vest_belt
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines
		{
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine = "CUP_1Rnd_HE_M203";
				count = 12;
			};
		};
	};
};