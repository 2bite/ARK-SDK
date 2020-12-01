#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GetClosestTree_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GetClosestTree.GetClosestTree_C
// 0x00F8 (0x0170 - 0x0078)
class UGetClosestTree_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetPointKey;                                           // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetGroundPointKey;                                     // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetedTreeIndexKey;                                     // 0x00C8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PrevCompIndexKey;                                         // 0x00F0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrCompIndexKey;                                         // 0x0118(0x0028) (Edit, BlueprintVisible)
	bool                                               IsFleeing;                                                // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      IsSmallTreeTargetKey;                                     // 0x0148(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GetClosestTree.GetClosestTree_C");
		return ptr;
	}


	void GetClosestTree(class AActor* OwnerActor, bool AllowPrev, int* ItemIndex, class UStaticMeshComponent** treeComp);
	void STATIC_GetPointOnTreeSurface(class UPrimitiveComponent* treeComp, const struct FVector& origPoint, int ItemIndex, class AActor* OwnerActor, struct FVector* Ret);
	void STATIC_ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_GetClosestTree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
