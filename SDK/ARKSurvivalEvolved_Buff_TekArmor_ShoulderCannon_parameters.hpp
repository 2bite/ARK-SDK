#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_ShoulderCannon_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Overheated
struct ABuff_TekArmor_ShoulderCannon_C_OnRep_Overheated_Params
{
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.OnRep_Activated
struct ABuff_TekArmor_ShoulderCannon_C_OnRep_Activated_Params
{
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateSound
struct ABuff_TekArmor_ShoulderCannon_C_UpdateSound_Params
{
	int                                                ModeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsAllowedToFire
struct ABuff_TekArmor_ShoulderCannon_C_IsAllowedToFire_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateTarget
struct ABuff_TekArmor_ShoulderCannon_C_UpdateTarget_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponHeat
struct ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponHeat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClampPitchByYaw
struct ABuff_TekArmor_ShoulderCannon_C_ClampPitchByYaw_Params
{
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateAmmo
struct ABuff_TekArmor_ShoulderCannon_C_UpdateAmmo_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UseAlternateSocket
struct ABuff_TekArmor_ShoulderCannon_C_UseAlternateSocket_Params
{
	bool                                               UseAlt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.CanAimAtTarget
struct ABuff_TekArmor_ShoulderCannon_C_CanAimAtTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Fire Mode
struct ABuff_TekArmor_ShoulderCannon_C_Update_Fire_Mode_Params
{
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPAnimNotifyCustomEvent
struct ABuff_TekArmor_ShoulderCannon_C_BPAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.DrawBuffFloatingHUD
struct ABuff_TekArmor_ShoulderCannon_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Calculate Ready to Fire
struct ABuff_TekArmor_ShoulderCannon_C_Calculate_Ready_to_Fire_Params
{
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsValidTarget
struct ABuff_TekArmor_ShoulderCannon_C_IsValidTarget_Params
{
	class APrimalCharacter*                            TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.TryFire Weapon
struct ABuff_TekArmor_ShoulderCannon_C_TryFire_Weapon_Params
{
	struct UObject_FTransform                          AimTransform;                                             // (Parm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPClientDoMultiUse
struct ABuff_TekArmor_ShoulderCannon_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPTryMultiUse
struct ABuff_TekArmor_ShoulderCannon_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetMultiUseEntries
struct ABuff_TekArmor_ShoulderCannon_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPGetHUDElements
struct ABuff_TekArmor_ShoulderCannon_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ApplyAccuracy
struct ABuff_TekArmor_ShoulderCannon_C_ApplyAccuracy_Params
{
	struct UObject_FTransform                          InTransform;                                              // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct UObject_FTransform                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.SpawnProjectile
struct ABuff_TekArmor_ShoulderCannon_C_SpawnProjectile_Params
{
	struct UObject_FTransform                          InTransform;                                              // (Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.IsElectricalStormActive
struct ABuff_TekArmor_ShoulderCannon_C_IsElectricalStormActive_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Firing
struct ABuff_TekArmor_ShoulderCannon_C_Update_Weapon_Firing_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BPSetupForInstigator
struct ABuff_TekArmor_ShoulderCannon_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.GetTargetPos
struct ABuff_TekArmor_ShoulderCannon_C_GetTargetPos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.Update Weapon Position
struct ABuff_TekArmor_ShoulderCannon_C_Update_Weapon_Position_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UpdateWeaponAim
struct ABuff_TekArmor_ShoulderCannon_C_UpdateWeaponAim_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickServer
struct ABuff_TekArmor_ShoulderCannon_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.BuffTickClient
struct ABuff_TekArmor_ShoulderCannon_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.PreventBlockingWithShield
struct ABuff_TekArmor_ShoulderCannon_C_PreventBlockingWithShield_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.UserConstructionScript
struct ABuff_TekArmor_ShoulderCannon_C_UserConstructionScript_Params
{
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSpawnProjectile
struct ABuff_TekArmor_ShoulderCannon_C_ClientSpawnProjectile_Params
{
	struct UObject_FTransform                          SpawnTransform;                                           // (Parm, IsPlainOldData)
	float                                              NewChargeValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerTryFire
struct ABuff_TekArmor_ShoulderCannon_C_ServerTryFire_Params
{
	struct UObject_FTransform                          SpawnTranform;                                            // (Parm, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetAnimIdle
struct ABuff_TekArmor_ShoulderCannon_C_ServerSetAnimIdle_Params
{
	bool                                               Idle;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ClientSetFireMode
struct ABuff_TekArmor_ShoulderCannon_C_ClientSetFireMode_Params
{
	int                                                NewFireMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetTarget
struct ABuff_TekArmor_ShoulderCannon_C_ServerSetTarget_Params
{
	struct FVector                                     TargetPos;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ServerSetLockedTarget
struct ABuff_TekArmor_ShoulderCannon_C_ServerSetLockedTarget_Params
{
	class APrimalCharacter*                            TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C.ExecuteUbergraph_Buff_TekArmor_ShoulderCannon
struct ABuff_TekArmor_ShoulderCannon_C_ExecuteUbergraph_Buff_TekArmor_ShoulderCannon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
