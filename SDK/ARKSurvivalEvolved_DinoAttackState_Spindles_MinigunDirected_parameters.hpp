#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunDirected_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPGetDebugInfoString
struct UDinoAttackState_Spindles_MinigunDirected_C_BPGetDebugInfoString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetRandomVectorOnCircle
struct UDinoAttackState_Spindles_MinigunDirected_C_GetRandomVectorOnCircle_Params
{
	float                                              MinRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RandomVector;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPShouldEndAttack
struct UDinoAttackState_Spindles_MinigunDirected_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnEndEvent
struct UDinoAttackState_Spindles_MinigunDirected_C_OnEndEvent_Params
{
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnBeginEvent
struct UDinoAttackState_Spindles_MinigunDirected_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnCanUseStateEvent
struct UDinoAttackState_Spindles_MinigunDirected_C_OnCanUseStateEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPCanAttack
struct UDinoAttackState_Spindles_MinigunDirected_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetAttackIndex
struct UDinoAttackState_Spindles_MinigunDirected_C_GetAttackIndex_Params
{
	int                                                AttackIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.Get Spine Start and End Position
struct UDinoAttackState_Spindles_MinigunDirected_C_Get_Spine_Start_and_End_Position_Params
{
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VFXStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VFXEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.UpdateAimedActors
struct UDinoAttackState_Spindles_MinigunDirected_C_UpdateAimedActors_Params
{
};

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected
struct UDinoAttackState_Spindles_MinigunDirected_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
