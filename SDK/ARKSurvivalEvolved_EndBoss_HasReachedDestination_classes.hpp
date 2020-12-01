#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_HasReachedDestination_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C
// 0x0041 (0x00C1 - 0x0080)
class UEndBoss_HasReachedDestination_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0080(0x0028) (Edit, BlueprintVisible)
	bool                                               processingDestination;                                    // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              AcceptanceRadius;                                         // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isPotentiallyStuck;                                       // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              timeToWaitBeforeEmergencySearch;                          // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             timeLowVelocityStarted;                                   // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               wanderingInitialized;                                     // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C");
		return ptr;
	}


	void IsBossStuck(class APrimalDinoAIController* bossController, bool* isVelocityLow, bool* isNavigationInvalid);
	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_EndBoss_HasReachedDestination(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
