#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CliffPlatform_Base_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.BPIsAllowedToBuild
struct ACliffPlatform_Base_BP_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.UserConstructionScript
struct ACliffPlatform_Base_BP_C_UserConstructionScript_Params
{
};

// Function CliffPlatform_Base_BP.CliffPlatform_Base_BP_C.ExecuteUbergraph_CliffPlatform_Base_BP
struct ACliffPlatform_Base_BP_C_ExecuteUbergraph_CliffPlatform_Base_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
