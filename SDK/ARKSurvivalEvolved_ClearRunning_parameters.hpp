#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ClearRunning_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ClearRunning.ClearRunning_C.ReceiveExecute
struct UClearRunning_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClearRunning.ClearRunning_C.ExecuteUbergraph_ClearRunning
struct UClearRunning_C_ExecuteUbergraph_ClearRunning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
