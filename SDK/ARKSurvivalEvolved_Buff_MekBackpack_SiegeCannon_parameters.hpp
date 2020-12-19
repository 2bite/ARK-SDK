#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekBackpack_SiegeCannon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPAdjustImpulseFromDamage
struct ABuff_MekBackpack_SiegeCannon_C_BPAdjustImpulseFromDamage_Params
{
	struct FVector*                                    DesiredImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickServer
struct ABuff_MekBackpack_SiegeCannon_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventInstigatorMovementMode
struct ABuff_MekBackpack_SiegeCannon_C_BPPreventInstigatorMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffAdjustDamage
struct ABuff_MekBackpack_SiegeCannon_C_BuffAdjustDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifySetRider
struct ABuff_MekBackpack_SiegeCannon_C_NotifySetRider_Params
{
	class AShooterCharacter**                          Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetFireAnim
struct ABuff_MekBackpack_SiegeCannon_C_GetFireAnim_Params
{
	struct FVector                                     FireDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MekForwardDirection;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ResultAnim;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPInstigatorPossessed
struct ABuff_MekBackpack_SiegeCannon_C_BPInstigatorPossessed_Params
{
	class AController**                                ByController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetBackpackSaveData
struct ABuff_MekBackpack_SiegeCannon_C_GetBackpackSaveData_Params
{
	struct FMekBackpackData                            Data;                                                     // (Parm, OutParm)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.RestoreBackpackSaveData
struct ABuff_MekBackpack_SiegeCannon_C_RestoreBackpackSaveData_Params
{
	struct FMekBackpackData*                           SaveData;                                                 // (Parm)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_PreventSword
struct ABuff_MekBackpack_SiegeCannon_C_OnRep_PreventSword_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyInventoryChange
struct ABuff_MekBackpack_SiegeCannon_C_NotifyInventoryChange_Params
{
	class UPrimalItem**                                Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ItemAdded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ItemEquipped;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPActivated
struct ABuff_MekBackpack_SiegeCannon_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_SiegeCannonMalfunctioned
struct ABuff_MekBackpack_SiegeCannon_C_OnRep_SiegeCannonMalfunctioned_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SubtractAmmo
struct ABuff_MekBackpack_SiegeCannon_C_SubtractAmmo_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetCurrentAmmo
struct ABuff_MekBackpack_SiegeCannon_C_GetCurrentAmmo_Params
{
	int                                                AmmoAmount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPGetHUDElements
struct ABuff_MekBackpack_SiegeCannon_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OverrideTurnInPlaceSpeed
struct ABuff_MekBackpack_SiegeCannon_C_OverrideTurnInPlaceSpeed_Params
{
	float*                                             DefaultSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowHurtAnim
struct ABuff_MekBackpack_SiegeCannon_C_AllowHurtAnim_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.PreventJump
struct ABuff_MekBackpack_SiegeCannon_C_PreventJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowTargeting
struct ABuff_MekBackpack_SiegeCannon_C_AllowTargeting_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BPPreventFirstPerson
struct ABuff_MekBackpack_SiegeCannon_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekHover
struct ABuff_MekBackpack_SiegeCannon_C_AllowMekHover_Params
{
	bool                                               CanHover;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekSword
struct ABuff_MekBackpack_SiegeCannon_C_AllowMekSword_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.AllowMekPistol
struct ABuff_MekBackpack_SiegeCannon_C_AllowMekPistol_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.GetLaunchParams
struct ABuff_MekBackpack_SiegeCannon_C_GetLaunchParams_Params
{
	class AMek_Character_BP_C*                         Mek;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.BuffTickClient
struct ABuff_MekBackpack_SiegeCannon_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnRep_InSiegeMode
struct ABuff_MekBackpack_SiegeCannon_C_OnRep_InSiegeMode_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanDeactivateBackpack
struct ABuff_MekBackpack_SiegeCannon_C_CanDeactivateBackpack_Params
{
	bool                                               CanDeactivate;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.CanActivateBackpack
struct ABuff_MekBackpack_SiegeCannon_C_CanActivateBackpack_Params
{
	bool                                               CanActivate;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      FailureMessage;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.IsBackpackActive
struct ABuff_MekBackpack_SiegeCannon_C_IsBackpackActive_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.UserConstructionScript
struct ABuff_MekBackpack_SiegeCannon_C_UserConstructionScript_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackActivated
struct ABuff_MekBackpack_SiegeCannon_C_OnBackpackActivated_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnBackpackDeactivated
struct ABuff_MekBackpack_SiegeCannon_C_OnBackpackDeactivated_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiSiegeModeStateChanged
struct ABuff_MekBackpack_SiegeCannon_C_MultiSiegeModeStateChanged_Params
{
	bool                                               IsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.OnAnimNotifyEvent
struct ABuff_MekBackpack_SiegeCannon_C_OnAnimNotifyEvent_Params
{
	struct FName*                                      EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerUpdateFireOrientation
struct ABuff_MekBackpack_SiegeCannon_C_ServerUpdateFireOrientation_Params
{
	struct FVector                                     FireLoc;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FireDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStopAttack
struct ABuff_MekBackpack_SiegeCannon_C_NotifyStopAttack_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStartChargingAttack
struct ABuff_MekBackpack_SiegeCannon_C_ServerRequestStartChargingAttack_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.DoAttack
struct ABuff_MekBackpack_SiegeCannon_C_DoAttack_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ServerRequestStopChargingAttack
struct ABuff_MekBackpack_SiegeCannon_C_ServerRequestStopChargingAttack_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiAttackComplete
struct ABuff_MekBackpack_SiegeCannon_C_MultiAttackComplete_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStartChargingAttack
struct ABuff_MekBackpack_SiegeCannon_C_MultiStartChargingAttack_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiStopChargingAttack
struct ABuff_MekBackpack_SiegeCannon_C_MultiStopChargingAttack_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.NotifyStartAttack
struct ABuff_MekBackpack_SiegeCannon_C_NotifyStartAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SetBackpackMalfunctioned
struct ABuff_MekBackpack_SiegeCannon_C_SetBackpackMalfunctioned_Params
{
	bool*                                              IsBackpackDisabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.MultiUpdateAmmoQuantity
struct ABuff_MekBackpack_SiegeCannon_C_MultiUpdateAmmoQuantity_Params
{
	int                                                Quantity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.SyncClientAmmo
struct ABuff_MekBackpack_SiegeCannon_C_SyncClientAmmo_Params
{
};

// Function Buff_MekBackpack_SiegeCannon.Buff_MekBackpack_SiegeCannon_C.ExecuteUbergraph_Buff_MekBackpack_SiegeCannon
struct ABuff_MekBackpack_SiegeCannon_C_ExecuteUbergraph_Buff_MekBackpack_SiegeCannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
