#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Phoenix_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveHit
struct APhoenix_Character_BP_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPPlayDying
struct APhoenix_Character_BP_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanStartSuperCharge
struct APhoenix_Character_BP_C_CanStartSuperCharge_Params
{
	bool                                               canStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPSetupTamed
struct APhoenix_Character_BP_C_BPSetupTamed_Params
{
	bool*                                              bWasJustTamed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanUseSuperCharge
struct APhoenix_Character_BP_C_CanUseSuperCharge_Params
{
	bool                                               canSupercharge;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateTimerServer
struct APhoenix_Character_BP_C_UpdateTimerServer_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRep_isCharging
struct APhoenix_Character_BP_C_OnRep_isCharging_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ApplyFireToNearbyCreatures
struct APhoenix_Character_BP_C_ApplyFireToNearbyCreatures_Params
{
	float                                              fireRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanRiderAttack
struct APhoenix_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.SetAnimsWeightForAttack
struct APhoenix_Character_BP_C_SetAnimsWeightForAttack_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetMode
struct APhoenix_Character_BP_C_GetMode_Params
{
	bool                                               Regular;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Blaze;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintDrawFloatingHUD
struct APhoenix_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPGetMultiUseEntries
struct APhoenix_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTryMultiUse
struct APhoenix_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.On StateChanged Client
struct APhoenix_Character_BP_C_On_StateChanged_Client_Params
{
	bool                                               hasRisen;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Is In Water
struct APhoenix_Character_BP_C_Is_In_Water_Params
{
	bool                                               currentlyOnWater;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.CanAshStayOnLocation
struct APhoenix_Character_BP_C_CanAshStayOnLocation_Params
{
	bool                                               canAshStay;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Calculate BuryMeshTransform
struct APhoenix_Character_BP_C_Calculate_BuryMeshTransform_Params
{
	bool                                               rise;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct UObject_FTransform                          buryMeshTransform;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.GetSuperheatState
struct APhoenix_Character_BP_C_GetSuperheatState_Params
{
	bool                                               isSuperheat;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintCanAttack
struct APhoenix_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UpdateMoundVisibilityAndCollision
struct APhoenix_Character_BP_C_UpdateMoundVisibilityAndCollision_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               skipVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Update MeshVisibility and Collision
struct APhoenix_Character_BP_C_Update_MeshVisibility_and_Collision_Params
{
	bool                                               Visibility;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               skipVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPTimerServer
struct APhoenix_Character_BP_C_BPTimerServer_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPAdjustDamage
struct APhoenix_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ConvertDamageToAffinity
struct APhoenix_Character_BP_C_ConvertDamageToAffinity_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UserConstructionScript
struct APhoenix_Character_BP_C_UserConstructionScript_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__FinishedFunc
struct APhoenix_Character_BP_C_UndissolveMoundTimeline__FinishedFunc_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMoundTimeline__UpdateFunc
struct APhoenix_Character_BP_C_UndissolveMoundTimeline__UpdateFunc_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__FinishedFunc
struct APhoenix_Character_BP_C_DissolveMoundTimeline__FinishedFunc_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMoundTimeline__UpdateFunc
struct APhoenix_Character_BP_C_DissolveMoundTimeline__UpdateFunc_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__FinishedFunc
struct APhoenix_Character_BP_C_DissolvePhoenixMesh__FinishedFunc_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolvePhoenixMesh__UpdateFunc
struct APhoenix_Character_BP_C_DissolvePhoenixMesh__UpdateFunc_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnDied_Event
struct APhoenix_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ReceiveBeginPlay
struct APhoenix_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.rise
struct APhoenix_Character_BP_C_rise_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnRise
struct APhoenix_Character_BP_C_OnRise_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DissolveMound
struct APhoenix_Character_BP_C_DissolveMound_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDie
struct APhoenix_Character_BP_C_FakeDie_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnFakeDie
struct APhoenix_Character_BP_C_OnFakeDie_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AshFireParticles
struct APhoenix_Character_BP_C_Die_AshFireParticles_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixDie_MeshVisuals
struct APhoenix_Character_BP_C_PhoenixDie_MeshVisuals_Params
{
	bool                                               Dissolve;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.PhoenixRise_MeshVisuals
struct APhoenix_Character_BP_C_PhoenixRise_MeshVisuals_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BPUnstasis
struct APhoenix_Character_BP_C_BPUnstasis_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixRise_Multicast
struct APhoenix_Character_BP_C_OnPhoenixRise_Multicast_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.OnPhoenixFakeDies_Multicast
struct APhoenix_Character_BP_C_OnPhoenixFakeDies_Multicast_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.KillPhoenix
struct APhoenix_Character_BP_C_KillPhoenix_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.RiseFailsafe
struct APhoenix_Character_BP_C_RiseFailsafe_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.FakeDieFailsafe
struct APhoenix_Character_BP_C_FakeDieFailsafe_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct APhoenix_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AshFireParticles
struct APhoenix_Character_BP_C_Rise_AshFireParticles_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.UndissolveMound
struct APhoenix_Character_BP_C_UndissolveMound_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_AllEffects
struct APhoenix_Character_BP_C_Rise_AllEffects_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_AllEffects
struct APhoenix_Character_BP_C_Die_AllEffects_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ChangeChargeState_Server
struct APhoenix_Character_BP_C_ChangeChargeState_Server_Params
{
	bool                                               Activate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.StopSuperCharge
struct APhoenix_Character_BP_C_StopSuperCharge_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.StartSuperCharge
struct APhoenix_Character_BP_C_StartSuperCharge_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Rise_BodyFireParticles
struct APhoenix_Character_BP_C_Rise_BodyFireParticles_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.Die_BodyFireParticles
struct APhoenix_Character_BP_C_Die_BodyFireParticles_Params
{
	bool                                               Fast;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DropInventory
struct APhoenix_Character_BP_C_DropInventory_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.DoChargeImpulse
struct APhoenix_Character_BP_C_DoChargeImpulse_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpPressed
struct APhoenix_Character_BP_C_BP_OnJumpPressed_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.BP_OnJumpReleased
struct APhoenix_Character_BP_C_BP_OnJumpReleased_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.AnimNotify_FlyIdle_NoDed
struct APhoenix_Character_BP_C_AnimNotify_FlyIdle_NoDed_Params
{
};

// Function Phoenix_Character_BP.Phoenix_Character_BP_C.ExecuteUbergraph_Phoenix_Character_BP
struct APhoenix_Character_BP_C_ExecuteUbergraph_Phoenix_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
