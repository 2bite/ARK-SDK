#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsWithinDistanceOfTree_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IsWithinDistanceOfTree.IsWithinDistanceOfTree_C
// 0x0080 (0x0110 - 0x0090)
class UIsWithinDistanceOfTree_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0090(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptanceRadius;                                         // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      AcceptanceRadiusKey;                                      // 0x00C0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      ObserverKey;                                              // 0x00E8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsWithinDistanceOfTree.IsWithinDistanceOfTree_C");
		return ptr;
	}


	void STATIC_ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_IsWithinDistanceOfTree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
