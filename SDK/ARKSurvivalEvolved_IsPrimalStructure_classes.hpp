#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsPrimalStructure_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IsPrimalStructure.IsPrimalStructure_C
// 0x0042 (0x00D2 - 0x0090)
class UIsPrimalStructure_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0090(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetBlackboardValueAsObject_ReturnValue;          // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_DynamicCast_AsActor;                               // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPrimalStructure_ReturnValue;                   // 0x00D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsPrimalStructure.IsPrimalStructure_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_IsPrimalStructure(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
