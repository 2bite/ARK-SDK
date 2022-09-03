#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Pliers_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_Pliers.PrimalItem_Pliers_C.BPUsedOntoItem
struct UPrimalItem_Pliers_C_BPUsedOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_Pliers.PrimalItem_Pliers_C.BPSupportUseOntoItem
struct UPrimalItem_Pliers_C_BPSupportUseOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_Pliers.PrimalItem_Pliers_C.ExecuteUbergraph_PrimalItem_Pliers
struct UPrimalItem_Pliers_C_ExecuteUbergraph_PrimalItem_Pliers_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
