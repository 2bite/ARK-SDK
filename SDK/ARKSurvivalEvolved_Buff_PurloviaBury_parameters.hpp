#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PurloviaBury_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PurloviaBury.Buff_PurloviaBury_C.BPPreventAddingOtherBuff
struct ABuff_PurloviaBury_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PurloviaBury.Buff_PurloviaBury_C.PreventActorTargeting
struct ABuff_PurloviaBury_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PurloviaBury.Buff_PurloviaBury_C.UserConstructionScript
struct ABuff_PurloviaBury_C_UserConstructionScript_Params
{
};

// Function Buff_PurloviaBury.Buff_PurloviaBury_C.ExecuteUbergraph_Buff_PurloviaBury
struct ABuff_PurloviaBury_C_ExecuteUbergraph_Buff_PurloviaBury_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
