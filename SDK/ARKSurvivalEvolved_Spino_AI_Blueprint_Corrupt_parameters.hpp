#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spino_AI_Blueprint_Corrupt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPShouldNotifyAnyNeighbor
struct ASpino_AI_Blueprint_Corrupt_C_BPShouldNotifyAnyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPGetTargetingDesire
struct ASpino_AI_Blueprint_Corrupt_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPShouldNotifyNeighbor
struct ASpino_AI_Blueprint_Corrupt_C_BPShouldNotifyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.BPNotifyTargetSet
struct ASpino_AI_Blueprint_Corrupt_C_BPNotifyTargetSet_Params
{
};

// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.UserConstructionScript
struct ASpino_AI_Blueprint_Corrupt_C_UserConstructionScript_Params
{
};

// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.CheckIfFlyerIsOutOfRange
struct ASpino_AI_Blueprint_Corrupt_C_CheckIfFlyerIsOutOfRange_Params
{
};

// Function Spino_AI_Blueprint_Corrupt.Spino_AI_Blueprint_Corrupt_C.ExecuteUbergraph_Spino_AI_Blueprint_Corrupt
struct ASpino_AI_Blueprint_Corrupt_C_ExecuteUbergraph_Spino_AI_Blueprint_Corrupt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
