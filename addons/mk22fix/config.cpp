class CfgPatches
{
	class nga_zero_custom_mk22fix
	{
		requiredAddons[] = {"Mk22ASR"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
	class srifle_LRR_F;
	class Mk22ASR: srifle_LRR_F
	{
		ACE_barrelLength = 673.1;
		mass = 152;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 152;
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
	class NGSW_300nm: BulletBase
	{
		ACE_muzzleVelocities[] = {894.2832};
		ACE_barrelLengths[] = {673.1};
	};
	class NGSW_762_M118LR: BulletBase
	{
		ACE_muzzleVelocities[] = {780}; //THIS LOOKS WRONG BECAUSE OF THE FIXED BARREL LENGTH
		ACE_barrelLengths[] = {673.1};  //THIS LOOKS WRONG BECAUSE OF THE FIXED BARREL LENGTH
		// THIS IS CALCULATED FOR 20"/508mm barrel and set on the longer barrel
	};
};