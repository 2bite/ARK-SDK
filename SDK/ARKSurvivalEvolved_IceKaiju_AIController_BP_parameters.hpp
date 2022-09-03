#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.StartTorpid
struct AIceKaiju_AIController_BP_C_StartTorpid_Params
{
};

// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.BPSetupFindTarget
struct AIceKaiju_AIController_BP_C_BPSetupFindTarget_Params
{
};

// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.BPGetTargetingDesire
struct AIceKaiju_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.UserConstructionScript
struct AIceKaiju_AIController_BP_C_UserConstructionScript_Params
{
};

// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.ExecuteUbergraph_IceKaiju_AIController_BP
struct AIceKaiju_AIController_BP_C_ExecuteUbergraph_IceKaiju_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
