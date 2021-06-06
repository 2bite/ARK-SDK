#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTService_StopRunningIfWithinDistance_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C
// 0x0068 (0x00E8 - 0x0080)
class UBTService_StopRunningIfWithinDistance_C : public UBTService_BlueprintBase
{
public:
	bool                                               bResetToInitialRunningStateOnFinish;                      // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              DistanceFromTargetToStopRunning;                          // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasInitiallyRunning;                                     // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetPointKey;                                           // 0x0090(0x0028) (Edit, BlueprintVisible)
	bool                                               bReturnToRunningIfLeftDistance;                           // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyStopIfSmallTree;                                     // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	struct FBlackboardKeySelector                      IsSmallTreeTargetKey;                                     // 0x00C0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_StopRunningIfWithinDistance.BTService_StopRunningIfWithinDistance_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_BTService_StopRunningIfWithinDistance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
