#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FullHazardSuit_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FullHazardSuit.Buff_FullHazardSuit_C.BPPreventAddingOtherBuff
struct ABuff_FullHazardSuit_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_FullHazardSuit.Buff_FullHazardSuit_C.UserConstructionScript
struct ABuff_FullHazardSuit_C_UserConstructionScript_Params
{
};

// Function Buff_FullHazardSuit.Buff_FullHazardSuit_C.ExecuteUbergraph_Buff_FullHazardSuit
struct ABuff_FullHazardSuit_C_ExecuteUbergraph_Buff_FullHazardSuit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
