#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuit_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.BPPreventAddingOtherBuff
struct ABuff_HazardSuit_Base_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.UserConstructionScript
struct ABuff_HazardSuit_Base_C_UserConstructionScript_Params
{
};

// Function Buff_HazardSuit_Base.Buff_HazardSuit_Base_C.ExecuteUbergraph_Buff_HazardSuit_Base
struct ABuff_HazardSuit_Base_C_ExecuteUbergraph_Buff_HazardSuit_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
