#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Base_Battery_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.BPForceAllowRemoteAddToInventory
struct UPrimalItem_Base_Battery_C_BPForceAllowRemoteAddToInventory_Params
{
	class UPrimalInventoryComponent**                  toInventory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_Base_Battery.PrimalItem_Base_Battery_C.ExecuteUbergraph_PrimalItem_Base_Battery
struct UPrimalItem_Base_Battery_C_ExecuteUbergraph_PrimalItem_Base_Battery_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
