#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekGenerator_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveDestroyed
struct AStorageBox_TekGenerator_C_ReceiveDestroyed_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.PowerGeneratorBuiltNearbyPoweredStructure
struct AStorageBox_TekGenerator_C_PowerGeneratorBuiltNearbyPoweredStructure_Params
{
	class APrimalStructureItemContainer**              PoweredStructure;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPChangedActorTeam
struct AStorageBox_TekGenerator_C_BPChangedActorTeam_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.RefreshPoweredStructures
struct AStorageBox_TekGenerator_C_RefreshPoweredStructures_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ReceiveBeginPlay
struct AStorageBox_TekGenerator_C_ReceiveBeginPlay_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.CheckChargeEffect
struct AStorageBox_TekGenerator_C_CheckChargeEffect_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.OnRep_PowerUpCompletionTime
struct AStorageBox_TekGenerator_C_OnRep_PowerUpCompletionTime_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPClientDoMultiUse
struct AStorageBox_TekGenerator_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BlueprintDrawHUD
struct AStorageBox_TekGenerator_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPRefreshedStructureColors
struct AStorageBox_TekGenerator_C_BPRefreshedStructureColors_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetFuelConsumptionMultiplier
struct AStorageBox_TekGenerator_C_BPGetFuelConsumptionMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPCanBeActivatedByPlayer
struct AStorageBox_TekGenerator_C_BPCanBeActivatedByPlayer_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPOverrideAllowStructureAccess
struct AStorageBox_TekGenerator_C_BPOverrideAllowStructureAccess_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsAccessAllowed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.GetDesiredRadiusMultiplier
struct AStorageBox_TekGenerator_C_GetDesiredRadiusMultiplier_Params
{
	int                                                IncrementAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRadiusMultiplier;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPTryMultiUse
struct AStorageBox_TekGenerator_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPGetMultiUseEntries
struct AStorageBox_TekGenerator_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostInitializeComponents
struct AStorageBox_TekGenerator_C_BPPostInitializeComponents_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPPostSetStructureCollisionChannels
struct AStorageBox_TekGenerator_C_BPPostSetStructureCollisionChannels_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.SetShieldActive
struct AStorageBox_TekGenerator_C_SetShieldActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerDeactivated
struct AStorageBox_TekGenerator_C_BPContainerDeactivated_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.BPContainerActivated
struct AStorageBox_TekGenerator_C_BPContainerActivated_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UserConstructionScript
struct AStorageBox_TekGenerator_C_UserConstructionScript_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetRefreshRadiusScale
struct AStorageBox_TekGenerator_C_NetRefreshRadiusScale_Params
{
	int                                                NewUserRadiusValue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldInterp
struct AStorageBox_TekGenerator_C_UpdateShieldInterp_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.UpdateShieldOpacity
struct AStorageBox_TekGenerator_C_UpdateShieldOpacity_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.FinishPowerUp
struct AStorageBox_TekGenerator_C_FinishPowerUp_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoRefreshPoweredStructures
struct AStorageBox_TekGenerator_C_DoRefreshPoweredStructures_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.NetSetForceDisplayRadius
struct AStorageBox_TekGenerator_C_NetSetForceDisplayRadius_Params
{
	bool                                               newForceDisplayRadius;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.DoNetPulseRadius
struct AStorageBox_TekGenerator_C_DoNetPulseRadius_Params
{
};

// Function StorageBox_TekGenerator.StorageBox_TekGenerator_C.ExecuteUbergraph_StorageBox_TekGenerator
struct AStorageBox_TekGenerator_C_ExecuteUbergraph_StorageBox_TekGenerator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
