#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjScoutTracker_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjScoutTracker.ProjScoutTracker_C
// 0x00A9 (0x0709 - 0x0660)
class AProjScoutTracker_C : public AShooterProjectile
{
public:
	class UParticleSystemComponent*                    ImpactParticleSystem;                                     // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TrackerHit;                                               // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	class UParticleSystem*                             TrackerImpactEmitter;                                     // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FHitResult>                          TrackerHits;                                              // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    RotationAtSpawnTime;                                      // 0x0688(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactVFXScale;                                           // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0698(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x06A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x06B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x06B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x06C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x06CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x06D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x06D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x06E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              K2Node_MakeArray_Array;                                   // 0x06E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FHitResult>                          CallFunc_LineTraceMulti_NEW_OutHits;                      // 0x06F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_LineTraceMulti_NEW_ReturnValue;                  // 0x0708(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjScoutTracker.ProjScoutTracker_C");
		return ptr;
	}


	void SpawnImpactVFX();
	void ScheduleNextTrackerImpactVFXSpawn();
	void Is_Clientor_Single_Player(bool* Result);
	void IsServerOrSinglePlayer(bool* Result);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void UserConstructionScript();
	void TraceForTrackerHits();
	void SpawnImactVFXAndScheduleNextImpact();
	void ClientSpawnImpactVFX();
	void ExecuteUbergraph_ProjScoutTracker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
