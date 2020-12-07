#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_FishBasketFilled_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPDrawItemIcon
struct UPrimalItem_FishBasketFilled_C_BPDrawItemIcon_Params
{
	class UCanvas**                                    ItemCanvas;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ItemCanvasSize;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ItemCanvasScale;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bItemEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TheTintColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.SlottedTick
struct UPrimalItem_FishBasketFilled_C_SlottedTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BlueprintUsed
struct UPrimalItem_FishBasketFilled_C_BlueprintUsed_Params
{
};

// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPGetItemDescription
struct UPrimalItem_FishBasketFilled_C_BPGetItemDescription_Params
{
	class FString*                                     InDescription;                                            // (Parm, ZeroConstructor)
	bool*                                              bGetLongDescription;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.BPCanUse
struct UPrimalItem_FishBasketFilled_C_BPCanUse_Params
{
	bool*                                              bIgnoreCooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_FishBasketFilled.PrimalItem_FishBasketFilled_C.ExecuteUbergraph_PrimalItem_FishBasketFilled
struct UPrimalItem_FishBasketFilled_C_ExecuteUbergraph_PrimalItem_FishBasketFilled_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
