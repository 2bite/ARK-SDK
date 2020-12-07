#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_SaddleGeneric_Tek_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IGet Max Ammo
struct UPrimalItemArmor_SaddleGeneric_Tek_C_IGet_Max_Ammo_Params
{
	int                                                Retval;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.CanElementDecrease
struct UPrimalItemArmor_SaddleGeneric_Tek_C_CanElementDecrease_Params
{
	int                                                AmountToDecreaseBy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDecrease;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BPGetCustomInventoryWidgetText
struct UPrimalItemArmor_SaddleGeneric_Tek_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BlueprintEquipped
struct UPrimalItemArmor_SaddleGeneric_Tek_C_BlueprintEquipped_Params
{
	bool*                                              bIsFromSaveGame;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.BlueprintUnequipped
struct UPrimalItemArmor_SaddleGeneric_Tek_C_BlueprintUnequipped_Params
{
};

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.TryToDecreaseElement
struct UPrimalItemArmor_SaddleGeneric_Tek_C_TryToDecreaseElement_Params
{
	int                                                AmountToDecreaseBy;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.SetElementToMax
struct UPrimalItemArmor_SaddleGeneric_Tek_C_SetElementToMax_Params
{
};

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IncreaseElement
struct UPrimalItemArmor_SaddleGeneric_Tek_C_IncreaseElement_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.ISetElementToMax
struct UPrimalItemArmor_SaddleGeneric_Tek_C_ISetElementToMax_Params
{
};

// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek
struct UPrimalItemArmor_SaddleGeneric_Tek_C_ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
