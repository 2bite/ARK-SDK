#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_DinoMoveTowardsTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C
// 0x0005 (0x007D - 0x0078)
class UBTT_DinoMoveTowardsTarget_C : public UBTTask_BlueprintBase
{
public:
	float                                              DesiredDistance;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugLines;                                           // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_DinoMoveTowardsTarget.BTT_DinoMoveTowardsTarget_C");
		return ptr;
	}


	void ReceiveAbort(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTT_DinoMoveTowardsTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
