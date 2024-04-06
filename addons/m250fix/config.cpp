class CfgPatches
{
	class nga_zero_custom_m250fix
	{
		requiredAddons[] = {"SigM250"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class NGSW_M250: Rifle_Base_F
	{
		ACE_barrelLength = 609.6;
		ace_overheating_closedBolt = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 146;
		};
	};
};