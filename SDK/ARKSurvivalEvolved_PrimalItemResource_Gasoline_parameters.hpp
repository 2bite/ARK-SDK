#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Gasoline_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.CheckForGasolineData
struct UPrimalItemResource_Gasoline_C_CheckForGasolineData_Params
{
	class UPrimalItem*                                 DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SupportsDragOn;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline
struct UPrimalItemResource_Gasoline_C_RefillGasoline_Params
{
	class UPrimalItem*                                 DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem
struct UPrimalItemResource_Gasoline_C_BPUsedOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem
struct UPrimalItemResource_Gasoline_C_BPSupportUseOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.ExecuteUbergraph_PrimalItemResource_Gasoline
struct UPrimalItemResource_Gasoline_C_ExecuteUbergraph_PrimalItemResource_Gasoline_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
