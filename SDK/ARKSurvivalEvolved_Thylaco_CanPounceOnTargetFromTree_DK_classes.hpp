#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thylaco_CanPounceOnTargetFromTree_DK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C
// 0x0028 (0x00B8 - 0x0090)
class UThylaco_CanPounceOnTargetFromTree_DK_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0090(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thylaco_CanPounceOnTargetFromTree_DK.Thylaco_CanPounceOnTargetFromTree_DK_C");
		return ptr;
	}


	void STATIC_ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Thylaco_CanPounceOnTargetFromTree_DK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
