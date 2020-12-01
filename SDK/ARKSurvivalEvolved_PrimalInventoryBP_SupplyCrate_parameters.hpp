#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_SupplyCrate_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPPreInitDefaultInventory
struct UPrimalInventoryBP_SupplyCrate_C_BPPreInitDefaultInventory_Params
{
};

// Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPRequestedInventoryItems
struct UPrimalInventoryBP_SupplyCrate_C_BPRequestedInventoryItems_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPInventoryRefresh
struct UPrimalInventoryBP_SupplyCrate_C_BPInventoryRefresh_Params
{
};

// Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.ExecuteUbergraph_PrimalInventoryBP_SupplyCrate
struct UPrimalInventoryBP_SupplyCrate_C_ExecuteUbergraph_PrimalInventoryBP_SupplyCrate_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
