#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PhoenixAsh_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.BPPreventAddingOtherBuff
struct ABuff_PhoenixAsh_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.PreventActorTargeting
struct ABuff_PhoenixAsh_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.UserConstructionScript
struct ABuff_PhoenixAsh_C_UserConstructionScript_Params
{
};

// Function Buff_PhoenixAsh.Buff_PhoenixAsh_C.ExecuteUbergraph_Buff_PhoenixAsh
struct ABuff_PhoenixAsh_C_ExecuteUbergraph_Buff_PhoenixAsh_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
