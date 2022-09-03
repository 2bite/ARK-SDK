#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Mjolnir_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C
// 0x01C8 (0x10E0 - 0x0F18)
class ABuff_TekArmor_Mjolnir_C : public ABuff_TekArmor_Sword_C
{
public:
	class UAudioComponent*                             ArcLoopingSound;                                          // 0x0F18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AWeap_Mjolnir_C*                             WeaponRef;                                                // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                NumArcsAllowed;                                           // 0x0F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFiringLightningFan;                                    // 0x0F2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F2D(0x0003) MISSED OFFSET
	TArray<struct FSTR_ChargeBeamInfo>                 LightningTargets;                                         // 0x0F30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastTimeConsumedElementForLightning;                      // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToLightning;                                        // 0x0F48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0F49(0x0007) MISSED OFFSET
	class UParticleSystem*                             LightningFanParticlesTemplate;                            // 0x0F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LightningEndParticlesTemplate;                            // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMinExposure;                                         // 0x0F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMaxExposure;                                         // 0x0F64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     minRayOffset;                                             // 0x0F68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     maxRayOffset;                                             // 0x0F74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ArcStartSound;                                            // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ArcEndSound;                                              // 0x0F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcLoopingSoundVolumeTarget;                              // 0x0F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcLoopingSoundVolumeInterpSpeed;                         // 0x0F94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcLoopingSoundPitchTarget;                               // 0x0F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcLoopingSoundPitchInterpSpeed;                          // 0x0F9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcLoopingSoundPitchMin;                                  // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcLoopingSoundPitchMax;                                  // 0x0FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ArcLoopingSoundPitchMaxNumArcs;                           // 0x0FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0FAC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ActorsWithArcs;                                           // 0x0FB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                LightningElementCostPerTick;                              // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopAllArcs;                                              // 0x0FC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0FC5(0x0003) MISSED OFFSET
	class UClass*                                      LightningAOEBuff;                                         // 0x0FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 CurrentLightningAOEBuff;                                  // 0x0FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 ArcFireAnim;                                              // 0x0FD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                maxTargetsForCameraShake;                                 // 0x0FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCameraShakeWhileTargeting;                             // 0x0FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AProj_Mjolnir_C*                             CurrentMjolnirProjectile;                                 // 0x0FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThrown;                                                 // 0x0FF8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0FF9(0x0007) MISSED OFFSET
	class UClass*                                      ThrowProjectileClass;                                     // 0x1000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 ThrowAnim;                                                // 0x1008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 CatchAnim;                                                // 0x1018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 MjolnirReturningAnim;                                     // 0x1028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LightningFanAmmoCost;                                     // 0x1038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LightningPulseAmmoCost;                                   // 0x103C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningFanCostInterval;                                 // 0x1040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1044(0x0004) MISSED OFFSET
	double                                             LastTimeLightningFanTickAmmoCost;                         // 0x1048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 ArcFireAnim_Out;                                          // 0x1050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CallbackSound;                                            // 0x1060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StickInSomethingSound;                                    // 0x1068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPlayCallbackSound;                                     // 0x1070(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x1071(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bPressed7;                                   // 0x1072(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bPressed6;                                   // 0x1073(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bPressed5;                                   // 0x1074(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1075(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bPressed4;                                   // 0x1076(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bPressed3;                                   // 0x1077(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bPressed2;                                   // 0x1078(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bPressed;                                    // 0x1079(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x107A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x107B(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x107C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x1080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1081(0x0003) MISSED OFFSET
	int                                                CallFunc_Multiply_IntInt_ReturnValue;                     // 0x1084(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFiring_ReturnValue;                            // 0x1088(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1089(0x0003) MISSED OFFSET
	int                                                CallFunc_Divide_IntInt_ReturnValue;                       // 0x108C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Min_ReturnValue;                                 // 0x1090(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1094(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x1098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_IntFloat_ReturnValue;                   // 0x10A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x10A4(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x10A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x10B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x10B4(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x10B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x10C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x10C1(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x10C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue;                 // 0x10C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimation_ReturnValue2;                // 0x10CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x10D0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Mjolnir.Buff_TekArmor_Mjolnir_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveTick(float* DeltaSeconds);
	void MC_CleanupMjolnir();
	void ThrowingMonitorTick();
	void STATIC_CheckIsThrowBlocked(const struct FVector& ForThrowLocation, bool* IsBlocked);
	void ServerRequestFireProjectileMulticast(const struct FVector& ShootDir);
	void MCHitForEmitter(const struct UObject_FTransform& HitTransform);
	void AuthorityProjectileRequestsSync();
	void MC_SyncProjectile(bool bIsStuck, const struct FVector& Location);
	void SetCastedArmorPieceRef();
	void CheckShouldHideWeapon();
	void AllowTekPunch(bool* Allow);
	bool canThrow(bool IsForPostCheck);
	bool CanAttack();
	bool CanDoLightningFan();
	void HandleBuffAnimNotify(struct FName* AnimNotifyName, class FString* AnimNotifyStringData);
	void OnPulseEnd();
	void MulticastSetPulse(bool ShouldPulse);
	void CanDoPulseAttack(bool* CanPulse);
	void TryStartPulseAttack();
	void IsDoingPulseAttack(bool* IsDoingAttack);
	void ClientMjolnirSpawned(class AProj_Mjolnir_C* NewMjolnirProjectile);
	void MulticastCallbackMjolnir();
	void ServerRequestMjolnirCallback();
	void OnMjolnirReturned();
	void GetLaunchLocation(struct FVector* LaunchLoc);
	void STATIC_GetAdjustedAim(struct FVector* Direction);
	void ServerRequestThrowMjolnir();
	void FireProjectileMulticast(const struct FVector& Origin, const struct FVector& ShootDir);
	void SkillThrowMjolnir();
	void TryStopLightning();
	void UpdateMaterialAndParticles();
	void RemoveAllArcsServer();
	void DestroyTargetArcMulticast(class APrimalCharacter* Character);
	void OnNewActorAffectedMulticast(class AActor* actorAffected);
	void TryAddNewArc(class AActor* forActor);
	void RemoveArcTargetServer(class AActor* ArcTarget);
	void ShouldRemoveArcForTarget(class APrimalCharacter* forCharacter, bool* shouldRemove);
	void STATIC_DestroyArcForTarget(class APrimalCharacter* forCharacter);
	void ConnectArcToTarget(const struct FSTR_ChargeBeamInfo& ArcInfo, int index);
	void DestroyArcVisuals(const struct FSTR_ChargeBeamInfo& ArcInfo);
	void RemoveAllArcsClient();
	void SetArcIntensity(class UParticleSystemComponent* Arc);
	void SetEndPoints(class UParticleSystemComponent* Arc, const struct FVector& EndPoint1, const struct FVector& endPoint2, const struct FVector& endPoint3);
	void CreateNewArc(class AActor* ToActor);
	void OnStopLightning();
	void OnStopLightningMulticast();
	void LightningTickServer();
	void STATIC_LightningTickClient();
	void LightningTick();
	void OnStartLightning();
	void OnStartLightningMulticast();
	void TryStartLightning();
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void Proxy_InputAction_AltFire(bool* bPressed);
	void Proxy_Gamepad_Right_Trigger_Hold(bool* bPressed);
	void Proxy_Gamepad_Right_Trigger(bool* bPressed);
	void Proxy_InputAction_Targeting_Hold(bool* bPressed);
	void Proxy_Gamepad_Left_Trigger_Hold(bool* bPressed);
	void Proxy_InputAction_Targeting(bool* bPressed);
	void Proxy_Gamepad_Left_Trigger(bool* bPressed);
	void PlayCameraShake();
	void MC_PlayThrow();
	void PlayHoldForReturn();
	void ExecuteUbergraph_Buff_TekArmor_Mjolnir(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
