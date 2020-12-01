#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x015F (0x21E7 - 0x2088)
class ADino_Character_BP_DivingFlyer_C : public ADino_Character_BP_C
{
public:
	bool                                               IsLocallyCarried;                                         // 0x2088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugDivingFlyer;                                        // 0x2089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x208A(0x0002) MISSED OFFSET
	float                                              Diving_RequiredVelocityToDiveAttack;                      // 0x208C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderStartFOV;                                            // 0x2090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_MultRatioOnImpact;                                 // 0x2094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DiveLandingStartMeshRotation;                             // 0x2098(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDiveBombCameraShakeScale_FPV;                          // 0x20A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDiveBombCameraShakeScale_TPV;                          // 0x20A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMeshInterpolating;                                       // 0x20AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x20AD(0x0003) MISSED OFFSET
	struct FRotator                                    meshTargetRotation;                                       // 0x20B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meshInterpSpeed_rotation;                                 // 0x20BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDiving;                                                // 0x20C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x20C1(0x0003) MISSED OFFSET
	float                                              Diving_Multiplier_Velocity_Current;                       // 0x20C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Ratio_Current;                                     // 0x20C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToDive;                                             // 0x20CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x20CD(0x0003) MISSED OFFSET
	float                                              Diving_Multiplier_RotationRate;                           // 0x20D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_RotationRate_Pitch;                                // 0x20D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Multiplier_Velocity_Max;                           // 0x20D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Multipier_Camera_FOV;                              // 0x20DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_StaminaCost_Tick;                                  // 0x20E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x20E4(0x0004) MISSED OFFSET
	class UClass*                                      Diving_CameraShake;                                       // 0x20E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Diving_CameraShake_DiveBomb;                              // 0x20F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Diving_CameraShake_Crash;                                 // 0x20F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Diving_AllowBelowFlyingPitch_Enter;                       // 0x2100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_AllowBelowFlyingPitch_Exit;                        // 0x2104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_InterpSpeed_Ratio_Up;                              // 0x2108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_InterpSpeed_Ratio_Down;                            // 0x210C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_InterpSpeed_VelocityMultiplier_Down;               // 0x2110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_InterpSpeed_VelocityMultiplier_Up;                 // 0x2114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Camera_Shake_Scale;                                // 0x2118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_Camera_Shake_Speed;                                // 0x211C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Diving_AttackIndex_DiveAttack;                            // 0x2120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Diving_AttackIndex_DiveBomb;                              // 0x2124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_RequiredMinVelocityToContinue;                     // 0x2128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequireTamedToDive;                                      // 0x212C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowDiveWhileCarrying;                           // 0x212D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventEquippingWeaponsWhileDiving;                      // 0x212E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x212F(0x0001) MISSED OFFSET
	class UAnimMontage*                                Diving_Abort_Montage;                                     // 0x2130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowDiveLanding;                                 // 0x2138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowDiveBomb;                                    // 0x2139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowFlyingRunLanding;                            // 0x213A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x213B(0x0005) MISSED OFFSET
	class UAnimMontage*                                Diving_LandFromDive_Montage;                              // 0x2140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDiving_AllowGrabWhileDiving;                             // 0x2148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2149(0x0007) MISSED OFFSET
	class UClass*                                      Diving_RiderBuff;                                         // 0x2150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 Ref_DivingRiderBuff;                                      // 0x2158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_RequiredMultRatioToDiveBomb;                       // 0x2160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastDivingVelocity;                                       // 0x2164(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDiveLanding;                                           // 0x2170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2171(0x0003) MISSED OFFSET
	float                                              Diving_InterpSpeed_VelocityMultiplier_OnGround;           // 0x2174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Diving_StaminaCost_Start;                                 // 0x2178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsReturningToZeroPitch;                                  // 0x217C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x217D(0x0003) MISSED OFFSET
	float                                              Diving_ReturnToZeroPitchSpeed;                            // 0x2180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x2184(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2185(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_intensity;                             // 0x2188(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x218C(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x2190(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue2;                // 0x2198(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2199(0x0003) MISSED OFFSET
	struct FRotator                                    K2Node_CustomEvent_meshRotation;                          // 0x219C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue;                       // 0x21A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x21A9(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x21AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x21B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x21B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x21B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x21B6(0x0002) MISSED OFFSET
	class ADino_Character_BP_DivingFlyer_C*            CallFunc_Get_DefaultDivingFlyer_default;                  // 0x21B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x21C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue;                           // 0x21C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowDiving_result;                              // 0x21C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newDiving;                             // 0x21C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x21C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x21C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x21C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDiving_result;                                 // 0x21CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Has_Diving_Momentum_Pure_result;                 // 0x21CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x21CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x21CD(0x0003) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x21D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x21D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x21D9(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue;                     // 0x21DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x21E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetRole>                              CallFunc_GetRole_ReturnValue;                             // 0x21E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_ByteByte_ReturnValue;               // 0x21E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPlayAbortAnim;                        // 0x21E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

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
	void Get_Flyer_Dive_Velocity_Max(float* maxVelocity);
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
	void Get_Flyer_Dive_Velocity_MaxPure(float* maxVelocity);
	void CanFlyerDive(bool* Result);
	void AllowDiving(bool* Result);
	void Diving_Tick(float DeltaSeconds);
	void Diving_Stop();
	void Diving_Start();
	void Set_Is_Diving(bool newDiving, bool ForceSet);
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
