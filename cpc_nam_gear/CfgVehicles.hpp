class CfgVehicles
{
	class UNS_Alice_1;
	class CPC_nam_gear_bag_alice_green: UNS_Alice_1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 1;
		scopeArsenal = 0;
	};
	class CPC_nam_gear_bag_alice_DarkGreen: UNS_Alice_1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 1;
		scopeArsenal = 0;
	};
	class CPC_nam_gear_bag_alice_Brown: UNS_Alice_1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 1;
		scopeArsenal = 0;
	};
	class CPC_nam_gear_bag_alice_Khaki : UNS_Alice_1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 1;
		scopeArsenal = 0;
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
	class UNS_NVA_R1;
	class CPC_nam_gear_bag_alice_vc_doc : UNS_NVA_R1
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
	class CPC_nam_gear_bag_alice_vc_eng : UNS_NVA_R1
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
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 2;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 1;
			};
		};
	};
	class UNS_NVA_RPG;
	class CPC_nam_gear_vc_bag_RPG_khaki : UNS_NVA_RPG
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 1;
		scopeArsenal = 0;
	};
	class CPC_nam_gear_vc_bag_RPG_brown : UNS_NVA_RPG
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 1;
		scopeArsenal = 0;
	};
	class CPC_nam_gear_bag_RPG_vcat : UNS_NVA_RPG
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 1;
		scopeArsenal = 0;
	};
	class CPC_nam_gear_bag_vest_belt : UNS_Alice_1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 1;
		scopeArsenal = 0;
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
			class _xx_uns_m14mag
			{
				magazine = "uns_m14mag";
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
			class _xx_Uns_1Rnd_HE_M381
			{
				magazine = "Uns_1Rnd_HE_M381";
				count = 12;
			};
		};
	};
};