#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementShard_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.RefillElementShard
struct UPrimalItemResource_ElementShard_C_RefillElementShard_Params
{
	class UPrimalItem*                                 DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData
struct UPrimalItemResource_ElementShard_C_CheckForElementShardData_Params
{
	class UPrimalItem*                                 DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SupportsDragOnto;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem
struct UPrimalItemResource_ElementShard_C_BPSupportUseOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem
struct UPrimalItemResource_ElementShard_C_BPUsedOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.ExecuteUbergraph_PrimalItemResource_ElementShard
struct UPrimalItemResource_ElementShard_C_ExecuteUbergraph_PrimalItemResource_ElementShard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
