#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunAOE_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.IsDebugMode
struct UDinoAttackState_Spindles_MinigunAOE_C_IsDebugMode_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPShouldEndAttack
struct UDinoAttackState_Spindles_MinigunAOE_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.GetDamageForSpine
struct UDinoAttackState_Spindles_MinigunAOE_C_GetDamageForSpine_Params
{
	class APrimalCharacter**                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedHitSpine
struct UDinoAttackState_Spindles_MinigunAOE_C_FireGuaranteedHitSpine_Params
{
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPCanAttack
struct UDinoAttackState_Spindles_MinigunAOE_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnEndEvent
struct UDinoAttackState_Spindles_MinigunAOE_C_OnEndEvent_Params
{
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnBeginEvent
struct UDinoAttackState_Spindles_MinigunAOE_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.Get Spine Start and End Position
struct UDinoAttackState_Spindles_MinigunAOE_C_Get_Spine_Start_and_End_Position_Params
{
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VFXStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VFXEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireRandomSpines
struct UDinoAttackState_Spindles_MinigunAOE_C_FireRandomSpines_Params
{
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedSpines
struct UDinoAttackState_Spindles_MinigunAOE_C_FireGuaranteedSpines_Params
{
};

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE
struct UDinoAttackState_Spindles_MinigunAOE_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
