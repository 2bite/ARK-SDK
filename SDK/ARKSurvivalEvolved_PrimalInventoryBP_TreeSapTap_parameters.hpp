#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TreeSapTap_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPOnComponentCreated
struct UPrimalInventoryBP_TreeSapTap_C_BPOnComponentCreated_Params
{
};

// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPCustomRemoteInventoryAllowAddItems
struct UPrimalInventoryBP_TreeSapTap_C_BPCustomRemoteInventoryAllowAddItems_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                anItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               anItemQuantityOverride;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequestedByPlayer;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.FindNearbySapTaps
struct UPrimalInventoryBP_TreeSapTap_C_FindNearbySapTaps_Params
{
	int                                                NumOutTaps;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.BPInventoryRefresh
struct UPrimalInventoryBP_TreeSapTap_C_BPInventoryRefresh_Params
{
};

// Function PrimalInventoryBP_TreeSapTap.PrimalInventoryBP_TreeSapTap_C.ExecuteUbergraph_PrimalInventoryBP_TreeSapTap
struct UPrimalInventoryBP_TreeSapTap_C_ExecuteUbergraph_PrimalInventoryBP_TreeSapTap_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
