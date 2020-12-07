#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deco_TargetingForcefield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Deco_TargetingForcefield.Deco_TargetingForcefield_C
// 0x0028 (0x00B8 - 0x0090)
class UDeco_TargetingForcefield_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      Target;                                                   // 0x0090(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deco_TargetingForcefield.Deco_TargetingForcefield_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Deco_TargetingForcefield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
