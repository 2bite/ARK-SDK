#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trope_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trope_AIController_BP.Trope_AIController_BP_C.BPUpdateBestTarget
struct ATrope_AIController_BP_C_BPUpdateBestTarget_Params
{
	class AActor**                                     bestTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              dontSetIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dontSetOut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trope_AIController_BP.Trope_AIController_BP_C.UserConstructionScript
struct ATrope_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Trope_AIController_BP.Trope_AIController_BP_C.ExecuteUbergraph_Trope_AIController_BP
struct ATrope_AIController_BP_C_ExecuteUbergraph_Trope_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
