#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Scout_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Scout.Buff_Scout_C.BuffTickClient
struct ABuff_Scout_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Scout.Buff_Scout_C.UserConstructionScript
struct ABuff_Scout_C_UserConstructionScript_Params
{
};

// Function Buff_Scout.Buff_Scout_C.ExecuteUbergraph_Buff_Scout
struct ABuff_Scout_C_ExecuteUbergraph_Buff_Scout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
