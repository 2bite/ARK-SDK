#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekPistol_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTekPistol.WeapTekPistol_C
// 0x01DB (0x0F9B - 0x0DC0)
class AWeapTekPistol_C : public AShooterWeapon_Instant
{
public:
	class UParticleSystemComponent*                    BeamFPV;                                                  // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BeamTPV;                                                  // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChargeFPV;                                                // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChargeTPV;                                                // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FireMode;                                                 // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FVector                                     BeamTarget;                                               // 0x0DE4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               BeamOn;                                                   // 0x0DF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0DF1(0x0007) MISSED OFFSET
	TArray<struct FTekPistolFireMode_Beam>             FireModeConfig;                                           // 0x0DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SetBeamLocally;                                           // 0x0E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E09(0x0003) MISSED OFFSET
	float                                              HealPercentage;                                           // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinHealAmount;                                            // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxHealAmount;                                            // 0x0E14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            TargetCharacter;                                          // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DisableCrosshairColor;                                    // 0x0E20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                StunCrosshairColor;                                       // 0x0E30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseWorldSpaceBeamTarget;                                  // 0x0E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0E41(0x0003) MISSED OFFSET
	struct FLinearColor                                HealingCrosshairColor;                                    // 0x0E44(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0E54(0x0004) MISSED OFFSET
	double                                             LastHealTime;                                             // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalItem_WeaponTekPistol_C*               PrimalItem;                                               // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCustomItemData                             CustomItemData;                                           // 0x0E68(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWeaponAnim                                 ModeSwitchAnim;                                           // 0x0EE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayModeSwitchMontage;                                    // 0x0EF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0EF1(0x0007) MISSED OFFSET
	struct FWeaponAnim                                 FireStartAnim;                                            // 0x0EF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 FireStopAnim;                                             // 0x0F08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireDelayAfterModeSwitch;                                 // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwitchingMode;                                            // 0x0F1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0F1D(0x0003) MISSED OFFSET
	class UClass*                                      HelperBuff;                                               // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 HelperBuffRef;                                            // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DamageCrosshairColor;                                     // 0x0F30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             FireLoopSound;                                            // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ImpactLoop;                                               // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMats;                                              // 0x0F50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                K2Node_CustomEvent_NewMode;                               // 0x0F60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_BeamOn2;                               // 0x0F64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0F65(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0F66(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_NewTarget2;                            // 0x0F68(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0F74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0F75(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_NewTarget;                             // 0x0F78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0F84(0x0004) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x0F88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NewMode2;                              // 0x0F90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_FireMode;                              // 0x0F94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_BeamOn;                                // 0x0F98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x0F99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x0F9A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekPistol.WeapTekPistol_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void UpdateBeamSounds();
	void UpdateMaterials();
	void CreateDynamicMats();
	void ApplyHelperBuff();
	void BPKillImpactEffects();
	void UpdateBeamEffect();
	void BPFiredWeapon();
	void StartUnequipEvent();
	void BPStartEquippedNotify();
	bool BPWeaponCanFire();
	void Set_Material_Vector_Parameter(class USkeletalMeshComponent* SK, const struct FName& Parameter, const struct FLinearColor& Value);
	void SetFireModeOnItem(int Mode);
	int GetFireModeFromItem();
	void BPAppliedPrimalItemToWeapon();
	class UClass* SelectBuff(class AActor* Target);
	struct FColor BPGetCrosshairColor();
	bool BPShouldDealDamage(class AActor** TestActor);
	int BPWeaponDealDamage(int* DamageAmount, class UClass** DamageType, float* Impulse, struct FHitResult* Impact, struct FVector* ShootDir);
	void ApplyBeamTarget();
	void BPPostSpawnMuzzleEffect(class UParticleSystemComponent** NewMuzzlePSC);
	void GetFireModeData(struct FTekPistolFireMode_Beam* Item);
	void UpdateBeamTarget(const struct FVector& BeamTarget);
	void ReceiveTick(float* DeltaSeconds);
	void BPOnBurstFinished();
	void BPOnBurstStarted();
	void UpdateFireMode();
	void StartSecondaryActionEvent();
	void STATIC_BPSpawnImpactEffects(bool* bIsEntryHit, float* WeaponMaxRange, struct FHitResult* Impact, struct FVector* ShootDir);
	void UserConstructionScript();
	void ServerSetFireMode(int NewMode);
	void ClientSetFireMode(int NewMode);
	void ClientBeamEffect(bool BeamOn);
	void ServerSetBeamTarget(const struct FVector& NewTarget);
	void ClientSetBeamTarget(const struct FVector& NewTarget);
	void ClientNotifyHealingHit();
	void PreventFireDuringModeSwitch();
	void ClientUpdateFiringState(int FireMode, bool BeamOn);
	void ExecuteUbergraph_WeapTekPistol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
