#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ZiplineMotor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.GetGasolineValueFromItem
struct UPrimalItemArmor_ZiplineMotor_C_GetGasolineValueFromItem_Params
{
	class UPrimalItem*                                 TargetItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetCustomInventoryWidgetText
struct UPrimalItemArmor_ZiplineMotor_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetSkinnedCustomInventoryWidgetText
struct UPrimalItemArmor_ZiplineMotor_C_BPGetSkinnedCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SetGasolineDescription
struct UPrimalItemArmor_ZiplineMotor_C_SetGasolineDescription_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPInitFromItemNetInfo
struct UPrimalItemArmor_ZiplineMotor_C_BPInitFromItemNetInfo_Params
{
};

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.RemovedSkinFromItem
struct UPrimalItemArmor_ZiplineMotor_C_RemovedSkinFromItem_Params
{
	class UPrimalItem**                                FromOwnerItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SkinEquippedBlueprintTick
struct UPrimalItemArmor_ZiplineMotor_C_SkinEquippedBlueprintTick_Params
{
	class UPrimalItem**                                OwnerItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.ApplyingSkinOntoItem
struct UPrimalItemArmor_ZiplineMotor_C_ApplyingSkinOntoItem_Params
{
	class UPrimalItem**                                ToOwnerItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.ExecuteUbergraph_PrimalItemArmor_ZiplineMotor
struct UPrimalItemArmor_ZiplineMotor_C_ExecuteUbergraph_PrimalItemArmor_ZiplineMotor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
