#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Zipline_Base.Buff_Zipline_Base_C
// 0x034C (0x0C9C - 0x0950)
class ABuff_Zipline_Base_C : public APrimalBuff
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
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0B28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_AddImpulse;                            // 0x0B29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0B2A(0x0002) MISSED OFFSET
	float                                              K2Node_InputAxisEvent_AxisValue;                          // 0x0B2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ZiplineMotorState>                   K2Node_CustomEvent_newState;                              // 0x0B30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x0B31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0B32(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0B33(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0B34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0B48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0B49(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAttachAnimation_Duration;                    // 0x0B4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              CallFunc_GetWeapon_ReturnValue;                           // 0x0B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWeapFists_C*                                K2Node_DynamicCast_AsWeapFists_C;                         // 0x0B58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0B60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0B61(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0B62(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0B64(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Play_Detach_Animation_Duration;                  // 0x0B74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x0B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0B81(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_OtherActor;                            // 0x0B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_CustomEvent_OtherComp;                             // 0x0B90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NormalImpulse;                         // 0x0B98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0BA4(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_Hit;                                   // 0x0BA8(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	struct FVector                                     K2Node_CustomEvent_Velocity;                              // 0x0C30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0C3C(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0C40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0C50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0xF];                                       // 0x0C51(0x000F) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x0C60(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_TransformDirection_ReturnValue;                  // 0x0C90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_Base.Buff_Zipline_Base_C");
		return ptr;
	}


	void BPInstigatorUnpossessed();
	void BuffTickServer(float* DeltaTime);
	void Get_Zipline_Start_and_End_Point_NonPure(bool NoOffset, struct FVector* Start, struct FVector* End);
	void SetAttachedCharacterTransform(const struct UObject_FTransform& NewTransform);
	void SetupLocalClient(class AActor* Pawn);
	void Deactivate_Local_Client(class AActor* Pawn);
	void STATIC_IsStillColliding();
	void HandleCollision(struct FHitResult* Hit);
	void HitZiplineEndStop(class UMovementComponent* MovementComp);
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
	void STATIC_JumpImpulse(const struct FVector& Direction);
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
	void STATIC_BPSetupForInstigator(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void STATIC_AttachToZipline(const struct FVector& StartLocation);
	void End_Move_Along_Zipline(bool AddImpulse);
	void TickMoveAlongZipline();
	void StartMoveAlongZipline(const struct FVector& StartLocation, class AZipline_Anchor_C* UpperZiplineAnchor, class AZipline_Anchor_C* LowerZiplineAnchor, const struct FVector& Direction);
	void UserConstructionScript();
	void InpActEvt_Use_K2Node_InputActionEvent_100();
	void InpActEvt_Prone_K2Node_InputActionEvent_99();
	void InpActEvt_Crouch_K2Node_InputActionEvent_98();
	void InpActEvt_Jump_K2Node_InputActionEvent_97();
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_51();
	void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_50();
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_49();
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
	void ExecuteUbergraph_Buff_Zipline_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
