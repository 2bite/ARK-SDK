#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Freeze_Amarga_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BPDeactivated
struct ABuff_Freeze_Amarga_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BPPreventAddingOtherBuff
struct ABuff_Freeze_Amarga_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.MeleeIncFreeze
struct ABuff_Freeze_Amarga_C_MeleeIncFreeze_Params
{
};

// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BuffTickServer
struct ABuff_Freeze_Amarga_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.UpdateBuffDescription
struct ABuff_Freeze_Amarga_C_UpdateBuffDescription_Params
{
};

// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.BuffTickClient
struct ABuff_Freeze_Amarga_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.UserConstructionScript
struct ABuff_Freeze_Amarga_C_UserConstructionScript_Params
{
};

// Function Buff_Freeze_Amarga.Buff_Freeze_Amarga_C.ExecuteUbergraph_Buff_Freeze_Amarga
struct ABuff_Freeze_Amarga_C_ExecuteUbergraph_Buff_Freeze_Amarga_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
