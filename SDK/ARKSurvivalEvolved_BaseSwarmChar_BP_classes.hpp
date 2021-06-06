#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0204 (0x246C - 0x2268)
class ABaseSwarmChar_BP_C : public ADino_Character_BP_RepelType_C
{
public:
	class USceneComponent*                             FlockRootComp;                                            // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            WeaponCollision;                                          // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APrimalDinoAIController*                     MyPrimalDinoAIController;                                 // 0x2278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugBoids;                                              // 0x2280(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2281(0x0003) MISSED OFFSET
	int                                                FlockSize;                                                // 0x2284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlockShape;                                               // 0x2288(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                NumLeaderBoids;                                           // 0x228C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideLeaderBoids;                                          // 0x2290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2291(0x0007) MISSED OFFSET
	class UStaticMesh*                                 BoidStaticMesh;                                           // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoidMeshScale;                                            // 0x22A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoidMinSpeed;                                             // 0x22AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoidMaxSpeed;                                             // 0x22B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoidDecayAfterDeathTime;                                  // 0x22B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FlockVolumeCurve;                                         // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFlockPersistentData                        FlockPersistentSettings;                                  // 0x22C0(0x0038) (Edit, BlueprintVisible)
	struct FVector2D                                   FlockTurnRateRange;                                       // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FlockMaxForceRange;                                       // 0x2300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlockMaxNumTracesPerSecond;                               // 0x2308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlockDestroyNonCharacterTargetsAfterX;                    // 0x230C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlockDirectDamagePerSecond;                               // 0x2310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlockUseRadialDamage;                                    // 0x2314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2315(0x0003) MISSED OFFSET
	int                                                RadialDamageTargetsBitmask;                               // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadialDamageInterval;                                     // 0x231C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FFlockBehaviorData>                  FlockBehaviors;                                           // 0x2320(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FFlockBehaviorData                          CurrentFlockBehavior;                                     // 0x2330(0x0068) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TArray<struct FBoid>                               CurrentFlockData;                                         // 0x2398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                CurrentFlockStaticMeshComponents;                         // 0x23A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DeadBoidTimesUntilDecayed;                                // 0x23B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    FlockLeaderDynamicMaterial;                               // 0x23C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedFlockLifetime;                                      // 0x23D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x23D4(0x0004) MISSED OFFSET
	double                                             LastVictimCheckTime;                                      // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             AttackTargetStartTime;                                    // 0x23E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttackingTarget_;                                       // 0x23E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x23E9(0x0007) MISSED OFFSET
	double                                             LastAttackTargetTime;                                     // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      TargetedMessage;                                          // 0x23F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TargetedMessageDisplayTime;                               // 0x2408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x240C(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2410(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x2418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2420(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x2421(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2422(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x2423(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2424(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2428(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x242C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x242D(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2430(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x2434(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        CallFunc_Array_Get_Item;                                  // 0x2438(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2440(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x2441(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Damage;                                // 0x2444(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<int>                                        CallFunc_FlockTickFollowersAndFreeAgents_BoidIndexWhitelist_RefProperty;// 0x2448(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<int>                                        CallFunc_FlockTickLeaders_BoidIndexWhitelist_RefProperty; // 0x2458(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	float                                              CallFunc_Array_Set_Item_RefProperty;                      // 0x2468(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseSwarmChar_BP.BaseSwarmChar_BP_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ThrottledTick();
	void Set_Material_Vector_Parameter(class UStaticMeshComponent* SM, const struct FName& Parameter, const struct FVector& Value);
	void SendTargetedMessage();
	void SwarmLifetimeEnded();
	void SetSwarmLifetime(float LifeTime);
	void FinishedAttackingTarget();
	void StartAttackingTarget();
	void SpottedTarget();
	class UStaticMeshComponent* STATIC_CreateBoidSM(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	void UpdateDeadBoids(float DeltaSeconds);
	void STATIC_BPSetCharacterMeshesMaterialScalarParamValue(struct FName* ParamName, float* Value);
	void SetMaterialScalarParameter(class UStaticMeshComponent* SM, const struct FName& Parameter, float Value);
	void Kill_Boid(class UStaticMeshComponent* StaticMeshComp);
	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	void Attack_Target(bool* StopAttacking_);
	void GetDestroyNonCharacterTargetDuration(float* Duration);
	void DestroyTarget();
	void SetFlockBehavior();
	void OnRep_FlockShape();
	void Get_Damage_Type_Adjuster(class UClass* Type, float* Multiplier);
	void Kill_Boids_Based_On_Health(float DamageIn);
	void OnTargetChanged();
	void Can_Damage_Victim_in_Radius(class AActor* Victim, bool* CanDamage);
	void CreateFlock();
	void TickFlock(float DeltaTime);
	void ArrayContainsParentDamageType(TArray<class UClass*>* DamageTypes, class UClass** DamageType, bool* Result);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void Damage_Victim_in_Radius(class AActor* Victim, bool* bDidDoDamage);
	void Damage_Victims_In_Radius();
	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath);
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void MultiOnLethalDamage();
	void Server_SpottedTargetEvent();
	void Multicast_SpottedTargetEvent();
	void Server_StartAttackingTarget();
	void Multicast_StartAttackingTarget();
	void Server_FinishedAttackingTarget();
	void Multicast_FinishedAttackingTarget();
	void Multi_KillBoidsBasedOnHealth(float Damage);
	void ExecuteUbergraph_BaseSwarmChar_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
