#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Grappled_BogSpider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C
// 0x030C (0x0E74 - 0x0B68)
class ABuff_Grappled_BogSpider_C : public ABuff_Grappled_Base_C
{
public:
	float                                              SwingingVelocityDampingRate_OneWeb_Swinging;              // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateGrappleVelocitySpeed_Swinging;                      // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullAcceleration_OneWeb;                            // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SwingCollisionTrace_ProjectionNumSubsteps;                // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingCollisionTrace_ProjectionTime;                       // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingCollisionTrace_ExtraTraceDist;                       // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABogSpider_Character_BP_C*                   MyBogSpiderOwner;                                         // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentSwingHitLoc;                                       // 0x0B88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingCollisionTrace_ProjectionSliceDist;                  // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingPaddingDistance;                                     // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingCollision_TraceAboveVelocity;                        // 0x0B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastNetNotifyOfSwingCollisionTime;                        // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedNetNotifyOfSwingCollisionInterval;                 // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BAC(0x0004) MISSED OFFSET
	double                                             LastIncreasePullVelTime;                                  // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecreasePullVelAfterTime;                                 // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RotateGrappleVelocitySpeed_Ranges;                        // 0x0BBC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateGrappleVelocitySpeed_AboveAnchorMult;               // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateGrappleVelocitySpeed_Swinging_ConstDeltaClamp;      // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScaleResetInterpSpeed;                             // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrappledCharVelocityDampingRate_Idle;                     // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrappledCharVelocityDampingRate_Pulling;                  // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrappledCharVelocityDampingRate_Releasing;                // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullMaxVelocity_WebSprintMult;                      // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullMaxVelocity_WebSprintMult_Swinging;             // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullAcceleration_WebSprint;                         // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoBreakWebBelowTetherLength_WebSprint;                  // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateGrappleVelocitySpeed_WebSprint;                     // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ShortenWebs_MaxLengthPerSecondRanges;                     // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSlingshot_IsStretchingWebs;                              // 0x0BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSlingshot_WasStretchingWebs;                             // 0x0BF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0BFA(0x0002) MISSED OFFSET
	struct FVector2D                                   SlingshotStretchRatioPerSide;                             // 0x0BFC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slingshot_TetherStretchLength;                            // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slingshot_Acceleration;                                   // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slingshot_MaxSpeed;                                       // 0x0C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slingshot_TensionExponent;                                // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slingshot_TensionRatioReleaseSpeed;                       // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Slingshot_LastLaunchVelocity;                             // 0x0C18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale_Slingshot;                                   // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrappleVelocityMaxRestoreSpeed;                           // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasSyncedSlingshotRatios;                                // 0x0C2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C2D(0x0003) MISSED OFFSET
	class APrimalCharacter*                            CurrentBioGrappledPrimalCharRef;                          // 0x0C30(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherTensionStrength_Pulling;                            // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullAcceleration_NotFalling;                        // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullMaxVelocity_OneWeb;                             // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherStretchDelta_Pulling;                               // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnoreSlingshotBelowStretchRatio;                         // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullAcceleration_NotFalling_WebSprint;              // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrengthenPullAboveDotToAnchorDir;                        // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateGrappleVelocitySpeed_WebSprint_Swinging;            // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedTetherShortenLengthDelta;                       // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0C5C(0x0004) MISSED OFFSET
	double                                             LastWebCreatedTime_Left;                                  // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastWebCreatedTime_Right;                                 // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPostCreation_ForceIdleStateTime;                    // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPostCreation_IncreaseVelocityRotationTime;          // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateGrappleVelocitySpeed_Swinging_ConstDeltaClamp_PostTetherCreation;// 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceFallingStateForTimeAfterGrapplePullJump;             // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLastGrappledCharWasLeftWeb;                              // 0x0C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0C81(0x0007) MISSED OFFSET
	double                                             LastSlingshotStartTime;                                   // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildSpiderGrappleBuffLifetime_NoTethers;                  // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0C94(0x0004) MISSED OFFSET
	double                                             LastNoTethersTime;                                        // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedSpiderGrappleBuffLifetime_NoRider;                   // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpiderGrappleBuffLifetime_Default;                        // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpiderVisionBoundsMultiplier;                             // 0x0CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0CAC(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    SpiderVision_BoundsModifiedChars;                         // 0x0CB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	double                                             LastDebugTime;                                            // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowWebSprintTetherAutoBreakUnderLength;                 // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0CCC(0x0004) MISSED OFFSET
	double                                             LastUpdateSpiderVisionActorBoundsTime;                    // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateSpiderVisionActorBoundsInterval;                    // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0CDC(0x0004) MISSED OFFSET
	double                                             LastBioGrappleWebBlockedTime;                             // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowBioGrappleWebBlockedTime_NoRider_Players;            // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0CEC(0x0004) MISSED OFFSET
	double                                             LastBioGrappleTraceForBlockersTime;                       // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BioGrappleTraceForBlockersInterval;                       // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastPostProcessCachedSpiderVelocity;                      // 0x0CFC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProcessVelocityInterpSpeed;                           // 0x0D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullMaxVelocity_WildSpider_Dino;                    // 0x0D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullMaxVelocity_WildSpider_Player;                  // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullAcceleration_WildSpider_Dino;                   // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherPullAcceleration_WildSpider_Player;                 // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowBioGrappleWebBlockedTime_Players;                    // 0x0D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowBioGrappleWebBlockedTime_NoRider_Dinos;              // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowBioGrappleWebBlockedTime_Dinos;                      // 0x0D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_SwingHitPredictionTraces;                          // 0x0D28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0D29(0x0003) MISSED OFFSET
	struct FVector2D                                   CurrentWebShortenTargetLengths;                           // 0x0D2C(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              ShortenWebsSpeed;                                         // 0x0D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebShortenMaxSpeedAtLengthDelta;                          // 0x0D38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWebShortenSpeed;                                   // 0x0D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WebShortenSpeedInterpSpeed;                               // 0x0D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherMaxLength_BioGrapple;                               // 0x0D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TetherReleaseMaxVelocity_WebSprintMult;                   // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_Slingshot;                                         // 0x0D4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasNotifiedOfSlingshotInsufficientStamina;               // 0x0D4D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0D4E(0x0002) MISSED OFFSET
	float                                              LookingAtAgainstSurfaceAngle_WebAnchor;                   // 0x0D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShortTetherVelocityDamping_StartBelowTetherLength;        // 0x0D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShortTetherVelocityDamping_MaxDampingSpeed;               // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0D5C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BuffClassesPreventSpiderVision;                           // 0x0D60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SpecialDoubleBreak_RequiredBelowDotToAnchor;              // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_AtProjectedLocation;                   // 0x0D74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CheckForSwingCollision_foundHit;                 // 0x0D80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0D81(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_CheckForSwingCollision_swingHit;                 // 0x0D88(0x0088) (Transient, DuplicateTransient)
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x0E10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x0E1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x0E28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x0E34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x0E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x0E48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x0E58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x0E60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x0E64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0E65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0E66(0x0002) MISSED OFFSET
	struct FVector2D                                   K2Node_CustomEvent_Ratios;                                // 0x0E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0E71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0E72(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Set_Item_RefProperty;                      // 0x0E73(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C");
		return ptr;
	}


	bool CanUpdateTetherLength(float* WithLength, struct FGrappleTether* ForTether);
	bool ShouldUseDynamicTetherTension(struct FGrappleTether* ForTether);
	void CanDrawSpiderVisionOutlines(bool* bResult);
	bool DisplayGrappleSystemHudNotification(class AShooterPlayerController** ForPC, class AActor** FromActor, unsigned char* NotificationType, int* NotificationID, class FString* ReasonString);
	bool ShouldReturnToIdleGrappleState();
	bool IsOwnerLookingAtAgainstSurface();
	void CanTraceForSwingCollisions(bool* bResult);
	void ResetOwnerClientPositionErrorTolerance();
	void GetPullingSlingshotRatio(float* Ratio);
	bool IsGrappledCharHardAttached(class APrimalCharacter** forChar);
	float GetGrappleTetherReleaseMaxVelocity(class APrimalCharacter** ForReleasingChar, struct FGrappleTether* ForTether);
	float GetMaxTetherLength(struct FGrappleTether* ForTether);
	float GetIdealSwingHeightAboveFloor();
	bool CanSyncGrappleTetherLengths();
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void STATIC_OnSwingTracePredictedHitFound(const struct FVector& AtHitLocation);
	void CanUseWebSlingshot(bool* bResult);
	void ResetOwnerVars();
	void OnGrappledCharDeath(class APrimalCharacter** DyingChar);
	bool CanBeGrappledAgainstSurface();
	void SetActorComponentsCustomDepthStencilValue(class AActor* forActor, int Value);
	void SetActorComponentsRenderCustomDepth(class AActor* forActor, bool bRender);
	void UpdateSpiderVisionActorBounds(bool bReset);
	void SetSpiderVisionEnabled(class APlayerController* ForController, bool bEnabled);
	void Tick_CheckForDeactivate();
	void BPDeactivated(class AActor** ForInstigator);
	void UpdateSpiderVisionPostProcess();
	bool CanPullChar(class APrimalCharacter** PullChar, bool* bForStart);
	void IsPullingBioGrappledChar(bool* bResult);
	void UpdateOwnerMovementSpeed(struct FVector* WithCharVelocity);
	void OnGrappleTetherRemoved(struct FGrappleTether* RemovedTether);
	void OnGrappleTetherAdded(struct FGrappleTether* AddedTether);
	void RotateSwingingVelocityWithLookDir(const struct FVector& CurrentVelDir, float DeltaTime, struct FVector* RotatedVelDir, struct FVector* TargetVelDir);
	void AddAntiGravityPullVelocity(class APrimalCharacter* forChar, struct FVector* ToVelocity);
	bool CheckForAutoBreakTether(struct FGrappleTether* CheckTether);
	bool ShouldReplicateOwnerInputs();
	struct FVector GetCurrentTetherMoveDir(struct FGrappleTether* ForTether);
	void ApplyTetherMoveVelocity(float* DeltaTime, struct FVector* CurrentVelocity);
	void SyncSlingshotRatios(bool bForceSync);
	void ForceStopSlingshot();
	void IsSlingshotLaunching(bool* bResult);
	void IsSlingshotLaunchingPure(bool* bResult);
	void ClampGrappleVelocity(struct FVector* ClampVelocity);
	float GetTetherBreakLimit_OwnerPastCurrentLengthDelta(struct FGrappleTether* ForTether);
	bool STATIC_ShouldTetherBreak(class APrimalCharacter** forChar, float* OverrideBreakPastDist, struct FGrappleTether* ForTether);
	void IsSpiderTryingToSlingshot(const struct FVector& WithVelocity, struct FGrappleTether* ForTether, bool* bResult);
	void SimulateTautTetherForces(float* DeltaTime, float* LastGravityZ, struct FVector* WithCharVelocity);
	float BPGetGravityZScale(float* currentScale);
	void IsTetherLeftWeb(struct FGrappleTether* Tether, bool* bIsWebTether, bool* bIsLeftWeb);
	void WhichWebIsOnRightSideOfView(const struct FRotator& WithViewRot, bool* bLeft);
	bool CanOwnerGrappleSwing();
	TEnumAsByte<EGrappleState> GetCurrentGrappleState(struct FGrappleTether* ForTether);
	void CanRotateCharVelocity(bool* Result);
	void ModifyOverriddenCharVelocity(float* DeltaTime, struct FVector* CurrentCharVelocity);
	void OnReleasedPrimalChar(class APrimalCharacter** ReleasedChar);
	void OnGrappledPrimalChar(class APrimalCharacter** GrappledChar, struct FGrappleTether* WithMasterTether);
	void STATIC_IsValidSwingHit(struct FHitResult* CheckHit, bool* IsValid);
	void ReceiveBeginPlay();
	void ModifyTetherMoveVelocity(struct FVector* CurrentMoveVelocity, struct FGrappleTether* ForTether);
	void BuffTickServer(float* DeltaTime);
	void CheckForSwingCollision(const struct FVector& AtProjectedLocation, bool* foundHit, struct FHitResult* swingHit);
	void BuffTickClient(float* DeltaTime);
	void Tick_TraceForSwingCollisions();
	float GetGrappleTetherPullMaxVelocity(class APrimalCharacter** ForPullingChar, struct FGrappleTether* ForTether);
	float GetGrappleTetherPullAcceleration(class APrimalCharacter** ForPullingChar, struct FGrappleTether* ForTether);
	float GetGrappleVelocityDampingRate(class APrimalCharacter** forChar, struct FGrappleTether* ForTether);
	bool CanChangeGrappleState(unsigned char* DesiredGrappleState);
	bool ShouldForceOwnerIntoFallingState(TEnumAsByte<EMovementMode>* CheckMovementModeOverride, struct FGrappleTether* ForTether, struct FVector* WithOwnerVelocity);
	void STATIC_OnGrappleTethersChanged();
	void EndGrapple();
	void OnGrappleStateChangedNotify(bool* bIsEarlyNotify, unsigned char* NewGrappleState);
	void UserConstructionScript();
	void Server_OnSwingTracePredictedHitFound(const struct FVector& AtProjectedLocation);
	void Multi_ForceStopSlingshot();
	void Multi_SyncSlingshotRatios(const struct FVector2D& Ratios);
	void ExecuteUbergraph_Buff_Grappled_BogSpider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
