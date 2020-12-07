#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Owl_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Owl_Character_BP.Owl_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AOwl_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.BPOnStartJump
struct AOwl_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.RidingTick
struct AOwl_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.BPHandleControllerInitiatedAttack
struct AOwl_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.IsOnOrNearGround
struct AOwl_Character_BP_C_IsOnOrNearGround_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.SetupIceCrashState
struct AOwl_Character_BP_C_SetupIceCrashState_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyOneShotEncapsulate;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CalculatedImpactRadius;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.GetPredatorVisionStaminaDrainPerSecond
struct AOwl_Character_BP_C_GetPredatorVisionStaminaDrainPerSecond_Params
{
	float                                              Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.StopEncapsulateAnims
struct AOwl_Character_BP_C_StopEncapsulateAnims_Params
{
	bool                                               StoppedAnim;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.DiveBomb
struct AOwl_Character_BP_C_DiveBomb_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.DoIceBombAttack
struct AOwl_Character_BP_C_DoIceBombAttack_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.OnDiveCrash
struct AOwl_Character_BP_C_OnDiveCrash_Params
{
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            HitComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (Parm)
};

// Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingTrailParticles
struct AOwl_Character_BP_C_UpdateDivingTrailParticles_Params
{
	class UParticleSystemComponent*                    Particles;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.UpdateDivingFX
struct AOwl_Character_BP_C_UpdateDivingFX_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.GetEncapsulateStaminaDrainPerSecond
struct AOwl_Character_BP_C_GetEncapsulateStaminaDrainPerSecond_Params
{
	float                                              Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.BPOnStaminaDrained
struct AOwl_Character_BP_C_BPOnStaminaDrained_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AOwl_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.BPHandleOnStopTargeting
struct AOwl_Character_BP_C_BPHandleOnStopTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.SetupEncapsulateState
struct AOwl_Character_BP_C_SetupEncapsulateState_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.BP_PreventMovementMode
struct AOwl_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.IsPredatorVisionEnabled
struct AOwl_Character_BP_C_IsPredatorVisionEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.RemovePredatorVisionBuff
struct AOwl_Character_BP_C_RemovePredatorVisionBuff_Params
{
	class AShooterCharacter*                           Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.SetupPredatorVisionBuff
struct AOwl_Character_BP_C_SetupPredatorVisionBuff_Params
{
	class AShooterCharacter*                           Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.BlueprintCanRiderAttack
struct AOwl_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.BPNotifyClearRider
struct AOwl_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.UserConstructionScript
struct AOwl_Character_BP_C_UserConstructionScript_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestPredatorVision
struct AOwl_Character_BP_C_ServerRequestPredatorVision_Params
{
	bool                                               SetEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.ClientDoPredatorVision
struct AOwl_Character_BP_C_ClientDoPredatorVision_Params
{
	bool                                               SetEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStartEncapsulate
struct AOwl_Character_BP_C_ServerRequestStartEncapsulate_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.MulticastStartEncapsulate
struct AOwl_Character_BP_C_MulticastStartEncapsulate_Params
{
	bool                                               FromIceCrash;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.MulticastStopEncapsulate
struct AOwl_Character_BP_C_MulticastStopEncapsulate_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestStopEncapsulate
struct AOwl_Character_BP_C_ServerRequestStopEncapsulate_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.Start Encapsulate
struct AOwl_Character_BP_C_Start_Encapsulate_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.Stop Encapsulate
struct AOwl_Character_BP_C_Stop_Encapsulate_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_EncapsulateStart
struct AOwl_Character_BP_C_OnAnimCustomEvent_EncapsulateStart_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.MulticastOnIceBombImpact
struct AOwl_Character_BP_C_MulticastOnIceBombImpact_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.OnIceCrashHit
struct AOwl_Character_BP_C_OnIceCrashHit_Params
{
	bool                                               HitValidTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitWater;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.StartIceCrash
struct AOwl_Character_BP_C_StartIceCrash_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.OnAnimCustomEvent_IceCrashStart
struct AOwl_Character_BP_C_OnAnimCustomEvent_IceCrashStart_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.ServerRequestCancelIceCrash
struct AOwl_Character_BP_C_ServerRequestCancelIceCrash_Params
{
};

// Function Owl_Character_BP.Owl_Character_BP_C.MulticastIceCrashHit
struct AOwl_Character_BP_C_MulticastIceCrashHit_Params
{
	float                                              EffectRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.ServerSetTargeting
struct AOwl_Character_BP_C_ServerSetTargeting_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Owl_Character_BP.Owl_Character_BP_C.ExecuteUbergraph_Owl_Character_BP
struct AOwl_Character_BP_C_ExecuteUbergraph_Owl_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
