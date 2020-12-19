#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKWyvernCheckDistanceFromKaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Task_FKWyvernCheckDistanceFromKaiju.Task_FKWyvernCheckDistanceFromKaiju_C
// 0x0030 (0x00C0 - 0x0090)
class UTask_FKWyvernCheckDistanceFromKaiju_C : public UBTDecorator_BlueprintBase
{
public:
	float                                              DistanceThreshold;                                        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      KaijuActor;                                               // 0x0098(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Task_FKWyvernCheckDistanceFromKaiju.Task_FKWyvernCheckDistanceFromKaiju_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Task_FKWyvernCheckDistanceFromKaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
