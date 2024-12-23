#pragma once


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Weapon Type ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Firearm, Melee
};



/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Weapon Slot Type ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


UENUM(BlueprintType)
enum class EWeaponSlotType: uint8
{
	Unarmed,Melee,Primary,Secondary,Throwable
};



/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Fire Mode ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


UENUM(BlueprintType)
enum class EWeaponFiringMode : uint8
{
	Single,Burst,Automatic
};



/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  Projectile Type ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


UENUM(BlueprintType)
enum class EWeaponFireType : uint8
{
	Trace,Projectile
};