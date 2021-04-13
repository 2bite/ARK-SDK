#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaseSwarmChar_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseSwarmChar_BP.BaseSwarmChar_BP_C
// 0x0300 (0x2498 - 0x2198)
class ABaseSwarmChar_BP_C : public ADino_Character_BP_RepelType_C
{
public:
	class USphereComponent*                            WeaponCollision;                                          // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             FlockRootComp;                                            // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APrimalDinoAIController*                     MyPrimalDinoAIController;                                 // 0x21A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                FlockSize;                                                // 0x21B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x21B4(0x0004) MISSED OFFSET
	TArray<struct FBoid>                               FlockData;                                                // 0x21B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                FlockComps;                                               // 0x21C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FlockShape;                                               // 0x21D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                FlockRandomSeed;                                          // 0x21DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlockLeaderDynamicMaterial;                               // 0x21E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_Boids;                                              // 0x21E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x21E9(0x0007) MISSED OFFSET
	struct UObject_FTransform                          SmoothedActorTransform;                                   // 0x21F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 BoidStaticMesh;                                           // 0x2220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFlockPersistentData                        FlockPersistentData;                                      // 0x2228(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             LastDebugDrawTime;                                        // 0x2260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumLeaderBoids;                                           // 0x2268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDinoHealthPercentForBoidDestruction;                   // 0x226C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSpawnBoids;                                            // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2274(0x0004) MISSED OFFSET
	double                                             LastBoidDestructionCleanupTime;                           // 0x2278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideLeaderBoids;                                          // 0x2280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2281(0x0003) MISSED OFFSET
	struct FVector                                     StaticMeshScale;                                          // 0x2284(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ScaleDamageRelativeToHealth;                              // 0x2290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2291(0x0003) MISSED OFFSET
	int                                                DamageableTargetsBitMask;                                 // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FindVictimsInRadiusInterval;                              // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x229C(0x0004) MISSED OFFSET
	double                                             LastVictimCheckTime;                                      // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanDamageVictimsInRadius;                                 // 0x22B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x22B1(0x0007) MISSED OFFSET
	TArray<struct FFlockBehaviorData>                  FlockBehaviors;                                           // 0x22B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FFlockBehaviorData                          CurrentFlockBehavior;                                     // 0x22C8(0x0068) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	float                                              AttackTargetDuration;                                     // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x2334(0x0004) MISSED OFFSET
	double                                             AttackTargetStartTime;                                    // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttackingTarget_;                                       // 0x2340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x2341(0x0007) MISSED OFFSET
	class UCurveFloat*                                 VolumeCurve;                                              // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackDamagePerSecond;                                    // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x2354(0x0004) MISSED OFFSET
	double                                             LastAttackTargetTime;                                     // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoidMinSpeed;                                             // 0x2360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoidMaxSpeed;                                             // 0x2364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      DeadBoidTimesUntilDecayed;                                // 0x2368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BoidDecayTime;                                            // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x237C(0x0004) MISSED OFFSET
	TArray<int>                                        BoidsAliveOnDeath;                                        // 0x2380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentSwarmLifetime;                                     // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2394(0x0004) MISSED OFFSET
	double                                             LastTimeSinceTickFlock;                                   // 0x2398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTickIntervalDistance;                                  // 0x23A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTickInterval;                                          // 0x23A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTickInterval;                                          // 0x23A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x23AC(0x0004) MISSED OFFSET
	class FString                                      TargetedMessage;                                          // 0x23B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TargetedMessageDisplayTime;                               // 0x23C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x23C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x23C5(0x0003) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x23C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x23D0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x2400(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2408(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2409(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x240C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2410(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x2414(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        CallFunc_Array_Get_Item;                                  // 0x2418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2420(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue;                           // 0x2421(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsSimulatingPhysics_ReturnValue;                 // 0x2422(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x2423(0x0001) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2424(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2428(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x2429(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x242A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x242B(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x242C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x2430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x2431(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x2432(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x2434(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x2438(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x2439(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        CallFunc_Array_Get_Item2;                                 // 0x2440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x2448(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x244C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData20[0x4];                                       // 0x245C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x2460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x2468(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_LastIndex_ReturnValue;                     // 0x246C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x2470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x2471(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2472(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x1];                                       // 0x2473(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x2474(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<int>                                        CallFunc_FlockTickFollowersAndFreeAgents_BoidIndexWhitelist_RefProperty;// 0x2478(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<int>                                        CallFunc_FlockTickLeaders_BoidIndexWhitelist_RefProperty; // 0x2488(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseSwarmChar_BP.BaseSwarmChar_BP_C");
		return ptr;
	}


	void GetFlockTickingInterval(float* OutInterval);
	void STATIC_SwarmLifetimeEnded();
	void SetSwarmLifetime(float LifeTime);
	void FinishedAttackingTarget();
	void StartAttackingTarget();
	void SpottedTarget();
	class UStaticMeshComponent* STATIC_CreateBoidSM(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	void UpdateDeadBoids(float DeltaSeconds);
	void BPSetCharacterMeshesMaterialScalarParamValue(struct FName* ParamName, float* Value);
	void SetMaterialScalarParameter(class UStaticMeshComponent* SM, const struct FName& Parameter, float Value);
	void Kill_Boid(class UStaticMeshComponent* StaticMeshComp);
	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	void Attack_Target(bool* StopAttacking_);
	void Get_Current_Attack_Duration(float* Duration);
	void DestroyTarget();
	void SetFlockBehavior();
	void OnRep_FlockShape();
	void Get_Damage_Type_Adjuster(class UClass* Type, float* Multiplier);
	void Kill_Boids_Based_On_Health();
	void OnTargetChanged();
	void Can_Damage_Victim_in_Radius(class AActor* Victim, bool* CanDamage);
	void STATIC_CreateFlock();
	void STATIC_TickFlock(float DeltaTime);
	void ArrayContainsParentDamageType(TArray<class UClass*>* DamageTypes, class UClass** DamageType, bool* Result);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void STATIC_Damage_Victim_in_Radius(class AActor* Victim);
	void Damage_Victims_In_Radius();
	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath);
	void BPDinoPostBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CleanupBoids();
	void MultiOnLethalDamage();
	void OnDied_Event(class APrimalCharacter* DiedCharacter);
	void Server_SpottedTargetEvent();
	void Multicast_SpottedTargetEvent();
	void Server_StartAttackingTarget();
	void Multicast_StartAttackingTarget();
	void Server_FinishedAttackingTarget();
	void Multicast_FinishedAttackingTarget();
	void ExecuteUbergraph_BaseSwarmChar_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
