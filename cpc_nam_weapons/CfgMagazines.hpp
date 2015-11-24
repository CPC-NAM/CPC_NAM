class CfgMagazines
{
	class RH_20Rnd_556x45_M855A1;
	class CPC_nam_mag_20rnd_556x45 : RH_20Rnd_556x45_M855A1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Mag M16 20Rnd";
	};

	class CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;
	class CPC_nam_mag_100rnd_762x51 : CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Mag M60 100Rnd";
	};
	
	/*
	class APERSTripMine_Wire_Mag: ATMine_Range_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		mass = 20;
		ammo = "APERSTripMine_Wire_Ammo";
		displayName = "$STR_A3_cfgMagazines_ClassicMineWireMagazine0";
		picture = "\A3\Weapons_F\Data\UI\gear_mine_AP_tripwire_CA.paa";
		model = "\A3\Weapons_F\explosives\mine_AP_tripwire_i";
		descriptionShort = "$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
		class Library
		{
			libTextDesc = "$STR_A3_cfgMagazines_ClassicMineWireMagazine_Library0";
		};
		descriptionUse = "$STR_A3_use_mine";
		allowedSlots[] = {901,701};
	};
	
	class APERSTripMine_Wire_Mag;
	class CPC_nam_mag_TripeWireMineFlare : APERSTripMine_Wire_Mag
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM Piege lumineux";
		descriptionShort = "Piege lumineux";
		ammo = "CPC_nam_ammo_TripeWireMineFlare";
	};
	*/

};