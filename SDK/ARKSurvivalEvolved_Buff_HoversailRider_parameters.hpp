#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HoversailRider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_HoversailRider.Buff_HoversailRider_C.BPPreventAddingOtherBuff
struct ABuff_HoversailRider_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_HoversailRider.Buff_HoversailRider_C.UserConstructionScript
struct ABuff_HoversailRider_C_UserConstructionScript_Params
{
};

// Function Buff_HoversailRider.Buff_HoversailRider_C.ExecuteUbergraph_Buff_HoversailRider
struct ABuff_HoversailRider_C_ExecuteUbergraph_Buff_HoversailRider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
