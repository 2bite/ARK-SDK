#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjIceNeedle_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjIceNeedle.ProjIceNeedle_C.UserConstructionScript
struct AProjIceNeedle_C_UserConstructionScript_Params
{
};

// Function ProjIceNeedle.ProjIceNeedle_C.ReceiveBeginPlay
struct AProjIceNeedle_C_ReceiveBeginPlay_Params
{
};

// Function ProjIceNeedle.ProjIceNeedle_C.ReceiveEndPlay
struct AProjIceNeedle_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjIceNeedle.ProjIceNeedle_C.ExecuteUbergraph_ProjIceNeedle
struct AProjIceNeedle_C_ExecuteUbergraph_ProjIceNeedle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
