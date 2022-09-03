#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekShirt_Gen2_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.RemovedSkinFromItem
struct UPrimalItemArmor_TekShirt_Gen2_C_RemovedSkinFromItem_Params
{
	class UPrimalItem**                                FromOwnerItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ApplyingSkinOntoItem
struct UPrimalItemArmor_TekShirt_Gen2_C_ApplyingSkinOntoItem_Params
{
	class UPrimalItem**                                ToOwnerItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintEquipped
struct UPrimalItemArmor_TekShirt_Gen2_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintUnequipped
struct UPrimalItemArmor_TekShirt_Gen2_C_BlueprintUnequipped_Params
{
};

// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.TryTekSuitVFXOffset
struct UPrimalItemArmor_TekShirt_Gen2_C_TryTekSuitVFXOffset_Params
{
	bool                                               IsUnequip;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ExecuteUbergraph_PrimalItemArmor_TekShirt_Gen2
struct UPrimalItemArmor_TekShirt_Gen2_C_ExecuteUbergraph_PrimalItemArmor_TekShirt_Gen2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
