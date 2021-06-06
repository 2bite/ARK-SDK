#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekClaws_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTekClaws.WeapTekClaws_C
// 0x0168 (0x0F88 - 0x0E20)
class AWeapTekClaws_C : public AShooterWeapon_MeleeLock
{
public:
	class UParticleSystemComponent*                    PS_Level_3_Fists_Only_L;                                  // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Level_3_Fists_Only_R;                                  // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            BladeFX;                                                  // 0x0E40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FXOn;                                                     // 0x0E50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E51(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            BladeMIC;                                                 // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaterialAlpha;                                            // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaterialActivateSpeed;                                    // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaterialDeactivateSpeed;                                  // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AttackIndex;                                              // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<double>                                     LastImpactTime;                                           // 0x0E78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                DefaultParticleColor;                                     // 0x0E88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                AlternateBlackColor;                                      // 0x0E98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystem*>                     LocalMeleeVFX;                                            // 0x0EA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystem*>                     RemoteMeleeVFX;                                           // 0x0EB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      LocalImpactThrottle;                                      // 0x0EC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RemoteImpactThrottle;                                     // 0x0ED8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ImpactThreshold;                                          // 0x0EE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FistParticlesActivated;                                   // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBlocking;                                               // 0x0EF9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0EFA(0x0006) MISSED OFFSET
	struct FWeaponAnim                                 BlockMontage;                                             // 0x0F00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastBlockTime;                                            // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BlockingBuff;                                             // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockHeld;                                                // 0x0F20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0F21(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    TPV_Level_3_Fists_L;                                      // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    TPV_Level_3_Fists_R;                                      // 0x0F30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USoundCue*>                           ImpactSounds;                                             // 0x0F38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                SMComps;                                                  // 0x0F48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BlockingDurabilityCostPerInterval;                        // 0x0F58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockingDurabilityCostInterval;                           // 0x0F5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue;                 // 0x0F60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_StartBlocking;                         // 0x0F64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x0F65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0F66(0x0002) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x0F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue2;                       // 0x0F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x0F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x0F80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekClaws.WeapTekClaws_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void ActivateMaxPowerEffects(bool AtMaxPower);
	void BPMeleeAttackStarted();
	void ClientStartBlocking();
	void ClientStopBlocking();
	void StartSecondaryActionEvent();
	void StopSecondaryActionEvent();
	void OnAttachmentsAdded();
	void ChooseParticleColor(int ColorID, struct FLinearColor* ParticleColor);
	TArray<struct FLinearColor> GetItemColors();
	void ApplyParticleColors(class UParticleSystemComponent* InputPin2, TArray<struct FLinearColor>* InputPin);
	void BPSpawnMeleeEffects(struct FVector* Impact, struct FVector* ShootDir);
	void ReceiveTick(float* DeltaSeconds);
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void ShowBladeFX(bool bNewVisibility);
	void OnPrimalItemEquipped();
	struct FWeaponAnim BPGetSelectedMeleeAttackAnim();
	int BPWeaponDealDamage(int* DamageAmount, class UClass** DamageType, float* Impulse, struct FHitResult* Impact, struct FVector* ShootDir);
	void StartUnequipEvent();
	void BPStartEquippedNotify();
	bool BPShouldDealDamage(class AActor** TestActor);
	void UserConstructionScript();
	void ServerSetBlocking(bool StartBlocking);
	void ExecuteUbergraph_WeapTekClaws(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
