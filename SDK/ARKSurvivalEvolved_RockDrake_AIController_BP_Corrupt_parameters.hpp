#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrake_AIController_BP_Corrupt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RockDrake_AIController_BP_Corrupt.RockDrake_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor
struct ARockDrake_AIController_BP_Corrupt_C_BPShouldNotifyAnyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_AIController_BP_Corrupt.RockDrake_AIController_BP_Corrupt_C.BPGetTargetingDesire
struct ARockDrake_AIController_BP_Corrupt_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_AIController_BP_Corrupt.RockDrake_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
struct ARockDrake_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RockDrake_AIController_BP_Corrupt.RockDrake_AIController_BP_Corrupt_C.UserConstructionScript
struct ARockDrake_AIController_BP_Corrupt_C_UserConstructionScript_Params
{
};

// Function RockDrake_AIController_BP_Corrupt.RockDrake_AIController_BP_Corrupt_C.ExecuteUbergraph_RockDrake_AIController_BP_Corrupt
struct ARockDrake_AIController_BP_Corrupt_C_ExecuteUbergraph_RockDrake_AIController_BP_Corrupt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
