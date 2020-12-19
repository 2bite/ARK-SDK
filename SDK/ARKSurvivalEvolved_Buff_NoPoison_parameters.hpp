#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NoPoison_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_NoPoison.Buff_NoPoison_C.BPPreSetupForInstigator
struct ABuff_NoPoison_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NoPoison.Buff_NoPoison_C.UserConstructionScript
struct ABuff_NoPoison_C_UserConstructionScript_Params
{
};

// Function Buff_NoPoison.Buff_NoPoison_C.ExecuteUbergraph_Buff_NoPoison
struct ABuff_NoPoison_C_ExecuteUbergraph_Buff_NoPoison_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
