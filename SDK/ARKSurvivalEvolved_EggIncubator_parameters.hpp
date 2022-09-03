#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EggIncubator_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EggIncubator.EggIncubator_C.IsEggItemAllowed
struct AEggIncubator_C_IsEggItemAllowed_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAllowed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.GetItemDisplaySlot
struct AEggIncubator_C_GetItemDisplaySlot_Params
{
	class UPrimalItem*                                 ForItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSlot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SlotFound;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.ClientDisplayGestationMonitorEffectAdded
struct AEggIncubator_C_ClientDisplayGestationMonitorEffectAdded_Params
{
	struct UObject_FTransform                          AtLocation;                                               // (Parm, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.BPNotifyPowerChanged
struct AEggIncubator_C_BPNotifyPowerChanged_Params
{
};

// Function EggIncubator.EggIncubator_C.SetIncubatorMaterialValues
struct AEggIncubator_C_SetIncubatorMaterialValues_Params
{
};

// Function EggIncubator.EggIncubator_C.UpdateWarmingLights
struct AEggIncubator_C_UpdateWarmingLights_Params
{
};

// Function EggIncubator.EggIncubator_C.GetWarmingLightForSlot
struct AEggIncubator_C_GetWarmingLightForSlot_Params
{
	int                                                ForSlotIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WarmingLightComponent;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.DestroyEggDisplay
struct AEggIncubator_C_DestroyEggDisplay_Params
{
	int                                                ItemID1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.CanEggIncubateInTemp
struct AEggIncubator_C_CanEggIncubateInTemp_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanIncubate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.UpdateIndoorsStatus
struct AEggIncubator_C_UpdateIndoorsStatus_Params
{
};

// Function EggIncubator.EggIncubator_C.CalculateIncubationInsulation
struct AEggIncubator_C_CalculateIncubationInsulation_Params
{
};

// Function EggIncubator.EggIncubator_C.CanEggBeHatched
struct AEggIncubator_C_CanEggBeHatched_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHatchable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.TrySpawnEggToWorld
struct AEggIncubator_C_TrySpawnEggToWorld_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EggWasSpawned;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.ThrottledTick
struct AEggIncubator_C_ThrottledTick_Params
{
};

// Function EggIncubator.EggIncubator_C.ServerSyncEggDisplay
struct AEggIncubator_C_ServerSyncEggDisplay_Params
{
};

// Function EggIncubator.EggIncubator_C.GetTempBonusRawPercent
struct AEggIncubator_C_GetTempBonusRawPercent_Params
{
	float                                              EggTempLowerBound;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EggTempUpperBound;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BoostPercent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.SetIncubatorCustomDatasForEgg
struct AEggIncubator_C_SetIncubatorCustomDatasForEgg_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.BPServerHandleNetExecCommand
struct AEggIncubator_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.ClientRemoveFertilizedEgg
struct AEggIncubator_C_ClientRemoveFertilizedEgg_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.ClientAddFertilizedEgg
struct AEggIncubator_C_ClientAddFertilizedEgg_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUnreplicatedEggData                        ManuallyReplicatedEggData;                                // (Parm, OutParm, ReferenceParm)
	struct FItemNetInfo                                ItemNetInfo;                                              // (Parm, OutParm, ReferenceParm)
};

// Function EggIncubator.EggIncubator_C.SetupEggSlots
struct AEggIncubator_C_SetupEggSlots_Params
{
};

// Function EggIncubator.EggIncubator_C.RefreshEggDisplays
struct AEggIncubator_C_RefreshEggDisplays_Params
{
};

// Function EggIncubator.EggIncubator_C.CheckIsFertilizedEgg
struct AEggIncubator_C_CheckIsFertilizedEgg_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFertilized;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.GetSlotIndexForEggItem
struct AEggIncubator_C_GetSlotIndexForEggItem_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.GetFirstAvailableEggSlotIndex
struct AEggIncubator_C_GetFirstAvailableEggSlotIndex_Params
{
	int                                                EggSlotIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.BPPostInitializeComponents
struct AEggIncubator_C_BPPostInitializeComponents_Params
{
};

// Function EggIncubator.EggIncubator_C.ServerRemoveFertilizedEgg
struct AEggIncubator_C_ServerRemoveFertilizedEgg_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.ServerAddFertilizedEgg
struct AEggIncubator_C_ServerAddFertilizedEgg_Params
{
	class UPrimalItemConsumable_Egg_C*                 eggItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.BPTryMultiUse
struct AEggIncubator_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.BPClientDoMultiUse
struct AEggIncubator_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.AddTempControlEntries
struct AEggIncubator_C_AddTempControlEntries_Params
{
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EggIncubator.EggIncubator_C.BPGetMultiUseEntries
struct AEggIncubator_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function EggIncubator.EggIncubator_C.BPGetMultiUseCenterText
struct AEggIncubator_C_BPGetMultiUseCenterText_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      OutCenterText;                                            // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                OutCenterTextColor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.GetTempControlBonus
struct AEggIncubator_C_GetTempControlBonus_Params
{
	float                                              EggTempLowerBound;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EggTempUpperBound;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TempControlBonusMultiplier;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.UpdateIncubation
struct AEggIncubator_C_UpdateIncubation_Params
{
};

// Function EggIncubator.EggIncubator_C.UpdateCachedHatchSpeedMultiplier
struct AEggIncubator_C_UpdateCachedHatchSpeedMultiplier_Params
{
};

// Function EggIncubator.EggIncubator_C.UserConstructionScript
struct AEggIncubator_C_UserConstructionScript_Params
{
};

// Function EggIncubator.EggIncubator_C.ClientNotifyAddedEgg
struct AEggIncubator_C_ClientNotifyAddedEgg_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUnreplicatedEggData                        ManuallyReplicatedEggData;                                // (Parm)
	struct FItemNetInfo                                ItemNetInfo;                                              // (Parm)
};

// Function EggIncubator.EggIncubator_C.ClientNotifyRemovedEgg
struct AEggIncubator_C_ClientNotifyRemovedEgg_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.ReceiveBeginPlay
struct AEggIncubator_C_ReceiveBeginPlay_Params
{
};

// Function EggIncubator.EggIncubator_C.MC_DestroyEggVFX
struct AEggIncubator_C_MC_DestroyEggVFX_Params
{
	int                                                ItemID1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EggIncubator.EggIncubator_C.BPUnstasis
struct AEggIncubator_C_BPUnstasis_Params
{
};

// Function EggIncubator.EggIncubator_C.MC_UpdateWarmingLighhts
struct AEggIncubator_C_MC_UpdateWarmingLighhts_Params
{
};

// Function EggIncubator.EggIncubator_C.MC_NotifyPowerChanged
struct AEggIncubator_C_MC_NotifyPowerChanged_Params
{
};

// Function EggIncubator.EggIncubator_C.ExecuteUbergraph_EggIncubator
struct AEggIncubator_C_ExecuteUbergraph_EggIncubator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
