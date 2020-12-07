#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsCrateObject_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IsCrateObject.IsCrateObject_C
// 0x0039 (0x00C9 - 0x0090)
class UIsCrateObject_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      CrateObjectKey;                                           // 0x0090(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetBlackboardValueAsObject_ReturnValue;          // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue;              // 0x00C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsCrateObject.IsCrateObject_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_IsCrateObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
