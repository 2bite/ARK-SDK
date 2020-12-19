#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_camelsaurus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPDoAttack
struct Acamelsaurus_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.GetCanDrink
struct Acamelsaurus_Character_BP_C_GetCanDrink_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPCharacterUnsleeped
struct Acamelsaurus_Character_BP_C_BPCharacterUnsleeped_Params
{
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPCharacterSleeped
struct Acamelsaurus_Character_BP_C_BPCharacterSleeped_Params
{
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.PlayDrinkAnim
struct Acamelsaurus_Character_BP_C_PlayDrinkAnim_Params
{
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPTimerServer
struct Acamelsaurus_Character_BP_C_BPTimerServer_Params
{
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.HasMaxWater
struct Acamelsaurus_Character_BP_C_HasMaxWater_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.IsAWaterItem
struct Acamelsaurus_Character_BP_C_IsAWaterItem_Params
{
	class UObject*                                     PrimalItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPInventoryItemUsed
struct Acamelsaurus_Character_BP_C_BPInventoryItemUsed_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPForceAllowsInventoryUse
struct Acamelsaurus_Character_BP_C_BPForceAllowsInventoryUse_Params
{
	class UObject**                                    InventoryItemObject;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.RefreshWater
struct Acamelsaurus_Character_BP_C_RefreshWater_Params
{
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BlueprintDrawFloatingHUD
struct Acamelsaurus_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.RefreshOpenToSky
struct Acamelsaurus_Character_BP_C_RefreshOpenToSky_Params
{
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.AddWater
struct Acamelsaurus_Character_BP_C_AddWater_Params
{
	float                                              amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewWaterAmount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPTryMultiUse
struct Acamelsaurus_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.BPGetMultiUseEntries
struct Acamelsaurus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.UserConstructionScript
struct Acamelsaurus_Character_BP_C_UserConstructionScript_Params
{
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.ReceiveBeginPlay
struct Acamelsaurus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function camelsaurus_Character_BP.camelsaurus_Character_BP_C.ExecuteUbergraph_camelsaurus_Character_BP
struct Acamelsaurus_Character_BP_C_ExecuteUbergraph_camelsaurus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
