#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_IsTargetSubmerged_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Deco_IsTargetSubmerged.Deco_IsTargetSubmerged_C
// 0x0028 (0x00B8 - 0x0090)
class UDeco_IsTargetSubmerged_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      Target;                                                   // 0x0090(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deco_IsTargetSubmerged.Deco_IsTargetSubmerged_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Deco_IsTargetSubmerged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
