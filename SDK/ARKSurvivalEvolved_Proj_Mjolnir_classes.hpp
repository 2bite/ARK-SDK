#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_Mjolnir_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Mjolnir.Proj_Mjolnir_C
// 0x0228 (0x08B0 - 0x0688)
class AProj_Mjolnir_C : public APrimalProjectileArrow
{
public:
	class UAudioComponent*                             ShockwaveStart;                                           // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ShockwaveExpand;                                          // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleTrail;                                            // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ProjectileReturnSFX;                                      // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ProjectileSFX;                                            // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RotationPoint;                                            // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AShooterWeapon*                              WeaponRef;                                                // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           CharacterRef;                                             // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 ControllingBuffRef;                                       // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFollowingToPlayer;                                      // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	float                                              MaxFlightDistanceFromLaunchPoint;                         // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LaunchPoint;                                              // 0x06D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReturnTimeToPlayer;                                       // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DesiredMaxThrowPoint;                                     // 0x06E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReturnedToPlayer;                                       // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsStuckInSomething;                                       // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	struct FVector                                     LastForwardVelocity;                                      // 0x070C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClientMjolnirSpawned;                                   // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AProj_Mjolnir_C*                             SelfObj;                                                  // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeToSitDormant;                                      // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	double                                             LastTimeStuck;                                            // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LightningPulseEffect;                                     // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PulseRadiusMax;                                           // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PulseHeight;                                              // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPulse;                                               // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDoingPulse;                                             // 0x0751(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0752(0x0002) MISSED OFFSET
	float                                              PulseTimeElapsed;                                         // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PulseBandWidth;                                           // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PulseOverTime;                                            // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPulseEnded;                                             // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      PulseAttackBuff;                                          // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStartReturnToPlayer;                                    // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              LOSCheckOffSetDistance;                                   // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ActorsHit;                                                // 0x0790(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              PulseWaveFrequency;                                       // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	double                                             LastPulseHitReset;                                        // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ActorsTrackedByPulse;                                     // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystemComponent*                    ActivePulseEffect;                                        // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnShieldReflected;                                        // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              ImpactRadius;                                             // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightningStrikeImpactBaseDamage;                          // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRequestSyncProjectile;                                  // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHitForEmitter;                                          // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UActorComponent*>                     FoliageHit;                                               // 0x0800(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x0810(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x0818(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x0820(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x0824(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0825(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x0828(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Mjolnir.Proj_Mjolnir_C");
		return ptr;
	}


	void TimedExpandingAudio();
	void MulticastSpawnHitEmitter(const struct UObject_FTransform& SpawnTransform, class APawn* Instigator);
	void HasLosFromPosition(const struct FVector& FromPosition, class APrimalCharacter* ToActor, bool* HasLOS);
	bool BP_IgnoreProjectileImpact(struct FHitResult* ImpactHit);
	void CheckForHit(const struct FHitResult& HitInfo);
	void GetLosOffsetCheckPosition(struct FVector* CheckPOS);
	void SetColors();
	void ClientSetLightningPulse(bool IsPulsing);
	void TickLightningPulse(float DeltaTime);
	void DoLightningPulse();
	void GetSquaredDistance(const struct FVector& A, const struct FVector& B, float* SqDistance);
	void PickedUp(class AShooterCharacter** ByCharacter);
	void PickUpCheck();
	void Explode(struct FHitResult* Impact);
	void OnImpact(bool* bFromReplication, struct FHitResult* HitResult);
	void ReturnToOwner();
	void ReceiveBeginPlay();
	void Init_Projectile(class AShooterCharacter* forCharacter, class AShooterWeapon* ForWeapon, class APrimalBuff* ForControllingBuff);
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void BndEvt__CollisionComp_K2Node_ComponentBoundEvent_535_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void ExecuteUbergraph_Proj_Mjolnir(int EntryPoint);
	void OnHitForEmitter__DelegateSignature(const struct UObject_FTransform& HitTransform);
	void OnRequestSyncProjectile__DelegateSignature();
	void OnShieldReflected__DelegateSignature();
	void OnStartReturnToPlayer__DelegateSignature();
	void OnPulseEnded__DelegateSignature();
	void OnClientMjolnirSpawned__DelegateSignature(class AProj_Mjolnir_C* NewMjolnir);
	void OnReturnedToPlayer__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
