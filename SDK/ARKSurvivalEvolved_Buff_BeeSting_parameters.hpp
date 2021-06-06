#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BeeSting_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BeeSting.Buff_BeeSting_C.BPPreventAddingOtherBuff
struct ABuff_BeeSting_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_BeeSting.Buff_BeeSting_C.ResetValues
struct ABuff_BeeSting_C_ResetValues_Params
{
};

// Function Buff_BeeSting.Buff_BeeSting_C.UserConstructionScript
struct ABuff_BeeSting_C_UserConstructionScript_Params
{
};

// Function Buff_BeeSting.Buff_BeeSting_C.ReceiveBeginPlay
struct ABuff_BeeSting_C_ReceiveBeginPlay_Params
{
};

// Function Buff_BeeSting.Buff_BeeSting_C.ReceiveEndPlay
struct ABuff_BeeSting_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BeeSting.Buff_BeeSting_C.BuffTickServer
struct ABuff_BeeSting_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BeeSting.Buff_BeeSting_C.ExecuteUbergraph_Buff_BeeSting
struct ABuff_BeeSting_C_ExecuteUbergraph_Buff_BeeSting_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
