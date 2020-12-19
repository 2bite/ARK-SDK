#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NoFallDamage_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_NoFallDamage.Buff_NoFallDamage_C.BPDeactivated
struct ABuff_NoFallDamage_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NoFallDamage.Buff_NoFallDamage_C.BPSetupForInstigator
struct ABuff_NoFallDamage_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NoFallDamage.Buff_NoFallDamage_C.UserConstructionScript
struct ABuff_NoFallDamage_C_UserConstructionScript_Params
{
};

// Function Buff_NoFallDamage.Buff_NoFallDamage_C.ExecuteUbergraph_Buff_NoFallDamage
struct ABuff_NoFallDamage_C_ExecuteUbergraph_Buff_NoFallDamage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
