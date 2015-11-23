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
	"CUP_8Rnd_9x18_Makarov_M"
	
	
];

_cpc_nam_backpacks = [


	//Backbacks
	"CPC_nam_gear_bag_alice_green",
	"CPC_nam_gear_bag_alice_DarkGreen",
	"CPC_nam_gear_bag_alice_Brown",
	"CPC_nam_gear_bag_alice_Khaki",
	"CPC_nam_gear_bag_vest_belt",
	"CUP_B_RPGPack_Khaki",
	"CUP_B_CivPack_WDL",
	"CUP_B_USMC_AssaultPack"
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
	"CUP_V_B_PilotVest",
	"TRYK_LOC_AK_chestrig_OD",
	"TRYK_LOC_AK_chestrig_TAN",
	"CUP_V_B_RRV_Medic",
	"CUP_V_B_RRV_Scout",
	"CUP_V_O_TK_CrewBelt",
	"CUP_V_O_TK_OfficerBelt2",
	"CUP_V_O_TK_OfficerBelt",
	"TRYK_V_ChestRig_L",
	"TRYK_V_ChestRig",
	
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