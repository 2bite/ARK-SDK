#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_ProtectedByShield_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BuffTickClient
struct ABuff_TekStrider_ProtectedByShield_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPAdjustRadialDamage
struct ABuff_TekStrider_ProtectedByShield_C_BPAdjustRadialDamage_Params
{
	float*                                             currentDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRadialDamageEvent                          DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.BPSetupForInstigator
struct ABuff_TekStrider_ProtectedByShield_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.UserConstructionScript
struct ABuff_TekStrider_ProtectedByShield_C_UserConstructionScript_Params
{
};

// Function Buff_TekStrider_ProtectedByShield.Buff_TekStrider_ProtectedByShield_C.ExecuteUbergraph_Buff_TekStrider_ProtectedByShield
struct ABuff_TekStrider_ProtectedByShield_C_ExecuteUbergraph_Buff_TekStrider_ProtectedByShield_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
