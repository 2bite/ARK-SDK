#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OverrideVelocity_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPDeactivated
struct ABuff_OverrideVelocity_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPOverrideCharacterNewFallVelocity
struct ABuff_OverrideVelocity_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.UserConstructionScript
struct ABuff_OverrideVelocity_C_UserConstructionScript_Params
{
};

// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.ExecuteUbergraph_Buff_OverrideVelocity
struct ABuff_OverrideVelocity_C_ExecuteUbergraph_Buff_OverrideVelocity_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
