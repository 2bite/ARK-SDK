#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrake_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RockDrake_Character_BP.RockDrake_Character_BP_C
// 0x09C8 (0x3978 - 0x2FB0)
class ARockDrake_Character_BP_C : public ADino_Character_BP_Climber_ForceAllowBoss_C
{
public:
	class USkeletalMeshComponent*                      CamoMesh;                                                 // 0x2FB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PounceVFX;                                                // 0x2FB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    GlidingVFX;                                               // 0x2FC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    GlidingWingTrail_Right;                                   // 0x2FC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    GlidingWingTrail_Left;                                    // 0x2FD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             GlidingAudio;                                             // 0x2FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_RockDrake_C* DinoCharacterStatus_BP_RockDrake_C1;                      // 0x2FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeToInvisible_Rider_DissolveMesh_A4D7861E49B53AB5EB0DEF8B639E705E;// 0x2FE8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeToInvisible_Rider__Direction_A4D7861E49B53AB5EB0DEF8B639E705E;// 0x2FEC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2FED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeToInvisible_Rider;                                    // 0x2FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeCamo_RockDrake_DissolveCamo_99C3E4DF4E28D9F5D4FAF68B8D54AAD0;// 0x2FF8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FadeCamo_RockDrake_DissolveMesh_99C3E4DF4E28D9F5D4FAF68B8D54AAD0;// 0x2FFC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeCamo_RockDrake__Direction_99C3E4DF4E28D9F5D4FAF68B8D54AAD0;// 0x3000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x3001(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FadeCamo_RockDrake;                                       // 0x3008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredNormalDotToClimb_AverageTrace;                    // 0x3010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredClearRadiusForClimberSpawn;                       // 0x3014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingCamo;                                             // 0x3018(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x3019(0x0003) MISSED OFFSET
	float                                              StaminaCost_Camo_Start;                                   // 0x301C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaCost_Camo;                                         // 0x3020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_DinoClimberState_RockDrake>          CurrentClimberState_RockDrake;                            // 0x3024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowPouncing;                                           // 0x3025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasValidPounceTargetLocation;                            // 0x3026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPounceStartedWhileClimbing;                              // 0x3027(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentPounceRotation;                                    // 0x3028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentPounceDirection;                                   // 0x3034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentPounceStartLocation;                               // 0x3040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceImpactRadius_Rider;                                 // 0x304C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceImpactRadius_NoRider;                               // 0x3050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFlySpeed_Pouncing_Rider;                               // 0x3054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaCost_Pounce_Start;                                 // 0x3058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaCost_Pounce;                                       // 0x305C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaCost_Glide_Start;                                  // 0x3060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaCost_Glide;                                        // 0x3064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gliding_DiveRatio_Current;                                // 0x3068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_SpeedMult_Current;                                // 0x306C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickInterval_Pouncing;                                    // 0x3070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TickInterval_Gliding;                                     // 0x3074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamoIneffectivenessRange;                                 // 0x3078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RockDrakeCamo_PlayRate;                                   // 0x307C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCamoTickDelta;                                     // 0x3080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamoTick_Min;                                             // 0x3084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamoTick_Max;                                             // 0x3088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_MaxPitch_current;                                 // 0x308C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_SpeedMult_MAX;                                    // 0x3090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gliding_SpeedMult_Target;                                 // 0x3094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_SpeedMult_InterpSpeed_Up;                         // 0x3098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gliding_SpeedMult_InterpSpeed_Down;                       // 0x309C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       UseTraceMap_Pouncing;                                     // 0x30A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       UseTraceMap_Gliding;                                      // 0x30B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SurfaceTraceDistance_Pouncing;                            // 0x30C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SurfaceTraceDistance_Gliding;                             // 0x30C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AttackIndex_Pounce_AOE;                                   // 0x30C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlySpeed_Pouncing_NoRider;                             // 0x30CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PounceDuration_MAX_Rider;                                 // 0x30D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PounceDuration_MAX_NoRider;                               // 0x30D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PounceDistance_MAX_Rider;                                 // 0x30D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceDistance_MAX_NoRider;                               // 0x30DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastPounceStartTime;                                      // 0x30E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastPounceStartTime_FromClimbing;                         // 0x30E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterPounceStartFromClimbingToPreventAttach;          // 0x30F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_Pouncing;                        // 0x30F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              previousGlidePitch;                                       // 0x30F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlideFall_VelocityThreshold;                              // 0x30FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlidingMaxPitch_MAX;                                      // 0x3100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlidingMaxPitch_MIN;                                      // 0x3104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlidingSpeedMult_MIN;                                     // 0x3108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlidingRotationMult_MIN;                                  // 0x310C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Gliding_RotationRate;                                     // 0x3110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_Gliding;                         // 0x311C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingStart_HitNormalForwardDot;                        // 0x3120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingRotationMult_MAX;                                  // 0x3124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientDesyncErrorToleranceOverride_Gliding;               // 0x3128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialScalarName_DissolvePercent;                       // 0x312C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MaterialScalarName_CamoAmount;                            // 0x3134(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAlert;                                                 // 0x313C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x313D(0x0003) MISSED OFFSET
	float                                              AlertCheck_Timer_MIN;                                     // 0x3140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlertCheck_Timer_MAX;                                     // 0x3144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlertCheck_Timer_current;                                 // 0x3148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x314C(0x0004) MISSED OFFSET
	double                                             lastAlertCheckTime;                                       // 0x3150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlertCheckRadius;                                         // 0x3158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x315C(0x0004) MISSED OFFSET
	class UParticleSystem*                             Ref_CamoRiderParticle_Enter;                              // 0x3160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ref_CamoRiderParticle_Exit;                               // 0x3168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Ref_CamoSaddle;                                           // 0x3170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderCamo_PlayRate;                                       // 0x3178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x317C(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   FadeQueue_Riders;                                         // 0x3180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<bool>                                       FadeQueue_Mounted;                                        // 0x3190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       RiderFXSocketName;                                        // 0x31A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderCloakParticlesScale;                                 // 0x31A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClimberTPVCameraOffset_Pouncing;                          // 0x31AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClimberTPVCameraOffset_Gliding;                           // 0x31B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x31C4(0x0004) MISSED OFFSET
	class UClass*                                      CamoBuff;                                                 // 0x31C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BodyMI;                                                   // 0x31D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           FeatherMI;                                                // 0x31D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_DiveRatio_Target;                                 // 0x31E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_DiveRatio_InterpSpeed_Up;                         // 0x31E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gliding_DiveRatio_InterpSpeed_Down;                       // 0x31E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gliding_RequiredMinVelocity;                              // 0x31EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastGlideFallTime;                                        // 0x31F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterGlideFallToPreventGliding;                       // 0x31F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x31FC(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_PounceStartMontage_Climbing;                          // 0x3200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlidingMaxFOV_Mult;                                       // 0x3208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToGlide;                                            // 0x320C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x320D(0x0003) MISSED OFFSET
	float                                              PounceFOV_Mult;                                           // 0x3210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x3214(0x0004) MISSED OFFSET
	class FString                                      LowStaminaMessage_Gliding;                                // 0x3218(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      LowStaminaMessage_Pouncing;                               // 0x3228(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      GlidingRiderBuff;                                         // 0x3238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredGlidingHitDirDotToViewDirToAttach;                // 0x3240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_DinoClimberState_RockDrake>          PreviousClimberState_RockDrake;                           // 0x3244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x3245(0x0003) MISSED OFFSET
	struct FRotator                                    PreGlideHitRotation;                                      // 0x3248(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x3254(0x0004) MISSED OFFSET
	class FString                                      LowStaminaMessage_Camo;                                   // 0x3258(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AlignToVelocityAfterGlideHitWhenImpactBelowSurfaceDot;    // 0x3268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreGlideFallVelocity;                                     // 0x326C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AttackIndex_Pounce_DirectHit;                             // 0x3278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x327C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_PounceDirectHitMontage;                               // 0x3280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RockDrake_AI_ChanceToCamoOnSpawn;                         // 0x3288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreventGlideAttachWhenHitNormalAboveUpDot;                // 0x328C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimPercent_PounceStart_Climbing;                         // 0x3290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPercent_PounceStart_Gliding;                          // 0x3294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_PounceStartMontage_Gliding;                           // 0x3298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemoteClientClimber_RotationInterpSpeed_Gliding;          // 0x32A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemoteClientClimber_RotationInterpSpeed_Pouncing;         // 0x32A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlidingRotationMult_Current;                              // 0x32A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x32AC(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_GlidingAttachMontage;                                 // 0x32B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlidingPreLandCheckDistance_MIN;                          // 0x32B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlidingPreLandCheckDistance_MAX;                          // 0x32BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanDiveBelowDownVelocity;                                 // 0x32C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x32C4(0x0004) MISSED OFFSET
	class UParticleSystem*                             Ref_GlideAttachParticle;                                  // 0x32C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ref_AttachParticle;                                       // 0x32D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GlideVFX_GlideAttachImpact_Scale;                         // 0x32D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x32E4(0x0004) MISSED OFFSET
	class UClass*                                      CameraShake_Gliding;                                      // 0x32E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Gliding_Scale;                                // 0x32F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Gliding_Speed;                                // 0x32F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Pouncing_Scale;                               // 0x32F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_Pouncing_Speed;                               // 0x32FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake_GlideAttach;                                  // 0x3300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_GlideAttach_Gliding_Scale_MAX;                // 0x3308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_GlideAttach_Gliding_Scale_MIN;                // 0x330C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_GlideAttach_Gliding_Speed_MAX;                // 0x3310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_GlideAttach_Gliding_Speed_MIN;                // 0x3314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_GlideAttach_Pouncing_Scale;                   // 0x3318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShake_GlideAttach_Pouncing_Speed;                   // 0x331C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlideAttachPlayRate_MIN;                                  // 0x3320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlideAttachPlayRate_RangeMAX;                             // 0x3324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeAfterWallJumpToPreventGliding;                        // 0x3328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x332C(0x0004) MISSED OFFSET
	double                                             lastGlideAttachAttemptTime;                               // 0x3330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlideAttachAttemptInterval;                               // 0x3338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x333C(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Ref_DrakeFeatherMIC;                                      // 0x3340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FeatherMIC_WindIntensity_MIN;                             // 0x3348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherMIC_WindIntensity_MAX;                             // 0x334C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherMIC_WindSpeed_MIN;                                 // 0x3350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherMIC_WindSpeed_MAX;                                 // 0x3354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherMIC_WindSpeed_Default;                             // 0x3358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeatherMIC_WindIntensity_Default;                         // 0x335C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RockDrake_CanPounceAboveLookDirDotToSurfaceNormal;        // 0x3360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_Gliding_Attach;                  // 0x3364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleTraceForGlideAttach_SizeOffset;                    // 0x3368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingPreLand_PouncingSpeedRatioOverride_Rider;          // 0x336C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugRockDrake_General;                                  // 0x3370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugRockDrake_GlidingLogic;                             // 0x3371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x3372(0x0002) MISSED OFFSET
	float                                              FeatherMIC_VelocityThreshold_MAX;                         // 0x3374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlignToVelocityAfterGlideHitWhenLookDirBelowSurfaceDot;   // 0x3378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugRockDrake_PouncingLogic;                            // 0x337C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x337D(0x0003) MISSED OFFSET
	float                                              CamoCooldownTime;                                         // 0x3380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x3384(0x0004) MISSED OFFSET
	double                                             lastCamoStartTime;                                        // 0x3388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_GlideStartMontage;                                    // 0x3390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UseDirectionalLeapAnimsPastLookDirAngleDeltaToForward;    // 0x3398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x339C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_WallJumpMontage_Left;                                 // 0x33A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_WallJumpMontage_Right;                                // 0x33A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalDinoCharacter*>                AllowDinosToTargetInCamo;                                 // 0x33B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TimerRange_CleanAllowTargetWhenUsingCamoArray_MIN;        // 0x33C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerRange_CleanAllowTargetWhenUsingCamoArray_MAX;        // 0x33C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeAfterGlideStartFromClimbingToPreventAttach;           // 0x33C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x33CC(0x0004) MISSED OFFSET
	double                                             LastGlideStartTime_FromClimbing;                          // 0x33D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowRockDrake_SpawnEggs;                                // 0x33D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x33D9(0x0003) MISSED OFFSET
	struct FName                                       NestPointListCustomTagName;                               // 0x33DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x33E4(0x0004) MISSED OFFSET
	class UClass*                                      NestToSpawn;                                              // 0x33E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotifyNeighborRockDrakesWithinEggRange;                   // 0x33F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NestEggOffset;                                            // 0x33F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NestTraceSpawnOffset;                                     // 0x3400(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NestTraceImpactOffset;                                    // 0x340C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AllowedNestsInRadius_MAX;                                 // 0x3418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NestSpawnPointMaxDistance;                                // 0x341C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NestCheckRadius;                                          // 0x3420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnUnstasis_CheckForSpawnEggInterval;                      // 0x3424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastUnstasisCheckForSpawnEggTime;                         // 0x3428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSpawnNestTime;                                        // 0x3430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnUnstasis_SpawnNestInterval;                             // 0x3438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBracingForImpact;                                      // 0x343C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x343D(0x0003) MISSED OFFSET
	float                                              MinDistanceToBraceForImpact;                              // 0x3440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x3444(0x0004) MISSED OFFSET
	class UClass*                                      AdultDinoSettings;                                        // 0x3448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BabyDinoSettings;                                         // 0x3450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromWaterSurfaceToAllowWaterJump;                 // 0x3458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpForwardVelocityMult_Running;                          // 0x345C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInAirFromJump;                                         // 0x3460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         jumpMovementMode;                                         // 0x3461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x3462(0x0002) MISSED OFFSET
	float                                              TimeAfterGlideFallToPreventGliding_FromJump_Walking;      // 0x3464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeAfterGlideFallToPreventGliding_FromJump_Swimming;     // 0x3468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GlideFromJumpVelocityMult;                                // 0x346C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastWaterJumpTime;                                        // 0x3470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              waterJumpInterval;                                        // 0x3478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RockDrake_GlidingRotation_Current;                        // 0x347C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPreparingToPounce;                                     // 0x3488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x3489(0x0007) MISSED OFFSET
	class UAnimMontage*                                Ref_PounceAnticipationMontage;                            // 0x3490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentPotentialPounceTarget;                             // 0x3498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimPercent_AI_PounceAfterAnticipation;                   // 0x34A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingPreLand_PouncingSpeedRatioOverride_NoRider;        // 0x34A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamoFadeSpeedDeathMultiplier;                             // 0x34A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x34AC(0x0004) MISSED OFFSET
	double                                             lastClimbingStartTime;                                    // 0x34B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWildDrakeWantsToCamo;                                    // 0x34B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x34B9(0x0003) MISSED OFFSET
	float                                              PounceDistance_MIN_NoRider;                               // 0x34BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceInterval_NoRider;                                   // 0x34C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x34C4(0x0004) MISSED OFFSET
	class USoundCue*                                   Ref_CamoSFX_In;                                           // 0x34C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Ref_CamoSFX_Out;                                          // 0x34D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrGlideAudioIntensity;                                  // 0x34D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlideSFXIntensityInterpSpeed;                             // 0x34DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastClimbAttackTime;                                      // 0x34E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDrake_AI_TryingToPounce;                                 // 0x34E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x34E9(0x0007) MISSED OFFSET
	class FString                                      EncumberedMessage_Pouncing;                               // 0x34F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Gliding_StartInheritYawLateralVelocityThreshold;          // 0x3500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x3504(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x3508(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x350C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x3510(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x3514(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x3518(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x351C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x3520(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x3524(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x3534(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x3538(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x353C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x353D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x353E(0x0002) MISSED OFFSET
	struct FRotator                                    K2Node_CustomEvent_newRotation2;                          // 0x3540(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_newSpeedMult;                          // 0x354C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_newRotation;                           // 0x3550(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_isFromClimbing;                        // 0x355C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x355D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x3560(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x356C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x356D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x356E(0x0002) MISSED OFFSET
	TArray<class USceneComponent*>                     CallFunc_GetChildrenComponents_Children;                  // 0x3570(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x3580(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x3584(0x0004) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item;                                  // 0x3588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x3590(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x7];                                       // 0x3591(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x3598(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x35A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x7];                                       // 0x35A1(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item2;                                 // 0x35A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_Array_Get_Item3;                                 // 0x35B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic2;            // 0x35B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x35C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x7];                                       // 0x35C1(0x0007) MISSED OFFSET
	class UMeshComponent*                              K2Node_DynamicCast_AsMeshComponent;                       // 0x35C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x35D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x7];                                       // 0x35D1(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x35D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x35E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x35E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x35E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x35EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x35EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x35EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_Array_Get_Item4;                                 // 0x35F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x35F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x7];                                       // 0x35F9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic3;            // 0x3600(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x3608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x3];                                       // 0x3609(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_newTime3;                              // 0x360C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_newTime2;                              // 0x3610(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x3614(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_newTime;                               // 0x3624(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x3628(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate4;                    // 0x3638(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x3648(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x3649(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x364A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x364B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x364C(0x0004) MISSED OFFSET
	TArray<class USceneComponent*>                     CallFunc_GetChildrenComponents_Children2;                 // 0x3650(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x3660(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x3664(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x3668(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x3669(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x6];                                       // 0x366A(0x0006) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item5;                                 // 0x3670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_Array_Get_Item6;                                 // 0x3678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic4;            // 0x3680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x3688(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x7];                                       // 0x3689(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic5;            // 0x3690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x3698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x3699(0x0007) MISSED OFFSET
	class USceneComponent*                             CallFunc_Array_Get_Item7;                                 // 0x36A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMeshComponent*                              K2Node_DynamicCast_AsMeshComponent2;                      // 0x36A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x36B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x7];                                       // 0x36B1(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue2;                           // 0x36B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x36C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x36C1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x36C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x36D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x36D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x2];                                       // 0x36D2(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x36D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x36D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x36D9(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item8;                                 // 0x36E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic6;            // 0x36E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x36F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x7];                                       // 0x36F1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item9;                                 // 0x36F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Get_Item10;                                // 0x3700(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x3701(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x3702(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x5];                                       // 0x3703(0x0005) MISSED OFFSET
	TArray<class USceneComponent*>                     CallFunc_GetAllSceneComponents_OutComponents;             // 0x3708(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x3718(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Get_Item11;                                // 0x371C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x3];                                       // 0x371D(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue7;                       // 0x3720(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x3724(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x3725(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable6;                          // 0x3728(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue6;                         // 0x372C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x3730(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x373C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x373D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x2];                                       // 0x373E(0x0002) MISSED OFFSET
	class AShooterCharacter*                           K2Node_CustomEvent_theRider;                              // 0x3740(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x3748(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x3749(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsActive;                              // 0x374A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x1];                                       // 0x374B(0x0001) MISSED OFFSET
	float                                              K2Node_CustomEvent_delay2;                                // 0x374C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_ClimberClimbing_result;                       // 0x3750(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetRockDrakeStateOverrideIndex_index;            // 0x3751(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x3752(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x3753(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x3754(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x3755(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x3756(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x3757(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x3758(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x3759(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x375A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x375B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x375C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue8;                       // 0x3760(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue3;                     // 0x3764(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x3765(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x3768(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x376C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x3770(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x3778(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x7];                                       // 0x3779(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x3780(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x3788(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanJumpInternal_ReturnValue;                     // 0x3789(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newVal2;                               // 0x378A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newVal;                                // 0x378B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_newTargetLocation;                     // 0x378C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_isFromSetTarget;                       // 0x3798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x3799(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x379C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x37A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x37AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RockDrake_AI_CheckForPounce_success;             // 0x37B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x3];                                       // 0x37B1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_RockDrake_AI_CheckForPounce_pounceDir;           // 0x37B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDead_ReturnValue;                              // 0x37C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x37C1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x37C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x37C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDead_ReturnValue2;                             // 0x37CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x37CD(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x37D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x37D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x37D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x37DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x37E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x37F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x3800(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x3804(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x3805(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x2];                                       // 0x3806(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x3808(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x380C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanGlide_result;                                 // 0x3810(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetRockDrakeStateOverrideIndex_index2;           // 0x3811(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRockDrakeGliding_Pure_result;                  // 0x3812(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x3813(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x3814(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x3815(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x3816(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x3817(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable7;                          // 0x3818(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberFalling_Pure_result;                    // 0x381C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x381D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x381E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x1];                                       // 0x381F(0x0001) MISSED OFFSET
	class USceneComponent*                             CallFunc_Array_Get_Item12;                                // 0x3820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue7;                         // 0x3828(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x4];                                       // 0x382C(0x0004) MISSED OFFSET
	class UMeshComponent*                              K2Node_DynamicCast_AsMeshComponent3;                      // 0x3830(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x3838(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x7];                                       // 0x3839(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue3;                           // 0x3840(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter3;                   // 0x3848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x3850(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue13;                       // 0x3851(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x3852(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x3853(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue9;                       // 0x3854(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_Array_Get_Item13;                                // 0x3858(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x3860(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x7];                                       // 0x3861(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic7;            // 0x3868(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast13_CastSuccess;                         // 0x3870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x3];                                       // 0x3871(0x0003) MISSED OFFSET
	float                                              CallFunc_K2_GetScalarParameterValue_ReturnValue;          // 0x3874(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x3878(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x3879(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlaying_ReturnValue;                           // 0x387A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue14;                       // 0x387B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x4];                                       // 0x387C(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x3880(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue2;                        // 0x3888(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x7];                                       // 0x3889(0x0007) MISSED OFFSET
	TArray<class APrimalBuff*>                         CallFunc_GetBuffs_TheBuffs;                               // 0x3890(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue10;                      // 0x38A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x4];                                       // 0x38A4(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_Array_Get_Item14;                                // 0x38A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue7;                        // 0x38B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x7];                                       // 0x38B1(0x0007) MISSED OFFSET
	class ABuff_DinoTekHelmet_Base_C*                  K2Node_DynamicCast_AsBuff_DinoTekHelmet_Base_C;           // 0x38B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast14_CastSuccess;                         // 0x38C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x38C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x2];                                       // 0x38C2(0x0002) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x38C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x38C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x38CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x38D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesClimberHaveEnough_Stamina_Pure_result;       // 0x38DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x3];                                       // 0x38DD(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x38E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue;                     // 0x38E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x38F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x38F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x38F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x38FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x3900(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x3];                                       // 0x3901(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x3904(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberNearWaterSurface_result;                // 0x3910(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x3];                                       // 0x3911(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x3914(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x3920(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x3];                                       // 0x3921(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x3924(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x3930(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x3931(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x3932(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x5];                                       // 0x3933(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x3938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x3940(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue3;                        // 0x3948(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x3949(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanWallJump_result;                              // 0x394A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Climber_Attaching_result;                     // 0x394B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue15;                       // 0x394C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbingSimple_Pure_result;             // 0x394D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberSwimming_Pure_result;                   // 0x394E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue16;                       // 0x394F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesClimberHaveEnough_Stamina_Pure_result2;      // 0x3950(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x7];                                       // 0x3951(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x3958(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_ActorsToIgnore_RefProperty;// 0x3968(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RockDrake_Character_BP.RockDrake_Character_BP_C");
		return ptr;
	}


	bool BPIsHidden();
	void BPNotifyIfPassengerLaunchShoulderMount(class APrimalCharacter** launchedCharacter);
	float BPGetAddForwardVelocityOnJump();
	void BPDinoARKDownloadedBegin();
	void ReceiveDestroyed();
	void CanClimberStopNonDediTick_Controlled(bool* Result);
	void OnJumped();
	void Climber_AI_ClimbingCanAttack(int* AttackIndex, bool* Result);
	bool BPOnStartJump();
	void Climber_AI_CheckForAttackWhileClimbing();
	bool BPHandleRightShoulderButton();
	void ClimberAI_UpdateHasTargetWhileClimbing();
	void BPCharacterSleeped();
	void HideSaddleMesh();
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void SetAllRidersHidden(bool bNewHidden);
	bool BPHandleOnStopTargeting();
	float BPModifyFOV(float* FOVIn);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void ClimberTick_Server();
	void STATIC_RockDrakeTick_Gliding_BraceForImpact();
	void RockDrakeTick_Server();
	void RockDrakeTick_NonDedi();
	void BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void ClimberTick_NonDedi();
	void STATIC_RockDrake_AI_CheckForPounce(bool* Success, struct FVector* pounceDir);
	void BeginPounceAnims();
	void AllowTraceForPounce(bool* Result);
	void UpdatePounceTargetLocation();
	void BP_OnSetDeath();
	void TraceForPounce(bool* foundValidLocation, struct FVector* validLocation);
	void UpdateServerClimberByClimbingIndex();
	void UpdateNonControlledClimber();
	void BPBecomeAdult();
	void BPBecomeBaby();
	void CanClimberStopNonDediTick_NonControlled(bool* Result);
	void STATIC_SpawnNestEgg();
	void CheckForSpawnEggs();
	void CleanAllowTargetWhenUsingCamoArray();
	void BP_OnTargetedByTamedOrder(class APrimalCharacter** OrderingCharacter, class APrimalDinoCharacter** AttackingDino, bool* bForced);
	void GetCorrectWallJumpAnim(struct FVector* wallJumpVelocity, class UAnimMontage** Anim);
	void Get_CorrectClimber_Rotation(bool* updateRotation, struct FRotator* Rotation);
	void ShouldAlignWithVelocityOnImpact(const struct FHitResult& ImpactHit, bool* Result);
	void ServerTick_Override();
	void OnWallJump(struct FVector* wallJumpVelocity);
	void OnStartSeeking();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void Get_Rock_Drake_Anim_BP(class URockDrake_AnimBlueprint_C** animBP);
	void SpawnGlideImpactVFX();
	void GetCurrentGlidingRotationRateMult(float* mult);
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void Is_Rock_Drake_Gliding(bool checkPrevious, bool* Result);
	void Stop_All_Climber_Logic();
	void PounceStart();
	void Climber_AI_OnSetTarget(class AActor** NewTarget);
	void BP_OnRiderChangeWeapons(class AShooterCharacter** theRider, class UPrimalItem** newWeapon);
	void ClimberOn_Server_Run_Released();
	void ShouldRockDrakeGlideFall(bool* Result);
	void ClimberStopSeeking();
	void ClimberStartSeeking();
	void IsRockDrakeGliding_Pure(bool checkPrev, bool* Result);
	void Update_Gliding_Feathers();
	void Update_Gliding_VFX();
	void UpdateGliding_Audio();
	void UpdateGlidingFX();
	void Climber_OnServerRunPressed();
	void ClientTick_UpdateClimberTarget_FOV();
	void Replicate_Index_Update_Target_TPV_Camera_Offset();
	void AddRiderToCamoFadeQueue(class AShooterCharacter* Rider, bool EnterCamo, bool bInstant);
	void ActivateRiderCamoParticles(bool EnterCamo, class AShooterCharacter* specificRider);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void GetGlidingSpeedRatio_(float* Ratio);
	void BPUnstasis();
	void InitRockDrake();
	void GetGlidingSpeedRatio_Pure(float* Ratio);
	float BP_GetCustomModifier_RotationRate();
	void Replicate_Index_Update_Non_Dedi_Climber();
	void Replicate_Index_Update_Server_And_Client_Climber();
	void UpdateClimberMovementMode();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void GetRockDrakeStateOverrideIndex(TEnumAsByte<E_DinoClimberState_RockDrake> State, unsigned char* index);
	void GetCorrectSurfaceTraceDistance(bool* isForRetry, float* TraceDist);
	void Tick_Force_Forward_Input();
	float BP_GetCustomModifier_MaxSpeed();
	void GlideStart();
	void PrepareToPounce(const struct FVector& pounceDir);
	void Net_Set_Climber_State(unsigned char* newStateIndex);
	void SetCamoActive(bool IsActive);
	void CanGlide(bool isToStart, bool* Result);
	void CanPounce(bool isToStart, bool* Result);
	void ServerTick_Gliding();
	void ServerTick_Pouncing();
	void UpdateClimberStateByClimbingIndex(unsigned char* newIndex);
	void ShouldClimberDraw_CrosshairWhileClimbing(bool* Result);
	void OnRep_bIsUsingCamo();
	void Can_Use_Camo(bool isForStart, bool* Result);
	void NetSetUseCamo(bool newUse);
	void IsNormalClimbable(struct FVector* Normal, bool* isAverageNormal, bool* Result);
	void Get_Correct_Surface_Trace_OffsetTransforms(bool* overrideUseMap, TArray<bool>* newUseMp, TArray<struct UObject_FTransform>* offsetTransforms, TArray<int>* TraceIndeces);
	void Check_For_Prevent_Stop_Climbing(int* numValidHits, int* numTraces, TArray<bool>* traceHitsArray, bool* allowClimbing);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void UserConstructionScript();
	void FadeCamo_RockDrake__FinishedFunc();
	void FadeCamo_RockDrake__UpdateFunc();
	void FadeToInvisible_Rider__FinishedFunc();
	void FadeToInvisible_Rider__UpdateFunc();
	void InpActEvt_AltFire_K2Node_InputActionEvent_126();
	void BP_OnJumpPressed();
	void BP_OnJumpReleased();
	void Multi_GlideStart(const struct FRotator& NewRotation, float newSpeedMult);
	void Multi_PounceStart(const struct FRotator& NewRotation, bool isFromClimbing);
	void Play_FadeCamo_RockDrake();
	void Reverse_FadeCamo_RockDrake();
	void ReceiveBeginPlay();
	void SetNewTime_FadeCamo_RockDrake(float NewTime);
	void Multi_SetNewTime_FadeCamo_RockDrake(float NewTime);
	void SetNewTime_FadeCamo_Rider(float NewTime);
	void ReverseFromEnd_FadeCamo_Rider();
	void PlayFromStart_FadeCamo_Rider();
	void Multi_OnRiderEquipWeapon(class AShooterCharacter* theRider);
	void InitRockDrake_Event();
	void InitRockDrake_NextTick();
	void Multi_HardSetCamoActive(bool IsActive);
	void PounceAfterDelay(float Delay);
	void Event_CleanAllowTargetWhenUsingCamoArray();
	void Event_RestartCheckTargetArrayTimer();
	void TrySpawnEggAfterDelay(float Delay);
	void Server_RequestSetJumpMovementMode();
	void ResetIsInAirFromJumpAfterDelay();
	void OwningClient_SyncAllowPouncing(bool Newval);
	void Server_SyncHasValidPounceTarget(bool Newval, const struct FVector& NewTargetLocation);
	void RockDrake_AI_AnticipatePounce(bool isFromSetTarget);
	void CheckForGlideStartTimer();
	void CheckForGlideStartTimer_EnableTick();
	void CheckForGlideStartTimer_StopTick();
	void Multi_PlayFade();
	void Server_RequestWaterJump();
	void WaterJump();
	void ExecuteUbergraph_RockDrake_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
