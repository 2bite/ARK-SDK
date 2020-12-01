#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_ChargeBattery_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetItemIcon
struct UPrimalItem_ChargeBattery_C_BPGetItemIcon_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPGetCustomInventoryWidgetText
struct UPrimalItem_ChargeBattery_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.AddDurabilitySafe
struct UPrimalItem_ChargeBattery_C_AddDurabilitySafe_Params
{
	float                                              amountToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AmountAdded;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.BPUsedOntoItem
struct UPrimalItem_ChargeBattery_C_BPUsedOntoItem_Params
{
	class UPrimalItem**                                DestinationItem;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_ChargeBattery.PrimalItem_ChargeBattery_C.ExecuteUbergraph_PrimalItem_ChargeBattery
struct UPrimalItem_ChargeBattery_C_ExecuteUbergraph_PrimalItem_ChargeBattery_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
