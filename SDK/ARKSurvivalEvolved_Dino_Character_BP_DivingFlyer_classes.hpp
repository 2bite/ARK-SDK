#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_DivingFlyer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C
// 0x015F (0x23E7 - 0x2288)
class ADino_Character_BP_DivingFlyer_C : public ADino_Character_BP_C
{
public:
	bool                                               IsLocallyCarried;                                         // 0x2288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugDivingFlyer;                                        // 0x2289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x228A(0x0002) MISSED OFFSET
	float                                              Diving_RequiredVelocityToDiveAttack;                      // 0x228C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderStartFOV;                                            // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_MultRatioOnImpact;                                 // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DiveLandingStartMeshRotation;                             // 0x2298(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDiveBombCameraShakeScale_FPV;                          // 0x22A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDiveBombCameraShakeScale_TPV;                          // 0x22A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMeshInterpolating;                                       // 0x22AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22AD(0x0003) MISSED OFFSET
	struct FRotator                                    meshTargetRotation;                                       // 0x22B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meshInterpSpeed_rotation;                                 // 0x22BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDiving;                                                // 0x22C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x22C1(0x0003) MISSED OFFSET
	float                                              Diving_Multiplier_Velocity_Current;                       // 0x22C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Ratio_Current;                                     // 0x22C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToDive;                                             // 0x22CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x22CD(0x0003) MISSED OFFSET
	float                                              Diving_Multiplier_RotationRate;                           // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_RotationRate_Pitch;                                // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Multiplier_Velocity_Max;                           // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Multipier_Camera_FOV;                              // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_StaminaCost_Tick;                                  // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x22E4(0x0004) MISSED OFFSET
	class UClass*                                      Diving_CameraShake;                                       // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Diving_CameraShake_DiveBomb;                              // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Diving_CameraShake_Crash;                                 // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Diving_AllowBelowFlyingPitch_Enter;                       // 0x2300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_AllowBelowFlyingPitch_Exit;                        // 0x2304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_InterpSpeed_Ratio_Up;                              // 0x2308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_InterpSpeed_Ratio_Down;                            // 0x230C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_InterpSpeed_VelocityMultiplier_Down;               // 0x2310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_InterpSpeed_VelocityMultiplier_Up;                 // 0x2314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Camera_Shake_Scale;                                // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Camera_Shake_Speed;                                // 0x231C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Diving_AttackIndex_DiveAttack;                            // 0x2320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Diving_AttackIndex_DiveBomb;                              // 0x2324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_RequiredMinVelocityToContinue;                     // 0x2328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequireTamedToDive;                                      // 0x232C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowDiveWhileCarrying;                           // 0x232D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventEquippingWeaponsWhileDiving;                      // 0x232E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x232F(0x0001) MISSED OFFSET
	class UAnimMontage*                                Diving_Abort_Montage;                                     // 0x2330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowDiveLanding;                                 // 0x2338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowDiveBomb;                                    // 0x2339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowFlyingRunLanding;                            // 0x233A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x233B(0x0005) MISSED OFFSET
	class UAnimMontage*                                Diving_LandFromDive_Montage;                              // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowGrabWhileDiving;                             // 0x2348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2349(0x0007) MISSED OFFSET
	class UClass*                                      Diving_RiderBuff;                                         // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 Ref_DivingRiderBuff;                                      // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_RequiredMultRatioToDiveBomb;                       // 0x2360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastDivingVelocity;                                       // 0x2364(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDiveLanding;                                           // 0x2370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2371(0x0003) MISSED OFFSET
	float                                              Diving_InterpSpeed_VelocityMultiplier_OnGround;           // 0x2374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_StaminaCost_Start;                                 // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsReturningToZeroPitch;                                  // 0x237C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x237D(0x0003) MISSED OFFSET
	float                                              Diving_ReturnToZeroPitchSpeed;                            // 0x2380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x2384(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2385(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_intensity;                             // 0x2388(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x238C(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x2390(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue2;                // 0x2398(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2399(0x0003) MISSED OFFSET
	struct FRotator                                    K2Node_CustomEvent_meshRotation;                          // 0x239C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue;                       // 0x23A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x23A9(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x23AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x23B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x23B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x23B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x23B6(0x0002) MISSED OFFSET
	class ADino_Character_BP_DivingFlyer_C*            CallFunc_Get_DefaultDivingFlyer_default;                  // 0x23B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x23C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue;                           // 0x23C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowDiving_result;                              // 0x23C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newDiving;                             // 0x23C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x23C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x23C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x23C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDiving_result;                                 // 0x23CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Has_Diving_Momentum_Pure_result;                 // 0x23CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x23CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x23CD(0x0003) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x23D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x23D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x23D9(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue;                     // 0x23DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x23E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetRole>                              CallFunc_GetRole_ReturnValue;                             // 0x23E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_ByteByte_ReturnValue;               // 0x23E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPlayAbortAnim;                        // 0x23E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_DivingFlyer.Dino_Character_BP_DivingFlyer_C");
		return ptr;
	}


	void OnDiveCrash(class AActor* HitActor, class USceneComponent* HitComp, const struct FHitResult& HitResult);
	bool BPForceTurretFastTargeting();
	void ReturnDivingFlyerToZeroPitchRotation(float DeltaTime);
	void ReduceDiverStamina(float cost);
	void BP_OnStartLandingNotify();
	void Get_Diving_Velocity_Mult_Ratio(float* Result);
	void Get_Flyer_Dive_Velocity_Max(float* MaxVelocity);
	void Get_Flyer_Dive_Velocity_Ratio(float* Ratio);
	void Has_Diving_Momentum(bool* Result);
	void UpdateDivingFX();
	void ResetDivingVars();
	void Is_Diver_Moving_Forward(bool* Result);
	void GetDefaultMaxFlySpeed(float* MaxFlySpeed);
	void Get_Diving_Required_VelocityToStart(float* _float);
	void HasEnoughStaminaToDive(bool* Result);
	void BP_OnSetRunning(bool* bNewIsRunning);
	float BP_GetCustomModifier_RotationRate();
	float BP_GetCustomModifier_MaxSpeed();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void IsDiving(bool* Result);
	void Has_Diving_Momentum_Pure(bool* Result);
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void Get_Flyer_Dive_Velocity_Ratio_Pure(float* Ratio);
	void Get_Flyer_Dive_Velocity_MaxPure(float* MaxVelocity);
	void CanFlyerDive(bool* Result);
	void AllowDiving(bool* Result);
	void Diving_Tick(float DeltaSeconds);
	void Diving_Stop();
	void Diving_Start();
	void Set_Is_Diving(bool newDiving, bool forceSet);
	void OnRep_bIsDiving();
	void Interp_Diver_Mesh();
	void Get_Diving_Velocity_Mult_Ratio_Pure(float* Result);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPTimerNonDedicated();
	void Get_DefaultDivingFlyer(class ADino_Character_BP_DivingFlyer_C** Default);
	float BPModifyFOV(float* FOVIn);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void HasLocallyCarriedPlayer(bool* bLocallyCarried);
	void DebugDiveVals();
	struct FVector GetCurrentAcceleration();
	void UserConstructionScript();
	void AbortDive(bool bPlayAbortAnim);
	void DiveBomb();
	void OwningClientDiveBombCameraShake(float Intensity);
	void Multi_LandFromDive(const struct FRotator& MeshRotation);
	void Server_SetIsDiving(bool newDiving);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Dino_Character_BP_DivingFlyer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
