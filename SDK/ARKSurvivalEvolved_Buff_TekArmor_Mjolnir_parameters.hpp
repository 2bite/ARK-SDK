#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Mjolnir_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPDeactivated
struct ABuff_TekArmor_Mjolnir_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ReceiveTick
struct ABuff_TekArmor_Mjolnir_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_CleanupMjolnir
struct ABuff_TekArmor_Mjolnir_C_MC_CleanupMjolnir_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ThrowingMonitorTick
struct ABuff_TekArmor_Mjolnir_C_ThrowingMonitorTick_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckIsThrowBlocked
struct ABuff_TekArmor_Mjolnir_C_CheckIsThrowBlocked_Params
{
	struct FVector                                     ForThrowLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBlocked;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestFireProjectileMulticast
struct ABuff_TekArmor_Mjolnir_C_ServerRequestFireProjectileMulticast_Params
{
	struct FVector                                     ShootDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MCHitForEmitter
struct ABuff_TekArmor_Mjolnir_C_MCHitForEmitter_Params
{
	struct UObject_FTransform                          HitTransform;                                             // (Parm, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AuthorityProjectileRequestsSync
struct ABuff_TekArmor_Mjolnir_C_AuthorityProjectileRequestsSync_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_SyncProjectile
struct ABuff_TekArmor_Mjolnir_C_MC_SyncProjectile_Params
{
	bool                                               bIsStuck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Mjolnir_C_SetCastedArmorPieceRef_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CheckShouldHideWeapon
struct ABuff_TekArmor_Mjolnir_C_CheckShouldHideWeapon_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.AllowTekPunch
struct ABuff_TekArmor_Mjolnir_C_AllowTekPunch_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.canThrow
struct ABuff_TekArmor_Mjolnir_C_canThrow_Params
{
	bool                                               IsForPostCheck;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanAttack
struct ABuff_TekArmor_Mjolnir_C_CanAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoLightningFan
struct ABuff_TekArmor_Mjolnir_C_CanDoLightningFan_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.HandleBuffAnimNotify
struct ABuff_TekArmor_Mjolnir_C_HandleBuffAnimNotify_Params
{
	struct FName*                                      AnimNotifyName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     AnimNotifyStringData;                                     // (Parm, ZeroConstructor)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnPulseEnd
struct ABuff_TekArmor_Mjolnir_C_OnPulseEnd_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastSetPulse
struct ABuff_TekArmor_Mjolnir_C_MulticastSetPulse_Params
{
	bool                                               ShouldPulse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CanDoPulseAttack
struct ABuff_TekArmor_Mjolnir_C_CanDoPulseAttack_Params
{
	bool                                               CanPulse;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartPulseAttack
struct ABuff_TekArmor_Mjolnir_C_TryStartPulseAttack_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.IsDoingPulseAttack
struct ABuff_TekArmor_Mjolnir_C_IsDoingPulseAttack_Params
{
	bool                                               IsDoingAttack;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ClientMjolnirSpawned
struct ABuff_TekArmor_Mjolnir_C_ClientMjolnirSpawned_Params
{
	class AProj_Mjolnir_C*                             NewMjolnirProjectile;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MulticastCallbackMjolnir
struct ABuff_TekArmor_Mjolnir_C_MulticastCallbackMjolnir_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestMjolnirCallback
struct ABuff_TekArmor_Mjolnir_C_ServerRequestMjolnirCallback_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnMjolnirReturned
struct ABuff_TekArmor_Mjolnir_C_OnMjolnirReturned_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetLaunchLocation
struct ABuff_TekArmor_Mjolnir_C_GetLaunchLocation_Params
{
	struct FVector                                     LaunchLoc;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.GetAdjustedAim
struct ABuff_TekArmor_Mjolnir_C_GetAdjustedAim_Params
{
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ServerRequestThrowMjolnir
struct ABuff_TekArmor_Mjolnir_C_ServerRequestThrowMjolnir_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.FireProjectileMulticast
struct ABuff_TekArmor_Mjolnir_C_FireProjectileMulticast_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShootDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SkillThrowMjolnir
struct ABuff_TekArmor_Mjolnir_C_SkillThrowMjolnir_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStopLightning
struct ABuff_TekArmor_Mjolnir_C_TryStopLightning_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UpdateMaterialAndParticles
struct ABuff_TekArmor_Mjolnir_C_UpdateMaterialAndParticles_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsServer
struct ABuff_TekArmor_Mjolnir_C_RemoveAllArcsServer_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyTargetArcMulticast
struct ABuff_TekArmor_Mjolnir_C_DestroyTargetArcMulticast_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnNewActorAffectedMulticast
struct ABuff_TekArmor_Mjolnir_C_OnNewActorAffectedMulticast_Params
{
	class AActor*                                      actorAffected;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryAddNewArc
struct ABuff_TekArmor_Mjolnir_C_TryAddNewArc_Params
{
	class AActor*                                      forActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveArcTargetServer
struct ABuff_TekArmor_Mjolnir_C_RemoveArcTargetServer_Params
{
	class AActor*                                      ArcTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ShouldRemoveArcForTarget
struct ABuff_TekArmor_Mjolnir_C_ShouldRemoveArcForTarget_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               shouldRemove;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcForTarget
struct ABuff_TekArmor_Mjolnir_C_DestroyArcForTarget_Params
{
	class APrimalCharacter*                            forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ConnectArcToTarget
struct ABuff_TekArmor_Mjolnir_C_ConnectArcToTarget_Params
{
	struct FSTR_ChargeBeamInfo                         ArcInfo;                                                  // (Parm)
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.DestroyArcVisuals
struct ABuff_TekArmor_Mjolnir_C_DestroyArcVisuals_Params
{
	struct FSTR_ChargeBeamInfo                         ArcInfo;                                                  // (Parm)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.RemoveAllArcsClient
struct ABuff_TekArmor_Mjolnir_C_RemoveAllArcsClient_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetArcIntensity
struct ABuff_TekArmor_Mjolnir_C_SetArcIntensity_Params
{
	class UParticleSystemComponent*                    Arc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.SetEndPoints
struct ABuff_TekArmor_Mjolnir_C_SetEndPoints_Params
{
	class UParticleSystemComponent*                    Arc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPoint1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     endPoint2;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     endPoint3;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.CreateNewArc
struct ABuff_TekArmor_Mjolnir_C_CreateNewArc_Params
{
	class AActor*                                      ToActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightning
struct ABuff_TekArmor_Mjolnir_C_OnStopLightning_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStopLightningMulticast
struct ABuff_TekArmor_Mjolnir_C_OnStopLightningMulticast_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickServer
struct ABuff_TekArmor_Mjolnir_C_LightningTickServer_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTickClient
struct ABuff_TekArmor_Mjolnir_C_LightningTickClient_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.LightningTick
struct ABuff_TekArmor_Mjolnir_C_LightningTick_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightning
struct ABuff_TekArmor_Mjolnir_C_OnStartLightning_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.OnStartLightningMulticast
struct ABuff_TekArmor_Mjolnir_C_OnStartLightningMulticast_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.TryStartLightning
struct ABuff_TekArmor_Mjolnir_C_TryStartLightning_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.BPSetupForInstigator
struct ABuff_TekArmor_Mjolnir_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.UserConstructionScript
struct ABuff_TekArmor_Mjolnir_C_UserConstructionScript_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_AltFire
struct ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_AltFire_Params
{
	bool*                                              bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger_Hold
struct ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Right_Trigger_Hold_Params
{
	bool*                                              bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Right_Trigger
struct ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Right_Trigger_Params
{
	bool*                                              bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting_Hold
struct ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_Targeting_Hold_Params
{
	bool*                                              bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger_Hold
struct ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Left_Trigger_Hold_Params
{
	bool*                                              bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_InputAction_Targeting
struct ABuff_TekArmor_Mjolnir_C_Proxy_InputAction_Targeting_Params
{
	bool*                                              bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.Proxy_Gamepad_Left_Trigger
struct ABuff_TekArmor_Mjolnir_C_Proxy_Gamepad_Left_Trigger_Params
{
	bool*                                              bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayCameraShake
struct ABuff_TekArmor_Mjolnir_C_PlayCameraShake_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.MC_PlayThrow
struct ABuff_TekArmor_Mjolnir_C_MC_PlayThrow_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.PlayHoldForReturn
struct ABuff_TekArmor_Mjolnir_C_PlayHoldForReturn_Params
{
};

// Function Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C.ExecuteUbergraph_Buff_TekArmor_Mjolnir
struct ABuff_TekArmor_Mjolnir_C_ExecuteUbergraph_Buff_TekArmor_Mjolnir_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
