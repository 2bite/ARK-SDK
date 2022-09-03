#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DetachFromTree_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DetachFromTree.DetachFromTree_C
// 0x0051 (0x00C9 - 0x0078)
class UDetachFromTree_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      LastAttachedTreeIndexKey;                                 // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      PreviousAttachedTreeIndexKey;                             // 0x00A0(0x0028) (Edit, BlueprintVisible)
	bool                                               ResetPreviousTreeIndexKey;                                // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DetachFromTree.DetachFromTree_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_DetachFromTree(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
