#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMinigun_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapMinigun.WeapMinigun_C.GetHudData
struct AWeapMinigun_C_GetHudData_Params
{
	class UTexture2D*                                  AmmoIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoPerClip;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInTurretMode;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HideAmmoCountHUDElement;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoItemTemplate;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.VerifyShotTimestamp
struct AWeapMinigun_C_VerifyShotTimestamp_Params
{
};

// Function WeapMinigun.WeapMinigun_C.BPSpawnImpactEffects
struct AWeapMinigun_C_BPSpawnImpactEffects_Params
{
	struct FHitResult                                  Impact;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDir;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bIsEntryHit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponMaxRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.BPOnBurstStarted
struct AWeapMinigun_C_BPOnBurstStarted_Params
{
};

// Function WeapMinigun.WeapMinigun_C.HasAnyAmmo
struct AWeapMinigun_C_HasAnyAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.UpdateSpinState
struct AWeapMinigun_C_UpdateSpinState_Params
{
};

// Function WeapMinigun.WeapMinigun_C.BPOnStartTargeting
struct AWeapMinigun_C_BPOnStartTargeting_Params
{
	bool*                                              bFromGamepadLeft;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.UpdateItemData
struct AWeapMinigun_C_UpdateItemData_Params
{
};

// Function WeapMinigun.WeapMinigun_C.OnAttachedToPawn
struct AWeapMinigun_C_OnAttachedToPawn_Params
{
};

// Function WeapMinigun.WeapMinigun_C.CreateDynamicMats
struct AWeapMinigun_C_CreateDynamicMats_Params
{
};

// Function WeapMinigun.WeapMinigun_C.UpdateMaterials
struct AWeapMinigun_C_UpdateMaterials_Params
{
};

// Function WeapMinigun.WeapMinigun_C.AllowTargeting
struct AWeapMinigun_C_AllowTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.AnimAllowsFire
struct AWeapMinigun_C_AnimAllowsFire_Params
{
	bool                                               AllowsFire;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.BPAppliedPrimalItemToWeapon
struct AWeapMinigun_C_BPAppliedPrimalItemToWeapon_Params
{
};

// Function WeapMinigun.WeapMinigun_C.BPAnimNotifyCustomEvent
struct AWeapMinigun_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.InitPlayerController
struct AWeapMinigun_C_InitPlayerController_Params
{
};

// Function WeapMinigun.WeapMinigun_C.BPWeaponCanFire
struct AWeapMinigun_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.BPFiredWeapon
struct AWeapMinigun_C_BPFiredWeapon_Params
{
};

// Function WeapMinigun.WeapMinigun_C.StartSecondaryActionEvent
struct AWeapMinigun_C_StartSecondaryActionEvent_Params
{
};

// Function WeapMinigun.WeapMinigun_C.BPTryFireWeapon
struct AWeapMinigun_C_BPTryFireWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.BPOnBurstFinished
struct AWeapMinigun_C_BPOnBurstFinished_Params
{
};

// Function WeapMinigun.WeapMinigun_C.BPGetCurrentSpread
struct AWeapMinigun_C_BPGetCurrentSpread_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.UserConstructionScript
struct AWeapMinigun_C_UserConstructionScript_Params
{
};

// Function WeapMinigun.WeapMinigun_C.ReceiveTick
struct AWeapMinigun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.Tick_ApplyMovementRestrictions
struct AWeapMinigun_C_Tick_ApplyMovementRestrictions_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.Tick_SetIsUpToSpeed
struct AWeapMinigun_C_Tick_SetIsUpToSpeed_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.Server_SetIsAttemptingToFire
struct AWeapMinigun_C_Server_SetIsAttemptingToFire_Params
{
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.TickOverheat
struct AWeapMinigun_C_TickOverheat_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.ReceiveBeginPlay
struct AWeapMinigun_C_ReceiveBeginPlay_Params
{
};

// Function WeapMinigun.WeapMinigun_C.ReceiveDestroyed
struct AWeapMinigun_C_ReceiveDestroyed_Params
{
};

// Function WeapMinigun.WeapMinigun_C.SecondaryAction
struct AWeapMinigun_C_SecondaryAction_Params
{
};

// Function WeapMinigun.WeapMinigun_C.FinishReload
struct AWeapMinigun_C_FinishReload_Params
{
};

// Function WeapMinigun.WeapMinigun_C.StartReload
struct AWeapMinigun_C_StartReload_Params
{
};

// Function WeapMinigun.WeapMinigun_C.SetAnimIsFiring
struct AWeapMinigun_C_SetAnimIsFiring_Params
{
};

// Function WeapMinigun.WeapMinigun_C.ClearAnimStates
struct AWeapMinigun_C_ClearAnimStates_Params
{
};

// Function WeapMinigun.WeapMinigun_C.SetTPVFireAnim
struct AWeapMinigun_C_SetTPVFireAnim_Params
{
};

// Function WeapMinigun.WeapMinigun_C.ForceReplicateSpinValue
struct AWeapMinigun_C_ForceReplicateSpinValue_Params
{
};

// Function WeapMinigun.WeapMinigun_C.NetOnOverheated
struct AWeapMinigun_C_NetOnOverheated_Params
{
	bool                                               Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapMinigun.WeapMinigun_C.NetOnThrow
struct AWeapMinigun_C_NetOnThrow_Params
{
};

// Function WeapMinigun.WeapMinigun_C.StartShellLoop
struct AWeapMinigun_C_StartShellLoop_Params
{
};

// Function WeapMinigun.WeapMinigun_C.StopShellLoop
struct AWeapMinigun_C_StopShellLoop_Params
{
};

// Function WeapMinigun.WeapMinigun_C.ExecuteUbergraph_WeapMinigun
struct AWeapMinigun_C_ExecuteUbergraph_WeapMinigun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
