#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_DinoBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C
// 0x0480 (0x0DD0 - 0x0950)
class ABuff_Zipline_DinoBase_C : public APrimalBuff
{
public:
	class UParticleSystemComponent*                    ZiplineHandleParticleComp;                                // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ZiplineHandleMeshComp;                                    // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AZipline_Anchor_C*                           UpperZiplineAnchor;                                       // 0x0960(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AZipline_Anchor_C*                           LowerZiplineAnchor;                                       // 0x0968(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            AttachedCharacter;                                        // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineDirection;                                         // 0x0978(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentZiplineSpeed;                                      // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0988(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Motorized;                                                // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndMove;                                                  // 0x0995(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0996(0x0002) MISSED OFFSET
	float                                              MinZiplineSpeed;                                          // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachOffset;                                             // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineMotorSpeed;                                        // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_ZiplineMotorState>                   CurrentMotorState;                                        // 0x09A4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_ZiplineMotorState>                   HitMotorState;                                            // 0x09A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x09A6(0x0002) MISSED OFFSET
	float                                              HandleParticleSpeedPercentage;                            // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedlinesParticleSpeedPercentage;                        // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ZiplineHandleParticleTemplate;                            // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineHandleParticleLocation;                            // 0x09B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ZiplineHandleParticleRotation;                            // 0x09C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineHandleParticleScale;                               // 0x09D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09DC(0x0004) MISSED OFFSET
	class UStaticMesh*                                 ZiplineHandleMesh;                                        // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ZiplineHandleAttachSocket3P;                              // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ZiplineHandleAttachSocket1P;                              // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineStartEndOffset;                                    // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DropOnHittingOffset;                                      // 0x09FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReachedEndStartStop;                                      // 0x09FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideWeaponEnabled;                                        // 0x09FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreLookEnabled;                                        // 0x09FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugZipline;                                             // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A01(0x0003) MISSED OFFSET
	struct FVector                                     ZiplineHandleMeshScale;                                   // 0x0A04(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ZiplineHandleMeshRotation;                                // 0x0A10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineHandleMeshLocation;                                // 0x0A1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowLookingUpDown;                                       // 0x0A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0A29(0x0007) MISSED OFFSET
	struct FWeaponAnim                                 ZiplineAttachedLoopAnims;                                 // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 ZiplineAttachAnims;                                       // 0x0A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 ZiplineDetachAnims;                                       // 0x0A50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     JumpOffImpulse;                                           // 0x0A60(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ZiplineSocketOffset;                                      // 0x0A6C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshInterpErrorTolerance;                                 // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFPVFOV;                                                // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFPVFOV;                                                // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SavedFOV;                                                 // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HadWeapon;                                                // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	float                                              MeshInterpSpeed;                                          // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepStartVelocity;                                        // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AdjustPitchForHandleMesh;                                 // 0x0A91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepHandleMeshOnLineFPV;                                  // 0x0A92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepHandleMeshOnLineTPV;                                  // 0x0A93(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FPVViewOffset;                                            // 0x0A94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FPVHandleOffset;                                          // 0x0AA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FPVAdditionalCameraHeight;                                // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFPVViewUpdate;                                         // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0AB1(0x0003) MISSED OFFSET
	float                                              MotorDeceleration;                                        // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplinePitchMax;                                          // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplinePitchMin;                                          // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineYawLimit;                                          // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVHandleOffset;                                          // 0x0AC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TPVMeshOffset;                                            // 0x0AD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotorAccel;                                               // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotorMeshInterp;                                          // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VelZeroed;                                                // 0x0AE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InterpStop;                                               // 0x0AE5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoResetFOV;                                               // 0x0AE6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x0AE7(0x0001) MISSED OFFSET
	class UAnimMontage*                                ZiplineTurnAnim;                                          // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_ZiplineMotorState>                   LastMotorDirection;                                       // 0x0AF0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseContolRotationAsAttachRot;                             // 0x0AF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x0AF2(0x0006) MISSED OFFSET
	TArray<class UAnimMontage*>                        AnimsBlockZiplineMovement;                                // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PreventZiplineBackwardsInput;                             // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0B09(0x0003) MISSED OFFSET
	float                                              CurrentForwardInput;                                      // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxActivationDistanceFromLine;                            // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DetachOnUse;                                              // 0x0B14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DetachOnProne;                                            // 0x0B15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DetachOnCrouch;                                           // 0x0B16(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreventZiplineTick;                                       // 0x0B17(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondaryJumpImpulseDelay;                                // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SecondaryJumpImpulse;                                     // 0x0B1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineHanging;                                           // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineFlipping;                                          // 0x0B29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineTurning;                                           // 0x0B2A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineFaceUpDirection;                                   // 0x0B2B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineRunPressed;                                        // 0x0B2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoActorOffsetUpdate;                                      // 0x0B2D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFixedSlidingVelocity;                                  // 0x0B2E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AIForceJumpOffZipline;                                    // 0x0B2F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AIRunning;                                                // 0x0B30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RiderJustMounted;                                         // 0x0B31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0B32(0x0002) MISSED OFFSET
	float                                              FPVEyeHeightInterpSpeed;                                  // 0x0B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetCheckTolerance;                                     // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineRunningSpeed;                                      // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineRunningAcceleration;                               // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndStopTraceLength;                                       // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropAtEndThreshold;                                       // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachOffsetHanging;                                      // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttachOffsetAbove;                                        // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meshOffsetHanging;                                        // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeshOffsetAbove;                                          // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineJumpOffMinDistanceToEnd;                           // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineFlipTraceRadius;                                   // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0B64(0x0004) MISSED OFFSET
	class UAnimMontage*                                ZipLineTurnHangingAnim;                                   // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineAboveToBelowAnim;                                  // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineBelowToAboveAnim;                                  // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineAboveHurtAnim;                                     // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineBelowHurtAnim;                                     // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineJumpOffAboveAnim;                                  // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ZiplineJumpOffBelowAnim;                                  // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentMeshTargetRotation;                                // 0x0BA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EndStopTraceSocket;                                       // 0x0BAC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0BB4(0x0004) MISSED OFFSET
	class ADinoCharacter_BP_Zipline_C*                 Ref_AttachedDino;                                         // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowZiplineFlipping;                                    // 0x0BC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0BC1(0x0007) MISSED OFFSET
	struct FWeaponAnim                                 ZiplineAttachAnimsBelow;                                  // 0x0BC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 ZiplineDetachAnimsBelow;                                  // 0x0BD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0BE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0BE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x0BEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0BEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0x0BEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x0BED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_AddImpulse;                            // 0x0BEE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x0BEF(0x0001) MISSED OFFSET
	float                                              K2Node_InputAxisEvent_AxisValue;                          // 0x0BF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ZiplineMotorState>                   K2Node_CustomEvent_newState;                              // 0x0BF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0x0BF5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x0BF6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x0BF7(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0BF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Play_Detach_Animation_Duration;                  // 0x0C04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_OtherActor;                            // 0x0C08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_CustomEvent_OtherComp;                             // 0x0C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NormalImpulse;                         // 0x0C18(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_Hit;                                   // 0x0C28(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0CB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0CB9(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Velocity;                              // 0x0CBC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0CD9(0x0007) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x0CE0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_TransformDirection_ReturnValue;                  // 0x0D10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable4;                             // 0x0D1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable4;                       // 0x0D1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_fast;                                  // 0x0D1E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x0D1F(0x0001) MISSED OFFSET
	class ADinoCharacter_BP_Zipline_C*                 K2Node_CustomEvent_attachedDino;                          // 0x0D20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0D28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0D29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x0D2A(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x0D2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x0D30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delay;                                 // 0x0D34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayTurnAnimation_Duration;                      // 0x0D38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0D3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0D40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0D41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0D42(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0D43(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Reset2;                                // 0x0D44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Reset;                                 // 0x0D45(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x0D46(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x0D47(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0D48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0D49(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0D50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0D58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0D60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0D61(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0D64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0D68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x0D69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0D6A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0D6B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x0D6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x0D6D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0D6E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x0D6F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x0D70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x0D71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0D72(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x0D73(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x0D74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0D75(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x0D78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x0D7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x0D80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x0D84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x0D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x0D98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0D99(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x0DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0DA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x0DA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanZiplineFlip_Return;                           // 0x0DAA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x0DAB(0x0001) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0DAC(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_CanZiplineFlip_Return2;                          // 0x0DBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0DBD(0x0003) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0DC0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_DinoBase.Buff_Zipline_DinoBase_C");
		return ptr;
	}


	void SetZiplineFaceUpDirection(bool FaceUpDirection);
	void GetDistanceToAnchor(bool GetLower, float* Distance);
	void CanZiplineFlip(bool* Return);
	void ResetZiplineSpeedAndAcceleration();
	void SetZiplineSliding(bool Reset);
	void SetZiplineRunningSpeedAndAcceleration();
	void RotationNearlyEqual(const struct FRotator& rotA, const struct FRotator& rotB, float ErrorTolerance, bool* Return);
	void ReceiveBeginPlay();
	void UpdateActorZiplineOffset();
	void SetHurtAnim(bool Hanging, bool Reset);
	void BPInstigatorUnpossessed();
	void BuffTickServer(float* DeltaTime);
	void Get_Zipline_Start_and_End_Point_NonPure(bool NoOffset, struct FVector* Start, struct FVector* End);
	void SetAttachedCharacterTransform(const struct UObject_FTransform& NewTransform);
	void SetupLocalClient(class AActor* Pawn);
	void Deactivate_Local_Client(class AActor* Pawn);
	void IsStillColliding();
	void HandleCollision(struct FHitResult* Hit);
	void STATIC_HitZiplineEndStop(class UMovementComponent* MovementComp);
	void CalcZiplinePreservedStartVelocity(const struct FVector& InVelocity, struct FVector* Velocity);
	void CalcZiplineVelocityMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity);
	void CalcZiplineVelocityNonMotorized(const struct FVector& InVelocity, float DeltaTime, struct FVector* OutVelocity);
	void ProcessMotorInput(float A);
	bool IsZiplineStateBlockedOrStopped();
	void IsAnimBlockingZiplineMovement(bool* bLocked);
	bool BPIsCharacterHardAttached();
	void BPNonDedicatedPlayerPostAnimUpdate();
	void BPCharacterDetach();
	void SetZiplineControlRotation();
	void PlayTurnAnimation(class UAnimMontage* override, float* Duration);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void UpdateFPVCameraAndMeshPosition();
	void GetFPVViewLocation(struct FVector* ViewLoc);
	void UpdateHandleMeshLocationAndRotation();
	void UpdateFPVAnims();
	bool VectorNearlyEqual(float ErrorTolerance, const struct FVector& inVec, const struct FVector& InVec2);
	void ResetCamera();
	void UpdateCamera();
	void ResetFOV();
	void UpdateFOV(float DeltaTime);
	void ResetMeshPosition();
	void JumpImpulse(const struct FVector& Direction);
	void InterpolateCharacterMeshToLine(float DeltaTime);
	void GetZiplineStartAndEndPoint(bool NoOffset, struct FVector* Start, struct FVector* End);
	void CalculateZiplineMaxVelocity(float Accleration, float Length, float* maxVelocity);
	void CalculateZiplineAcceleration(const struct FVector& StartPoint, const struct FVector& EndPoint, float* Acceleration);
	void Play_Detach_Animation(float* Duration);
	void PlayAttachAnimation(float* Duration);
	float GetCurrentDistanceOnLinePercent();
	float GetStartEndOffset(bool ReturnPercent, class APrimalCharacter* forChar);
	float GetCurrentSpeedPercentageFromMax();
	void SetMotorState(TEnumAsByte<E_ZiplineMotorState> NewMotorState);
	void GetClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Location, struct FVector* Result);
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void UpdateMeshAttachment();
	void UpdateFX();
	void BuffTickClient(float* DeltaTime);
	void GetAttachOffset(struct FVector* AttachOffset);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void STATIC_AttachToZipline(const struct FVector& StartLocation);
	void End_Move_Along_Zipline(bool AddImpulse);
	void TickMoveAlongZipline();
	void StartMoveAlongZipline(const struct FVector& StartLocation, class AZipline_Anchor_C* UpperZiplineAnchor, class AZipline_Anchor_C* LowerZiplineAnchor, const struct FVector& Direction);
	void STATIC_UserConstructionScript();
	void InpActEvt_Run_K2Node_InputActionEvent_113();
	void InpActEvt_Run_K2Node_InputActionEvent_112();
	void InpActEvt_Jump_K2Node_InputActionEvent_111();
	void InpActEvt_Crouch_K2Node_InputActionEvent_110();
	void InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_109();
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_56();
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_55();
	void InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_108();
	void EndMoveAlongZipline_RunOnServer(bool AddImpulse);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_87(float AxisValue);
	void SetMotorState_RunOnServer(TEnumAsByte<E_ZiplineMotorState> NewState);
	void BindToHit();
	void PlayCameraShake();
	void PlayAttachDelayed();
	void StopMoving_Multicast();
	void OnComponentHit_Event(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit);
	void SetInitialVelocity(const struct FVector& Velocity);
	void SecondJumpImpulse();
	void FlipOnZipline_Multicast(bool Fast, class ADinoCharacter_BP_Zipline_C* attachedDino);
	void FlipOnZipline_RunOnServer();
	void SetIsTurning(float Delay);
	void DoZiplineTurn_RunOnServer();
	void RunPressed();
	void SetZiplineRunningSpeedAndAcceleration_Multicast(bool Reset);
	void SetZiplineRunningSpeedAndAcceleration_RunOnServer(bool Reset);
	void SetRunning_RunOnClient();
	void SetSliding_Multicast();
	void AI_SetZiplineRunning_Multicast();
	void ExecuteUbergraph_Buff_Zipline_DinoBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
