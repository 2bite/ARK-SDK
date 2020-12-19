#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsCooledDown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IsCooledDown.IsCooledDown_C
// 0x002C (0x00BC - 0x0090)
class UIsCooledDown_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      CoolDownTimeKey;                                          // 0x0090(0x0028) (Edit, BlueprintVisible)
	float                                              CoolDownDurationKey;                                      // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsCooledDown.IsCooledDown_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_IsCooledDown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
