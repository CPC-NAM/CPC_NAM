class CfgVehicles
{
	class CUP_USBasicWeapons_EP1;
	class CPC_nam_crate_VA : CUP_USBasicWeapons_EP1
	{
		dlc = "cpc_nam";
		author = "Sparfell";
		scope = 2;
		scopeArsenal = 2;
		displayName = "NAM VA Crate";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class EventHandlers
		{
			init = "null = _this execVM ""cpc_nam_crate\scripts\nam_va_box.sqf"";";
		};
	};
};