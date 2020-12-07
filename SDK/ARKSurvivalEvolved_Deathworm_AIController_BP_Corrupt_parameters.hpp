#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deathworm_AIController_BP_Corrupt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPShouldNotifyAnyNeighbor
struct ADeathworm_AIController_BP_Corrupt_C_BPShouldNotifyAnyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPGetTargetingDesire
struct ADeathworm_AIController_BP_Corrupt_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
struct ADeathworm_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.BPNotifyTargetSet
struct ADeathworm_AIController_BP_Corrupt_C_BPNotifyTargetSet_Params
{
};

// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.UserConstructionScript
struct ADeathworm_AIController_BP_Corrupt_C_UserConstructionScript_Params
{
};

// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.CheckIfFlyerIsOutOfRange
struct ADeathworm_AIController_BP_Corrupt_C_CheckIfFlyerIsOutOfRange_Params
{
};

// Function Deathworm_AIController_BP_Corrupt.Deathworm_AIController_BP_Corrupt_C.ExecuteUbergraph_Deathworm_AIController_BP_Corrupt
struct ADeathworm_AIController_BP_Corrupt_C_ExecuteUbergraph_Deathworm_AIController_BP_Corrupt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
