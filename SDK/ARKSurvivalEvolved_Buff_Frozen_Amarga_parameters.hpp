#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Frozen_Amarga_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.BPPreventAddingOtherBuff
struct ABuff_Frozen_Amarga_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.BPDeactivated
struct ABuff_Frozen_Amarga_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.UserConstructionScript
struct ABuff_Frozen_Amarga_C_UserConstructionScript_Params
{
};

// Function Buff_Frozen_Amarga.Buff_Frozen_Amarga_C.ExecuteUbergraph_Buff_Frozen_Amarga
struct ABuff_Frozen_Amarga_C_ExecuteUbergraph_Buff_Frozen_Amarga_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
