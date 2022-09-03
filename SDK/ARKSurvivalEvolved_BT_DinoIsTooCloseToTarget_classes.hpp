#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BT_DinoIsTooCloseToTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C
// 0x0005 (0x0095 - 0x0090)
class UBT_DinoIsTooCloseToTarget_C : public UBTDecorator_BlueprintBase
{
public:
	float                                              Distance;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseFollowTarget;                                          // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BT_DinoIsTooCloseToTarget.BT_DinoIsTooCloseToTarget_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_BT_DinoIsTooCloseToTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
