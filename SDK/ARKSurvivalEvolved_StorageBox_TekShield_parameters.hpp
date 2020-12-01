#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekShield_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StorageBox_TekShield.StorageBox_TekShield_C.CheckCharactersInsideWhenActive
struct AStorageBox_TekShield_C_CheckCharactersInsideWhenActive_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.ReceiveBeginPlay
struct AStorageBox_TekShield_C_ReceiveBeginPlay_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.CheckChargeEffect
struct AStorageBox_TekShield_C_CheckChargeEffect_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.OnRep_PowerUpCompletionTime
struct AStorageBox_TekShield_C_OnRep_PowerUpCompletionTime_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPClientDoMultiUse
struct AStorageBox_TekShield_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BlueprintDrawHUD
struct AStorageBox_TekShield_C_BlueprintDrawHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPImpactEffect
struct AStorageBox_TekShield_C_BPImpactEffect_Params
{
	struct FHitResult                                  HitRes;                                                   // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ShootDirection;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPHitEffect
struct AStorageBox_TekShield_C_BPHitEffect_Params
{
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocalPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageLoc;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPSupressImpactEffects
struct AStorageBox_TekShield_C_BPSupressImpactEffects_Params
{
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocalPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPRefreshedStructureColors
struct AStorageBox_TekShield_C_BPRefreshedStructureColors_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.AllowIgnoreCharacterEncroachment
struct AStorageBox_TekShield_C_AllowIgnoreCharacterEncroachment_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     EncroachingCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPGetFuelConsumptionMultiplier
struct AStorageBox_TekShield_C_BPGetFuelConsumptionMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPCanBeActivatedByPlayer
struct AStorageBox_TekShield_C_BPCanBeActivatedByPlayer_Params
{
	class AShooterPlayerController**                   PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPOverrideAllowStructureAccess
struct AStorageBox_TekShield_C_BPOverrideAllowStructureAccess_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsAccessAllowed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.GetDesiredRadiusMultiplier
struct AStorageBox_TekShield_C_GetDesiredRadiusMultiplier_Params
{
	int                                                IncrementAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRadiusMultiplier;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPTryMultiUse
struct AStorageBox_TekShield_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPGetMultiUseEntries
struct AStorageBox_TekShield_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.CheckForExtraIgnorePawnPushers
struct AStorageBox_TekShield_C_CheckForExtraIgnorePawnPushers_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPPostInitializeComponents
struct AStorageBox_TekShield_C_BPPostInitializeComponents_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPPostSetStructureCollisionChannels
struct AStorageBox_TekShield_C_BPPostSetStructureCollisionChannels_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.SetShieldActive
struct AStorageBox_TekShield_C_SetShieldActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPContainerDeactivated
struct AStorageBox_TekShield_C_BPContainerDeactivated_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BPContainerActivated
struct AStorageBox_TekShield_C_BPContainerActivated_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.IsPushablePawn
struct AStorageBox_TekShield_C_IsPushablePawn_Params
{
	class APrimalCharacter*                            PawnToPush;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPushable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.DoPawnPushing
struct AStorageBox_TekShield_C_DoPawnPushing_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.UserConstructionScript
struct AStorageBox_TekShield_C_UserConstructionScript_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature
struct AStorageBox_TekShield_C_BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.CheckForPawnPushing
struct AStorageBox_TekShield_C_CheckForPawnPushing_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature
struct AStorageBox_TekShield_C_BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.NetRefreshRadiusScale
struct AStorageBox_TekShield_C_NetRefreshRadiusScale_Params
{
	int                                                NewUserRadiusValue;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.UpdateShieldInterp
struct AStorageBox_TekShield_C_UpdateShieldInterp_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.UpdateShieldOpacity
struct AStorageBox_TekShield_C_UpdateShieldOpacity_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.FinishPowerUp
struct AStorageBox_TekShield_C_FinishPowerUp_Params
{
};

// Function StorageBox_TekShield.StorageBox_TekShield_C.ExecuteUbergraph_StorageBox_TekShield
struct AStorageBox_TekShield_C_ExecuteUbergraph_StorageBox_TekShield_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
