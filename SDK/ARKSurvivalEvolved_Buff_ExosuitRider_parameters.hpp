#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExosuitRider_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.GetHudData
struct ABuff_ExosuitRider_C_GetHudData_Params
{
	bool                                               bUsesChestBeam;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanUseChestBeam;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ChestBeamEnergyPercent;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ChestBeamState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryComponent*                   InventoryComponent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FuelItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EnergyPercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPreparingJump;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPAdjustStatusValueModification
struct ABuff_ExosuitRider_C_BPAdjustStatusValueModification_Params
{
	class UPrimalCharacterStatusComponent**            ForComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>*          ValueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bManualModification;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPDeactivated
struct ABuff_ExosuitRider_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPPreventAddingOtherBuff
struct ABuff_ExosuitRider_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BPGetHUDElements
struct ABuff_ExosuitRider_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.ThrottledTick
struct ABuff_ExosuitRider_C_ThrottledTick_Params
{
};

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.BuffAdjustDamage
struct ABuff_ExosuitRider_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.UserConstructionScript
struct ABuff_ExosuitRider_C_UserConstructionScript_Params
{
};

// Function Buff_ExosuitRider.Buff_ExosuitRider_C.ExecuteUbergraph_Buff_ExosuitRider
struct ABuff_ExosuitRider_C_ExecuteUbergraph_Buff_ExosuitRider_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
