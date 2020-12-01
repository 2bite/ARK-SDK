#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tusoteuthis_Character_BP_CaveBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPTryMultiUse
struct ATusoteuthis_Character_BP_CaveBase_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPGetMultiUseEntries
struct ATusoteuthis_Character_BP_CaveBase_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.PrepareForCrushingPrey
struct ATusoteuthis_Character_BP_CaveBase_C_PrepareForCrushingPrey_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPNotifySetRider
struct ATusoteuthis_Character_BP_CaveBase_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPNotifyClearRider
struct ATusoteuthis_Character_BP_CaveBase_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPSetupTamed
struct ATusoteuthis_Character_BP_CaveBase_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.DoesPreyEscape
struct ATusoteuthis_Character_BP_CaveBase_C_DoesPreyEscape_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CanGrab
struct ATusoteuthis_Character_BP_CaveBase_C_CanGrab_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPFedWakingTameEvent
struct ATusoteuthis_Character_BP_CaveBase_C_BPFedWakingTameEvent_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.GetDefaultDino
struct ATusoteuthis_Character_BP_CaveBase_C_GetDefaultDino_Params
{
	class ATusoteuthis_Character_BP_C*                 Ref;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.OnRep_UTurnTargetRot
struct ATusoteuthis_Character_BP_CaveBase_C_OnRep_UTurnTargetRot_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BlueprintAnimNotifyCustomEvent
struct ATusoteuthis_Character_BP_CaveBase_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CheckForIsCrushingPrey
struct ATusoteuthis_Character_BP_CaveBase_C_CheckForIsCrushingPrey_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.Update MovementByTurnState
struct ATusoteuthis_Character_BP_CaveBase_C_Update_MovementByTurnState_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.OnRep_bIsCrushingPrey
struct ATusoteuthis_Character_BP_CaveBase_C_OnRep_bIsCrushingPrey_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPDoAttack
struct ATusoteuthis_Character_BP_CaveBase_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CheckForResetTurn
struct ATusoteuthis_Character_BP_CaveBase_C_CheckForResetTurn_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BPTimerServer
struct ATusoteuthis_Character_BP_CaveBase_C_BPTimerServer_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.CanTargetBeCrushed
struct ATusoteuthis_Character_BP_CaveBase_C_CanTargetBeCrushed_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ResetTurnState
struct ATusoteuthis_Character_BP_CaveBase_C_ResetTurnState_Params
{
	bool                                               ForceReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnAround
struct ATusoteuthis_Character_BP_CaveBase_C_TurnAround_Params
{
	bool                                               newTurnState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.NetSetIsTurnedAround
struct ATusoteuthis_Character_BP_CaveBase_C_NetSetIsTurnedAround_Params
{
	bool                                               newValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.OnRep_bIsTurnedAround
struct ATusoteuthis_Character_BP_CaveBase_C_OnRep_bIsTurnedAround_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TryCrushingPrey
struct ATusoteuthis_Character_BP_CaveBase_C_TryCrushingPrey_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.RemoveCarryBuffFromPrey
struct ATusoteuthis_Character_BP_CaveBase_C_RemoveCarryBuffFromPrey_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.SyphonHealthFromPrey
struct ATusoteuthis_Character_BP_CaveBase_C_SyphonHealthFromPrey_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.DropPrey
struct ATusoteuthis_Character_BP_CaveBase_C_DropPrey_Params
{
	bool                                               playDropAnim;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceSuccess;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.IsCrushingValidCharacter
struct ATusoteuthis_Character_BP_CaveBase_C_IsCrushingValidCharacter_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BlueprintCanAttack
struct ATusoteuthis_Character_BP_CaveBase_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.BlueprintCanRiderAttack
struct ATusoteuthis_Character_BP_CaveBase_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ReceiveAnyDamage
struct ATusoteuthis_Character_BP_CaveBase_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.UserConstructionScript
struct ATusoteuthis_Character_BP_CaveBase_C_UserConstructionScript_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnMeshAround__FinishedFunc
struct ATusoteuthis_Character_BP_CaveBase_C_TurnMeshAround__FinishedFunc_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnMeshAround__UpdateFunc
struct ATusoteuthis_Character_BP_CaveBase_C_TurnMeshAround__UpdateFunc_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnMeshAround__Turnt__EventFunc
struct ATusoteuthis_Character_BP_CaveBase_C_TurnMeshAround__Turnt__EventFunc_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnActorAround__FinishedFunc
struct ATusoteuthis_Character_BP_CaveBase_C_TurnActorAround__FinishedFunc_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.TurnActorAround__UpdateFunc
struct ATusoteuthis_Character_BP_CaveBase_C_TurnActorAround__UpdateFunc_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.InpActEvt_Jump_K2Node_InputActionEvent_220
struct ATusoteuthis_Character_BP_CaveBase_C_InpActEvt_Jump_K2Node_InputActionEvent_220_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.AnimNotify_ParalyzePrey
struct ATusoteuthis_Character_BP_CaveBase_C_AnimNotify_ParalyzePrey_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.InkAttackFX
struct ATusoteuthis_Character_BP_CaveBase_C_InkAttackFX_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.PlayAttackTurnTimeline
struct ATusoteuthis_Character_BP_CaveBase_C_PlayAttackTurnTimeline_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ReceiveBeginPlay
struct ATusoteuthis_Character_BP_CaveBase_C_ReceiveBeginPlay_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.Multi_UpdateMovementByTurnState
struct ATusoteuthis_Character_BP_CaveBase_C_Multi_UpdateMovementByTurnState_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.AnimNotify_DamagePrey
struct ATusoteuthis_Character_BP_CaveBase_C_AnimNotify_DamagePrey_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.PlayUTurnTimeline
struct ATusoteuthis_Character_BP_CaveBase_C_PlayUTurnTimeline_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.Server_JumpPressed
struct ATusoteuthis_Character_BP_CaveBase_C_Server_JumpPressed_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.UpdateMovementAfterDelay
struct ATusoteuthis_Character_BP_CaveBase_C_UpdateMovementAfterDelay_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.AnimNotify_GrabAllies
struct ATusoteuthis_Character_BP_CaveBase_C_AnimNotify_GrabAllies_Params
{
};

// Function Tusoteuthis_Character_BP_CaveBase.Tusoteuthis_Character_BP_CaveBase_C.ExecuteUbergraph_Tusoteuthis_Character_BP_CaveBase
struct ATusoteuthis_Character_BP_CaveBase_C_ExecuteUbergraph_Tusoteuthis_Character_BP_CaveBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
