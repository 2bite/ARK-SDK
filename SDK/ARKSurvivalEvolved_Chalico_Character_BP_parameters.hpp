#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Chalico_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Chalico_Character_BP.Chalico_Character_BP_C.BPOnAnimPlayedNotify
struct AChalico_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.BlueprintCanAttack
struct AChalico_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.CheckForNewBiome
struct AChalico_Character_BP_C_CheckForNewBiome_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.SelectMudMesh
struct AChalico_Character_BP_C_SelectMudMesh_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.HasConflictWithAI
struct AChalico_Character_BP_C_HasConflictWithAI_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.CanLookForChalicos
struct AChalico_Character_BP_C_CanLookForChalicos_Params
{
	bool                                               canLook;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.DeactivateThrowMode
struct AChalico_Character_BP_C_DeactivateThrowMode_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.ReactToMudHit
struct AChalico_Character_BP_C_ReactToMudHit_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.Is FriendlyTarget in Range
struct AChalico_Character_BP_C_Is_FriendlyTarget_in_Range_Params
{
	class AActor*                                      mudTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canUseMud;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.CanThrowMud
struct AChalico_Character_BP_C_CanThrowMud_Params
{
	class AActor*                                      mudTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canThrow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.CanStandUp
struct AChalico_Character_BP_C_CanStandUp_Params
{
	bool                                               canStand;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.BPPreventRiding
struct AChalico_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.BPGetMultiUseEntries
struct AChalico_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.BPTryMultiUse
struct AChalico_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.ShouldStandUp
struct AChalico_Character_BP_C_ShouldStandUp_Params
{
	bool                                               StandUp;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.BPTimerServer
struct AChalico_Character_BP_C_BPTimerServer_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.CanSitDown
struct AChalico_Character_BP_C_CanSitDown_Params
{
	bool                                               canSit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.Look for Chalicos
struct AChalico_Character_BP_C_Look_for_Chalicos_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.UserConstructionScript
struct AChalico_Character_BP_C_UserConstructionScript_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AChalico_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.StandUp
struct AChalico_Character_BP_C_StandUp_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.TrySittingDown
struct AChalico_Character_BP_C_TrySittingDown_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.TryStandingUp
struct AChalico_Character_BP_C_TryStandingUp_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.SetChalicoFocus
struct AChalico_Character_BP_C_SetChalicoFocus_Params
{
	class AActor*                                      NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.ClearChalicoFocus
struct AChalico_Character_BP_C_ClearChalicoFocus_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.StartMudThrow
struct AChalico_Character_BP_C_StartMudThrow_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.CloseRetaliation
struct AChalico_Character_BP_C_CloseRetaliation_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.TryThrowMud
struct AChalico_Character_BP_C_TryThrowMud_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.OnSittingEvent
struct AChalico_Character_BP_C_OnSittingEvent_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.OnThrowMudEvent
struct AChalico_Character_BP_C_OnThrowMudEvent_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.ReceiveBeginPlay
struct AChalico_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.BPUnstasis
struct AChalico_Character_BP_C_BPUnstasis_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.SitDown
struct AChalico_Character_BP_C_SitDown_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.QuickLoadSitState
struct AChalico_Character_BP_C_QuickLoadSitState_Params
{
};

// Function Chalico_Character_BP.Chalico_Character_BP_C.ExecuteUbergraph_Chalico_Character_BP
struct AChalico_Character_BP_C_ExecuteUbergraph_Chalico_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
