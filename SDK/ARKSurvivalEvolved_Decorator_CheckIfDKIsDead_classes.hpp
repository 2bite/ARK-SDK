#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_CheckIfDKIsDead_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C
// 0x0028 (0x00B8 - 0x0090)
class UDecorator_CheckIfDKIsDead_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      DK;                                                       // 0x0090(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_CheckIfDKIsDead.Decorator_CheckIfDKIsDead_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Decorator_CheckIfDKIsDead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
