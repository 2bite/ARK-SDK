#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Pinned_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Pinned.Buff_Pinned_C.BPPreventFirstPerson
struct ABuff_Pinned_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Pinned.Buff_Pinned_C.BPCheckPreventInput
struct ABuff_Pinned_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Pinned.Buff_Pinned_C.PlaySleepingAnim
struct ABuff_Pinned_C_PlaySleepingAnim_Params
{
};

// Function Buff_Pinned.Buff_Pinned_C.UserConstructionScript
struct ABuff_Pinned_C_UserConstructionScript_Params
{
};

// Function Buff_Pinned.Buff_Pinned_C.BPDeactivated
struct ABuff_Pinned_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Pinned.Buff_Pinned_C.ReceiveBeginPlay
struct ABuff_Pinned_C_ReceiveBeginPlay_Params
{
};

// Function Buff_Pinned.Buff_Pinned_C.BuffTickServer
struct ABuff_Pinned_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Pinned.Buff_Pinned_C.ServerStruggle
struct ABuff_Pinned_C_ServerStruggle_Params
{
};

// Function Buff_Pinned.Buff_Pinned_C.ExecuteUbergraph_Buff_Pinned
struct ABuff_Pinned_C_ExecuteUbergraph_Buff_Pinned_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
