#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TaxidermyBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPPreventEquipItem
struct UPrimalInventoryBP_TaxidermyBase_C_BPPreventEquipItem_Params
{
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.BPPreventEquipItemType
struct UPrimalInventoryBP_TaxidermyBase_C_BPPreventEquipItemType_Params
{
	TEnumAsByte<EPrimalEquipmentType>*                 equipmentType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalInventoryBP_TaxidermyBase.PrimalInventoryBP_TaxidermyBase_C.ExecuteUbergraph_PrimalInventoryBP_TaxidermyBase
struct UPrimalInventoryBP_TaxidermyBase_C_ExecuteUbergraph_PrimalInventoryBP_TaxidermyBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
