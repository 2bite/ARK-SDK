#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_AmmoContainerBaseBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyAmmoBoxReloadedStructure
struct AStructure_AmmoContainerBaseBP_C_BPNotifyAmmoBoxReloadedStructure_Params
{
	class APrimalStructure**                           ReloadedStructure;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.OnRep_bVisualRadiusIsActive
struct AStructure_AmmoContainerBaseBP_C_OnRep_bVisualRadiusIsActive_Params
{
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseEntries
struct AStructure_AmmoContainerBaseBP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPClientDoMultiUse
struct AStructure_AmmoContainerBaseBP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetMultiUseCenterText
struct AStructure_AmmoContainerBaseBP_C_BPGetMultiUseCenterText_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      OutCenterText;                                            // (Parm, OutParm, ZeroConstructor)
	struct FLinearColor                                OutCenterTextColor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPTryMultiUse
struct AStructure_AmmoContainerBaseBP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetAmmoBoxReloadPercent
struct AStructure_AmmoContainerBaseBP_C_BPGetAmmoBoxReloadPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPNotifyInventoryItemChange
struct AStructure_AmmoContainerBaseBP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoTypeVisuals
struct AStructure_AmmoContainerBaseBP_C_UpdateAmmoTypeVisuals_Params
{
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.CheckNearbyPlayers
struct AStructure_AmmoContainerBaseBP_C_CheckNearbyPlayers_Params
{
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPOverrideCantBuildReasonString
struct AStructure_AmmoContainerBaseBP_C_BPOverrideCantBuildReasonString_Params
{
	int*                                               CantBuildReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPIsAllowedToBuild
struct AStructure_AmmoContainerBaseBP_C_BPIsAllowedToBuild_Params
{
	struct FPlacementData                              OutPlacementData;                                         // (Parm, OutParm, ReferenceParm)
	int*                                               CurrentAllowedReason;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UpdateAmmoChanges
struct AStructure_AmmoContainerBaseBP_C_UpdateAmmoChanges_Params
{
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ChangeInAmmo
struct AStructure_AmmoContainerBaseBP_C_ChangeInAmmo_Params
{
	int                                                NumChange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.BPGetQuantityOfItemWithoutCheckingInventory
struct AStructure_AmmoContainerBaseBP_C_BPGetQuantityOfItemWithoutCheckingInventory_Params
{
	class UClass**                                     ItemToCheckFor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.UserConstructionScript
struct AStructure_AmmoContainerBaseBP_C_UserConstructionScript_Params
{
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ReceiveBeginPlay
struct AStructure_AmmoContainerBaseBP_C_ReceiveBeginPlay_Params
{
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multicast_UpdateAmmoVisuals
struct AStructure_AmmoContainerBaseBP_C_Multicast_UpdateAmmoVisuals_Params
{
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.FullRecheckInventory
struct AStructure_AmmoContainerBaseBP_C_FullRecheckInventory_Params
{
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.Multi_PlayReloadParticle
struct AStructure_AmmoContainerBaseBP_C_Multi_PlayReloadParticle_Params
{
	class APrimalStructure*                            ReloadedStructure;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.PlayReloadParticle
struct AStructure_AmmoContainerBaseBP_C_PlayReloadParticle_Params
{
	class APrimalStructure*                            ReloadedStructure;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Structure_AmmoContainerBaseBP.Structure_AmmoContainerBaseBP_C.ExecuteUbergraph_Structure_AmmoContainerBaseBP
struct AStructure_AmmoContainerBaseBP_C_ExecuteUbergraph_Structure_AmmoContainerBaseBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
