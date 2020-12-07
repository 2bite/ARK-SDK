#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_HordeShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_HordeShield.StorageBox_HordeShield_C
// 0x02B8 (0x1090 - 0x0DD8)
class AStorageBox_HordeShield_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChargeUpEmitter;                                          // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            SpherePawnPusher;                                         // 0x0DF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        InnerShield;                                              // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        OuterShield;                                              // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_TekShield_C*              PrimalInventoryBP_TekShield_C1;                           // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastCraftingNotificationTime;                             // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushVelocityMagnitude;                                    // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPushOutVelocity;                                       // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ExtraIgnorePawnPushers;                                   // 0x0E20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              PushedPawns;                                              // 0x0E30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bPushTimerSet;                                            // 0x0E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E41(0x0003) MISSED OFFSET
	float                                              DefaultShieldRadius;                                      // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UserShieldRadiusUnits;                                    // 0x0E48(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ShieldRadiusPerUserUnit;                                  // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShieldRadiusMaxUserUnits;                                 // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldRadiusScale;                                        // 0x0E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentShieldRadiusInterp;                                // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldRadiusInterpSpeed;                                  // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldActiveOpacity;                                      // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldOpacityInterpSpeed;                                 // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldParticleBeamZScale;                                 // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldParticleBeamZOffset;                                // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelConsumptionRateRadiusScale;                           // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ColorizationSaturation;                                   // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShieldImpactEmitter;                                      // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LocalPlayPawnPushSoundTime;                               // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PawnImpactSound;                                          // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             PowerUpCompletionTime;                                    // 0x0E90(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowerUpTime;                                              // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingShieldUnits;                                      // 0x0E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingHealth;                                           // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0EA4(0x0004) MISSED OFFSET
	class ASupplyCrate_Base_Horde_C*                   HordeCrate;                                               // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentLevel;                                             // 0x0EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIntermissionShield;                                      // 0x0EB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0EB5(0x0003) MISSED OFFSET
	struct FLinearColor                                ShieldColor;                                              // 0x0EB8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x0EC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NewUserRadiusValue;                    // 0x0ED0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0ED4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0ED5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0ED6(0x0002) MISSED OFFSET
	float                                              CallFunc_GetDesiredRadiusMultiplier_OutRadiusMultiplier;  // 0x0ED8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue;                 // 0x0EDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0EDD(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0EE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x0EE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0EE9(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_BoolToFloat_ReturnValue;                    // 0x0EEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue2;                // 0x0EF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0EF1(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_Constant_ReturnValue2;                 // 0x0EF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue2;                        // 0x0F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x0F08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0F10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0F11(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic2;            // 0x0F18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0F20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0F21(0x0003) MISSED OFFSET
	float                                              CallFunc_GetDesiredRadiusMultiplier_OutRadiusMultiplier2; // 0x0F24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_AActor;                                // 0x0F28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue2;                    // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0F38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0F40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0F41(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x0F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_HordeRouteManager_C*                   K2Node_DynamicCast_AsBuff_HordeRouteManager_C;            // 0x0F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0F60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0F61(0x0007) MISSED OFFSET
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x0F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0F70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0F71(0x0007) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x0F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TimerExists_ReturnValue;                      // 0x0F80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0F81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x0F82(0x0006) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x0F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x0F90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x0F98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0F9C(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter2;                // 0x0FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0FA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_RemoveItem_ReturnValue;                    // 0x0FA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x0FAA(0x0006) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue2;                      // 0x0FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_RemoveItem_ReturnValue2;                   // 0x0FB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0FB9(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor2;                   // 0x0FC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp2;                    // 0x0FC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex2;               // 0x0FD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x0FD4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0FD5(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x0FD8(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x1060(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x1061(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x1068(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x1070(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x1071(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x1074(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x1078(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPushablePawn_IsPushable;                       // 0x1079(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x107A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x5];                                       // 0x107B(0x0005) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_ActorsToIgnore_RefProperty;// 0x1080(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_HordeShield.StorageBox_HordeShield_C");
		return ptr;
	}


	void ColorShield();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void CheckChargeEffect();
	void OnRep_PowerUpCompletionTime();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	bool STATIC_BPImpactEffect(struct FHitResult* HitRes, struct FVector* ShootDirection);
	void STATIC_BPHitEffect(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FVector* DamageLoc, struct FRotator* HitNormal, struct FDamageEvent* DamageEvent);
	bool BPSupressImpactEffects(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, class UPrimitiveComponent** HitComponent, struct FDamageEvent* DamageEvent);
	void BPRefreshedStructureColors();
	bool AllowIgnoreCharacterEncroachment(class UPrimitiveComponent** HitComponent, class AActor** EncroachingCharacter);
	float BPGetFuelConsumptionMultiplier();
	bool BPCanBeActivatedByPlayer(class AShooterPlayerController** PC);
	bool BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed);
	void GetDesiredRadiusMultiplier(int IncrementAmount, float* OutRadiusMultiplier);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void CheckForExtraIgnorePawnPushers();
	void BPPostInitializeComponents();
	void BPPostSetStructureCollisionChannels();
	void SetShieldActive(bool bActive);
	void BPContainerDeactivated();
	void BPContainerActivated();
	void IsPushablePawn(class APrimalCharacter* PawnToPush, bool* IsPushable);
	void DoPawnPushing();
	void UserConstructionScript();
	void BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_156_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void CheckForPawnPushing();
	void BndEvt__SpherePawnPusher_K2Node_ComponentBoundEvent_249_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void NetRefreshRadiusScale(int NewUserRadiusValue);
	void UpdateShieldInterp();
	void UpdateShieldOpacity();
	void FinishPowerUp();
	void Attack_ForceField(class AActor* AActor);
	void ExecuteUbergraph_StorageBox_HordeShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
