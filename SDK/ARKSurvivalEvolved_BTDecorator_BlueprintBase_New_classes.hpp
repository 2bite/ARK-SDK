#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTDecorator_BlueprintBase_New_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDecorator_BlueprintBase_New.BTDecorator_BlueprintBase_New_C
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_BlueprintBase_New_C : public UBTDecorator_BlueprintBase
{
public:
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTDecorator_BlueprintBase_New.BTDecorator_BlueprintBase_New_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_BTDecorator_BlueprintBase_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
