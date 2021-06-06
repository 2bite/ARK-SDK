#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemCanoe_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemIcon
struct UPrimalItemCanoe_C_BPGetItemIcon_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomIconMaterialParent
struct UPrimalItemCanoe_C_BPGetCustomIconMaterialParent_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemCanoe.PrimalItemCanoe_C.SetColors
struct UPrimalItemCanoe_C_SetColors_Params
{
};

// Function PrimalItemCanoe.PrimalItemCanoe_C.BPInitIconMaterial
struct UPrimalItemCanoe_C_BPInitIconMaterial_Params
{
};

// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemName
struct UPrimalItemCanoe_C_BPGetItemName_Params
{
	class FString*                                     ItemNameIn;                                               // (Parm, ZeroConstructor)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomDurabilityText
struct UPrimalItemCanoe_C_BPGetCustomDurabilityText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemDurabilityPercentage
struct UPrimalItemCanoe_C_BPGetItemDurabilityPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemCanoe.PrimalItemCanoe_C.ExecuteUbergraph_PrimalItemCanoe
struct UPrimalItemCanoe_C_ExecuteUbergraph_PrimalItemCanoe_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
