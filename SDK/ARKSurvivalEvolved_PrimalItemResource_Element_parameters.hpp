#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Element_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
struct UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
struct UPrimalItemResource_Element_C_BPUsedOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemResource_Element.PrimalItemResource_Element_C.ExecuteUbergraph_PrimalItemResource_Element
struct UPrimalItemResource_Element_C_ExecuteUbergraph_PrimalItemResource_Element_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
