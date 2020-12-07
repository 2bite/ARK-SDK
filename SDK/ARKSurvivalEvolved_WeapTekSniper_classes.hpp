#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekSniper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTekSniper.WeapTekSniper_C
// 0x01C0 (0x0FB8 - 0x0DF8)
class AWeapTekSniper_C : public AShooterWeapon_InstantPenetrating
{
public:
	class UAudioComponent*                             OverheatSoundLoop;                                        // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             X_Ray_Deactivation_Sound;                                 // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             X_Ray_Active_Sound;                                       // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutOverheatParticles_RateScale_FF98F06349E45EAC1393FE991ED70D4A;// 0x0E10(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeOutOverheatParticles__Direction_FF98F06349E45EAC1393FE991ED70D4A;// 0x0E14(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E15(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeOutOverheatParticles;                                 // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ImpactEffectEntryHit;                                     // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ImpactEffectExitHit;                                      // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverheatingAmount;                                        // 0x0E30(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocalOverheatingAmount;                                   // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastOverheatedTime;                                       // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverheatAmountPerShot;                                    // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E44(0x0004) MISSED OFFSET
	double                                             LastShotTime;                                             // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastReplicatedOverheatingAmount;                          // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0E54(0x0004) MISSED OFFSET
	double                                             LastTimeInOverheated;                                     // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverheatDuration;                                         // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetFOV;                                                // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                XRayAmmoToUsePerInterval;                                 // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              XRayAmmoConsumptionInterval;                              // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastXRayElementConsumption;                               // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Scoped;                                                   // 0x0E78(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastIsConsumingElement;                                   // 0x0E79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0E7A(0x0002) MISSED OFFSET
	struct FLinearColor                                WeaponEmissiveColorNormal;                                // 0x0E7C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                WeaponEmissiveColorOverheat;                              // 0x0E8C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponEmissiveStrengthNormalMin;                          // 0x0E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponEmissiveStrengthNormalMax;                          // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponEmissiveStrengthOverheatMin;                        // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponEmissiveStrengthOverheatMax;                        // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0EAC(0x0004) MISSED OFFSET
	struct FWeaponAnim                                 OverheatedAnim_In;                                        // 0x0EB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 OverheatedAnim_Out;                                       // 0x0EC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowScopeDuringOverheat;                                 // 0x0ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               XRayIsActive;                                             // 0x0ED1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0ED2(0x0006) MISSED OFFSET
	TArray<class UClass*>                              IgnoreAllDamageOnHit;                                     // 0x0ED8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MinAmountOfAmmoAllowedToFire;                             // 0x0EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OverheatCompleted;                                        // 0x0EEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0EED(0x0003) MISSED OFFSET
	class UParticleSystem*                             OverheatParticles;                                        // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OverheatParticleComp;                                     // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OverheatParticleRateScaleParamName;                       // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverheatSoundLoopFadeInDuration;                          // 0x0F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasHitPrimalCharacterAlready;                             // 0x0F0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasHitPrimalStructureAlready;                             // 0x0F0D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               K2Node_CustomEvent_JustFired2;                            // 0x0F0E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_JustFired;                             // 0x0F0F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x0F10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0F11(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0F14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x0F18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0F1C(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetIs_Overheated_bRetOverheated;                 // 0x0F28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Scoped;                                // 0x0F29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x0F2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x0F2B(0x0001) MISSED OFFSET
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue;                 // 0x0F2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue2;                // 0x0F30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue2;                // 0x0F34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0xB];                                       // 0x0F35(0x000B) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue;                  // 0x0F40(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x0F70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x0F7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x0F88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0F94(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x0F98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0FA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0FA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0FA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0FA3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetTimelineLength_ReturnValue;                   // 0x0FA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x0FA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0FA9(0x0003) MISSED OFFSET
	float                                              CallFunc_Get_Overheat_Duration_ReturnValue;               // 0x0FAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0FB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x0FB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekSniper.WeapTekSniper_C");
		return ptr;
	}


	bool BPShouldDealDamage(class AActor** TestActor);
	void Try_Enable_XRay();
	float Get_Overheat_Duration();
	bool BPStopPenetratingAtHit(bool* bIsEntryHit, float* CurrentDistance, float* CurrentMaxDistance, struct FHitResult* CurrentHit);
	int BPWeaponDealDamage(int* DamageAmount, class UClass** DamageType, float* Impulse, struct FHitResult* Impact, struct FVector* ShootDir);
	int BPAdjustAmmoPerShot();
	void BPToggleAccessory();
	bool AllowTargeting();
	void BPSpawnImpactEffects(bool* bIsEntryHit, float* WeaponMaxRange, struct FHitResult* Impact, struct FVector* ShootDir);
	void BPOnScoped();
	void BPAppliedPrimalItemToWeapon();
	void ReceiveDestroyed();
	bool Has_Ammo(int MinAmount);
	void BPToggleAccessoryFailed();
	bool BPCanToggleAccessory();
	void UpdateMeshOverheat_Effect(class USkeletalMeshComponent* Mesh, float amount);
	void Tick_X_Ray_Sound();
	void Is_X_Ray_Active(bool* Result);
	void Show_X_Ray_Enabled_Message(bool Enabled);
	void SniperMessage(const class FString& Message);
	void GetOwnerCharacter(class AShooterCharacter** AsShooterCharacter);
	void BPWeaponZoom(bool* bZoomingIn);
	bool BPWeaponCanFire();
	void BPFireWeapon();
	void ReceiveTick(float* DeltaSeconds);
	void GetIs_Overheated(bool* bRetOverheated);
	void UserConstructionScript();
	void FadeOutOverheatParticles__FinishedFunc();
	void FadeOutOverheatParticles__UpdateFunc();
	void Overheated(bool JustFired);
	void AddHeat(bool JustFired);
	void NotOverheated();
	void SetScoped(bool Scoped);
	void ClearHitPrimalCharacterAlready();
	void ClearHitPrimalStructureAlready();
	void ExecuteUbergraph_WeapTekSniper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
