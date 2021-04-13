#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TekShirt_V2_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.TrySetTeksuitVFXOffset
struct UPrimalItemSkin_TekShirt_V2_C_TrySetTeksuitVFXOffset_Params
{
	bool                                               Unequip;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.ApplyingSkinOntoItem
struct UPrimalItemSkin_TekShirt_V2_C_ApplyingSkinOntoItem_Params
{
	class UPrimalItem**                                ToOwnerItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.RemovedSkinFromItem
struct UPrimalItemSkin_TekShirt_V2_C_RemovedSkinFromItem_Params
{
	class UPrimalItem**                                FromOwnerItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.BlueprintEquipped
struct UPrimalItemSkin_TekShirt_V2_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.BlueprintUnequipped
struct UPrimalItemSkin_TekShirt_V2_C_BlueprintUnequipped_Params
{
};

// Function PrimalItemSkin_TekShirt_V2.PrimalItemSkin_TekShirt_V2_C.ExecuteUbergraph_PrimalItemSkin_TekShirt_V2
struct UPrimalItemSkin_TekShirt_V2_C_ExecuteUbergraph_PrimalItemSkin_TekShirt_V2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
