#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Carno_AIController_BP_Corrupt_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Carno_AIController_BP_Corrupt.Carno_AIController_BP_Corrupt_C.BPGetTargetingDesire
struct ACarno_AIController_BP_Corrupt_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Carno_AIController_BP_Corrupt.Carno_AIController_BP_Corrupt_C.BPShouldNotifyNeighbor
struct ACarno_AIController_BP_Corrupt_C_BPShouldNotifyNeighbor_Params
{
	class APrimalDinoCharacter**                       neighbor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Carno_AIController_BP_Corrupt.Carno_AIController_BP_Corrupt_C.BPNotifyTargetSet
struct ACarno_AIController_BP_Corrupt_C_BPNotifyTargetSet_Params
{
};

// Function Carno_AIController_BP_Corrupt.Carno_AIController_BP_Corrupt_C.UserConstructionScript
struct ACarno_AIController_BP_Corrupt_C_UserConstructionScript_Params
{
};

// Function Carno_AIController_BP_Corrupt.Carno_AIController_BP_Corrupt_C.CheckIfFlyerIsOutOfRange
struct ACarno_AIController_BP_Corrupt_C_CheckIfFlyerIsOutOfRange_Params
{
};

// Function Carno_AIController_BP_Corrupt.Carno_AIController_BP_Corrupt_C.ExecuteUbergraph_Carno_AIController_BP_Corrupt
struct ACarno_AIController_BP_Corrupt_C_ExecuteUbergraph_Carno_AIController_BP_Corrupt_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
