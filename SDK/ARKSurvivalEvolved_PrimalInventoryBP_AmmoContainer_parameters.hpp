#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_AmmoContainer_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemQuantityUpdated
struct UPrimalInventoryBP_AmmoContainer_C_BPNotifyItemQuantityUpdated_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemRemoved
struct UPrimalInventoryBP_AmmoContainer_C_BPNotifyItemRemoved_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.BPNotifyItemAdded
struct UPrimalInventoryBP_AmmoContainer_C_BPNotifyItemAdded_Params
{
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_AmmoContainer.PrimalInventoryBP_AmmoContainer_C.ExecuteUbergraph_PrimalInventoryBP_AmmoContainer
struct UPrimalInventoryBP_AmmoContainer_C_ExecuteUbergraph_PrimalInventoryBP_AmmoContainer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
