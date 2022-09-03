#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Glider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Glider.Buff_Glider_C
// 0x044D (0x0DC5 - 0x0978)
class ABuff_Glider_C : public ABuff_Base_C
{
public:
	class UParticleSystemComponent*                    VFX_WingTrail_Left;                                       // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    VFX_WingTrail_Right;                                      // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Ref_OwningPlayer;                                         // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_GliderStates>                        GliderState_Current;                                      // 0x0990(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_GliderStates>                        GliderState_Previous;                                     // 0x0991(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0992(0x0002) MISSED OFFSET
	float                                              previousGlidePitch;                                       // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_DiveRatio_Target;                                 // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_DiveRatio_Current;                                // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_SpeedMult_Target;                                 // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_SpeedMult_Current;                                // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Gliding_SpeedMult_MAX;                                    // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingSpeedMult_MIN;                                     // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxGlidingVelocity;                                       // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x09B4(0x000C) MISSED OFFSET
	struct UObject_FTransform                          TargetGlidingVelocityAndRotation;                         // 0x09C0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderRotationRate_Yaw;                                   // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    meshTargetRotation;                                       // 0x09F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMeshInterpSpeed_rotation;                          // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderRotationRate_Pitch;                                 // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredVelocityToGlide;                                  // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredTurnAngleDeltaForGlideTurnAnims_Gliding;          // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredTurnAngleDeltaForGlideTurnAnims_Diving;           // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A14(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_GlideMontage_Takeoff;                                 // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_GlideMontage_Land_Ground;                             // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_GlideMontage_Land_Water;                              // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderRotationRate_Yaw_MIN;                               // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderRotationRate_Pitch_MIN;                             // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastGlideFallTime;                                        // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    previousPlayerMeshRotation;                               // 0x0A40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerMeshRoll_MAX;                                       // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingPitch;                                             // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftTrailSocketName;                                      // 0x0A54(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightTrailSocketName;                                     // 0x0A5C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpeedLinesSocketName;                                     // 0x0A64(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerMeshRoll_MIN;                                       // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastInvalidGlideSpeedTime;                                // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              allowedInvalidGlideSpeedTime_MAX;                         // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterGlideFallToPreventGlideRestart;                  // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckingForGlideFall;                                     // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A81(0x0003) MISSED OFFSET
	float                                              GlidingPitch_StartDive;                                   // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastGlideStopTime;                                        // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarpFOVMult_MIN;                                          // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarpFOVMult_MAX;                                          // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              canGlideFallAbovePitch;                                   // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingGravityScale;                                      // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    GlidingMeshRotationOffset;                                // 0x0AA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PlayerMeshRotationRate;                                   // 0x0AAC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerMeshInterpSpeed_Reset;                              // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_MIN;                                // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_MAX;                                // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerGlidingRotationRate;                                // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WingOpenInterpSpeed;                                      // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerMeshRotationRate_Pitch_Diving;                      // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalItem*                                 Ref_GliderItem;                                           // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShakeMult_Scale;                                    // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShakeMult_Speed;                                    // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlideCooldownTime_Stop;                                   // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     previousGlidingLocation;                                  // 0x0AE4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastNotStuckOnWallTime;                                   // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedStuckOnWallTime;                                   // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StuckOnWallMovementDistanceCheck;                         // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasLanded;                                               // 0x0B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0B01(0x0007) MISSED OFFSET
	double                                             lastHitSurfaceTime;                                       // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterHitToCheckForStuck;                              // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreHitsAboveUpDot;                                     // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPlayerMeshRoll;                                    // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderSFX_Pitch_MIN;                                      // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderSFX_Pitch_MAX;                                      // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderSFX_Volume_MIN;                                     // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderSFX_Volume_MAX;                                     // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartCameraFPV;                                           // 0x0B2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlteredCameraMode;                                       // 0x0B2D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0B2E(0x0002) MISSED OFFSET
	float                                              Gliding_SpeedMult_GLIDING;                                // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentGliderSpeedMultInterpSpeed;                        // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderInterpSpeed_Gliding;                                // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderInterpSpeed_Down_MAX;                               // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderInterpSpeed_Down_MIN;                               // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderInterpSpeed_Up_MAX;                                 // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderInterpSpeed_Up_MIN;                                 // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingPitchErrorRange;                                   // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGliderPulingUp;                                        // 0x0B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0B51(0x0003) MISSED OFFSET
	float                                              PlayerMeshRotationRate_Apex;                              // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GliderRotationRate_Pitch_Apex;                            // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0B5C(0x0004) MISSED OFFSET
	double                                             lastDamagedWhileGlidingTime;                              // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterDamageToPreventGlideRestert;                     // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingDurabilityPercentCost_Diving;                      // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingDurabilityPercentCost_Gliding;                     // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGlideFallingFromDamage;                                // 0x0B74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0B75(0x0003) MISSED OFFSET
	float                                              GliderInterpSpeed_GlideFallFromDamage;                    // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HighestZ;                                                 // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPassedRequiredVelocity;                               // 0x0B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0B81(0x0003) MISSED OFFSET
	float                                              allowedInvalidGlideSpeedTime_MIN;                         // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpDistanceFromHighestZ;                                 // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceMinAllowedInvalidGlideSpeedTimeBelowHighestZDiff;    // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastGlideStartTime;                                       // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToPassRequiredVelocity;                               // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingFallDamageMult;                                    // 0x0B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingFallDamage_PercentOfMaxHealthClamp;                // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterGlideStopToReduceFallDamage;                     // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugGlider;                                             // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0BA9(0x0003) MISSED OFFSET
	float                                              PlayerClientPositionErrorToleranceOverride_Gliding;       // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBeforeGlidingAgain;                                   // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0BB4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              GliderDamageTypes;                                        // 0x0BB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      GliderDamageTypeMultipliers;                              // 0x0BC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeBeforeCancelGlide;                                    // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	double                                             ClientLastGlideStartTime;                                 // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       WingVFXAttachType;                                        // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0BE9(0x0003) MISSED OFFSET
	float                                              TurningVelocityForVFXMult;                                // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateSoundOnGliderActive;                               // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_GliderStates>                        K2Node_CustomEvent_NewState;                              // 0x0BF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x0BF2(0x0006) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0BF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0C08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsGliderActive_result;                           // 0x0C09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0C0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0C0B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0C0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0C0D(0x0003) MISSED OFFSET
	struct FRotator                                    K2Node_CustomEvent_newRotation2;                          // 0x0C10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_newGlideMult;                          // 0x0C1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0C20(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_newVelocity;                           // 0x0C30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_newRotation;                           // 0x0C3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x0C50(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_OtherActor;                            // 0x0C80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_CustomEvent_OtherComp;                             // 0x0C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NormalImpulse;                         // 0x0C90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0C9C(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_Hit;                                   // 0x0CA0(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_IsGliderActive_result2;                          // 0x0D28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0D29(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x0D2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x0D38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x0D44(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x0D50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0D5C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x0D60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x0D68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x0D70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x0D78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x0D80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x0D84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0D85(0x0003) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x0D88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0D8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0D8D(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x0D90(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0DA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x0DA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x0DA2(0x0006) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0DA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0DB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue;              // 0x0DB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0DC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x0DC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0DC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x0DC3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0DC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Glider.Buff_Glider_C");
		return ptr;
	}


	void GetGliderInactiveMeshTargetRotVals(struct FRotator* Rot, float* InterpSpeed);
	void ServerTick_UpdateHighestZ();
	void ServerTick_ReduceDurability();
	void Tick_UpdatePlayerMesh(float DeltaTime);
	void UpdateIsPullingUp();
	void GetCurrentGliderRotationRate(struct FRotator* Result);
	void UpdateSavedCameraView();
	void BPInitializedCharacterAnimScriptInstance();
	void BPCharacterDetach();
	void UpdateGliderSFX();
	void ReceiveDestroyed();
	struct FVector BPOverrideWeaponBob(struct FVector* InWeaponBob);
	void CheckForGliderStuckOnWall(bool* CanKeepGliding);
	void GetGlideSpeedRatio(float* Result);
	float BP_ModifyCharacterFOV(float* inFOV);
	void STATIC_ServerTick_GlideFalling();
	void GetGliderMesh(bool* foundMesh, class USkeletalMeshComponent** meshRef);
	void AttachWingVFX();
	void UpdateVelocityForVFX();
	void StopUsingGlider();
	void GetAngleDeltaBetweenVectors(const struct FVector& A, const struct FVector& B, const struct FVector& AroundAxis, float* angleFromA_ToB);
	bool AllowPostProcessEffect();
	float GetBuffPostprocessIntensity();
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void AreRotatorsNearlyEqual(const struct FRotator& rotA, const struct FRotator& RotB, float Error, bool* Result);
	void STATIC_ServerTick_UpdateGlideVelocity();
	void UpdateGliderByState_NonDedicated();
	void STATIC_UpdateGliderByState_ServerAndClient();
	void STATIC_UpdateGliderByState_Server();
	void OnRep_GliderState_Current();
	void IsGliderActive(bool* Result);
	void GetGlideSpeedRatio_Pure(float* Result);
	void GetDefaultOwningPlayer(class AShooterCharacter** Ref);
	void IsPlayerGrounded(bool* Result);
	void Can_Use_Glider(bool isToStart, bool* Result);
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void Clamp_LocationZ();
	void UpdateGliderFX();
	void BPDeactivated(class AActor** ForInstigator);
	void Reset_Owning_PlayerVariables();
	void ClampPlayerVelocity(float MaxVelocity);
	void NetSetCurrentGliderState(TEnumAsByte<E_GliderStates> NewState);
	void BuffTickServer(float* DeltaTime);
	void STATIC_ServerTick_UpdateGlidingRotation();
	void BuffTickClient(float* DeltaTime);
	void ClientSetGlidingState(TEnumAsByte<E_GliderStates> NewState);
	void UserConstructionScript();
	void InpActEvt_Jump_K2Node_InputActionEvent_104();
	void InpActEvt_Run_K2Node_InputActionEvent_103();
	void InpActEvt_Run_K2Node_InputActionEvent_102();
	void InpActEvt_RunToggle_K2Node_InputActionEvent_101();
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_45();
	void Server_RequestSetThrusterState(TEnumAsByte<E_GliderStates> NewState);
	void ReceiveBeginPlay();
	void Multi_GlideStart(const struct FRotator& NewRotation, float newGlideMult);
	void Client_SyncGlidingVars(const struct FVector& NewVelocity, const struct FRotator& NewRotation);
	void OnPlayerCapsuleHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit);
	void InitGlider();
	void ExecuteUbergraph_Buff_Glider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
