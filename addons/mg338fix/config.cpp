class CfgPatches
{
	class nga_zero_custom_mg338fix
	{
		requiredAddons[] = {"MG338"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
	class Rifle_Long_Base_F;
	class NGSW_MG338: Rifle_Long_Base_F
	{
		ACE_barrelLength = 609.6;
		ace_overheating_closedBolt = 0;
		mass = 214;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 214;
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class NGSW_338nm: BulletBase
	{
		ACE_muzzleVelocities[]={800, 820, 826, 830};
        ACE_barrelLengths[]={508.0, 609.6, 673.1, 711.2};
	};
};