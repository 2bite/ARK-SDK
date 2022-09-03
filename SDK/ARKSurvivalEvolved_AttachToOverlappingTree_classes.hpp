#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AttachToOverlappingTree_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AttachToOverlappingTree.AttachToOverlappingTree_C
// 0x0120 (0x0198 - 0x0078)
class UAttachToOverlappingTree_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      LastWanderTimeKey;                                        // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      LastAttachedTreeIndex;                                    // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetedTreeIndexKey;                                     // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PreviousAttachTreeIndex;                                  // 0x00F0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetPointKey;                                           // 0x0118(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      AcceptanceRadiusKey;                                      // 0x0140(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptanceRadius;                                         // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      IsSmallTreeTargetKey;                                     // 0x0170(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttachToOverlappingTree.AttachToOverlappingTree_C");
		return ptr;
	}


	void STATIC_ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_AttachToOverlappingTree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
