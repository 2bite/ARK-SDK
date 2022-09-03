#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.IsDebugMode
struct UDinoAttackState_Spindles_MinigunBase_C_IsDebugMode_Params
{
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetDamageForSpine
struct UDinoAttackState_Spindles_MinigunBase_C_GetDamageForSpine_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.FireSpine
struct UDinoAttackState_Spindles_MinigunBase_C_FireSpine_Params
{
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.Get Spine Start and End Position
struct UDinoAttackState_Spindles_MinigunBase_C_Get_Spine_Start_and_End_Position_Params
{
	struct FVector                                     Start;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VFXStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VFXEnd;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetAttackIndex
struct UDinoAttackState_Spindles_MinigunBase_C_GetAttackIndex_Params
{
	int                                                AttackIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPShouldEndAttack
struct UDinoAttackState_Spindles_MinigunBase_C_BPShouldEndAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPCanAttack
struct UDinoAttackState_Spindles_MinigunBase_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnEndEvent
struct UDinoAttackState_Spindles_MinigunBase_C_OnEndEvent_Params
{
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnBeginEvent
struct UDinoAttackState_Spindles_MinigunBase_C_OnBeginEvent_Params
{
	class UPrimalAIState**                             InParentState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnTickEvent
struct UDinoAttackState_Spindles_MinigunBase_C_OnTickEvent_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.PrintDPS
struct UDinoAttackState_Spindles_MinigunBase_C_PrintDPS_Params
{
};

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase
struct UDinoAttackState_Spindles_MinigunBase_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
