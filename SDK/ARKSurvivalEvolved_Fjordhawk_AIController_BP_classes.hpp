#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C
// 0x002B (0x0944 - 0x0919)
class AFjordhawk_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	class AActor*                                      LootingTarget;                                            // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               HasLoot;                                                  // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               LookingForLoot;                                           // 0x0929(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DeadPlayerLoot;                                           // 0x092A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x092B(0x0005) MISSED OFFSET
	class FString                                      DeadPlayerString;                                         // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              WaitForRespawningPlayerTime;                              // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C");
		return ptr;
	}


	void ResetAttackTimers();
	void StartWaitingForRespawn();
	struct FVector STATIC_FindTeleportLocation(class AShooterCharacter* InputPin, struct FRotator* ReturnValue2);
	void OnPossess(class APawn** PossessedPawn);
	void CheckForRespawnedPlayer();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void PerformanceThrottledTick();
	void FindLandingLocation(struct FVector* DesiredLOocation);
	void BPOnFleeEvent();
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ExecuteUbergraph_Fjordhawk_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
