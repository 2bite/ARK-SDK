#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImpaledByStego_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BuffTickClient
struct ABuff_ImpaledByStego_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BuffTickServer
struct ABuff_ImpaledByStego_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BPDeactivated
struct ABuff_ImpaledByStego_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.BPSetupForInstigator
struct ABuff_ImpaledByStego_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.UserConstructionScript
struct ABuff_ImpaledByStego_C_UserConstructionScript_Params
{
};

// Function Buff_ImpaledByStego.Buff_ImpaledByStego_C.ExecuteUbergraph_Buff_ImpaledByStego
struct ABuff_ImpaledByStego_C_ExecuteUbergraph_Buff_ImpaledByStego_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
