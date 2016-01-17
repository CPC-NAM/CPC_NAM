class CfgWeapons
{
	class RH_M16a1;
	class CPC_nam_weapon_m16a1 : RH_M16a1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M16A1";
		magazines[] = {"CPC_nam_mag_20rnd_556x45"};
	};

	class CUP_lmg_M60E4;
	class CPC_nam_weapon_m60 : CUP_lmg_M60E4
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM M60";
		magazines[] = {"CPC_nam_mag_100rnd_762x51"};
	};

};