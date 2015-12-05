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
		armor = 2;
		armorStructural = 0.38;
		explosionShielding = 0.038;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
		};
		headgearList[] = {"H_Booniehat_oli",1,"CPC_nam_gear_us_helmet_m1a1_1",1,"CPC_nam_gear_us_helmet_m1a1_2",1,"CPC_nam_gear_us_helmet_m1a1_3",1,"CPC_nam_gear_us_helmet_m1a1_4",1,"CPC_nam_gear_us_helmet_m1a1_5",1,"CPC_nam_gear_us_helmet_m1a1_6",1,"CPC_nam_gear_us_helmet_m1a1_7",1};
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

	};
	class CPC_nam_soldier_us_pilot : CPC_nam_soldier_us_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Heli Pilot";
		uniformClass = "CUP_U_B_USMC_PilotOverall";
		linkedItems[] = {"CUP_H_USMC_Helmet_Pilot","CPC_nam_gear_us_vest_pilot","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_H_USMC_Helmet_Pilot","CPC_nam_gear_us_vest_pilot","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		hiddenSelectionsTextures[] = {"\cpc_nam_gear\data\uniform_viet_02.paa"};
		icon = "iconMan";
		armor = 2;
		armorStructural = 0.38;
		explosionShielding = 0.038;
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
		};
		headgearList[] = {"CPC_nam_gear_vc_hat_1",0.8,"TRYK_H_Bandana_H",0.3,"",0.3};
	};
	class CPC_nam_soldier_vc_r : CPC_nam_soldier_vc_base
	{
		scope = 2;
		scopecurator = 2;
		displayname = "Combattant (AK-47)";
		linkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		linkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","binocular","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		linkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		linkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		linkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		linkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_nam_gear_vc_vest_chestrig_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "SmokeShell", "SmokeShell"};
		Respawnmagazines[] = {"CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M", "SmokeShell", "SmokeShell"};
	};
};