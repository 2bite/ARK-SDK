#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AttackStateRanged_Fireball_Cherufe_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPCanAttack
struct UAttackStateRanged_Fireball_Cherufe_C_BPCanAttack_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.StartAnimationStateEvent
struct UAttackStateRanged_Fireball_Cherufe_C_StartAnimationStateEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetRole>*                             Role;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttack
struct UAttackStateRanged_Fireball_Cherufe_C_BPRangedAttack_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.BPRangedAttackOnBegin
struct UAttackStateRanged_Fireball_Cherufe_C_BPRangedAttackOnBegin_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AttackStateRanged_Fireball_Cherufe.AttackStateRanged_Fireball_Cherufe_C.ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe
struct UAttackStateRanged_Fireball_Cherufe_C_ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
