#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AberrationBury_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_AberrationBury.Buff_AberrationBury_C.BPPreventFirstPerson
struct ABuff_AberrationBury_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AberrationBury.Buff_AberrationBury_C.PreventActorTargeting
struct ABuff_AberrationBury_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_AberrationBury.Buff_AberrationBury_C.UserConstructionScript
struct ABuff_AberrationBury_C_UserConstructionScript_Params
{
};

// Function Buff_AberrationBury.Buff_AberrationBury_C.ExecuteUbergraph_Buff_AberrationBury
struct ABuff_AberrationBury_C_ExecuteUbergraph_Buff_AberrationBury_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
