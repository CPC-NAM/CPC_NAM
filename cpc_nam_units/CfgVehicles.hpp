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
		linkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		
	};
	class CPC_nam_soldier_us_r2 : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Fusilier (Flak Veste)";
		linkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
	};
	class CPC_nam_soldier_us_tl : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Chef d'equipe";
		icon = "iconManLeader";
		linkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		
		
	};
	class CPC_nam_soldier_us_mg : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Mitrailleur (M60)";
		icon = "iconManMG";
		linkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m60","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m60","Throw","Put"};
		magazines[] = {"CPC_nam_mag_100rnd_762x51_M","CPC_nam_mag_100rnd_762x51_M","CPC_nam_mag_100rnd_762x51_M","HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_100rnd_762x51_M","CPC_nam_mag_100rnd_762x51_M","CPC_nam_mag_100rnd_762x51_M","HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		
		
	};
	class CPC_nam_soldier_us_doc : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Infirmier";
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
		backpack = "CUP_B_AlicePack_Khaki";
		linkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
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
		backpack = "CUP_B_AlicePack_Khaki";
		linkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		respawnweapons[] = {"CPC_nam_weapon_m16a1","Throw","Put"};
		magazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45","CPC_nam_mag_20rnd_556x45", "CPC_nam_mag_20rnd_556x45", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		headgearList[] = {"CPC_nam_gear_us_helmet_m1a1_eng",1,"CPC_nam_gear_us_helmet_m1a1_eng2",1};
		
	};
	class CPC_nam_soldier_us_m : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Fusilier (M14)";
		linkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_us_vest_belt","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_srifle_M14","Throw","Put"};
		respawnweapons[] = {"CUP_srifle_M14","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR", "CUP_20Rnd_762x51_DMR", "HandGrenade", "HandGrenade", "SmokeShell", "SmokeShell"};
		
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
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		backpack = "CUP_B_AlicePack_Khaki";
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
		backpack = "CUP_B_AlicePack_Khaki";
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
		backpack = "CUP_B_RPGPack_Khaki";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "SmokeShell", "SmokeShell"};
	};
};