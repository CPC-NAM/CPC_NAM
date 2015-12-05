_crate = _this select 0;


_cpc_nam_Weapons = [
	//Weapons
	"CPC_nam_weapon_m16a1",
	"CPC_nam_weapon_m60",
	"CUP_hgun_Colt1911",
	"CUP_srifle_M14",
	"CUP_glaunch_M79",
	"CUP_arifle_AK47",
	"CUP_arifle_RPK74",
	"CUP_launch_RPG7V",
	"CUP_hgun_Makarov"
];

_cpc_nam_Mags = [
	
	//Mags
	"CPC_nam_mag_20rnd_556x45",
	"CPC_nam_mag_100rnd_762x51",
	"Handgrenade",
	"SmokeshellRed",
	"SmokeshellGreen",
	"SmokeshellBlue",
	"SmokeshellYellow",
	"Smokeshell",
	"CUP_7Rnd_45ACP_1911",
	"CUP_20Rnd_762x51_DMR",
	"CUP_FlareWhite_M203",
	"CUP_1Rnd_SmokeRed_M203",
	"CUP_1Rnd_HE_M203",
	"CUP_30Rnd_762x39_AK47_M",
	"CUP_HandGrenade_RGD5",
	"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
	"CUP_PG7V_M",
	"CUP_MineE_M",
	"CUP_Mine_M",
	"CUP_PipeBomb_M",
	"APERSTripMine_Wire_Mag",
	"APERSBoundingMine_Range_Mag",
	"SatchelCharge_Remote_Mag",
	"ClaymoreDirectionalMine_Remote_Mag",
	"DemoCharge_Remote_Mag",
	"CUP_8Rnd_9x18_Makarov_M",

	
	//ACE
	"ACE_HandFlare_White",
	"ACE_HandFlare_Red",
	"ACE_HandFlare_Green",
	"ACE_HandFlare_Yellow"
	
	
	
];

_cpc_nam_backpacks = [


	//Backbacks
	"CPC_nam_gear_bag_alice_green",
	"CPC_nam_gear_bag_alice_DarkGreen",
	"CPC_nam_gear_bag_alice_Brown",
	"CPC_nam_gear_bag_alice_Khaki",
	"CPC_nam_gear_bag_vest_belt",
	"CPC_nam_gear_vc_bag_RPG_brown",
	"CPC_nam_gear_vc_bag_RPG_khaki",
	"CUP_B_CivPack_WDL",
	"CUP_B_USMC_AssaultPack",
	
	//ace
	"ACE_NonSteerableParachute"
];



_cpc_nam_items = [
	
	//Items
	"ItemMap",
	"ItemGPS",
	"ItemCompass",
	"ItemWatch",
	"ItemRadio",
	"Binocular",
	"ToolKit",
	"Medikit",
	"FirstAidKit",
	
	//ACE
	"ACE_CableTie",
	"ACE_Clacker",
	"ACE_M26_Clacker",
	"ACE_DefusalKit",
	"ACE_DeadManSwitch",
	"ACE_Cellphone",
	"ACE_Flashlight_MX991",
	"ACE_Flashlight_KSF1",
	"ACE_Flashlight_XL50",
	"ACE_EarPlugs",
	"ACE_wirecutter",
	"ACE_MapTools",
	"ACE_quikclot",
	"ACE_bloodIV",
	"ACE_bloodIV_500",
	"ACE_bloodIV_250",
	"ACE_bodyBag",
	"ACE_epinephrine",
	"ACE_morphine",
	"ACE_tourniquet",
	"ACE_NVG_Gen1",
	"ACE_RangeCard",
	"ACE_Sandbag_empty",
	"ACE_Yardage450",
	
	// Headgears
	"CPC_nam_gear_us_helmet_m1a1_1",
	"CPC_nam_gear_us_helmet_m1a1_2",
	"CPC_nam_gear_us_helmet_m1a1_3",
	"CPC_nam_gear_us_helmet_m1a1_4",
	"CPC_nam_gear_us_helmet_m1a1_5",
	"CPC_nam_gear_us_helmet_m1a1_6",
	"CPC_nam_gear_us_helmet_m1a1_7",
	"CPC_nam_gear_us_helmet_m1a1_doc",
	"CPC_nam_gear_us_helmet_m1a1_doc2",
	"CPC_nam_gear_us_helmet_m1a1_eng",
	"CPC_nam_gear_us_helmet_m1a1_eng2",
	"CPC_nam_gear_vc_hat_1",
	"CUP_H_USMC_Helmet_Pilot",
	"TRYK_H_Bandana_H",
	"CUP_H_FR_BandanaWdl",
	"H_Bandanna_camo",
	"H_Beret_Colonel",
	"H_Beret_blk",
	"H_Booniehat_khk",
	"H_Booniehat_oli",
	"TRYK_H_Bandana_wig",
	
	//facewears
	"G_Aviator",
	
	//Vests
	"CPC_nam_gear_us_vest_flak",
	"CPC_nam_gear_us_vest_belt",
	"CPC_nam_gear_us_vest_pilot",
	"CPC_nam_gear_vc_vest_chestrig_OD",
	"CPC_nam_gear_vc_vest_chestrig_TAN",
	"CPC_nam_gear_us_vest_1",
	"CPC_nam_gear_us_vest_2",
	"CUP_V_O_TK_CrewBelt",
	"CUP_V_O_TK_OfficerBelt2",
	"CUP_V_O_TK_OfficerBelt",
	"CPC_nam_gear_us_vest_chestrig_L",
	"CPC_nam_gear_us_vest_chestrig",
	
	//Uniforms
	"CPC_nam_gear_us_uniform",
	"CUP_U_B_USMC_PilotOverall",
	"CPC_nam_gear_vc_uniform_1"
];


["AmmoboxInit",[_crate,false]] spawn BIS_fnc_arsenal;

[_crate,_cpc_nam_items,true] call BIS_fnc_addVirtualItemCargo;
[_crate,_cpc_nam_Weapons,true] call BIS_fnc_addVirtualWeaponCargo;
[_crate,_cpc_nam_Mags,true] call BIS_fnc_addVirtualMagazineCargo;
[_crate,_cpc_nam_backpacks,true] call BIS_fnc_addVirtualBackpackCargo;