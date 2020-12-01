#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Chalico_AIController_BP_Corrupt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Chalico_AIController_BP_Corrupt.Chalico_AIController_BP_Corrupt_C.BPGetTargetingDesire
struct AChalico_AIController_BP_Corrupt_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Chalico_AIController_BP_Corrupt.Chalico_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
struct AChalico_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Chalico_AIController_BP_Corrupt.Chalico_AIController_BP_Corrupt_C.BPNotifyTargetSet
struct AChalico_AIController_BP_Corrupt_C_BPNotifyTargetSet_Params
{
};

// Function Chalico_AIController_BP_Corrupt.Chalico_AIController_BP_Corrupt_C.UserConstructionScript
struct AChalico_AIController_BP_Corrupt_C_UserConstructionScript_Params
{
};

// Function Chalico_AIController_BP_Corrupt.Chalico_AIController_BP_Corrupt_C.CheckIfFlyerIsOutOfRange
struct AChalico_AIController_BP_Corrupt_C_CheckIfFlyerIsOutOfRange_Params
{
};

// Function Chalico_AIController_BP_Corrupt.Chalico_AIController_BP_Corrupt_C.ExecuteUbergraph_Chalico_AIController_BP_Corrupt
struct AChalico_AIController_BP_Corrupt_C_ExecuteUbergraph_Chalico_AIController_BP_Corrupt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
