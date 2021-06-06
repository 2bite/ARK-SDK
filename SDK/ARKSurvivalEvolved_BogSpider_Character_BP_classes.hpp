#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpider_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BogSpider_Character_BP.BogSpider_Character_BP_C
// 0x1657 (0x45E7 - 0x2F90)
class ABogSpider_Character_BP_C : public ADino_Character_BP_Climber_C
{
public:
	class UAudioComponent*                             SkidSFX;                                                  // 0x2F90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             WebPullSFX_Right;                                         // 0x2F98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             WebPullSFX_Left;                                          // 0x2FA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             WebSwingingSFX;                                           // 0x2FA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WebParticle_Center;                                       // 0x2FB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WebParticle_Right;                                        // 0x2FB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WebParticle_Left;                                         // 0x2FC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_BogSpider_C* DinoCharacterStatus_BP_BogSpider_C1;                      // 0x2FC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendSpiderVision_ScalarBlend_CF3AF8014AA1E40CEE2140B1DA07958C;// 0x2FD0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BlendSpiderVision__Direction_CF3AF8014AA1E40CEE2140B1DA07958C;// 0x2FD4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2FD5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BlendSpiderVision;                                        // 0x2FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpiderGrappledBuffClass;                                  // 0x2FE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGrappled_Left;                                           // 0x2FE8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGrappled_Right;                                          // 0x2FE9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x2FEA(0x0002) MISSED OFFSET
	float                                              webTraceRadius;                                           // 0x2FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebTraceMaxAngle;                                         // 0x2FF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpDetachVelocityMult;                                   // 0x2FF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxViewRotYawInfluence_JumpDetach;                        // 0x2FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2FFC(0x0004) MISSED OFFSET
	class UClass*                                      WebAnchorClass;                                           // 0x3000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABogSpider_WebAnchorPoint_C*>         SpawnedWebAnchors;                                        // 0x3008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              SnapPreviewLocationsPastDistDelta;                        // 0x3018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x301C(0x0004) MISSED OFFSET
	TArray<class FString>                              ValidInputStrings;                                        // 0x3020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bShootBothWebsPressed;                                    // 0x3030(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShootOneWebPressed;                                      // 0x3031(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReleaseCablesPressed;                                    // 0x3032(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x3033(0x0001) MISSED OFFSET
	float                                              WarpFOV_WebSwinging_AddAngle;                             // 0x3034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialFOV;                                               // 0x3038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPV_CameraOffset_Falling;                                 // 0x303C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPV_CameraOffset_Default;                                 // 0x3048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPV_CameraOffset_PullingGrapple_MAX;                      // 0x3054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPV_CameraOffset_Swimming;                                // 0x3060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToLifeSteal;                                        // 0x306C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x306D(0x0003) MISSED OFFSET
	float                                              LifeSteal_UnderHealthPercentage;                          // 0x3070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x3074(0x0004) MISSED OFFSET
	class UClass*                                      BloodPackItemClass;                                       // 0x3078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LifeStealDamageType;                                      // 0x3080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeStealAmountPerSecond;                                 // 0x3088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x308C(0x0004) MISSED OFFSET
	double                                             LastLifeStealTime;                                        // 0x3090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarpFOV_InterpSpeed;                                      // 0x3098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_JumpDetach;                                   // 0x309C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_ShootWeb;                                     // 0x30A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToShoot_Both;                                       // 0x30A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToShoot_One;                                        // 0x30A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToWalkOnWater;                                      // 0x30A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x30A7(0x0001) MISSED OFFSET
	double                                             LastBreakTetherTime;                                      // 0x30A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventWebShootForTimeAfterTetherBreak;                   // 0x30B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x30B4(0x0004) MISSED OFFSET
	class UClass*                                      CameraShake_WebSwinging;                                  // 0x30B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebSwingingCameraShake_Scale;                             // 0x30C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebSwingingCameraShake_Speed;                             // 0x30C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            ReleasingEnsnaredChar;                                    // 0x30C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              EnsnareWithinTetherRadius;                                // 0x30D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToWallStick;                                        // 0x30D4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x30D5(0x0003) MISSED OFFSET
	float                                              StickToWallTraceDistance;                                 // 0x30D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x30DC(0x0004) MISSED OFFSET
	double                                             LastServerTryToStickToWallTime;                           // 0x30E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedServerTryToStickToWallInterval;                    // 0x30E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSteal_CurrentBloodPacksTaken;                         // 0x30EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSteal_ConsumeBloodPacksPerSecond;                     // 0x30F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x30F4(0x0004) MISSED OFFSET
	double                                             LastWallStickCheckStartTime;                              // 0x30F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastBioGrappleBuffAddTime;                                // 0x3100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_BogSpider;                                         // 0x3108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x3109(0x0003) MISSED OFFSET
	float                                              UnstickFromWallImpulse_NoRider;                           // 0x310C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnstickFromWallImpulse_Rider;                             // 0x3110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLastJumpWasGrounded;                                     // 0x3114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x3115(0x0003) MISSED OFFSET
	float                                              GrapplingCameraSpeedInterpMult;                           // 0x3118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_Swinging;                        // 0x311C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Location_StuckToWall;                     // 0x3120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRotatingWithWebs;                                        // 0x3124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x3125(0x0003) MISSED OFFSET
	float                                              DoubleCableBreakWhenVelocityPastDotToAnchor;              // 0x3128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreWebTraceHitsBelowDotWithViewDir;                    // 0x312C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   IgnoreWebTraceHitsWithinRadiusRange;                      // 0x3130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WaterWalkBuffClass;                                       // 0x3138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABuff_Client_BogSpiderWaterWalk_C*           CurrWaterWalkClientBuff;                                  // 0x3140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              EnsnareReleaseImpulse;                                    // 0x3148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnsnareDistancePadding;                                   // 0x314C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnarableCharTraceRadius;                                  // 0x3150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CenterTraceUpdateAimedCharRadius;                         // 0x3154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastUpdateAimedCharsTime;                                 // 0x3158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedUpdateAimedCharsInterval;                          // 0x3160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_Reset;                           // 0x3164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_Reset_Walking;                   // 0x3168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceSkiddingAnim;                                       // 0x316C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x316D(0x0003) MISSED OFFSET
	class UAnimMontage*                                WebTakeoffMontage_Walking;                                // 0x3170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WebTakeoffMontage_Falling;                                // 0x3178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTallMode;                                                // 0x3180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x3181(0x0007) MISSED OFFSET
	class UAnimMontage*                                BogSpiderTallMontage_Start;                               // 0x3188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                BogSpiderTallMontage_End;                                 // 0x3190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   OptimalWebHitDistIncreaseVals;                            // 0x3198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWalkSpeed_TallMode;                                    // 0x31A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationRate_TallMode;                                    // 0x31A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_StuckToWall;                     // 0x31B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OptimalWebHit_LerpStartVelocity;                          // 0x31B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OptimalWebHit_LerpStartDist;                              // 0x31B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentOptimalWebHitDist;                                 // 0x31BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OptimalWebHitDistance_WeightMult;                         // 0x31C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WalkingOnWaterMeshOffsetZ;                                // 0x31C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkingOnWaterWithinDeltaZ;                               // 0x31D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRealSpiderJump;                                        // 0x31D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSpiderJumping;                                         // 0x31D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x31D6(0x0002) MISSED OFFSET
	class UAnimMontage*                                SpiderJumpMontage_FromGround_Prep;                        // 0x31D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SpiderJumpMontage_FromGround;                             // 0x31E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SpiderJumpMontage_FromWall;                               // 0x31E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CameraShake_SpiderLanded;                                 // 0x31F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CameraShake_SpiderJumped;                                 // 0x31F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SpiderLanded_Speed;                           // 0x3200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SpiderLanded_Scale;                           // 0x3204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CameraShake_SpiderStuckToWall;                            // 0x3208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SpiderStuckToWall_Scale;                      // 0x3210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SpiderStuckToWall_Speed;                      // 0x3214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpiderJumpPressed;                                       // 0x3218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x3219(0x0003) MISSED OFFSET
	float                                              WaterWalking_MaxWalkSpeed;                                // 0x321C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterWalking_RunningSpeedMult;                            // 0x3220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterWalking_RotationRateMult;                            // 0x3224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterWalking_RunningRotationRateMult;                     // 0x3228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebTraceAngleSliceSize;                                   // 0x322C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BogSpiderBioGrappleBuffClass;                             // 0x3230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_Landed_BaseVelocity;                          // 0x3238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Location_Default;                         // 0x323C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Location_ShorteningWebs;                  // 0x3240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoubleDetachWhenBelowDotBetweenAnchors;                   // 0x3244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WaterWalk_In_Montage;                                     // 0x3248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WaterWalk_Out_Montage;                                    // 0x3250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsWalkingOnWaterSurface;                                 // 0x3258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x3259(0x0007) MISSED OFFSET
	class UAnimMontage*                                DetachWebsAnim_Default;                                   // 0x3260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DetachWebsAnim_Jump_Forward;                              // 0x3268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastFallingVelocity;                                      // 0x3270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x327C(0x0004) MISSED OFFSET
	class UAnimMontage*                                SnareMontage_End_CharDead;                                // 0x3280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SnareMontage_End_CharAlive;                               // 0x3288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SnareMontage_Start;                                       // 0x3290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPV_CameraOffset_StuckToWall;                             // 0x3298(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpiderAirBrakePressed;                                   // 0x32A4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToWebSprint;                                        // 0x32A5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFullDetachPressed;                                       // 0x32A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGamepadHotbarModifierPressed;                            // 0x32A7(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	double                                             LastWebButtonPressTime_Both;                              // 0x32A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastWebButtonPressTime_Single;                            // 0x32B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputTapWindow_RunToggle;                                 // 0x32B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SpiderLandedOnWater_Speed;                    // 0x32BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SpiderLandedOnWater_Scale;                    // 0x32C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x32C4(0x0004) MISSED OFFSET
	class UClass*                                      CameraShake_SwingingHitWall;                              // 0x32C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SpiderSwingWallImpact_Speed;                  // 0x32D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SpiderSwingWallImpact_Scale;                  // 0x32D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_StickToWall;                                  // 0x32D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x32DC(0x0004) MISSED OFFSET
	double                                             LastSwingImpactTime;                                      // 0x32E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlaySwingImpactAnimAboveHitDotNormalToVelocity;           // 0x32E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedSwingImpactInterval;                               // 0x32EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlaySwingImpactAnimAboveSpeed;                            // 0x32F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SwingImpact_BaseVelocity;                     // 0x32F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WebShootSocketName_Left;                                  // 0x32F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WebShootSocketName_Right;                                 // 0x3300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationRate_StuckToWall;                                 // 0x3308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentGravityScale;                                      // 0x330C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale_JumpDetach;                                  // 0x3310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StuckToWall_CurrentRotationDelta;                         // 0x3314(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ReleasingEnsnaredChar_Impulse;                            // 0x3318(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreWebTraceHitsWithinRadius_hitPrimalChar;             // 0x3324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SnareMontage_Start_StuckToWall;                           // 0x3328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SnareMontage_End_StuckToWall_Alive;                       // 0x3330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoubleWebDetach_AboveVelocity;                            // 0x3338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x333C(0x0004) MISSED OFFSET
	class UAnimSequence*                               RiderAnimOverride_TallMode;                               // 0x3340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale_WebSprint;                                   // 0x3348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAnimWebSwingVelocityPercentage;                        // 0x334C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimBlendMaxVelocity;                              // 0x3350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x3354(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        SwimmingAttackAnims;                                      // 0x3358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              GravityScaleResetInterpSpeed;                             // 0x3368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirBrake_VelocityInterpSpeed;                             // 0x336C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirBrake_VelocityInterpSpeed_Z;                           // 0x3370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastWebSwingVelocity;                                     // 0x3374(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DismountForwardOffset;                                    // 0x3380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x3384(0x0004) MISSED OFFSET
	double                                             LastGrapplePullJumpTime;                                  // 0x3388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrapplePullJump_Duration;                                 // 0x3390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_WebPulling_Tick;                              // 0x3394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_WebPulling_Tick_SprintMult;                   // 0x3398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_AirBrake_Tick;                                // 0x339C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_GrapplePullJump;                              // 0x33A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   StaminaCost_SlingshotStretch_Tick_Ranges;                 // 0x33A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TakeSlingshotHitDamageAboveHitNormalDot;                  // 0x33AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LastJumpMontage;                                          // 0x33B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SlingshotHitDamageRanges;                                 // 0x33B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              StupidNames;                                              // 0x33C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ForceSkidAnimsTraceDistance;                              // 0x33D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale_Default;                                     // 0x33D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale_WebsAttached;                                // 0x33D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x33DC(0x0004) MISSED OFFSET
	double                                             LastShootWebTime;                                         // 0x33E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedIncreaseInterval_WebShoot;               // 0x33E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_ShootWeb;                           // 0x33EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastShouldChangeTallModeTime;                             // 0x33F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowChangeTallModeStateAfterTime;                        // 0x33F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WantsToStickToWallDirection;                              // 0x33FC(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              StickToWallMagnetForce;                                   // 0x3408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x340C(0x0004) MISSED OFFSET
	double                                             LastTraceForWallStickTime;                                // 0x3410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceForWallStickInterval;                                // 0x3418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AddedWallStickVelocity;                                   // 0x341C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EnsnareSocketName_Normal;                                 // 0x3428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EnsnareSocketName_Hanging;                                // 0x3430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_PrintVelocity;                                     // 0x3438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x3439(0x0003) MISSED OFFSET
	float                                              StaminaCost_Ensnare_Start;                                // 0x343C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_Ensnare_Tick;                                 // 0x3440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WebAnchorColor_Default;                                   // 0x3444(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WebAnchorColor_Single;                                    // 0x3454(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumInputBits;                                             // 0x3464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastSyncedInputBitMask;                                   // 0x3468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x346C(0x0004) MISSED OFFSET
	double                                             LastInputHeartbeatTime;                                   // 0x3470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   InputHeartbeatInterval_RandRanges;                        // 0x3478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputHeartbeatInterval_Current;                           // 0x3480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventAttackAfterTetherBreakDuration;                    // 0x3484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasCrouchPressed;                                        // 0x3488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWebSprintToggled;                                        // 0x3489(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x6];                                       // 0x348A(0x0006) MISSED OFFSET
	double                                             LastJumpPressedTime;                                      // 0x3490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              WebJumpDetachButtonHoldInterval;                          // 0x3498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x349C(0x0004) MISSED OFFSET
	class UAnimMontage*                                SwingingHitWallAnim;                                      // 0x34A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWalkSpeed_ReelingChar;                                 // 0x34A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnWallStick_TraceDist;                                 // 0x34AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnWallStick_CheckForAboveGroundDist;                   // 0x34B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnWallStick_RequiredClearRadiusAtSpawnLoc;             // 0x34B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageThreshold_UnstickFromWall;                          // 0x34B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageThreshold_ReleaseEnsnaredChar;                      // 0x34BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageThreshold_BreakWebs;                                // 0x34C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x34C4(0x0004) MISSED OFFSET
	double                                             SpiderDamageTracker_LastDamageTime;                       // 0x34C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SpiderDamageTracker_TotalDamage;                          // 0x34D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SpiderDamageTracker_TrackInterval;                        // 0x34D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateControlRotationInterpSpeed_BioGrappled;             // 0x34D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastLifeStealAmountForTaming;                             // 0x34DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              TameAffinityPerLifeSteal;                                 // 0x34E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x34E4(0x0004) MISSED OFFSET
	double                                             LastTameAffinityIncreaseTime;                             // 0x34E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              TameAffinityIncreaseInterval;                             // 0x34F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasSpiderInitialized;                                    // 0x34F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x34F5(0x0003) MISSED OFFSET
	struct FVector                                     TPV_CameraOffset_EnsnaredChar;                            // 0x34F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x4];                                       // 0x3504(0x0004) MISSED OFFSET
	double                                             LastJumpDetachTime;                                       // 0x3508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedIncreaseInterval_JumpDetach;             // 0x3510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_JumpDetach;                         // 0x3514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastVelocity;                                             // 0x3518(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              WarpFOV_AboveControlRotPitch;                             // 0x3524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarpFOV_AboveControlRotPitch_AddAngle;                    // 0x3528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarpFOV_InterpSpeed_PitchWarp;                            // 0x352C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedIncreaseInterval_Slingshot;              // 0x3530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_Slingshot;                          // 0x3534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastDamageBrokeWebsTime;                                  // 0x3538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageBreakingWebsPreventsWebsForTime;                    // 0x3540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUnstickingFromWall;                                    // 0x3544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x3545(0x0003) MISSED OFFSET
	float                                              BioGrappleWebLifetime_Untamed;                            // 0x3548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BioGrappleWebLifetime_Tamed;                              // 0x354C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DetachWebsAnim_Jump_Left;                                 // 0x3550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DetachWebsAnim_Jump_Right;                                // 0x3558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpDetach_ForwardJumpDotRange;                           // 0x3560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventJumpDetachAnim_BelowVelocityDotZ;                  // 0x3564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventJumpDetachAnims_BelowVelocity;                     // 0x3568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceForwardJumpDetach_AboveVelocityDotZ;                 // 0x356C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrapplePullJump_ForwardSpeedConversionRatio;              // 0x3570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData38[0x4];                                       // 0x3574(0x0004) MISSED OFFSET
	class APrimalCharacter*                            UnriddenSpiderWantsToBioGrappleChar;                      // 0x3578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SpiderLandedAnim_Default;                                 // 0x3580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SpiderLandedAnim_WaterWalking;                            // 0x3588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SpiderLandedAnim_HardLand;                                // 0x3590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HardLand_RequiredDownwardSpeed;                           // 0x3598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HardLand_RequiredDownwardSpeedRatio;                      // 0x359C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bImpendingLand;                                           // 0x35A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x35A1(0x0003) MISSED OFFSET
	float                                              CameraShake_SpiderHardLanded_Speed;                       // 0x35A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShake_SpiderHardLanded_Scale;                       // 0x35A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReelingWebAttachedToRightFoot;                           // 0x35AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x35AD(0x0003) MISSED OFFSET
	struct FName                                       WebGrabSocketName_Left;                                   // 0x35B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WebGrabSocketName_Right;                                  // 0x35B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ReelingGrabCount;                                         // 0x35C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentReelingWebGrabLocation_Primary;                    // 0x35C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentReelingWebGrabLocation_Secondary;                  // 0x35D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x35DC(0x0004) MISSED OFFSET
	class AShooterCharacter*                           JustTamedByPlayer;                                        // 0x35E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentVelocitySize;                                      // 0x35E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFallingVelocitySize;                                  // 0x35EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentVelocityDir;                                       // 0x35F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastFallingVelocityDir;                                   // 0x35FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentVelocity;                                          // 0x3608(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x3614(0x0004) MISSED OFFSET
	class UAnimMontage*                                AirBrakeMontage_Start;                                    // 0x3618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PendingLandImpactTrace_PredictTime;                       // 0x3620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebHangingRotationLerp_BaseVelocity;                      // 0x3624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WebImmunityBuffClass;                                     // 0x3628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebHangingRotationLerp_RequiredVelocity;                  // 0x3630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   JumpDetachAnimPlayRateRange;                              // 0x3634(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpDetachAnimPlayRateMaxVelocity;                        // 0x363C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirTurningMaxBankAngle;                                   // 0x3640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CurrentVelocity2D;                                        // 0x3644(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentVelocitySize2D;                                    // 0x364C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationRate_WebSwinging;                                 // 0x3650(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateTowardsJumpDetachVelocityDuration;                  // 0x365C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PendingLandImpactTrace_MaxDistance;                       // 0x3660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFrozenIkYaw;                                          // 0x3664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CameraShake_BioGrappled;                                  // 0x3668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastRiderClearedTime;                                     // 0x3670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWildSpiderTryingToWallStick;                             // 0x3678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMeshInterping;                                         // 0x3679(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x367A(0x0002) MISSED OFFSET
	float                                              AirBrake_MaxFallSpeed;                                    // 0x367C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentStupidNameIndex;                                   // 0x3680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x4];                                       // 0x3684(0x0004) MISSED OFFSET
	TArray<class UClass*>                              StupidNameBuffs;                                          // 0x3688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABuff_Grappled_BogSpider_C*                  MySpiderGrappleBuff;                                      // 0x3698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpiderHasValidTarget;                                    // 0x36A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x36A1(0x0003) MISSED OFFSET
	float                                              RootRotationLimit_TallMode;                               // 0x36A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WebImpactVFX_Char_BioGrapple;                             // 0x36A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WebImpactVFX_Geo;                                         // 0x36B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WebImpactVFX_Char;                                        // 0x36B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpSpeed_Rotation_AgainstSurface;                  // 0x36C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GrapplePullJump_RequiredMinTetherLengthRange;             // 0x36C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedBioGrappleCooldown;                                  // 0x36CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AgainstSurfaceJumpMinVelocity;                            // 0x36D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxViewRotAngleInfluence_UnstickFromWall;                 // 0x36D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   VolumeRange_SwingingSFX;                                  // 0x36D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PitchRange_SwingingSFX;                                   // 0x36E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   VolumeRange_WebPullingSFX;                                // 0x36E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PitchRange_WebPullingSFX;                                 // 0x36F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebSwingingSFX_MinVelocity;                               // 0x36F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWebSwingingSoundVolume;                            // 0x36FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebSwingingSFX_VolumeInterpSpeed;                         // 0x3700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x4];                                       // 0x3704(0x0004) MISSED OFFSET
	class USoundBase*                                  WebShootSFX;                                              // 0x3708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  WebBreakSFX;                                              // 0x3710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastBreakTetherTime_BioGrapple;                           // 0x3718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLastRiderWantsToWalkOnWaterState;                        // 0x3720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x3721(0x0007) MISSED OFFSET
	class UClass*                                      BioGrappleCooldownBuffClass;                              // 0x3728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpiderHasValidTamedFollowTarget;                         // 0x3730(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData48[0x7];                                       // 0x3731(0x0007) MISSED OFFSET
	double                                             LastChargeJumpStartTime;                                  // 0x3738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeJumpMultMax;                                        // 0x3740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeJumpMaxHoldTime;                                    // 0x3744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeJumpRequiredHoldTime;                               // 0x3748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeJumpMaxAngleInfluence;                              // 0x374C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLastShootWebFromGamepad;                                 // 0x3750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x3751(0x0007) MISSED OFFSET
	class UAnimMontage*                                DetectImpendingLandMontage;                               // 0x3758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WallStickConfirmTraces_Num;                               // 0x3760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WallStickConfirmTraces_RequiredValidHits;                 // 0x3764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallStickConfirmTraces_TraceOffsetCapsuleRadiusPercent;   // 0x3768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WallStick_MinValidAngle;                                  // 0x376C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDidCancelChargeJump;                                     // 0x3770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x3771(0x0003) MISSED OFFSET
	float                                              DoubleDetach_PreventAfterShootWebInterval;                // 0x3774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AgainstSurface_RotateTowardsVelocitySpeedRange;           // 0x3778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasStartedAirBraking;                                    // 0x3780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x3781(0x0003) MISSED OFFSET
	float                                              SpiderTerminalVelocity;                                   // 0x3784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BioGrappleStartDamage;                                    // 0x3788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData52[0x4];                                       // 0x378C(0x0004) MISSED OFFSET
	class UClass*                                      BioGrappleDamageType;                                     // 0x3790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WebAnchorPreviewColor_SideWeb;                            // 0x3798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WebAnchorPreviewColor_CannotFire;                         // 0x37A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WebAnchorPreviewColor_BioGrappleTarget;                   // 0x37B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WebAnchorPreviewColor_CenterWeb;                          // 0x37C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RiderFpvCameraUseSocketName_TallMode;                     // 0x37D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraCustomLocationInterpSpeed;                          // 0x37E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraCollisionTraceRadius;                               // 0x37E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastCameraOverrideOffset;                                 // 0x37E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              DivingAnimMinVelocity;                                    // 0x37F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseTameIneffectivenessModifierDecreasePerKill;           // 0x37F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredBaseEnsnareKillLevelRatioToIncreaseTameIneffectiveness;// 0x37FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseMaxHealthForEnsnareKill;                              // 0x3800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HudMaxTameEffectivenessModifierOffsetY;                   // 0x3804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HudMaxTameEffectivenessModifierDrawColor;                 // 0x3808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      HudMaxTameEffectivenessText;                              // 0x3818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HudMaxTameEffectivenessTextScaleMult;                     // 0x3828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DoStupidThingsIntervalRange;                              // 0x382C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData53[0x4];                                       // 0x3834(0x0004) MISSED OFFSET
	double                                             LastDoStupidThingsTime;                                   // 0x3838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDoStupidThingsInterval;                            // 0x3840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData54[0x4];                                       // 0x3844(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        StartWaterWalkDirectionalMoveMontages;                    // 0x3848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              WaterWalkPlayStartMoveMontageVelocity;                    // 0x3858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterWalkPlayStartMoveMontageDot;                         // 0x385C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CameraShake_ChargeJump;                                   // 0x3860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CameraShake_ChargeJump_ScaleRange;                        // 0x3868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CameraShake_ChargeJump_SpeedRange;                        // 0x3870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CameraShake_DoChargeJump;                                 // 0x3878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CameraShake_DoChargeJump_ScaleRange;                      // 0x3880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CameraShake_DoChargeJump_SpeedRange;                      // 0x3888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventWebShootForTimeAfterTetherBreak_Hold;              // 0x3890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData55[0x4];                                       // 0x3894(0x0004) MISSED OFFSET
	double                                             LastBreakTetherTime_Hold_Both;                            // 0x3898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastBreakTetherTime_Hold_Single;                          // 0x38A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarpFOV_ChargeJump_AddAngle;                              // 0x38A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData56[0x4];                                       // 0x38AC(0x0004) MISSED OFFSET
	double                                             LastDoChargeJumpTime;                                     // 0x38B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedIncreaseInterval_ChargeJump;             // 0x38B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeedMult_ChargeJump;                         // 0x38BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPV_CameraOffset_ChargingJump;                            // 0x38C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DediServerTimerIntervalRange;                             // 0x38CC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData57[0x4];                                       // 0x38D4(0x0004) MISSED OFFSET
	class UAnimMontage*                                SnareMontage_End_StuckToWall_Dead;                        // 0x38D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrapplePullJump_MinVelocityToScaleRequiredTetherLength;   // 0x38E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData58[0x4];                                       // 0x38E4(0x0004) MISSED OFFSET
	class APrimalBuff*                                 SpawnedBioGrappledBuff;                                   // 0x38E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BioGrappleBuffCommandName_BioGrapple;                     // 0x38F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BioGrappleBuffCommandName_Ensnare;                        // 0x38F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeStealAmountPerSecond_Rider;                           // 0x3900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WaitingForTetherCreation_CachedNumValidWebs;              // 0x3904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_WebShooting;                                       // 0x3908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug_StickToWall;                                       // 0x3909(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug_LifeSteal;                                         // 0x390A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData59[0x1];                                       // 0x390B(0x0001) MISSED OFFSET
	float                                              LifeSteal_StolenHealthToFoodMult;                         // 0x390C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_SpiderInput;                                       // 0x3910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug_PrintWebTethersArray;                              // 0x3911(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData60[0x6];                                       // 0x3912(0x0006) MISSED OFFSET
	TArray<class UAnimMontage*>                        SpiderParallelEmoteAnimsArray;                            // 0x3918(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        SpiderParallelUnlockableEmoteAnimsArray;                  // 0x3928(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                SpiderDefaultEmoteAnim;                                   // 0x3938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SecondWebShootDelayRange;                                 // 0x3940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebShootRatio_Left;                                       // 0x3948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              WebShootRatio_Right;                                      // 0x394C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              WebAlphaInterpSpeed_Shoot;                                // 0x3950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebAlphaInterpSpeed_Retract;                              // 0x3954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWebVisible_Left;                                         // 0x3958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWebVisible_Right;                                        // 0x3959(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData61[0x6];                                       // 0x395A(0x0006) MISSED OFFSET
	struct FHitResult                                  LastCreatedTetherHit_Left;                                // 0x3960(0x0088) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FHitResult                                  LastCreatedTetherHit_Right;                               // 0x39E8(0x0088) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FHitResult                                  EmptyHit;                                                 // 0x3A70(0x0088) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	float                                              WebBreakMaxRandDelayTime;                                 // 0x3AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastWebEndLocation_Left;                                  // 0x3AFC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastWebEndLocation_Right;                                 // 0x3B08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingingIntoCameraInterpSpeed_RequiredDot;                // 0x3B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SwingingIntoCameraInterpSpeed_Range;                      // 0x3B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingingIntoCameraInterpSpeed_RequiredVelocity;           // 0x3B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanAirJump;                                              // 0x3B24(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x3B25(0x0003) MISSED OFFSET
	float                                              StaminaCost_AirJump;                                      // 0x3B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData63[0x4];                                       // 0x3B2C(0x0004) MISSED OFFSET
	double                                             LastStartedFallingTime;                                   // 0x3B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowAirJumpAfterFallTime;                                // 0x3B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResetCanAirJumpInterval;                                  // 0x3B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   NextAirJumpDirection;                                     // 0x3B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              AirJumpImpulseDelay;                                      // 0x3B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData64[0x4];                                       // 0x3B4C(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        AirJumpMontages_Directional;                              // 0x3B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   AirJumpVelocity_HorizontalVertical;                       // 0x3B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventAirJumpAfterChargeJumpForTime;                     // 0x3B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventAirJumpAfterTetherBreakForTime;                    // 0x3B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirJumpInputDeadZone;                                     // 0x3B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData65[0x4];                                       // 0x3B74(0x0004) MISSED OFFSET
	class UAnimMontage*                                AirJumpMontage_Neutral;                                   // 0x3B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LastAirJumpMontage;                                       // 0x3B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	double                                             LastReleaseEnsnaredCharTime;                              // 0x3B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReleasingEnsnaredCharPreventsWebsForTime;                 // 0x3B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventProneInputUnstickAfterReleaseEnsnaredCharForTime;  // 0x3B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayingSkidSFX;                                          // 0x3B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData66[0x3];                                       // 0x3B99(0x0003) MISSED OFFSET
	float                                              SkidSfxVolumeBaseVelocity;                                // 0x3B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSkidSoundVolume;                                   // 0x3BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SkidSoundVolumeInterpSpeed;                               // 0x3BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebButtonTapShootsNewWebInterval;                         // 0x3BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowWebQuickFire;                                       // 0x3BAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsQuickFiringWebs;                                       // 0x3BAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData67[0x2];                                       // 0x3BAE(0x0002) MISSED OFFSET
	float                                              AllowedQuickFireWebsInterval;                             // 0x3BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingingMeshRotation_AboveAnchor_RequiredVelocity;        // 0x3BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingingMeshRotation_AboveAnchor_MaxVelocity;             // 0x3BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_SpiderMeshTransformation;                          // 0x3BBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData68[0x3];                                       // 0x3BBD(0x0003) MISSED OFFSET
	TArray<bool>                                       UseTraceMap_TryStickToWall;                               // 0x3BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   ReplicatedSpiderClimbingInputs;                           // 0x3BD0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsSpiderVisionActive;                                 // 0x3BD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bIsSpiderVisionActive;                                    // 0x3BD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData69[0x2];                                       // 0x3BDA(0x0002) MISSED OFFSET
	struct FName                                       NightVisionScalarParamName;                               // 0x3BDC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingVelocity_Walk_ReelingChar;                        // 0x3BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildSpiderBioGrapple_SuccessChance_NonPlayer;             // 0x3BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildSpiderBioGrapple_SuccessChance_Player;                // 0x3BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastWildSpiderTryBioGrappleTime;                          // 0x3BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWildSpiderBioGrappleChance;                        // 0x3BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              WildSpiderBioGrapple_ChanceIncrease_Player;               // 0x3BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildSpiderBioGrapple_ChanceIncrease_NonPlayer;            // 0x3C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnriddenSpider_TryBioGrappleAllowedInterval;              // 0x3C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildSpider_TryBioGrapple_InaccuracyIncrease;              // 0x3C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildSpider_TryBioGrapple_InaccuracyBaseVelocity;          // 0x3C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeStealInterval;                                        // 0x3C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirJump_LateralBoostTowardsLookDir_MaxAngle;              // 0x3C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirJump_LateralBoostTowardsLookDir_VelocityMult;          // 0x3C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData70[0x4];                                       // 0x3C1C(0x0004) MISSED OFFSET
	class UClass*                                      SuckingRiderBloodBuffClass;                               // 0x3C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 SpawnedRiderBloodSuckBuff;                                // 0x3C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class FString                                      SpiderNotification_InsufficientStamina_ShootWeb;          // 0x3C30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SpiderNotification_InsufficientStamina_Ensnare;           // 0x3C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SpiderNotification_InsufficientStamina_WallStick;         // 0x3C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StaminaCost_ChargingJump_Tick;                            // 0x3C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_DoChargeJump;                                 // 0x3C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost_StartChargingJump;                            // 0x3C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData71[0x4];                                       // 0x3C6C(0x0004) MISSED OFFSET
	class FString                                      SpiderNotification_InsufficientStamina_StartChargingJump; // 0x3C70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SpiderNotification_InsufficientStamina_Slingshot;         // 0x3C80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector2D                                   SpiderClimbingTracesAngleRanges_Climbing;                 // 0x3C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPV_CameraOffset_PullingSlingshot;                        // 0x3C98(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData72[0x4];                                       // 0x3CA4(0x0004) MISSED OFFSET
	class UClass*                                      CameraShake_PullingSlingshot;                             // 0x3CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CameraShake_PullingSlingshot_ScaleRange;                  // 0x3CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CameraShake_PullingSlingshot_SpeedRange;                  // 0x3CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarpFOV_PullingSlingshot_AddAngle;                        // 0x3CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData73[0x4];                                       // 0x3CC4(0x0004) MISSED OFFSET
	class FString                                      SpiderNotification_InsufficientStamina_AirJump;           // 0x3CC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebug_SpiderCameraTarget;                                // 0x3CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData74[0x3];                                       // 0x3CD9(0x0003) MISSED OFFSET
	float                                              SpiderCameraMinDistFromSurface_Default;                   // 0x3CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpiderCameraMinDistFromSurface_Climbing;                  // 0x3CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpiderCameraMinDistFromSurface_Water;                     // 0x3CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastQuickFireWebsTime;                                    // 0x3CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRunTogglePressed;                                        // 0x3CF0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData75[0x7];                                       // 0x3CF1(0x0007) MISSED OFFSET
	double                                             LastRunTogglePressedTime;                                 // 0x3CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLastRunTogglePressHadHotbarModifier;                     // 0x3D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData76[0x3];                                       // 0x3D01(0x0003) MISSED OFFSET
	float                                              RequiredDownVelocityForNormalLand;                        // 0x3D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         SpiderPreviousMovementMode;                               // 0x3D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData77[0x3];                                       // 0x3D09(0x0003) MISSED OFFSET
	float                                              AllowSpiderClimbRunningWithinAngleOfForward;              // 0x3D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowStickToWallAfterFallingTime;                         // 0x3D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowWallStickAfterHoldJumpTime;                          // 0x3D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaRequirement_WebPulling_Start;                      // 0x3D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData78[0x4];                                       // 0x3D1C(0x0004) MISSED OFFSET
	class FString                                      SpiderNotification_InsufficientStamina_StartWebSwinging;  // 0x3D20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StaminaCost_WebSwinging_Tick;                             // 0x3D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaRequirement_WebSwinging_Start;                     // 0x3D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      SpiderNotification_InsufficientStamina_StartWebPulling;   // 0x3D38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CrosshairAlpha_NoBioGrappleTarget;                        // 0x3D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_ForceInstantBioGrappleSuccess;                     // 0x3D4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData79[0x3];                                       // 0x3D4D(0x0003) MISSED OFFSET
	float                                              CanEnsnareTraceStartOffsetZ;                              // 0x3D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpiderVisionOutlinesScalarParamName;                      // 0x3D54(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastEnsnaredCharRelOffset;                                // 0x3D5C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              EnsnaredCharLocationInterpSpeed;                          // 0x3D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnsnaredCharRotationInterpSpeed;                          // 0x3D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreServerCorrectionDuration_ChargeJump;                // 0x3D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredDownVelocityForLandAnim;                          // 0x3D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SpiderLandedAnim_SoftLand;                                // 0x3D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpiderRiderLookDirParallelWithinAngleDelta_Movement;      // 0x3D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpiderRiderLookDirParallelWithinAngleDelta_Rotation;      // 0x3D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpiderRunSeekCenterTraceOffsetCapsuleRadiusScale;         // 0x3D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData80[0x4];                                       // 0x3D94(0x0004) MISSED OFFSET
	TArray<class UClass*>                              DinoClassesPreventBioGrapple;                             // 0x3D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebug_WebTracesShipping;                                 // 0x3DA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData81[0x3];                                       // 0x3DA9(0x0003) MISSED OFFSET
	struct FName                                       DebugWebTracesCheatName;                                  // 0x3DAC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData82[0x4];                                       // 0x3DB4(0x0004) MISSED OFFSET
	double                                             LastClientChargeJumpStartTime;                            // 0x3DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeJump_AllowedClientRatioSuggestionRange;             // 0x3DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsShootingWebs;                                          // 0x3DC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData83[0x3];                                       // 0x3DC5(0x0003) MISSED OFFSET
	float                                              PreventAttachingWebsToHarvestableTreesBelowBoundsZ;       // 0x3DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData84[0x4];                                       // 0x3DCC(0x0004) MISSED OFFSET
	double                                             LastAirJumpTime;                                          // 0x3DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreServerCorrectionDuration_AirJump;                   // 0x3DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_SpiderServerPositionCorrection;                    // 0x3DDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug_SpiderChargeJump;                                  // 0x3DDD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug_SpiderEnableTickDebugging;                         // 0x3DDE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData85[0x1];                                       // 0x3DDF(0x0001) MISSED OFFSET
	struct FRotator                                    NextAirJumpControlRotation;                               // 0x3DE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NextAirJumpCachedVelocity;                                // 0x3DEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AirJump_AllowedClientSuggestVelocityDelta_HorizontalVertical;// 0x3DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CacheWebTraceAnchorLocationLagSeconds;                    // 0x3E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreServerCorrectionDuration_JumpDetach;                // 0x3E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastLandedTime;                                           // 0x3E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHitResult>                          LastCachedWebAnchorHits;                                  // 0x3E10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<double>                                     LastCachedWebAnchorTimes;                                 // 0x3E20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FVector                                     LastWebAnchorPreviewLoc_Left;                             // 0x3E30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastWebAnchorPreviewLoc_Center;                           // 0x3E3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastWebAnchorPreviewLoc_Right;                            // 0x3E48(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              WebAnchorPreviewLocationInterpSpeed;                      // 0x3E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHitResult>                          LastWebTracePreviewHits;                                  // 0x3E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FHitResult>                          RecentWebAnchorPreviewHits_Left;                          // 0x3E68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FHitResult>                          RecentWebAnchorPreviewHits_Center;                        // 0x3E78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	TArray<struct FHitResult>                          RecentWebAnchorPreviewHits_Right;                         // 0x3E88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	int                                                LastWebAnchorPreviewHitsStoreFrame;                       // 0x3E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData86[0x4];                                       // 0x3E9C(0x0004) MISSED OFFSET
	TArray<double>                                     RecentWebAnchorPreviewHitTimes;                           // 0x3EA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                               bDebug_WebAnchorPreviewLag;                               // 0x3EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData87[0x7];                                       // 0x3EB1(0x0007) MISSED OFFSET
	class FString                                      ResetTamingVarsFunctionName;                              // 0x3EB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ResetSpiderTamingVarsPostEnsnareAfterTime;                // 0x3EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastSpiderMeshForward;                                    // 0x3ECC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              currSpiderMeshRelativeYawDelta;                           // 0x3ED8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInterpingRemoteClientMesh;                             // 0x3EDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData88[0x3];                                       // 0x3EDD(0x0003) MISSED OFFSET
	struct FRotator                                    ClientRotationInterpSpeed_Falling;                        // 0x3EE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastSpiderMeshRotation;                                   // 0x3EEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastSpiderMeshLocation;                                   // 0x3EF8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_SpiderNonControlledMeshInterp;                     // 0x3F04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData89[0x3];                                       // 0x3F05(0x0003) MISSED OFFSET
	float                                              ClientRotationInterpSpeed_Swinging_Default;               // 0x3F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientRotationInterpSpeed_Swinging_Fast;                  // 0x3F0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastRemoteClientSpiderLocation;                           // 0x3F10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastRemoteClientSpiderSwingingVelocity;                   // 0x3F1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientLocationInterpSpeed_Reset;                          // 0x3F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClientRotationInterpSpeed_Reset;                          // 0x3F2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSpiderTickTime;                                       // 0x3F30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSpiderTickInterval;                                // 0x3F38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpiderTickIntervalRange;                                  // 0x3F3C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowRotateTowardsLowerAnchorBelowVelozityZ;              // 0x3F44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraMovement_RequiredVelocityRatio;                     // 0x3F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraMovement_RatioExponent;                             // 0x3F4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpiderDefaultTamingIneffectivenessModifier;               // 0x3F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TameIneffectivenessDecreasePerKill_MaxMult;               // 0x3F54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedWarpFovAngle;                                   // 0x3F58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TraceMap_SpiderFeetTraces_EndIndex;                       // 0x3F5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TraceMap_SpiderFeetTraces_StartIndex;                     // 0x3F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpiderClimbingTracesAngleRanges_Seeking;                  // 0x3F64(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityDeltaClamp;                                       // 0x3F6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x3F70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x3F71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue2;              // 0x3F72(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x3F73(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x3F74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x3];                                       // 0x3F75(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x3F78(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_bIsJumpDetach;                         // 0x3F88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPreventAnim;                          // 0x3F89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DetachBothWebs_detachedAny;                      // 0x3F8A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x1];                                       // 0x3F8B(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_HitRelLoc_A;                           // 0x3F8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_HitActor_A2;                           // 0x3F98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_HitRelLoc_B;                           // 0x3FA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x4];                                       // 0x3FAC(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_HitActor_B2;                           // 0x3FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_HitRelLoc;                             // 0x3FB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x4];                                       // 0x3FC4(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_HitActor2;                             // 0x3FC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x3FD0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue2;                       // 0x4000(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_TransformLocation_ReturnValue;                   // 0x4030(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_TransformLocation_ReturnValue2;                  // 0x403C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x4048(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x4049(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x6];                                       // 0x404A(0x0006) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue3;                       // 0x4050(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x4080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x3];                                       // 0x4081(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_TransformLocation_ReturnValue3;                  // 0x4084(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x4090(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bNewState2;                            // 0x4091(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bNewState;                             // 0x4092(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x1];                                       // 0x4093(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_AtLocation;                            // 0x4094(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryStickingToWall_success;                       // 0x40A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x7];                                       // 0x40A1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_EnsnaredActor;                         // 0x40A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_WebShootybangBioGrapple_bSuccess;                // 0x40B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x7];                                       // 0x40B1(0x0007) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentJumpMontage_Montage;                   // 0x40B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x40C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x3];                                       // 0x40C1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x40C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanJumpInternal_ReturnValue;                     // 0x40C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x40C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newState;                              // 0x40CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x40CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x40CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bLeft;                                 // 0x40CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bJumpDetach;                           // 0x40CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsConscious_ReturnValue;                       // 0x40CF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x40D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x3];                                      // 0x40D1(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Delay2;                                // 0x40D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue;                 // 0x40D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x40D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x6];                                      // 0x40DA(0x0006) MISSED OFFSET
	class UClass*                                      CallFunc_GetObjectClass_ReturnValue;                      // 0x40E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x40E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABogSpider_Character_BP_C*                   K2Node_DynamicCast_AsBogSpider_Character_BP_C;            // 0x40F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x40F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x40F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x40FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x40FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x40FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x40FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x40FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x40FF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x4100(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x7];                                      // 0x4101(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x4108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bWantsToStick;                         // 0x4110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x3];                                      // 0x4111(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_SyncInputBitMask2;                     // 0x4114(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_SyncInputBitMask;                      // 0x4118(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewToggle;                             // 0x411C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x411D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x411E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue7;                           // 0x411F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x4120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue;                  // 0x4128(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x4134(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x4138(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x413C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x4140(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue4;              // 0x414C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue;                      // 0x414D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue2;                     // 0x414E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x414F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_newRotation;                           // 0x4150(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bUseSoftSet;                           // 0x415C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x415D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue5;              // 0x415E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x415F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsConscious_ReturnValue2;                      // 0x4160(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x7];                                      // 0x4161(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x4168(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x4170(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x7];                                      // 0x4171(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x4178(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue3;                     // 0x4180(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x3];                                      // 0x4181(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Delay;                                 // 0x4184(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue8;                           // 0x4188(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x3];                                      // 0x4189(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x418C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUpVector_ReturnValue;                         // 0x4198(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RemovePitchAndRollFromRotator_ReturnValue;       // 0x41A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bNewVal;                               // 0x41B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue9;                           // 0x41B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x2];                                      // 0x41B2(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x41B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x41C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue6;              // 0x41CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x3];                                      // 0x41CD(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_FindLookAtRotation_ReturnValue;                  // 0x41D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RemoveRollFromRotator_ReturnValue;               // 0x41DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x41E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSpiderVelocityVars_Pure_Velocity;             // 0x41F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetSpiderVelocityVars_Pure_VelocitySize;         // 0x41FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSpiderVelocityVars_Pure_VelocityDir;          // 0x4200(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetSpiderVelocityVars_Pure_Velocity2D;           // 0x420C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetSpiderVelocityVars_Pure_VelocitySize2D;       // 0x4214(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x4218(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x421C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x4220(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x3];                                      // 0x4221(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x4224(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x4228(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x3];                                      // 0x4229(0x0003) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x422C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x4230(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue7;              // 0x4234(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue8;              // 0x4235(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x2];                                      // 0x4236(0x0002) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_WithTetherHit_Left;                    // 0x4238(0x0088) (Transient, DuplicateTransient)
	struct FHitResult                                  K2Node_CustomEvent_WithTetherHit_Right;                   // 0x42C0(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue10;                          // 0x4348(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x4349(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x6];                                      // 0x434A(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x4350(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSpiderVelocityVars_Velocity;                  // 0x4358(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetSpiderVelocityVars_VelocitySize;              // 0x4364(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSpiderVelocityVars_VelocityDir;               // 0x4368(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetSpiderVelocityVars_Velocity2D;                // 0x4374(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetSpiderVelocityVars_VelocitySize2D;            // 0x437C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x4380(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x3];                                      // 0x4381(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Conv_Vector2DToVector_ReturnValue;               // 0x4384(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue4;               // 0x4390(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsStuckToWall_Pure_bResult;                      // 0x4398(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x7];                                      // 0x4399(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue2;                               // 0x43A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x43A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x7];                                      // 0x43A9(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue3;                               // 0x43B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x43B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x3];                                      // 0x43B9(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x43BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue11;                          // 0x43C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x43C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x2];                                      // 0x43C2(0x0002) MISSED OFFSET
	int                                                CallFunc_GetNumValidTethers_ReturnValue;                  // 0x43C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue9;              // 0x43C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue12;                          // 0x43C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x43CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue4;                     // 0x43CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x43CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x43CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue2;                    // 0x43CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x1];                                      // 0x43CF(0x0001) MISSED OFFSET
	struct FVector2D                                   K2Node_CustomEvent_WithMoveInputs;                        // 0x43D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_WithVelocity;                          // 0x43D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_WithControlRot;                        // 0x43E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue13;                          // 0x43F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue14;                          // 0x43F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0x2];                                      // 0x43F2(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_HitLocation;                           // 0x43F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_HitActor;                              // 0x4400(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue10;             // 0x4408(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x7];                                      // 0x4409(0x0007) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue4;                       // 0x4410(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_TransformLocation_ReturnValue4;                  // 0x4440(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x4];                                      // 0x444C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x4450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x4458(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValidBioGrappleTarget_bResult;                 // 0x4459(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue15;                          // 0x445A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x1];                                      // 0x445B(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_HitLocation_A;                         // 0x445C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_HitActor_A;                            // 0x4468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_HitLocation_B;                         // 0x4470(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x4];                                      // 0x447C(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_HitActor_B;                            // 0x4480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData125[0x8];                                      // 0x4488(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue5;                       // 0x4490(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue11;             // 0x44C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData126[0x3];                                      // 0x44C1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_TransformLocation_ReturnValue5;                  // 0x44C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue6;                       // 0x44D0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue12;             // 0x4500(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData127[0x3];                                      // 0x4501(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_TransformLocation_ReturnValue6;                  // 0x4504(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x4510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x4511(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x4512(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x4513(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x4514(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode3;            // 0x4515(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x4516(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode4;            // 0x4517(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x4518(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData128[0x3];                                      // 0x4519(0x0003) MISSED OFFSET
	struct FVector2D                                   K2Node_CustomEvent_Inputs;                                // 0x451C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue16;                          // 0x4524(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x4525(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue13;             // 0x4526(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData129[0x1];                                      // 0x4527(0x0001) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_GetBuffPostprocessMaterial_ReturnValue;          // 0x4528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue14;             // 0x4530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData130[0x3];                                      // 0x4531(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue;                    // 0x4534(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x4540(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x454C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue17;                          // 0x4558(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData131[0x3];                                      // 0x4559(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRotFromXZ_ReturnValue;                       // 0x455C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWalkingOnWaterSurface_result;                  // 0x4568(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue18;                          // 0x4569(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData132[0x6];                                      // 0x456A(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue5;               // 0x4570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x4578(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData133[0x3];                                      // 0x4579(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_Get_Current_Climber_LookRotation_lookRot;        // 0x457C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue;                // 0x4588(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_RotateDirToTargetWithLimit_NewDir;               // 0x4594(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_CustomEvent_ClientTimestamp2;                      // 0x45A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue2;                       // 0x45A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x45B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_CustomEvent_ClientTimestamp;                       // 0x45C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue19;                          // 0x45C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue15;             // 0x45C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData134[0x2];                                      // 0x45CA(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x45CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_GetBuffPostprocessMaterial_ReturnValue2;         // 0x45D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue16;             // 0x45D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue20;                          // 0x45D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayingJumpDetachAnim_bResult;                 // 0x45DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsOwningClient_ReturnValue5;                     // 0x45DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x45DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData135[0x3];                                      // 0x45DD(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x45E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue17;             // 0x45E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CallFunc_Array_Find_ItemToFind_RefProperty;               // 0x45E5(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	bool                                               CallFunc_Array_Set_Item_RefProperty;                      // 0x45E6(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BogSpider_Character_BP.BogSpider_Character_BP_C");
		return ptr;
	}


	void IsSpooderInSPACE(bool* bResult);
	void OnWallJump(struct FVector* wallJumpVelocity);
	void OnClimberFinishedAttaching();
	void STATIC_StoreClimb_Trace_Socket_Offsets();
	void STATIC_GetSpiderClimbingTraceTransform(int TraceIndex, bool bWorldSpace, struct UObject_FTransform* TraceTransform);
	void IsClimbingTraceHitResultValid(bool* bValidHit, struct FVector* TraceStart, struct FVector* TraceEnd, int* TraceIndex, int* TraceRetryNum, struct FHitResult* Hit, bool* bResult);
	void CanClimberOverrideRetriedTraceResult(struct FHitResult* WithHit, bool* bResult);
	void CanSpiderStopNonDediTick(bool* bResult);
	void CanClimberStopNonDediTick_NonControlled(bool* Result);
	void CanClimberStopNonDediTick_Controlled(bool* Result);
	void Can_ClimberContinueClimbing(bool* Result);
	void CanSpiderUseAbilities(bool* bResult);
	void UpdateSpiderRandomTickDelay();
	void StopAllSpiderCameraShake(class APrimalCharacter* ForRider);
	void UpdateNonControlledClimber();
	void IsPlayingJumpDetachAnim(bool* bResult);
	void CanPrimalCharBeUsedForTaming(class APrimalCharacter** Char, bool* bResult);
	void AddTamingAffinityFromLifeSteal(class AShooterCharacter** ForPlayer);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void RefreshSpiderVision();
	void STATIC_Tick_CacheWebTracePreviewHits(TArray<struct FHitResult>* TraceHits);
	struct FVector CalcAirJumpVelocity(const struct FVector2D& WithInputs, const struct FVector& WithVelocity, struct FRotator* WithControlRot);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void GetSpiderAnimBP(class UBogSpider_AnimBlueprint_C** animBP);
	void AddChargeJumpVelocity(float WithChargeRatio);
	void DoChargeJump_Server(double ClientTimestamp);
	void StartChargeJump_Server(double ClientTimestamp);
	void Tick_UpdateClientWaterWalkingBuff();
	bool BPAcknowledgeServerCorrection(float* TimeStamp, struct FVector* NewLoc, struct FVector* NewVel, class UPrimitiveComponent** NewBase, struct FName* NewBaseBoneName, bool* bHasBase, bool* bBaseRelativePosition, unsigned char* ServerMovementMode);
	void SpiderPrintShippingMessage(const class FString& Message);
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	struct FHitResult BP_OverrideRiderCameraCollisionSweep(struct FVector* SweepStart, struct FVector* SweepEnd);
	void STATIC_AdjustClimbTraceTransform(struct FName* WithSocketName, struct UObject_FTransform* WithTraceTransform, struct UObject_FTransform* ClimberTransform, struct UObject_FTransform* AdjustedTransform);
	void IsRiderLookDirParallelWithClimbUp(const struct FVector2D& WithinAngleRange, bool* bResult, float* angleDelta);
	void STATIC_GetSpiderTransformForEnsnare(struct UObject_FTransform* Transform);
	bool STATIC_BP_OverrideCarriedCharacterTransform(class APrimalCharacter** ForCarriedChar);
	void WantsToAirBrake(bool* bResult);
	void UpdateClimberOverrideFallVelocity();
	void ModifySpiderFallingVelocity(float DeltaTime, struct FVector* Velocity);
	void Rotate_RotatorForwardVector_to_Target_Constant(struct FRotator* currentRotator, struct FVector* targetForward, float* RotationRate, struct FRotator* newRotator);
	void GetCurrentClimbingRotationSpeed(float* RotationSpeed);
	void Rotate_Climber_To_TargetClimbingRotation();
	void BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	bool CanClimberRestoreToSeeking();
	bool IsSpiderClimbRunning();
	void Tick_SimulateClimbingBetweenFrames();
	void IsClimberGrounded(bool* Result);
	struct FLinearColor BPGetCrosshairColor();
	void Get_CorrectDetachAnim(class UAnimMontage** Anim);
	void CanSpiderRunSeek(bool* bResult);
	void Tick_UpdateSpiderRunSeeking();
	void Tick_UpdateSpiderCameraShake();
	void ClimberCheckForAboveWalkableGround(bool* Result);
	void STATIC_Get_Correct_Surface_Trace_OffsetTransforms(bool* overrideUseMap, TArray<bool>* newUseMp, TArray<struct UObject_FTransform>* offsetTransforms, TArray<int>* TraceIndeces);
	void DisplaySpiderHudNotification(const class FString& Notification, const struct FLinearColor& Color, const struct FVector2D& DisplayScaleAndTime, class UTexture2D* Icon, class USoundBase* Sound);
	void Tick_ManageBloodSuckingClientBuff();
	void UnriddenSpiderTryBioGrappleTarget(bool* bSuccess);
	void Climber_AllowMovementWhileClimbing(bool* Result);
	void Climber_AI_OnSetTarget(class AActor** NewTarget);
	void UpdateClimbingClimber(bool* IgnoreFailure, bool* canKeepClimbing);
	void SetSpiderVisionActive(bool bNewActive);
	void ToggleSpiderVision();
	void CanClimberSeek(bool* isForStart, bool* Result);
	void Get_CurrentClimbingVelocityMax(float* Velocity);
	void Can_Climber_Rotate_to_Target_Rotation(bool* Result);
	void GetClimbingMoveDirFromRotation(struct FRotator* Rotation, struct FVector* moveDir);
	void CheckForUpdateSpiderClimbMoving();
	void UpdateClimber_Inputs();
	void Init_Climber();
	void IsNormalClimbable(struct FVector* Normal, bool* isAverageNormal, bool* Result);
	void Replicate_Index_Update_Server_And_Client_Climber();
	void Check_For_Prevent_Stop_Climbing(int* numValidHits, int* numTraces, TArray<bool>* traceHitsArray, bool* AllowClimbing);
	void GetCorrectSurfaceTraceDistance(bool* isForRetry, float* traceDist);
	void InterpolateClimberMesh(class USkeletalMeshComponent** meshToInterpolate);
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void IsWebSprinting(bool* Result);
	void FireQuickWebs_Both(const struct FVector& WithHitLocation_A, const struct FVector& WithHitLocation_B);
	void CanQuickFireWebs(bool bSingle, bool* bResult);
	void FireQuickWebs_Single(const struct FVector& WithHitLocation, class APrimalCharacter* WithBioGrappleTarget);
	void STATIC_DoWebSearch_Both(const struct FRotator& ViewRot, bool* bFoundAny, bool* bFoundOne, struct FVector* FoundHitLoc_A, class AActor** FoundHitActor_A, struct FVector* FoundHitLoc_B, class AActor** FoundHitActor_B);
	void STATIC_DoWebSearch_Single(const struct FRotator& ViewRot, bool* bFoundHit, struct FVector* FoundHitLoc, class AActor** FoundHitActor);
	void SetAirJumpVelocity();
	void DoAirJump(const struct FVector2D& WithMoveInputs, const struct FVector& WithVelocity, const struct FRotator& WithControlRot);
	void CanAirJump(bool bForStart, bool* bResult);
	void TryDoAirJump(const struct FVector2D& WithMoveInputs, const struct FVector& WithVelocity, const struct FRotator& WithControlRot);
	void CanAttachWebsToCharInPVE(class APrimalCharacter* ToChar, bool* bResult);
	void BreakWebVisually(bool bBreakLeft);
	void OnWebTetherImpact(struct FHitResult* WithHit);
	void IsSpiderBloodHangry(bool* bResult);
	bool InterceptRiderEmoteAnim(class UAnimMontage** EmoteAnim);
	void NetSyncInputBitmask(const class FString& TriggeredByInput, bool* bSuccess);
	void IsBioGrappleOnCooldown(bool* bResult);
	void BP_OnStartCarried(class APrimalDinoCharacter** aDino);
	void OnWebShootybangFailed();
	void AddBioGrappledBuffToChar(class APrimalCharacter* ToChar, class APrimalBuff** AddedBuff);
	void ReleaseEnsnaredChar();
	void OnBioGrappledCharBreakWeb(class APrimalCharacter* BreakingChar);
	void SetEnsnaredCharRef(class APrimalCharacter* NewCharRef);
	void SetWebVisibility(bool bNewVisibility);
	void StopSpiderJump();
	void DoRealSpiderJump();
	void ShouldPreventWebShootWhileHoldingInputs(bool* bResult);
	void GetChargeJumpRatio(float* Ratio);
	void OnKillEnsnaredDino(class APrimalDinoCharacter* KilledDino);
	void ResetMeshRotation();
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	TEnumAsByte<EStencilAlliance> BPOverrideStencilAllianceForTarget(class APrimalCharacter** TargetDino, class UPrimitiveComponent** Component);
	float BP_OverrideTerminalVelocity();
	void SetImpendingLand(bool NewValue);
	void CanChargeJump(bool bForStart, bool* bResult);
	void CancelChargeJump();
	void DoChargeJump_Client();
	void StartChargeJump_Client();
	void Tick_UpdateSpiderChargeJump();
	void StartBioGrappleCooldown();
	void OnWebTetherBroken(bool bIsLeft, struct FGrappleTether* BrokenTether);
	void Tick_ManageSpiderSounds();
	void RotateDirToTargetWithLimit(const struct FVector& RotateDir, const struct FVector& ToTargetDir, float RotatingLimitDegrees, struct FVector* NewDir);
	void CheckForInstantHarvestDeadEnsnaredChar(class APrimalCharacter* forChar);
	void IsSpiderRotating(bool* bResult);
	void Net_OnWebTethersCreated(struct FHitResult* TetherHits_Left, struct FHitResult* TetherHits_Right);
	void CreateWebVisually(bool bIsLeft);
	void ResetReelingCables();
	void OnGrappleBuffActiveStateChanged(bool bIsActive);
	void OnSpiderTargetSet(class AActor* NewTarget);
	void GetMeshInterpSpeed_Rotation(float* InterpSpeed);
	void GetMeshInterpSpeed_Location(float* InterpSpeed);
	void DoStupidThings();
	void ShouldShowStupid_Name(bool* bResult);
	class FString BP_OverrideDinoName(class FString* CurrentDinoName, class APlayerController** ForPC);
	void Tick_UpdateSpiderTargetLocation();
	void GetMeshTargetRotOffset(struct FRotator* TargetRotOffset);
	void GetMeshTargetLocOffset(struct FVector* TargetLocOffset);
	void GetSpiderVelocityVars_Pure(struct FVector* Velocity, float* VelocitySize, struct FVector* VelocityDir, struct FVector2D* Velocity2D, float* VelocitySize2D);
	void GetSpiderVelocityVars(struct FVector* Velocity, float* VelocitySize, struct FVector* VelocityDir, struct FVector2D* Velocity2D, float* VelocitySize2D);
	void IsAirBraking(bool* bResult);
	void HideWebCables();
	void IsInterpolatingMesh(bool* bResult);
	void ClearBioGrappledBuff();
	void OnBioGrappleReleased(class APrimalCharacter* ReleasedChar);
	void STATIC_OnBioGrappledChar(class APrimalCharacter* GrappledChar);
	void CanTraceForLandingImpact(bool* bResult);
	void ResetLastFallingVelocity();
	void SetIsAirBraking(bool NewAirBraking);
	void SetSpiderVelocity(const struct FVector& NewVelocity);
	void CacheLastVelocityVars();
	void CacheCurrentVelocityVars();
	void BPSetupTamed(bool* bWasJustTamed);
	void Tick_UpdateTimerIntervals();
	void CanHardLand(bool* bResult);
	void Tick_TraceForLandingImpact();
	void OnSpiderLanded();
	void StopAllWebDetachAnims();
	void PlayWebDetachMontage(bool bIsJumpDetach);
	void IsStuckToWall(bool bIncludeUnsticking, bool* bResult);
	void IsStuckToWall_Pure(bool bIncludeUnsticking, bool* bResult);
	struct FName BPGetLookOffsetSocketName(class APrimalCharacter** ForPrimalChar);
	void BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void BPUnstasis();
	void GetSwingingVelocityRatio(float* Ratio);
	void RotateCharControlRotationTowardsSpider(class APrimalCharacter* forChar);
	void STATIC_IsValidBioGrappleTarget(class APrimalCharacter* ForGrappleTarget, bool bForStart, bool bPreventTraces, bool* bResult);
	bool BPAllowCarryCharacter(class APrimalCharacter** checkCharacter);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void InitBogSpider();
	void TryUnstickFromWall();
	void BPDoAttack(int* AttackIndex);
	void CanDoBioGrapple(bool bForStart, bool* bResult);
	void UpdatePullingBioGrappledCharVars(bool bPulling);
	void STATIC_WebShootybangBioGrapple(class AActor* TryBioGrappleActor, bool* bSuccess);
	void BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	void IsWebSprinting_Pure(bool* Result);
	void GetBitmaskAsString(int Bitmask, class FString* String);
	void Tick_InputHeartbeat();
	void GenerateInputBitMask(const class FString& TriggeredByInput, int* NewBitMask);
	void ProcessSyncedInputs();
	void ReceiveDestroyed();
	void DestroyWebAnchors();
	void SetupCosmeticsForRider();
	void Tick_ManageWebs();
	void IsGrapplePullJumping(bool* bResult);
	void SetWantsToWallStick(bool bWantsToStick);
	void STATIC_Tick_TraceForStickableWall();
	void GetIgnoreWebHitRadius(float* Radius);
	void STATIC_BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
	void Tick_UpdateForceSkidAnims();
	void WantsToSwing(bool* bResult);
	void HasEnoughStamina(float requiredStamina, bool* Result);
	void Tick_UpdateSpiderStamina();
	void STATIC_DoGrapplePullJump();
	struct FVector BPGetRiderUnboardDirection(class APrimalCharacter** RidingCharacter);
	void ToggleTallModeState();
	void Tick_UpdateGrappleState();
	void IsAirBraking_Pure(bool* bResult);
	void OnRiderMountNotify(class APrimalCharacter* RiderRef, bool bIsRiding);
	bool AllowPlayMontage(class UAnimMontage** AnimMontage);
	void CanEnsnare(bool bIsForStart, bool* bSuccess);
	void TickUpdateEnsnaredChar();
	void STATIC_Tick_StuckToWall();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void IsHangingFromWeb(bool* Result);
	void OnStickToWallHit(struct FHitResult* Hit);
	void CanStickToWall(bool bNotifyOfInsufficientStamina, bool bIgnorePostJumpCooldown, bool* Result);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void TryManualWebDetach(bool bDetachLeft);
	void PlaySpiderCameraShake(class UClass* CameraShakeClass, float ShakeScale, float ShakeSpeed, bool bScaleShakeWithVelocity, float ShakeBaseVelocity, bool bAllowReplication, const struct FVector2D& ShakeScaleClamps, const struct FVector2D& ShakeSpeedClamps);
	void Tick_UpdateShowCrosshair();
	void OnWaterWalkingSurfaceStateChanged(bool NewState);
	void Tick_CheckForWalkingOnWaterSurface();
	void UpdateWaterWalkingState(bool NewState, bool bForceUpdate);
	void GetCurrentJumpMontage(class UAnimMontage** Montage);
	bool BPOnStartJump();
	void Tick_UpdateSpiderTargetTransform();
	void IsWalkingOnWaterSurface(bool* Result);
	void Tick_UpdateOptimalWebHitDist();
	void GetWebTraceHitValue(const struct FHitResult& forWebTraceHit, bool bDebug, float* hitValue);
	void Tick_CheckForTallMode();
	void ShouldTallMode(bool* Result);
	void RiderHasWeaponEquipped(bool* Result);
	void OnTakeOff();
	void WebTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool confirmTraceHits, float updateAimedCharsRadus, bool bAllowHitPullableChars, bool* foundHit, struct FHitResult* webHit, float* webHitValue);
	void STATIC_TraceForBioGrappleTargetInLookDir(bool* Result, struct FHitResult* snarableCharHit);
	void BPCharacterSleeped();
	void BP_OnSetDeath();
	void UpdateRotateToControlRotation();
	bool CanJumpInternal();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_Tick_UpdateSpiderTargetRotation();
	void OnGrappleBuffStateChanged(TEnumAsByte<EGrappleState> NewState);
	void InterpSpiderMesh(float DeltaTime);
	void SoftSetSpiderWorldLocation(const struct FVector& NewWorldLocation);
	void SoftSetSpiderWorldRotation(const struct FRotator& newWorldRotation);
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void GetClosestLocationToScreenCenter(const struct FVector& LocationA, const struct FVector& LocationB, const struct FRotator& WithViewRot, bool* A);
	void STATIC_IsValidStickToWallHit(bool bPreventConfirmTraces, struct FHitResult* Hit, bool* bIsValid, struct FVector* ValidStickNormal);
	bool BP_InterceptMoveForward(float* AxisValue);
	bool BP_InterceptMoveRight(float* AxisValue);
	void TryStickingToWall(struct FVector* AtLocation, bool* Success);
	void STATIC_TryEnsnareChar(class APrimalCharacter* Char, bool* Result);
	void STATIC_TickBioGrapple();
	void BPTimerNonDedicated();
	void Has_Webs_Attached(int RequireNumWebs, bool* Result);
	void ReceiveBeginPlay();
	void Tick_SearchForGrapplePoints();
	void CanJumpDetach(bool* Result);
	void HasEnoughStaminaPure(float requiredStamina, bool* Result);
	void ReduceSpiderStamina(float Stamina);
	void STATIC_DoLifeSteal(class APrimalCharacter* FromChar);
	void BPTimerServer();
	void Tick_UpdateSpiderCamera(float DeltaTime);
	class UClass* GetGrappledBuffClassOverride();
	void UpdateGrappledVars();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	float BPModifyFOV(float* FOVIn);
	void STATIC_IsWeb_Trace_Hit_Valid(const struct FHitResult& ForHit, bool bAllowHitPullableChars, bool* Result, bool* bDidHitPullableChar);
	void STATIC_WebShootybang(bool shootOne, const struct FVector& hitA, const struct FVector& hitB);
	void STATIC_ConfirmWebTraceHit(const struct FVector& HitLocation, bool bUpdateAimedChars, bool bAllowHitPullableChars, bool* confirmed, struct FHitResult* confirmedHit);
	void STATIC_ProcessWebTraceHits(const struct FRotator& WithViewRotation, const struct FHitResult& centerHit, const struct FHitResult& LeftHit, const struct FHitResult& RightHit, struct FHitResult* bestHit_Single, struct FHitResult* bestHit_Left, struct FHitResult* bestHit_Right);
	void STATIC_SearchForAllGrapplePoints(const struct FRotator& WithViewRot, bool bUseCachedAnchorHits, bool* bFoundAny, struct FHitResult* foundHit_Center, struct FHitResult* foundHit_Left, struct FHitResult* foundHit_Right);
	void HasWebsAttached_Pure(int RequireNumWebs, bool* Result);
	void SetSpiderGrappleState(TEnumAsByte<EGrappleState> NewGrappleState);
	void AutoSetDesiredGrappleState();
	void InterceptInputEvent(class FString* InputName);
	bool BPPreventFallDamage(float* FallDamageAmount, struct FHitResult* HitResult);
	void STATIC_DoJumpDetach();
	void UpdateGrappleBuffRef(bool bAddIfNotFound);
	void STATIC_DetachBothWebs(bool bIsJumpDetach, bool bPreventAnim, bool* detachedAny);
	void DetachWeb(bool bLeft);
	void GetClosestSideToLocation(const struct FVector& ToLoc, bool* bLeft);
	void CanDoWebTraces(bool bRequireStamina, bool bNotifyOfInsufficientStamina, bool* Result);
	void STATIC_Tick_UpdateGrapplePointPreviews(float DeltaTime);
	void CreateWebGrappleTether(const struct FHitResult& FromHit, bool bLeft, bool bPreventNetSync, int* NewTetherIndex);
	void STATIC_SearchInDirForValidGrapplePoint(const struct FRotator& WithViewRot, float traceDir, bool bWantsCenter, bool* bFoundAny, struct FHitResult* retHit);
	void STATIC_TraceForWebHit(const struct FRotator& WithViewRot, bool bCenterTrace, bool* bSuccess, struct FHitResult* foundHit, float* foundHitValue);
	void UserConstructionScript();
	void BlendSpiderVision__FinishedFunc();
	void BlendSpiderVision__UpdateFunc();
	void Server_DetachBothWebs(bool bIsJumpDetach, bool bPreventAnim);
	void Server_WebShootybang(const struct FVector& HitRelLoc_A, class AActor* HitActor_A, const struct FVector& HitRelLoc_B, class AActor* HitActor_B);
	void Server_WebShootybang_One(const struct FVector& HitRelLoc, class AActor* HitActor);
	void Multi_SetWalkOnWaterState(bool bNewState);
	void Server_SetWalkOnWaterState(bool bNewState);
	void Server_TryStickingToWall(const struct FVector& AtLocation);
	void Server_ReleaseEnsnaredChar();
	void Server_UnstickFromWall();
	void Server_WebShootybang_BioGrapple(class AActor* EnsnaredActor);
	void Server_ToggleTallModeState();
	void Multi_ToggleTallModeState();
	void Server_SpiderJump();
	void DoSpiderJump();
	void Multi_SpiderJump();
	void Multi_OnWaterWalkingSurfaceStateChanged(bool NewState);
	void Server_DetachWeb(bool bLeft);
	void Multi_OnDoubleDetach(bool bJumpDetach);
	void FinishedReleasingEnsnaredChar();
	void ToggleTallModeAfterDelay(float Delay);
	void Multi_DoGrapplePullJump();
	void Client_OnShootWeb();
	void Server_SyncWantsToWallStick(bool bWantsToStick);
	void NextTick_SpawnCosmeticActors();
	void Server_SyncInputs_OnInputChange(int SyncInputBitMask);
	void Server_SyncInputs_Heartbeat(int SyncInputBitMask);
	void SetWebSprintToggle(bool NewToggle);
	void ResetControlRot();
	void Multi_SetActorRotation(const struct FRotator& NewRotation, bool bUseSoftSet);
	void Client_OnJumpDetach();
	void Client_DamageBrokeWebs();
	void UnstickFromWallAfterDelay(float Delay);
	void Server_SetImpendingLand(bool bNewVal);
	void Multi_OnSetEnsnaredChar();
	void Multi_OnWebTethersCreated(const struct FHitResult& WithTetherHit_Left, const struct FHitResult& WithTetherHit_Right);
	void Multi_OnStartChargeJump();
	void Multi_DoChargeJump();
	void Multi_CancelChargeJump();
	void OnTryWebShootyBang();
	void ResetCreatingWeb();
	void Multi_OnWebShootybangFailed();
	void Server_TryDoAirJump(const struct FVector2D& WithMoveInputs, const struct FVector& WithVelocity, const struct FRotator& WithControlRot);
	void ResetCanAirJump();
	void Server_FireQuickWebs_Single(const struct FVector& HitLocation, class AActor* HitActor);
	void Server_FireQuickWebs_Both(const struct FVector& HitLocation_A, class AActor* HitActor_A, const struct FVector& HitLocation_B, class AActor* HitActor_B);
	void CreateWebVisually_Left();
	void CreateWebVisually_Right();
	void BreakWebVisually_Left();
	void BreakWebVisually_Right();
	void Server_SyncSpiderClimbingInputs(const struct FVector2D& Inputs);
	void BlendSpiderVision_Play();
	void BlendSpiderVision_Reverse();
	void RefreshWaterWalkState();
	void Multi_OnQuickFireWebs();
	void StartWebSprintToggle();
	void Server_StartChargeJump(double ClientTimestamp);
	void Server_DoChargeJump(double ClientTimestamp);
	void SetSpiderVisionBlendTime();
	void ResetSpiderTamingVars();
	void SetTamerAsRider();
	void ExecuteUbergraph_BogSpider_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
