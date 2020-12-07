#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Kaprosuchus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTryMultiUse
struct AKaprosuchus_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPGetMultiUseEntries
struct AKaprosuchus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Play Leap FX
struct AKaprosuchus_Character_BP_C_Play_Leap_FX_Params
{
	int                                                MovementMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLeapStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.EvaluateHeightInWater
struct AKaprosuchus_Character_BP_C_EvaluateHeightInWater_Params
{
	bool                                               NearSurface;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPShouldLimitForwardDirection
struct AKaprosuchus_Character_BP_C_BPShouldLimitForwardDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPModifyForwardDirectionInput
struct AKaprosuchus_Character_BP_C_BPModifyForwardDirectionInput_Params
{
	struct FVector                                     directionInput;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerServer
struct AKaprosuchus_Character_BP_C_BPTimerServer_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanRiderAttack
struct AKaprosuchus_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.CalcLeapImpulse
struct AKaprosuchus_Character_BP_C_CalcLeapImpulse_Params
{
	struct FVector                                     RetImpulse;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanAttack
struct AKaprosuchus_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ChangeGroundSwimAttackAnims
struct AKaprosuchus_Character_BP_C_ChangeGroundSwimAttackAnims_Params
{
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerNonDedicated
struct AKaprosuchus_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPOnMovementModeChangedNotify
struct AKaprosuchus_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetLeapRotation
struct AKaprosuchus_Character_BP_C_SetLeapRotation_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.UserConstructionScript
struct AKaprosuchus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapAttack
struct AKaprosuchus_Character_BP_C_AnimNotify_StartLeapAttack_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapGrab
struct AKaprosuchus_Character_BP_C_AnimNotify_StartLeapGrab_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_EndLeap
struct AKaprosuchus_Character_BP_C_AnimNotify_EndLeap_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ClearLeapAttack
struct AKaprosuchus_Character_BP_C_ClearLeapAttack_Params
{
	int                                                LandingInMovementMode;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_ClearLeap
struct AKaprosuchus_Character_BP_C_Multi_ClearLeap_Params
{
	bool                                               IsWalking;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ResetStartLeap
struct AKaprosuchus_Character_BP_C_ResetStartLeap_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StopHoldingCharacter
struct AKaprosuchus_Character_BP_C_StopHoldingCharacter_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StartGrab
struct AKaprosuchus_Character_BP_C_StartGrab_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_StopHoldingCharacter
struct AKaprosuchus_Character_BP_C_Multi_StopHoldingCharacter_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetIgnoreMoveInput
struct AKaprosuchus_Character_BP_C_SetIgnoreMoveInput_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ContinueMomentum
struct AKaprosuchus_Character_BP_C_ContinueMomentum_Params
{
};

// Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ExecuteUbergraph_Kaprosuchus_Character_BP
struct AKaprosuchus_Character_BP_C_ExecuteUbergraph_Kaprosuchus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
