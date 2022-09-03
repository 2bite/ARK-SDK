#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRanged_AmargaSpike_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.StartAnimationStateEvent
struct UDinoAttackStateRanged_AmargaSpike_C_StartAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttack
struct UDinoAttackStateRanged_AmargaSpike_C_BPRangedAttack_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.BPRangedAttackOnBegin
struct UDinoAttackStateRanged_AmargaSpike_C_BPRangedAttackOnBegin_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DinoAttackStateRanged_AmargaSpike.DinoAttackStateRanged_AmargaSpike_C.ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike
struct UDinoAttackStateRanged_AmargaSpike_C_ExecuteUbergraph_DinoAttackStateRanged_AmargaSpike_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
