class CfgPatches
{
	class nga_zero_custom_raptorfix
	{
		requiredAddons[] = {"SigMCXRaptor"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
	class Rifle_Base_F;
	class SJBH_MCX_Raptor: Rifle_Base_F
	{
		ACE_barrelLength = 203.2;
		mass = 65;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 65;
			
		};
	};
};