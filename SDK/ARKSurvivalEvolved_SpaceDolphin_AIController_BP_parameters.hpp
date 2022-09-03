#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphin_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.BPUpdateBestTarget
struct ASpaceDolphin_AIController_BP_C_BPUpdateBestTarget_Params
{
	class AActor**                                     bestTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              dontSetIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dontSetOut;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.UserConstructionScript
struct ASpaceDolphin_AIController_BP_C_UserConstructionScript_Params
{
};

// Function SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C.ExecuteUbergraph_SpaceDolphin_AIController_BP
struct ASpaceDolphin_AIController_BP_C_ExecuteUbergraph_SpaceDolphin_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
