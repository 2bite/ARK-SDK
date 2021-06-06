#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Tent_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Tent.Buff_Tent_C.SetBuffCauser
struct ABuff_Tent_C_SetBuffCauser_Params
{
	class AActor**                                     CausedBy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Tent.Buff_Tent_C.BuffTickServer
struct ABuff_Tent_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Tent.Buff_Tent_C.UserConstructionScript
struct ABuff_Tent_C_UserConstructionScript_Params
{
};

// Function Buff_Tent.Buff_Tent_C.ExecuteUbergraph_Buff_Tent
struct ABuff_Tent_C_ExecuteUbergraph_Buff_Tent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
