#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AntiRad_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_AntiRad.Buff_AntiRad_C.BPPreventAddingOtherBuff
struct ABuff_AntiRad_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AntiRad.Buff_AntiRad_C.UserConstructionScript
struct ABuff_AntiRad_C_UserConstructionScript_Params
{
};

// Function Buff_AntiRad.Buff_AntiRad_C.ExecuteUbergraph_Buff_AntiRad
struct ABuff_AntiRad_C_ExecuteUbergraph_Buff_AntiRad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
