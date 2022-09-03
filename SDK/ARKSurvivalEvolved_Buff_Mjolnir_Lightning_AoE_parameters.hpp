#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Mjolnir_Lightning_AoE_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.IsActorInEffectiveRange
struct ABuff_Mjolnir_Lightning_AoE_C_IsActorInEffectiveRange_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInRange;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.InitializeAoE
struct ABuff_Mjolnir_Lightning_AoE_C_InitializeAoE_Params
{
};

// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.CanAffectCharacter
struct ABuff_Mjolnir_Lightning_AoE_C_CanAffectCharacter_Params
{
	class APrimalCharacter*                            characterToAffect;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canStun;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.BPExcludeAoEActor
struct ABuff_Mjolnir_Lightning_AoE_C_BPExcludeAoEActor_Params
{
	class AActor**                                     ActorToConsider;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.UserConstructionScript
struct ABuff_Mjolnir_Lightning_AoE_C_UserConstructionScript_Params
{
};

// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE
struct ABuff_Mjolnir_Lightning_AoE_C_ExecuteUbergraph_Buff_Mjolnir_Lightning_AoE_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Mjolnir_Lightning_AoE.Buff_Mjolnir_Lightning_AoE_C.OnNewActorAdded__DelegateSignature
struct ABuff_Mjolnir_Lightning_AoE_C_OnNewActorAdded__DelegateSignature_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
