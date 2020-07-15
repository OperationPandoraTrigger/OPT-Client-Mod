#include "\opt\opt_client\addons\core\macros.hpp"

class CfgPatches
{
	class opt_ace_flashsuppressors
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
        version = VERSION;
        versionStr = QUOTE(VERSION);
        versionAr[] = {VERSION_AR};
		requiredAddons[] = {"opt_weapons", "opt_characters", "opt_core", "a3_armor_f", "opt_vehicles", "ace_flashsuppressors"};
	};
};

class asdg_MuzzleSlot;

class asdg_MuzzleSlot_556 : asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_L = 1;
	};
};

class asdg_MuzzleSlot_58 : asdg_MuzzleSlot
{
	class compatibleItems
	{
		ACE_muzzle_mzls_L = 1;
	};
};

class MuzzleSlot;

class CfgWeapons
{
	class Rifle_Base_F;

	class arifle_SPAR_01_base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class ItemCore;
	class InventoryMuzzleItem_Base_F;

	class arifle_SPAR_01_blk_F : arifle_SPAR_01_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_556
			{
				class compatibleItems : compatibleItems
				{
					ACE_muzzle_mzls_L = 1;
				};
			};
		};
	};

	class arifle_CTAR_base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class arifle_CTAR_blk_F : arifle_CTAR_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{
				class compatibleItems : compatibleItems
				{
					ACE_muzzle_mzls_L = 1;
				};
			};
		};
	};

	class mk20_base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class arifle_Mk20C_F : mk20_base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : asdg_MuzzleSlot_58
			{
				class compatibleItems : compatibleItems
				{
					ACE_muzzle_mzls_L = 1;
				};
			};
		};
	};
};