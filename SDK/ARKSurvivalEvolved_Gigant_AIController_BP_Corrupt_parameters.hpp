#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gigant_AIController_BP_Corrupt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gigant_AIController_BP_Corrupt.Gigant_AIController_BP_Corrupt_C.BPGetTargetingDesire
struct AGigant_AIController_BP_Corrupt_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gigant_AIController_BP_Corrupt.Gigant_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
struct AGigant_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gigant_AIController_BP_Corrupt.Gigant_AIController_BP_Corrupt_C.BPNotifyTargetSet
struct AGigant_AIController_BP_Corrupt_C_BPNotifyTargetSet_Params
{
};

// Function Gigant_AIController_BP_Corrupt.Gigant_AIController_BP_Corrupt_C.UserConstructionScript
struct AGigant_AIController_BP_Corrupt_C_UserConstructionScript_Params
{
};

// Function Gigant_AIController_BP_Corrupt.Gigant_AIController_BP_Corrupt_C.CheckIfFlyerIsOutOfRange
struct AGigant_AIController_BP_Corrupt_C_CheckIfFlyerIsOutOfRange_Params
{
};

// Function Gigant_AIController_BP_Corrupt.Gigant_AIController_BP_Corrupt_C.ExecuteUbergraph_Gigant_AIController_BP_Corrupt
struct AGigant_AIController_BP_Corrupt_C_ExecuteUbergraph_Gigant_AIController_BP_Corrupt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
