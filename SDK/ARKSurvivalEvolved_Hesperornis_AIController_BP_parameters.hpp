#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hesperornis_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.BPGetTargetingDesire
struct AHesperornis_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.UserConstructionScript
struct AHesperornis_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Hesperornis_AIController_BP.Hesperornis_AIController_BP_C.ExecuteUbergraph_Hesperornis_AIController_BP
struct AHesperornis_AIController_BP_C_ExecuteUbergraph_Hesperornis_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
