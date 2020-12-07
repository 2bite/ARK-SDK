#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rex_AIController_BP_Corrupt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor
struct ARex_AIController_BP_Corrupt_C_BPShouldNotifyAnyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPGetTargetingDesire
struct ARex_AIController_BP_Corrupt_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
struct ARex_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.BPNotifyTargetSet
struct ARex_AIController_BP_Corrupt_C_BPNotifyTargetSet_Params
{
};

// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.UserConstructionScript
struct ARex_AIController_BP_Corrupt_C_UserConstructionScript_Params
{
};

// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.CheckIfFlyerIsOutOfRange
struct ARex_AIController_BP_Corrupt_C_CheckIfFlyerIsOutOfRange_Params
{
};

// Function Rex_AIController_BP_Corrupt.Rex_AIController_BP_Corrupt_C.ExecuteUbergraph_Rex_AIController_BP_Corrupt
struct ARex_AIController_BP_Corrupt_C_ExecuteUbergraph_Rex_AIController_BP_Corrupt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
