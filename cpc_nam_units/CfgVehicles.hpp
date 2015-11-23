class CfgVehicles
{
	// Soldats US
	
	class B_Soldier_base_F;
	class CPC_nam_soldier_us_base : B_Soldier_base_F
	{
		scope = 1;
		scopecurator = 1;
		faction = "CPC_nam_US";
		identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
		asr_ai_level = 4;
		vehicleClass = "Men";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_crewman.p3d";
		uniformClass = "CPC_nam_gear_us_uniform";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\tak_soldier_co.paa"};
		icon = "iconMan";
		headgearList[] = {"CPC_nam_gear_us_helmet_m1a1_1",1,"CPC_nam_gear_us_helmet_m1a1_2",1,"CPC_nam_gear_us_helmet_m1a1_3",1,"CPC_nam_gear_us_helmet_m1a1_4",1,"CPC_nam_gear_us_helmet_m1a1_5",1,"CPC_nam_gear_us_helmet_m1a1_6",1,"CPC_nam_gear_us_helmet_m1a1_7",1};
	};
	class CPC_nam_soldier_us_r : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Fusilier";
		backpack = "CPC_nam_gear_bag_vest_belt_r";
		linkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		
	};
	class CPC_nam_soldier_us_r2 : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Fusilier (light)";
		linkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
	};
	class CPC_nam_soldier_us_tl : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Chef d'equipe";
		icon = "iconManLeader";
		backpack = "CPC_nam_gear_bag_vest_belt_r";
		linkedItems[] = {"CPC_nam_gear_us_vest_flak","binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_flak","binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_hgun_Colt1911","CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CUP_hgun_Colt1911","CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShellGreen", "SmokeShellGreen", "SmokeShell"};
		Respawnmagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShellGreen", "SmokeShellGreen", "SmokeShell"};
		
		
	};
	class CPC_nam_soldier_us_mg : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Mitrailleur (M60)";
		icon = "iconManMG";
		backpack = "CPC_nam_gear_bag_alice_mg";
		linkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m60","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m60","Throw","Put"};
		magazines[] = {"CPC_nam_mag_100rnd_762x51","HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_100rnd_762x51","HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		
		
	};
	class CPC_nam_soldier_us_doc : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Infirmier";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
		backpack = "CPC_nam_gear_bag_alice_doc";
		linkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		headgearList[] = {"CPC_nam_gear_us_helmet_m1a1_doc",1,"CPC_nam_gear_us_helmet_m1a1_doc2",1};
	};
	class CPC_nam_soldier_us_eng : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Sapeur";
		icon = "iconManEngineer";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CPC_nam_gear_bag_alice_eng";
		linkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		headgearList[] = {"CPC_nam_gear_us_helmet_m1a1_eng",1,"CPC_nam_gear_us_helmet_m1a1_eng2",1};
		
	};
	class CPC_nam_soldier_us_m : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Fusilier (M14)";
		backpack = "CPC_nam_gear_bag_vest_belt_m";
		linkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_srifle_M14","Throw","Put"};
		respawnweapons[] = {"CUP_srifle_M14","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "HandGrenade", "SmokeShell", "SmokeShell"};
		headgearList[] = {"H_Booniehat_oli",1"CPC_nam_gear_us_helmet_m1a1_1",0.1,"CPC_nam_gear_us_helmet_m1a1_2",0.1,"CPC_nam_gear_us_helmet_m1a1_3",0.1,"CPC_nam_gear_us_helmet_m1a1_4",0.1,"CPC_nam_gear_us_helmet_m1a1_5",0.1,"CPC_nam_gear_us_helmet_m1a1_6",0.1,"CPC_nam_gear_us_helmet_m1a1_7",0.1};
	
	};
	class CPC_nam_soldier_us_pilot : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Heli Pilot";
		uniformClass = "CUP_U_B_USMC_PilotOverall";
		linkedItems[] = {"CUP_H_USMC_Helmet_Pilot","CUP_V_B_PilotVest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_USMC_Helmet_Pilot","CUP_V_B_PilotVest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		respawnweapons[] = {"CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		Respawnmagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShellGreen"};
		headgearList[] = {"CUP_H_USMC_Helmet_Pilot",1};
	};
	class CPC_nam_soldier_us_gl : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Grenadier (M79)";
		backpack = "CPC_nam_gear_bag_vest_belt_gl";
		linkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_flak","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_glaunch_M79","CUP_hgun_Colt1911","Throw","Put"};
		respawnweapons[] = {"CUP_glaunch_M79","CUP_hgun_Colt1911","Throw","Put"};
		magazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};
		Respawnmagazines[] = {"CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_SmokeRed_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203"};
		
	};
	
	// Combattants Vietcongs
	
	class O_Soldier_base_F;
	class CPC_nam_soldier_vc_base : O_Soldier_base_F
	{
		scope = 1;
		scopecurator = 1;
		faction = "CPC_nam_vietcong";
		identityTypes[] = {"LanguagePER_F","Head_CPC_nam_viet","NoGlasses"};
		asr_ai_level = 5;
		vehicleClass = "Men";
		model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
		uniformClass = "CPC_nam_gear_vc_uniform_1";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\cpc_nam_gear\data\uniform_viet_01.paa"};
		icon = "iconMan";
		headgearList[] = {"CPC_nam_gear_vc_hat_1",1,"TRYK_H_Bandana_H",0.6,"",0.2};
	};
	class CPC_nam_soldier_vc_r : CPC_nam_soldier_vc_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Combattant (AK-47)";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
	};
	class CPC_nam_soldier_vc_tl : CPC_nam_soldier_vc_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Chef de groupe";
		icon = "iconManLeader";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD","binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD","binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
	};
	class CPC_nam_soldier_vc_doc : CPC_nam_soldier_vc_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Infirmier";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
		backpack = "CPC_nam_gear_bag_alice_vc_doc";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
	};
	class CPC_nam_soldier_vc_ar : CPC_nam_soldier_vc_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Combattant (RPK-74)";
		icon = "iconManMG";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_RPK74","Throw","Put"};
		magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
	};
	class CPC_nam_soldier_vc_eng : CPC_nam_soldier_vc_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Sapeur";
		icon = "iconManEngineer";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CPC_nam_gear_bag_alice_vc_eng";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "CUP_HandGrenade_RGD5", "SmokeShell", "SmokeShell"};
	};
	class CPC_nam_soldier_vc_at : CPC_nam_soldier_vc_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Combattant (RPG-7)";
		backpack = "CPC_nam_gear_bag_RPG_vcat";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "SmokeShell", "SmokeShell"};
	};
};