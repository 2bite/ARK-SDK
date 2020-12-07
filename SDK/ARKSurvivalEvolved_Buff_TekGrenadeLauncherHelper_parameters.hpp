#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekGrenadeLauncherHelper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetValidAmmoTypes_1
struct ABuff_TekGrenadeLauncherHelper_C_GetValidAmmoTypes_1_Params
{
	TArray<class UClass*>                              TypesInInventory;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveDestroyed
struct ABuff_TekGrenadeLauncherHelper_C_ReceiveDestroyed_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPInstigatorDied
struct ABuff_TekGrenadeLauncherHelper_C_BPInstigatorDied_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStartFire
struct ABuff_TekGrenadeLauncherHelper_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShouldUpdateAmmoCount
struct ABuff_TekGrenadeLauncherHelper_C_ShouldUpdateAmmoCount_Params
{
	class APrimalCharacter*                            ForShooterChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldUpdate;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.InitWeapon
struct ABuff_TekGrenadeLauncherHelper_C_InitWeapon_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.AmmoNameToType
struct ABuff_TekGrenadeLauncherHelper_C_AmmoNameToType_Params
{
	struct FName                                       AmmoTypeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AmmoType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GenerateAmmoWheelEntries
struct ABuff_TekGrenadeLauncherHelper_C_GenerateAmmoWheelEntries_Params
{
	TArray<struct FCustomWheelEntry>                   AmmoEntries;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GenerateSlotWheelEntries
struct ABuff_TekGrenadeLauncherHelper_C_GenerateSlotWheelEntries_Params
{
	TArray<struct FCustomWheelEntry>                   Entries;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.CalcAmmoWidgetLocation
struct ABuff_TekGrenadeLauncherHelper_C_CalcAmmoWidgetLocation_Params
{
	int                                                InInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetItemShortName
struct ABuff_TekGrenadeLauncherHelper_C_GetItemShortName_Params
{
	class UClass*                                      FromClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.GetValidAmmoTypes
struct ABuff_TekGrenadeLauncherHelper_C_GetValidAmmoTypes_Params
{
	TArray<class UClass*>                              TypesInInventory;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.SyncHUDElementSlots
struct ABuff_TekGrenadeLauncherHelper_C_SyncHUDElementSlots_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ReceiveBeginPlay
struct ABuff_TekGrenadeLauncherHelper_C_ReceiveBeginPlay_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPGetHUDElements
struct ABuff_TekGrenadeLauncherHelper_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.UserConstructionScript
struct ABuff_TekGrenadeLauncherHelper_C_UserConstructionScript_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BuffTickClient
struct ABuff_TekGrenadeLauncherHelper_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnSlotSelected
struct ABuff_TekGrenadeLauncherHelper_C_OnSlotSelected_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeSelected
struct ABuff_TekGrenadeLauncherHelper_C_OnAmmoTypeSelected_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStartAltFire
struct ABuff_TekGrenadeLauncherHelper_C_BPHandleOnStartAltFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.BPHandleOnStopAltFire
struct ABuff_TekGrenadeLauncherHelper_C_BPHandleOnStopAltFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ShowSlotSelectWheel
struct ABuff_TekGrenadeLauncherHelper_C_ShowSlotSelectWheel_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.HideSlotSelectWheel
struct ABuff_TekGrenadeLauncherHelper_C_HideSlotSelectWheel_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.OnAmmoTypeUnloaded
struct ABuff_TekGrenadeLauncherHelper_C_OnAmmoTypeUnloaded_Params
{
};

// Function Buff_TekGrenadeLauncherHelper.Buff_TekGrenadeLauncherHelper_C.ExecuteUbergraph_Buff_TekGrenadeLauncherHelper
struct ABuff_TekGrenadeLauncherHelper_C_ExecuteUbergraph_Buff_TekGrenadeLauncherHelper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
