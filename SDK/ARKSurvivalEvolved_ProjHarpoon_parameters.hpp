#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjHarpoon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjHarpoon.ProjHarpoon_C.ReceiveBeginPlay
struct AProjHarpoon_C_ReceiveBeginPlay_Params
{
};

// Function ProjHarpoon.ProjHarpoon_C.ReceiveTick
struct AProjHarpoon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjHarpoon.ProjHarpoon_C.UserConstructionScript
struct AProjHarpoon_C_UserConstructionScript_Params
{
};

// Function ProjHarpoon.ProjHarpoon_C.ExecuteUbergraph_ProjHarpoon
struct AProjHarpoon_C_ExecuteUbergraph_ProjHarpoon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
