class CfgPatches
{
	class nga_zero_custom_spearfix
	{
		requiredAddons[] = {"SigMCXSpear"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class SJBH_MCX_Spear: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 83.8;
		};
	};
};