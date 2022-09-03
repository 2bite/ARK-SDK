#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Costume_InflatableRex_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ApplyingSkinOntoItem
struct UPrimalItemSkin_Costume_InflatableRex_C_ApplyingSkinOntoItem_Params
{
	class UPrimalItem**                                ToOwnerItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemovedSkinFromItem
struct UPrimalItemSkin_Costume_InflatableRex_C_RemovedSkinFromItem_Params
{
	class UPrimalItem**                                FromOwnerItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintUnequipped
struct UPrimalItemSkin_Costume_InflatableRex_C_BlueprintUnequipped_Params
{
};

// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintEquipped
struct UPrimalItemSkin_Costume_InflatableRex_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.AddBuff
struct UPrimalItemSkin_Costume_InflatableRex_C_AddBuff_Params
{
};

// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemoveBuff
struct UPrimalItemSkin_Costume_InflatableRex_C_RemoveBuff_Params
{
};

// Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex
struct UPrimalItemSkin_Costume_InflatableRex_C_ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
