#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekGrenadeLauncher_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotDifference
struct AWeapTekGrenadeLauncher_C_GetSlotDifference_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetCurrentSlotAdvancement
struct AWeapTekGrenadeLauncher_C_GetCurrentSlotAdvancement_Params
{
	int                                                CurrentSlot;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Remainder;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedFullReload
struct AWeapTekGrenadeLauncher_C_FinishedFullReload_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.CanReloadLauncher
struct AWeapTekGrenadeLauncher_C_CanReloadLauncher_Params
{
	bool                                               bCanReload;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideRootRotationOffset
struct AWeapTekGrenadeLauncher_C_BPOverrideRootRotationOffset_Params
{
	struct FRotator*                                   InRootRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPCanEquip
struct AWeapTekGrenadeLauncher_C_BPCanEquip_Params
{
	class AShooterCharacter**                          ByCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOnSpawnedProjectile
struct AWeapTekGrenadeLauncher_C_BPOnSpawnedProjectile_Params
{
	class AShooterProjectile**                         Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveDestroyed
struct AWeapTekGrenadeLauncher_C_ReceiveDestroyed_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientInit
struct AWeapTekGrenadeLauncher_C_ClientInit_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.FinishedReloadSequence
struct AWeapTekGrenadeLauncher_C_FinishedReloadSequence_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyHeatLevel
struct AWeapTekGrenadeLauncher_C_ModifyHeatLevel_Params
{
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetReloadAnim
struct AWeapTekGrenadeLauncher_C_GetReloadAnim_Params
{
	int                                                FromSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponAnim                                 Anim;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileArcVisibility
struct AWeapTekGrenadeLauncher_C_SetProjectileArcVisibility_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateProjectileArc
struct AWeapTekGrenadeLauncher_C_UpdateProjectileArc_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPGetTPVCameraOffset
struct AWeapTekGrenadeLauncher_C_BPGetTPVCameraOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPOverrideAimDirection
struct AWeapTekGrenadeLauncher_C_BPOverrideAimDirection_Params
{
	struct FVector                                     DesiredAimDirection;                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UpdateSlotMeshes
struct AWeapTekGrenadeLauncher_C_UpdateSlotMeshes_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncAmmoInClipValue
struct AWeapTekGrenadeLauncher_C_SyncAmmoInClipValue_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveTick
struct AWeapTekGrenadeLauncher_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetSlotInfo
struct AWeapTekGrenadeLauncher_C_GetSlotInfo_Params
{
	int                                                SlotIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GotValidSlotData;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	double                                             LastFiredNetworkTime;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AmmoLoaded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SaveAmmoToItem
struct AWeapTekGrenadeLauncher_C_SaveAmmoToItem_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.LoadAmmoFromItem
struct AWeapTekGrenadeLauncher_C_LoadAmmoFromItem_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SetProjectileSlotType
struct AWeapTekGrenadeLauncher_C_SetProjectileSlotType_Params
{
	int                                                SlotIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetProjectileTypeFromItem
struct AWeapTekGrenadeLauncher_C_GetProjectileTypeFromItem_Params
{
	class UClass*                                      ItemType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ProjectileType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartSecondaryActionEvent
struct AWeapTekGrenadeLauncher_C_StartSecondaryActionEvent_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BP_OnReloadNotify
struct AWeapTekGrenadeLauncher_C_BP_OnReloadNotify_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ModifyAmmoQuantityInInventory
struct AWeapTekGrenadeLauncher_C_ModifyAmmoQuantityInInventory_Params
{
	class UClass*                                      AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddAmmo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReceiveBeginPlay
struct AWeapTekGrenadeLauncher_C_ReceiveBeginPlay_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetAmmoCountOfType
struct AWeapTekGrenadeLauncher_C_GetAmmoCountOfType_Params
{
	class UClass*                                      AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AvailableAmmo;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.GetNextAvailableSlot
struct AWeapTekGrenadeLauncher_C_GetNextAvailableSlot_Params
{
	bool                                               SlotIsValid;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIdx;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToAdvance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPWeaponCanFire
struct AWeapTekGrenadeLauncher_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ReloadProjectiles
struct AWeapTekGrenadeLauncher_C_ReloadProjectiles_Params
{
	int                                                NumReloadedSlots;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPFiredWeapon
struct AWeapTekGrenadeLauncher_C_BPFiredWeapon_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPSelectProjectileToFire
struct AWeapTekGrenadeLauncher_C_BPSelectProjectileToFire_Params
{
	class UClass*                                      ProjectileClassOverride;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   FireSoundOverride;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnOnClient;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideMaxSpeed;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.StartUnequipEvent
struct AWeapTekGrenadeLauncher_C_StartUnequipEvent_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BPStartEquippedNotify
struct AWeapTekGrenadeLauncher_C_BPStartEquippedNotify_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.UserConstructionScript
struct AWeapTekGrenadeLauncher_C_UserConstructionScript_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlots
struct AWeapTekGrenadeLauncher_C_ClientUpdateSlots_Params
{
	TArray<struct FTekGrenadeLauncherSlot>             UpdatedSlots;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.SyncSlots
struct AWeapTekGrenadeLauncher_C_SyncSlots_Params
{
	bool                                               bJustFiredGrenade;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestSwitchAmmoType
struct AWeapTekGrenadeLauncher_C_ServerRequestSwitchAmmoType_Params
{
	int                                                SlotIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewAmmoType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientPlayReloadAnim
struct AWeapTekGrenadeLauncher_C_ClientPlayReloadAnim_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifySetArcDisplay
struct AWeapTekGrenadeLauncher_C_ServerNotifySetArcDisplay_Params
{
	bool                                               ShowArcDisplay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ToggleArcDisplay
struct AWeapTekGrenadeLauncher_C_ToggleArcDisplay_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestAdvanceSlot
struct AWeapTekGrenadeLauncher_C_ServerRequestAdvanceSlot_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ClientUpdateSlotMeshes
struct AWeapTekGrenadeLauncher_C_ClientUpdateSlotMeshes_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerNotifyReplicationReady
struct AWeapTekGrenadeLauncher_C_ServerNotifyReplicationReady_Params
{
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature
struct AWeapTekGrenadeLauncher_C_BndEvt__TickingHelper1_K2Node_ComponentBoundEvent_252_TickingHelperDelegate__DelegateSignature_Params
{
	class UTickingHelperComponent*                     TickingComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ServerRequestUnloadSlot
struct AWeapTekGrenadeLauncher_C_ServerRequestUnloadSlot_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapTekGrenadeLauncher.WeapTekGrenadeLauncher_C.ExecuteUbergraph_WeapTekGrenadeLauncher
struct AWeapTekGrenadeLauncher_C_ExecuteUbergraph_WeapTekGrenadeLauncher_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
