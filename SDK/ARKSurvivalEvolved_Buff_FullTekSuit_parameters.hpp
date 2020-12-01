#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FullTekSuit_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FullTekSuit.Buff_FullTekSuit_C.BPPreventAddingOtherBuff
struct ABuff_FullTekSuit_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_FullTekSuit.Buff_FullTekSuit_C.UserConstructionScript
struct ABuff_FullTekSuit_C_UserConstructionScript_Params
{
};

// Function Buff_FullTekSuit.Buff_FullTekSuit_C.ExecuteUbergraph_Buff_FullTekSuit
struct ABuff_FullTekSuit_C_ExecuteUbergraph_Buff_FullTekSuit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
