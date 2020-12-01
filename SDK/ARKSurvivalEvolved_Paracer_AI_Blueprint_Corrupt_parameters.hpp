#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Paracer_AI_Blueprint_Corrupt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.BPGetTargetingDesire
struct AParacer_AI_Blueprint_Corrupt_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.BPShouldNotifyNeighbor
struct AParacer_AI_Blueprint_Corrupt_C_BPShouldNotifyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.BPNotifyTargetSet
struct AParacer_AI_Blueprint_Corrupt_C_BPNotifyTargetSet_Params
{
};

// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.UserConstructionScript
struct AParacer_AI_Blueprint_Corrupt_C_UserConstructionScript_Params
{
};

// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.CheckIfFlyerIsOutOfRange
struct AParacer_AI_Blueprint_Corrupt_C_CheckIfFlyerIsOutOfRange_Params
{
};

// Function Paracer_AI_Blueprint_Corrupt.Paracer_AI_Blueprint_Corrupt_C.ExecuteUbergraph_Paracer_AI_Blueprint_Corrupt
struct AParacer_AI_Blueprint_Corrupt_C_ExecuteUbergraph_Paracer_AI_Blueprint_Corrupt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
