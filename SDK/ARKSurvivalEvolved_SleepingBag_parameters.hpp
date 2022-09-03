#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SleepingBag_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SleepingBag.SleepingBag_C.BPIsAllowedToBuildEx
struct ASleepingBag_C_BPIsAllowedToBuildEx_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFinalPlacement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bChoosingRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SleepingBag.SleepingBag_C.UserConstructionScript
struct ASleepingBag_C_UserConstructionScript_Params
{
};

// Function SleepingBag.SleepingBag_C.ExecuteUbergraph_SleepingBag
struct ASleepingBag_C_ExecuteUbergraph_SleepingBag_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
