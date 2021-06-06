#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Glider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.RemovedSkinFromItem
struct UPrimalItemArmor_Glider_C_RemovedSkinFromItem_Params
{
	class UPrimalItem**                                FromOwnerItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.ApplyingSkinOntoItem
struct UPrimalItemArmor_Glider_C_ApplyingSkinOntoItem_Params
{
	class UPrimalItem**                                ToOwnerItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFirstTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.BlueprintUnequipped
struct UPrimalItemArmor_Glider_C_BlueprintUnequipped_Params
{
};

// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.BlueprintEquipped
struct UPrimalItemArmor_Glider_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_Glider.PrimalItemArmor_Glider_C.ExecuteUbergraph_PrimalItemArmor_Glider
struct UPrimalItemArmor_Glider_C_ExecuteUbergraph_PrimalItemArmor_Glider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
