#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_MissilePod_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetBackpackSaveData
struct ABuff_MekBackpack_MissilePod_C_GetBackpackSaveData_Params
{
	struct FMekBackpackData                            Data;                                                     // (Parm, OutParm)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.RestoreBackpackSaveData
struct ABuff_MekBackpack_MissilePod_C_RestoreBackpackSaveData_Params
{
	struct FMekBackpackData*                           SaveData;                                                 // (Parm)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyInventoryChange
struct ABuff_MekBackpack_MissilePod_C_NotifyInventoryChange_Params
{
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ItemAdded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ItemEquipped;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetHUDProgressBarPercent
struct ABuff_MekBackpack_MissilePod_C_GetHUDProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPActivated
struct ABuff_MekBackpack_MissilePod_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnRep_MissilePodMalfunctioned
struct ABuff_MekBackpack_MissilePod_C_OnRep_MissilePodMalfunctioned_Params
{
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BPDrawBuffStatusHUD
struct ABuff_MekBackpack_MissilePod_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.TryUseAmmo
struct ABuff_MekBackpack_MissilePod_C_TryUseAmmo_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetCurrentAmmo
struct ABuff_MekBackpack_MissilePod_C_GetCurrentAmmo_Params
{
	int                                                AmmoQuantity;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.GetFireDirection
struct ABuff_MekBackpack_MissilePod_C_GetFireDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.AllowMekHover
struct ABuff_MekBackpack_MissilePod_C_AllowMekHover_Params
{
	bool                                               CanHover;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.BuffTickClient
struct ABuff_MekBackpack_MissilePod_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.IsBackpackActive
struct ABuff_MekBackpack_MissilePod_C_IsBackpackActive_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.UserConstructionScript
struct ABuff_MekBackpack_MissilePod_C_UserConstructionScript_Params
{
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStartTargeting
struct ABuff_MekBackpack_MissilePod_C_NotifyStartTargeting_Params
{
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyStopTargeting
struct ABuff_MekBackpack_MissilePod_C_NotifyStopTargeting_Params
{
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ServerRequestAttack
struct ABuff_MekBackpack_MissilePod_C_ServerRequestAttack_Params
{
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.NotifyActivateBackpack
struct ABuff_MekBackpack_MissilePod_C_NotifyActivateBackpack_Params
{
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.OnAnimNotifyEvent
struct ABuff_MekBackpack_MissilePod_C_OnAnimNotifyEvent_Params
{
	struct FName*                                      EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SetBackpackMalfunctioned
struct ABuff_MekBackpack_MissilePod_C_SetBackpackMalfunctioned_Params
{
	bool*                                              IsBackpackDisabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.MultiUpdateAmmoQuantity
struct ABuff_MekBackpack_MissilePod_C_MultiUpdateAmmoQuantity_Params
{
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.SyncClientAmmo
struct ABuff_MekBackpack_MissilePod_C_SyncClientAmmo_Params
{
};

// Function Buff_MekBackpack_MissilePod.Buff_MekBackpack_MissilePod_C.ExecuteUbergraph_Buff_MekBackpack_MissilePod
struct ABuff_MekBackpack_MissilePod_C_ExecuteUbergraph_Buff_MekBackpack_MissilePod_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
