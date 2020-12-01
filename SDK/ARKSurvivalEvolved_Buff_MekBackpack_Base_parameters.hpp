#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnSyncColorization
struct ABuff_MekBackpack_Base_C_OnSyncColorization_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifySetRider
struct ABuff_MekBackpack_Base_C_NotifySetRider_Params
{
	class AShooterCharacter*                           Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.RestoreBackpackSaveData
struct ABuff_MekBackpack_Base_C_RestoreBackpackSaveData_Params
{
	struct FMekBackpackData                            SaveData;                                                 // (Parm)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetBackpackSaveData
struct ABuff_MekBackpack_Base_C_GetBackpackSaveData_Params
{
	struct FMekBackpackData                            Data;                                                     // (Parm, OutParm)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyInventoryChange
struct ABuff_MekBackpack_Base_C_NotifyInventoryChange_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ItemAdded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ItemEquipped;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPActivated
struct ABuff_MekBackpack_Base_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.SetBackpackMalfunctioned
struct ABuff_MekBackpack_Base_C_SetBackpackMalfunctioned_Params
{
	bool                                               IsBackpackDisabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyActivateBackpack
struct ABuff_MekBackpack_Base_C_NotifyActivateBackpack_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OverrideTurnInPlaceSpeed
struct ABuff_MekBackpack_Base_C_OverrideTurnInPlaceSpeed_Params
{
	float                                              DefaultSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopAttack
struct ABuff_MekBackpack_Base_C_NotifyStopAttack_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartAttack
struct ABuff_MekBackpack_Base_C_NotifyStartAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowHurtAnim
struct ABuff_MekBackpack_Base_C_AllowHurtAnim_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowTargeting
struct ABuff_MekBackpack_Base_C_AllowTargeting_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopHover
struct ABuff_MekBackpack_Base_C_NotifyStopHover_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartHover
struct ABuff_MekBackpack_Base_C_NotifyStartHover_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekHover
struct ABuff_MekBackpack_Base_C_AllowMekHover_Params
{
	bool                                               CanHover;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStopTargeting
struct ABuff_MekBackpack_Base_C_NotifyStopTargeting_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.NotifyStartTargeting
struct ABuff_MekBackpack_Base_C_NotifyStartTargeting_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnAnimNotifyEvent
struct ABuff_MekBackpack_Base_C_OnAnimNotifyEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekPistol
struct ABuff_MekBackpack_Base_C_AllowMekPistol_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.AllowMekSword
struct ABuff_MekBackpack_Base_C_AllowMekSword_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackAttack
struct ABuff_MekBackpack_Base_C_OnBackpackAttack_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.BPDeactivated
struct ABuff_MekBackpack_Base_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.GetMek
struct ABuff_MekBackpack_Base_C_GetMek_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AMek_Character_BP_C*                         MekChar;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.IsBackpackActive
struct ABuff_MekBackpack_Base_C_IsBackpackActive_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanDeactivateBackpack
struct ABuff_MekBackpack_Base_C_CanDeactivateBackpack_Params
{
	bool                                               CanDeactivate;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.CanActivateBackpack
struct ABuff_MekBackpack_Base_C_CanActivateBackpack_Params
{
	bool                                               CanActivate;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      FailureMessage;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackDeactivated
struct ABuff_MekBackpack_Base_C_OnBackpackDeactivated_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.OnBackpackActivated
struct ABuff_MekBackpack_Base_C_OnBackpackActivated_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.UserConstructionScript
struct ABuff_MekBackpack_Base_C_UserConstructionScript_Params
{
};

// Function Buff_MekBackpack_Base.Buff_MekBackpack_Base_C.ExecuteUbergraph_Buff_MekBackpack_Base
struct ABuff_MekBackpack_Base_C_ExecuteUbergraph_Buff_MekBackpack_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
