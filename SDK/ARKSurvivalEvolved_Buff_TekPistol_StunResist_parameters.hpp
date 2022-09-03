#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_StunResist_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.BPPreventAddingOtherBuff
struct ABuff_TekPistol_StunResist_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.UserConstructionScript
struct ABuff_TekPistol_StunResist_C_UserConstructionScript_Params
{
};

// Function Buff_TekPistol_StunResist.Buff_TekPistol_StunResist_C.ExecuteUbergraph_Buff_TekPistol_StunResist
struct ABuff_TekPistol_StunResist_C_ExecuteUbergraph_Buff_TekPistol_StunResist_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
