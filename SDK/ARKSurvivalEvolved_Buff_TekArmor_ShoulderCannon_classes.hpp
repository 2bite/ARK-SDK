#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_ShoulderCannon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C
// 0x04DE (0x0FD8 - 0x0AFA)
class ABuff_TekArmor_ShoulderCannon_C : public ABuff_TekArmor_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0AFA(0x0006) MISSED OFFSET
	class UArrowComponent*                             Arrow1;                                                   // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Levitation;                                               // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OverheatFX;                                               // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ChargeGlow;                                               // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TargetBeam;                                               // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponMesh;                                               // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             WeaponMount;                                              // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             WeaponGimbal;                                             // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimTarget;                                                // 0x0B40(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateAimTimer;                                           // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomAimMinTime;                                         // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomAimMaxTime;                                         // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSearchTimer;                                        // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSearchRadius;                                       // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            CurrentTarget;                                            // 0x0B60(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ProjectileClass;                                          // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSearchInterval;                                     // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumSpreadAngle;                                       // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimInterpolationSpeed;                                    // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargePercent;                                            // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeRate;                                               // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeLossRate;                                           // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 WeaponChargeHud;                                          // 0x0B88(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 WeaponAmmoHud;                                            // 0x0C80(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             LastFireTime;                                             // 0x0D78(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinChargeToFire;                                          // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // 0x0D84(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ImpactTarget;                                             // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AimInterpolationSpeed_Active;                             // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // 0x0D9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Activated;                                                // 0x0DA8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0DA9(0x0003) MISSED OFFSET
	int                                                RangeSetting;                                             // 0x0DAC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TargetSetting;                                            // 0x0DB0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0DB4(0x0004) MISSED OFFSET
	TArray<struct FText>                               RangeSettings;                                            // 0x0DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               TargetSettings;                                           // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               FireModes;                                                // 0x0DD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FireMode;                                                 // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0DEC(0x0004) MISSED OFFSET
	TArray<float>                                      RangeValues;                                              // 0x0DF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ReadyToFire;                                              // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E01(0x0003) MISSED OFFSET
	float                                              ProjectileSpeed;                                          // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             ActivationTime;                                           // 0x0E08(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponAligned;                                            // 0x0E10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnimIdle;                                                 // 0x0E11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0E12(0x0006) MISSED OFFSET
	class USK_ShoulderCannon_TPV_RIG_Skeleton_AnimBlueprint_C* WeaponAnimInstance;                                       // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentHeat;                                              // 0x0E20(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatPerShot;                                              // 0x0E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatDischarge;                                            // 0x0E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Overheated;                                               // 0x0E2C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0E2D(0x0003) MISSED OFFSET
	float                                              HeatDischarge_Overheated;                                 // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurabilityLoss_Firing;                                    // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurabilityLoss_Overheat;                                  // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetCenterBias;                                         // 0x0E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRetentionBias;                                      // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0E44(0x0004) MISSED OFFSET
	TArray<struct FShoulderCannonFireMode>             FireModeSettings;                                         // 0x0E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TargetSearchOffset;                                       // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimInterpMult;                                            // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPitch;                                                 // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatPerShotPerCharge;                                     // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseLaser;                                                 // 0x0E6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0E6D(0x0003) MISSED OFFSET
	struct FVector                                     DockedOffset;                                             // 0x0E70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ProneOffset;                                              // 0x0E7C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CrouchedOffset;                                           // 0x0E88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AlternateDockedOffset;                                    // 0x0E94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoCost;                                                 // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0EA4(0x0004) MISSED OFFSET
	class UPrimalItemArmor_ShoulderCannon_C*           CannonItem;                                               // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mode_Crosshair;                                           // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RangeCrosshair;                                           // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookTraceInterval;                                        // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookTraceTimer;                                           // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            LookAtTarget;                                             // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            LockedTarget;                                             // 0x0ED0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerMaxAngleError;                                      // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerMaxProjectileOriginError;                           // 0x0EDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x0EE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0EE1(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_NewFireMode;                           // 0x0EE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0EE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Idle;                                  // 0x0EEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x5];                                       // 0x0EEB(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0EF8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          K2Node_CustomEvent_SpawnTranform;                         // 0x0F00(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_TargetPos;                             // 0x0F30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0F3C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_TargetChar2;                           // 0x0F40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0F48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0F49(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_TargetChar;                            // 0x0F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0F58(0x0008) MISSED OFFSET
	struct UObject_FTransform                          K2Node_CustomEvent_SpawnTransform;                        // 0x0F60(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_NewChargeValue;                        // 0x0F90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0F94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x0F95(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x0F96(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x0F97(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetTargetingLocation_ReturnValue;                // 0x0F98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x0FA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x0FA5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0FA6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x0FA7(0x0001) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x0FA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue2;                  // 0x0FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue3;                  // 0x0FB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue4;                  // 0x0FC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0FC8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_ShoulderCannon.Buff_TekArmor_ShoulderCannon_C");
		return ptr;
	}


	void STATIC_BPDeactivated(class AActor** ForInstigator);
	struct UObject_FTransform STATIC_ClampFireTransform(struct UObject_FTransform* InTransform);
	void OnRep_Overheated();
	void OnRep_Activated();
	void UpdateSound(int ModeIndex);
	void IsAllowedToFire(bool* Allowed);
	void UpdateTarget(float DeltaTime);
	void UpdateWeaponHeat(float A);
	float ClampPitchByYaw(float Yaw, float Pitch);
	void UpdateAmmo(float DeltaTime);
	void UseAlternateSocket(bool* UseAlt);
	bool CanAimAtTarget(class AActor* Target);
	void STATIC_Update_Fire_Mode();
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void Calculate_Ready_to_Fire();
	bool IsValidTarget(class APrimalCharacter* TargetChar);
	void TryFire_Weapon(const struct UObject_FTransform& AimTransform);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	struct UObject_FTransform STATIC_ApplyAccuracy(struct UObject_FTransform* InTransform);
	void SpawnProjectile(struct UObject_FTransform* InTransform);
	void IsElectricalStormActive(bool* Return);
	void STATIC_Update_Weapon_Firing(float DeltaSeconds);
	void STATIC_BPSetupForInstigator(class AActor** ForInstigator);
	struct FVector GetTargetPos();
	void Update_Weapon_Position(float DeltaSeconds);
	void UpdateWeaponAim(float DeltaSeconds);
	void BuffTickServer(float* DeltaTime);
	void STATIC_BuffTickClient(float* DeltaTime);
	bool PreventBlockingWithShield();
	void UserConstructionScript();
	void ClientSpawnProjectile(const struct UObject_FTransform& SpawnTransform, float NewChargeValue);
	void ServerTryFire(const struct UObject_FTransform& SpawnTranform);
	void ServerSetAnimIdle(bool Idle);
	void ClientSetFireMode(int NewFireMode);
	void ServerSetTarget(const struct FVector& TargetPos, class APrimalCharacter* TargetChar);
	void ServerSetLockedTarget(class APrimalCharacter* TargetChar);
	void ExecuteUbergraph_Buff_TekArmor_ShoulderCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
