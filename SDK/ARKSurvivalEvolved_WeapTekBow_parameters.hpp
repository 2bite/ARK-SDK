#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekBow_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapTekBow.WeapTekBow_C.GetAmmoMultiuseEntries
struct AWeapTekBow_C_GetAmmoMultiuseEntries_Params
{
	TArray<struct FMultiUseEntry>                      AmmoWheelEntries;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function WeapTekBow.WeapTekBow_C.GetHudData
struct AWeapTekBow_C_GetHudData_Params
{
	class FString                                      AmmoName;                                                 // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  AmmoIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoCost;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoPerClip;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoTypeIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CurrentAmmoTypeColor;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAccessoryActive;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.BPGetMultiUseEntries
struct AWeapTekBow_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WeapTekBow.WeapTekBow_C.BPClientDoMultiUse
struct AWeapTekBow_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.CycleAmmoTimer
struct AWeapTekBow_C_CycleAmmoTimer_Params
{
};

// Function WeapTekBow.WeapTekBow_C.BPGetCrosshairColor
struct AWeapTekBow_C_BPGetCrosshairColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.BPStartEquippedNotify
struct AWeapTekBow_C_BPStartEquippedNotify_Params
{
};

// Function WeapTekBow.WeapTekBow_C.StartUnequipEvent
struct AWeapTekBow_C_StartUnequipEvent_Params
{
};

// Function WeapTekBow.WeapTekBow_C.ReceiveDestroyed
struct AWeapTekBow_C_ReceiveDestroyed_Params
{
};

// Function WeapTekBow.WeapTekBow_C.OnHideProjectile
struct AWeapTekBow_C_OnHideProjectile_Params
{
};

// Function WeapTekBow.WeapTekBow_C.SpawnFiredFX
struct AWeapTekBow_C_SpawnFiredFX_Params
{
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasInstantHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.GetAmmoCountForAmmoType
struct AWeapTekBow_C_GetAmmoCountForAmmoType_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.BPCanStartFire
struct AWeapTekBow_C_BPCanStartFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.BPWeaponCanFire
struct AWeapTekBow_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.BPAdjustAmmoPerShot
struct AWeapTekBow_C_BPAdjustAmmoPerShot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.UpdateMaxPowerFX
struct AWeapTekBow_C_UpdateMaxPowerFX_Params
{
};

// Function WeapTekBow.WeapTekBow_C.UpdateArrowVisibility
struct AWeapTekBow_C_UpdateArrowVisibility_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.UpdateArrowMesh
struct AWeapTekBow_C_UpdateArrowMesh_Params
{
};

// Function WeapTekBow.WeapTekBow_C.Show Ammo Wheel
struct AWeapTekBow_C_Show_Ammo_Wheel_Params
{
};

// Function WeapTekBow.WeapTekBow_C.SetupProjectileInstantHit
struct AWeapTekBow_C_SetupProjectileInstantHit_Params
{
	class AShooterProjectile*                          Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.AmmoSelected
struct AWeapTekBow_C_AmmoSelected_Params
{
	int                                                AmmoTypeIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.GetAmmoWheelEntries
struct AWeapTekBow_C_GetAmmoWheelEntries_Params
{
	TArray<struct FCustomWheelEntry>                   Entries;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WeapTekBow.WeapTekBow_C.ReceiveTick
struct AWeapTekBow_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.BPOnSpawnedProjectile
struct AWeapTekBow_C_BPOnSpawnedProjectile_Params
{
	class AShooterProjectile**                         Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.BPFiredWeapon
struct AWeapTekBow_C_BPFiredWeapon_Params
{
};

// Function WeapTekBow.WeapTekBow_C.BPSelectProjectileToFire
struct AWeapTekBow_C_BPSelectProjectileToFire_Params
{
	class UClass*                                      ProjectileClassOverride;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   FireSoundOverride;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnOnClient;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideMaxSpeed;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.CycleAmmoType
struct AWeapTekBow_C_CycleAmmoType_Params
{
	bool                                               bBackwards;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.BPDrawHud
struct AWeapTekBow_C_BPDrawHud_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.UserConstructionScript
struct AWeapTekBow_C_UserConstructionScript_Params
{
};

// Function WeapTekBow.WeapTekBow_C.ReceiveBeginPlay
struct AWeapTekBow_C_ReceiveBeginPlay_Params
{
};

// Function WeapTekBow.WeapTekBow_C.RunOnServer_CycleAmmo
struct AWeapTekBow_C_RunOnServer_CycleAmmo_Params
{
	bool                                               bBackwards;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.RunOnServer_InstantHit
struct AWeapTekBow_C_RunOnServer_InstantHit_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm)
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.HoldReloadTimer
struct AWeapTekBow_C_HoldReloadTimer_Params
{
};

// Function WeapTekBow.WeapTekBow_C.RunOnServer_SetAmmo
struct AWeapTekBow_C_RunOnServer_SetAmmo_Params
{
	int                                                AmmoIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.MultiCast_FiredFX
struct AWeapTekBow_C_MultiCast_FiredFX_Params
{
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasInstantHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.DelayedEnableInput
struct AWeapTekBow_C_DelayedEnableInput_Params
{
};

// Function WeapTekBow.WeapTekBow_C.InitItemData
struct AWeapTekBow_C_InitItemData_Params
{
};

// Function WeapTekBow.WeapTekBow_C.NotifyInputEvent_Event
struct AWeapTekBow_C_NotifyInputEvent_Event_Params
{
	class APrimalCharacter*                            ForPrimalCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterInputType>             inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekBow.WeapTekBow_C.UnbindDelegates
struct AWeapTekBow_C_UnbindDelegates_Params
{
};

// Function WeapTekBow.WeapTekBow_C.ExecuteUbergraph_WeapTekBow
struct AWeapTekBow_C_ExecuteUbergraph_WeapTekBow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
