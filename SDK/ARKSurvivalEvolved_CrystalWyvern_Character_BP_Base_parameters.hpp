#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvern_Character_BP_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OverrideDinoName
struct ACrystalWyvern_Character_BP_Base_C_BP_OverrideDinoName_Params
{
	class FString*                                     CurrentDinoName;                                          // (Parm, ZeroConstructor)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.OnRep_bIsAggressiveOverride
struct ACrystalWyvern_Character_BP_Base_C_OnRep_bIsAggressiveOverride_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAggressiveOverride
struct ACrystalWyvern_Character_BP_Base_C_UpdateAggressiveOverride_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AllowGrappling
struct ACrystalWyvern_Character_BP_Base_C_AllowGrappling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.TamingBasedCharsCheck
struct ACrystalWyvern_Character_BP_Base_C_TamingBasedCharsCheck_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayClearIsTamingFlyingHigh
struct ACrystalWyvern_Character_BP_Base_C_DelayClearIsTamingFlyingHigh_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SetIsTamingFlyingHigh
struct ACrystalWyvern_Character_BP_Base_C_SetIsTamingFlyingHigh_Params
{
	bool                                               IsTamingFlyingHigh;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPRemoveCharacterSnapshot
struct ACrystalWyvern_Character_BP_Base_C_BPRemoveCharacterSnapshot_Params
{
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPApplyCharacterSnapshot
struct ACrystalWyvern_Character_BP_Base_C_BPApplyCharacterSnapshot_Params
{
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxExtent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Pose;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUntamedConsumeFoodItem
struct ACrystalWyvern_Character_BP_Base_C_BPUntamedConsumeFoodItem_Params
{
	class UPrimalItem**                                foodItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPFedWakingTameEvent
struct ACrystalWyvern_Character_BP_Base_C_BPFedWakingTameEvent_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.GetCrystalMeshes
struct ACrystalWyvern_Character_BP_Base_C_GetCrystalMeshes_Params
{
	TArray<class UStaticMeshComponent*>                CrystalMeshComps;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayDissolveCrystalMesh
struct ACrystalWyvern_Character_BP_Base_C_DelayDissolveCrystalMesh_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExtraFlameFXSetup
struct ACrystalWyvern_Character_BP_Base_C_ExtraFlameFXSetup_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPClientDoMultiUse
struct ACrystalWyvern_Character_BP_Base_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayAggroToMilkingChar
struct ACrystalWyvern_Character_BP_Base_C_DelayAggroToMilkingChar_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTryMultiUse
struct ACrystalWyvern_Character_BP_Base_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPGetMultiUseEntries
struct ACrystalWyvern_Character_BP_Base_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OnSetDeath
struct ACrystalWyvern_Character_BP_Base_C_BP_OnSetDeath_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTimerNonDedicated
struct ACrystalWyvern_Character_BP_Base_C_BPTimerNonDedicated_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPModifyAimOffsetTargetLocation
struct ACrystalWyvern_Character_BP_Base_C_BPModifyAimOffsetTargetLocation_Params
{
	struct FVector                                     AimTargetLocation;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPDinoPostBeginPlay
struct ACrystalWyvern_Character_BP_Base_C_BPDinoPostBeginPlay_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateCrystalsAndParticles
struct ACrystalWyvern_Character_BP_Base_C_UpdateCrystalsAndParticles_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAnimBP
struct ACrystalWyvern_Character_BP_Base_C_UpdateAnimBP_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPSetupTamed
struct ACrystalWyvern_Character_BP_Base_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SpawnNestEgg
struct ACrystalWyvern_Character_BP_Base_C_SpawnNestEgg_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPCharacterUnsleeped
struct ACrystalWyvern_Character_BP_Base_C_BPCharacterUnsleeped_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeAdult
struct ACrystalWyvern_Character_BP_Base_C_BPBecomeAdult_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeBaby
struct ACrystalWyvern_Character_BP_Base_C_BPBecomeBaby_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UserConstructionScript
struct ACrystalWyvern_Character_BP_Base_C_UserConstructionScript_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__FinishedFunc
struct ACrystalWyvern_Character_BP_Base_C_Timeline_ManualDissolve__FinishedFunc_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__UpdateFunc
struct ACrystalWyvern_Character_BP_Base_C_Timeline_ManualDissolve__UpdateFunc_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__FinishedFunc
struct ACrystalWyvern_Character_BP_Base_C_Timeline_DissolveSkull__FinishedFunc_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__UpdateFunc
struct ACrystalWyvern_Character_BP_Base_C_Timeline_DissolveSkull__UpdateFunc_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUnstasis
struct ACrystalWyvern_Character_BP_Base_C_BPUnstasis_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FlameFXStart
struct ACrystalWyvern_Character_BP_Base_C_AnimNotify_FlameFXStart_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FXTakeOff
struct ACrystalWyvern_Character_BP_Base_C_AnimNotify_FXTakeOff_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ManualDissolve
struct ACrystalWyvern_Character_BP_Base_C_ManualDissolve_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ReceiveBeginPlay
struct ACrystalWyvern_Character_BP_Base_C_ReceiveBeginPlay_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DissolveSkull
struct ACrystalWyvern_Character_BP_Base_C_DissolveSkull_Params
{
};

// Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Base
struct ACrystalWyvern_Character_BP_Base_C_ExecuteUbergraph_CrystalWyvern_Character_BP_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
