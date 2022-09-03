#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Base_Tek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetMaxAmmo
struct UPrimalItemArmor_Base_Tek_C_BPGetMaxAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo
struct UPrimalItemArmor_Base_Tek_C_IsInfiniteAmmo_Params
{
	bool                                               IsInfinite;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem
struct UPrimalItemArmor_Base_Tek_C_ApplyingSkinOntoItem_Params
{
	class UPrimalItem**                                ToOwnerItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem
struct UPrimalItemArmor_Base_Tek_C_RemovedSkinFromItem_Params
{
	class UPrimalItem**                                FromOwnerItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff
struct UPrimalItemArmor_Base_Tek_C_GetInternalMapRestrictedTekArmorBuff_Params
{
	class AShooterCharacter*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TekArmorBuff;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff
struct UPrimalItemArmor_Base_Tek_C_GetResolvedTekArmorBuff_Params
{
	class UClass*                                      ResolvedTekArmorBuff;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable
struct UPrimalItemArmor_Base_Tek_C_FillEmptyArmorElementWhenAvailable_Params
{
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff
struct UPrimalItemArmor_Base_Tek_C_InitBuff_Params
{
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed
struct UPrimalItemArmor_Base_Tek_C_BlueprintOwnerPosssessed_Params
{
	class AController**                                PossessedByController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintUnequipped
struct UPrimalItemArmor_Base_Tek_C_BlueprintUnequipped_Params
{
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText
struct UPrimalItemArmor_Base_Tek_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease
struct UPrimalItemArmor_Base_Tek_C_Can_Element_Decrease_Params
{
	int                                                AmountToDecreaseBy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PreventCheckingInventory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDecrease;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped
struct UPrimalItemArmor_Base_Tek_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement
struct UPrimalItemArmor_Base_Tek_C_TryToDecreaseElement_Params
{
	int                                                AmountToDecreaseBy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.SetElementToMax
struct UPrimalItemArmor_Base_Tek_C_SetElementToMax_Params
{
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IncreaseElement
struct UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinApplied
struct UPrimalItemArmor_Base_Tek_C_TekArmorSkinApplied_Params
{
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinRemoved
struct UPrimalItemArmor_Base_Tek_C_TekArmorSkinRemoved_Params
{
};

// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ExecuteUbergraph_PrimalItemArmor_Base_Tek
struct UPrimalItemArmor_Base_Tek_C_ExecuteUbergraph_PrimalItemArmor_Base_Tek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
