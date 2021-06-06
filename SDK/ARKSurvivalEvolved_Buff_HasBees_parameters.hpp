#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HasBees_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_HasBees.Buff_HasBees_C.BPActivated
struct ABuff_HasBees_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HasBees.Buff_HasBees_C.BuffTickServer
struct ABuff_HasBees_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HasBees.Buff_HasBees_C.UserConstructionScript
struct ABuff_HasBees_C_UserConstructionScript_Params
{
};

// Function Buff_HasBees.Buff_HasBees_C.ExecuteUbergraph_Buff_HasBees
struct ABuff_HasBees_C_ExecuteUbergraph_Buff_HasBees_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
