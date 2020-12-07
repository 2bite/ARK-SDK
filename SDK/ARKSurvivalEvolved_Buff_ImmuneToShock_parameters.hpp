#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToShock_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ImmuneToShock.Buff_ImmuneToShock_C.BPPreventAddingOtherBuff
struct ABuff_ImmuneToShock_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ImmuneToShock.Buff_ImmuneToShock_C.UserConstructionScript
struct ABuff_ImmuneToShock_C_UserConstructionScript_Params
{
};

// Function Buff_ImmuneToShock.Buff_ImmuneToShock_C.ExecuteUbergraph_Buff_ImmuneToShock
struct ABuff_ImmuneToShock_C_ExecuteUbergraph_Buff_ImmuneToShock_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
