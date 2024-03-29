#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylacoleo_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thylacoleo_Character_BP.Thylacoleo_Character_BP_C
// 0x05A0 (0x2828 - 0x2288)
class AThylacoleo_Character_BP_C : public ADino_Character_BP_NoBossArena_C
{
public:
	class UDinoCharacterStatusComponent_BP_Thylaco_C*  DinoCharacterStatus_BP_Thylaco_C1;                        // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_PredatorClimbingState>               CurrentClimbingState;                                     // 0x2290(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToClimb;                                            // 0x2291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bValidSurfaceBeneath;                                     // 0x2292(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_PredatorClimbingState>               PreviousClimbingState;                                    // 0x2293(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2294(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ETraceTypeQuery>>               ClimbableObjectTypes;                                     // 0x2298(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     currentPounceVector;                                      // 0x22A8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     currentClimbableSurfaceNormal;                            // 0x22B4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale_Climbing;                                    // 0x22C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Jumping;                                    // 0x22C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Climbing;                                   // 0x22C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Latching;                                   // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Latched_NoRider;                            // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Latched_Rider;                              // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Pouncing;                                   // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingImpulse_MIN;                                      // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingImpulse_MAX;                                      // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingImpulse_Latching;                                 // 0x22E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingImpulse_ToWall_OnWall;                            // 0x22E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxClimbVelocity;                                         // 0x22EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PounceVelocity;                                           // 0x22F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPounceTime;                                            // 0x22F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             PounceStartTime;                                          // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_AttachToWallMontage;                                  // 0x2300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_ClimbingMontage_LatchedDown_Up;                       // 0x2308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_ClimbingMontage_Up;                                   // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_ClimbingMontage_Left;                                 // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_ClimbingMontage_Right;                                // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LatchingMontage_Up;                                   // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LatchingMontage_Down;                                 // 0x2330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LatchedMontage_Down_Left;                             // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LatchedMontage_Down_Right;                            // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LatchedMontage_Up_Left;                               // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LatchedMontage_Up_Right;                              // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LatchedMontage_Up;                                    // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LatchedMontage_Down;                                  // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_PouncingMontage;                                      // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraOffsetInterpSpeed;                               // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              targetTPVCameraOffsetX;                                   // 0x2374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LatchedTPVCameraOffsetX_Down;                             // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerInterval_Mauling;                                    // 0x237C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_DropPreyMontage;                                      // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_LandingMontage;                                       // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale_Latched;                                     // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2394(0x0004) MISSED OFFSET
	class UAnimMontage*                                CurrentClimbingAnim;                                      // 0x2398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingAntiSlideImpulse;                                 // 0x23A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentClimbDir;                                          // 0x23A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                previousClimbDir;                                         // 0x23A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbableSurfaceMinDot;                                   // 0x23AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingAnimSwitchVelocity;                               // 0x23B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LatchedTPVCameraOffsetX_Up;                               // 0x23B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingTPVCameraOffsetX;                                 // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x23BC(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_MaulingMontage;                                       // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaulEndSectionName;                                       // 0x23C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              facingWallNormalDotThreshold;                             // 0x23D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWallRunAnimScaleVelocity;                              // 0x23D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              latchedStartVelocity;                                     // 0x23D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ignoreLatchedControlRotationBelowDot;                     // 0x23DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsManuallySkidding;                                      // 0x23E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x23E1(0x0003) MISSED OFFSET
	float                                              GravityScale_ManualSkidding;                              // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               WallScanSockets;                                          // 0x23E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              GravityScale_Pouncing;                                    // 0x23F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceCheckDistance;                                     // 0x23FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsReadyToClimb;                                          // 0x2400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2401(0x0003) MISSED OFFSET
	float                                              startClimbingDelay;                                       // 0x2404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              changeLatchedOrientationDelay;                            // 0x2408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              requiredDistanceAboveGroundToClimb;                       // 0x240C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAiLatchedOntoTree;                                       // 0x2410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugThylaco;                                            // 0x2411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x2412(0x0002) MISSED OFFSET
	float                                              ManualSkidImpulse;                                        // 0x2414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PouncingTPVCameraOffsetX;                                 // 0x2418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              reachedTopOfClimbImpulse;                                 // 0x241C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingImpulse_ToWall_GetToWall;                         // 0x2420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2424(0x0004) MISSED OFFSET
	double                                             PounceEndTime;                                            // 0x2428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              requiredVelocityForwardDotToClimb;                        // 0x2430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              wantsToClimb_RotationRate;                                // 0x2434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bServer_JumpPressed;                                      // 0x2438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2439(0x0007) MISSED OFFSET
	double                                             lastStartMaulingTime;                                     // 0x2440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxMaulTime;                                              // 0x2448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x244C(0x0004) MISSED OFFSET
	class FString                                      ValidLatchSocketSubstring;                                // 0x2450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bRestoreToLatched;                                        // 0x2460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x2461(0x0003) MISSED OFFSET
	float                                              requiredNormalDotToClimb_MAX;                             // 0x2464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              requiredNormalDotToClimb_MIN;                             // 0x2468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentDistanceToClimbableWall;                           // 0x246C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              requiredMinDistanceFromWall;                              // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x2474(0x0004) MISSED OFFSET
	TArray<struct FName>                               WallPreScanSockets;                                       // 0x2478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               WallScanSockets_AI;                                       // 0x2488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCanCheckAnims;                                           // 0x2498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMaulingPrey;                                           // 0x2499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x249A(0x0002) MISSED OFFSET
	float                                              AiCheckForAttachToTreeRadius;                             // 0x249C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMeshInterpolating;                                       // 0x24A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x24A1(0x0003) MISSED OFFSET
	float                                              meshInterpSpeed_rotation;                                 // 0x24A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meshInterpSpeed_location;                                 // 0x24A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              wallJumpImpulse;                                          // 0x24AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                attackIndex_pounce;                                       // 0x24B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                attackIndex_maul;                                         // 0x24B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_FallFromTreeMontage_Down;                             // 0x24B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     meshTargetLocation;                                       // 0x24C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    meshTargetRotation;                                       // 0x24CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastWallJumpStartTime;                                    // 0x24D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              noClimbTimeAfterWallJump;                                 // 0x24E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRestoringToLatched;                                      // 0x24E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x24E5(0x0003) MISSED OFFSET
	class UAnimMontage*                                Ref_FallFromTreeMontage_Up;                               // 0x24E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAttachingToWall;                                       // 0x24F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x24F1(0x0003) MISSED OFFSET
	float                                              attachToWallDelay;                                        // 0x24F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_HurtMontage;                                          // 0x24F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PounceTargetMaxVelocityRatio;                             // 0x2500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              pounceNoRiderHomingIntensity;                             // 0x2504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              updateClimbingNormalBelowDot;                             // 0x2508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              staminaCost_Climbing;                                     // 0x250C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredStaminaToClimb;                                   // 0x2510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x2514(0x0004) MISSED OFFSET
	double                                             lastJumpFromGroundTime;                                   // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              jumpFromGroundClimbDelay;                                 // 0x2520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x2524(0x0004) MISSED OFFSET
	double                                             lastStaminaCostTime;                                      // 0x2528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      LowStaminaMessage;                                        // 0x2530(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              staminaCost_WallJump;                                     // 0x2540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              pounceTraceLength;                                        // 0x2544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              pounceTraceSize;                                          // 0x2548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDidWallJump;                                             // 0x254C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x254D(0x0003) MISSED OFFSET
	float                                              StaminaCost_Pounce;                                       // 0x2550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPlayLandingAnim;                                    // 0x2554(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x2555(0x0003) MISSED OFFSET
	float                                              MeshClimbingOffset;                                       // 0x2558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              requiredDistanceAboveGroundToClimb_SkiddingDown;          // 0x255C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_Roar_Montage;                                         // 0x2560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingDesyncOverride;                                   // 0x2568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x256C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x257C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x258C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate4;                    // 0x259C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x25AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x25AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x25AE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMaulingValidCharacter_result;                  // 0x25AF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMaulingValidCharacter_result2;                 // 0x25B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x25B1(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x25B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_PredatorClimbingState>               K2Node_CustomEvent_NewState;                              // 0x25C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x25C1(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_delay2;                                // 0x25C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AThylacoleo_AIController_BP_C*               CallFunc_Get_Thylaco_Ai_Controller_ref;                   // 0x25C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x25D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x25D1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate5;                    // 0x25D4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData22[0x4];                                       // 0x25E4(0x0004) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x25E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x25F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_BoolToString_ReturnValue;                   // 0x25F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x2608(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x2618(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x261C(0x0004) MISSED OFFSET
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item;                                  // 0x2620(0x0130) (Transient, DuplicateTransient)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x2750(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2754(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2755(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2756(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0x2757(0x0001) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2760(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x276C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentLocation_ReturnValue;             // 0x2778(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2784(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2788(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue;                        // 0x2794(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x27A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue;                    // 0x27AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPFastTrace_ReturnValue;                         // 0x27B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x27B9(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRotFromXZ_ReturnValue;                       // 0x27BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x27C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AThylacoleo_Character_BP_C*                  CallFunc_GetDefaultDino_Ref;                              // 0x27D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x27D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsThylacoClimbing_result;                        // 0x27E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x27E1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x27E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x27E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasEnoughStaminaToClimb_result;                  // 0x27E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x6];                                       // 0x27EA(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x27F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMaulingValidCharacter_result3;                 // 0x27F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDinoGrounded_result;                           // 0x27F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x6];                                       // 0x27FA(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x2800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x2808(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x280C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x280D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x2810(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x281C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thylacoleo_Character_BP.Thylacoleo_Character_BP_C");
		return ptr;
	}


	void BPCharacterDetach();
	void CanThylacoCarryCharacter(class APrimalCharacter* Character, bool* Result);
	void CanClimbOutOfWater(bool* Result);
	void Set_IK_Active(bool newActive);
	void IsNormalClimbable(const struct FVector& Normal, bool* Result);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void ReduceThylacoStamina(float amount);
	void DisplayMessage(const class FString& Message);
	void HasEnoughStaminaToClimb(bool* Result);
	void Is_Thylaco_Climbing_Down(bool* Result);
	void IsThylacoClimbing_Up(bool* Result);
	void IsThylacoClimbing(bool* Result);
	void ReduceStaminaOverTime();
	void ManualPlayLandAnim();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void CalcThylacoPounceDir(struct FVector* pounceDir);
	void HardSetThylacoRotationButInterpMeshLocation(const struct FRotator& NewRotation);
	void UpdateIsAttachingToWall();
	void CleanUpClimbingAnims(bool* animsClean);
	void SetShouldRestoreToLatched(bool Newval);
	void Set_ThylacoRotationAnd_Interp_Mesh(const struct FRotator& NewRotation);
	void WallJump();
	void InterpolateMesh();
	bool BPShouldForceFlee();
	void CheckForPounceOnTarget(bool* shouldPounce);
	void UpdateThylacoAnims(bool ensureAnimsPlaying);
	void SetUse_Aim_Offsets(bool newUse);
	struct FVector BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation);
	void GetWallAttachImpulse(struct FVector* Impulse);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void InitThylaco();
	void BPUnstasis();
	void Check_for_Ai_Attach_to_Tree();
	void Client_SetClimbingState(TEnumAsByte<E_PredatorClimbingState> NewState);
	void Is_DinoAbove_Ground(float CheckDistance, bool* Result);
	void UpdateJumpingAnim();
	void SetAI_LatchedToTree(bool Newval);
	void Get_Thylaco_Ai_Controller(class AThylacoleo_AIController_BP_C** Ref);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void AiDropFromTree();
	void IsLatched(bool* Result);
	void IsLatching(bool* Result);
	void GetCorrectLatchingAnim(class UAnimMontage** animRef);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPTimerNonDedicated();
	void RemoveCarryBuffFromPrey();
	void ReleasePrey();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void IsMaulingValidCharacter(bool* Result);
	void CanPounce(bool* Result);
	void OnRep_currentClimbableSurfaceNormal();
	void UpdateThylacoTransforms();
	void GetDesiredDirection(struct FVector* Direction);
	void STATIC_Pounce_Stop(class APrimalCharacter* HitTarget);
	void CanKeepPouncing(bool* Result);
	void Pounce_Tick();
	void Pounce_Start();
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void GetDefaultDino(class AThylacoleo_Character_BP_C** Ref);
	void IsDinoGrounded(bool* Result);
	void CheckForClimbableSurface(const struct FVector& checkDir, float checkDist, bool* Result);
	void OnRep_CurrentClimbingState();
	void NetSetClimbingState(TEnumAsByte<E_PredatorClimbingState> NewState);
	void BPTimerServer();
	void UserConstructionScript();
	void Server_JumpPressed();
	void Server_JumpReleased();
	void ReceiveBeginPlay();
	void AnimNotify_MaulPrey();
	void Server_NetSetClimbingState(TEnumAsByte<E_PredatorClimbingState> NewState);
	void SetReadyToClimbAfterDelay(float Delay);
	void CheckUntil_SetAiLatchedToTree();
	void EnsureCorrectAnimsPlayingAfterDelay(float Delay);
	void PlayAttachParticleWhenCloseToWall();
	void EnableClimbingAnimsAfterAttachDelay();
	void SyncGravityForPounceFall();
	void EnsureLatchedAnimPlays();
	void CheckUntil_MaulingValidCharacter();
	void PreventLandingAnimBriefly();
	void CheckOnJumpStateAfterJumpDelay();
	void BP_OnJumpPressed();
	void BP_OnJumpReleased();
	void InitThylaco_NextTick();
	void InitThylaco_Now();
	void ExecuteUbergraph_Thylacoleo_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
