#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Decorator_GasBags_AttackIndexEquals_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Decorator_GasBags_AttackIndexEquals.Decorator_GasBags_AttackIndexEquals_C
// 0x003D (0x00CD - 0x0090)
class UDecorator_GasBags_AttackIndexEquals_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      AttackIndexKey;                                           // 0x0090(0x0028) (Edit, BlueprintVisible)
	int                                                AttackIndex;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_OwnerActor;                                  // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetBlackboardValueAsInt_ReturnValue;             // 0x00C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x00CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Decorator_GasBags_AttackIndexEquals.Decorator_GasBags_AttackIndexEquals_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_Decorator_GasBags_AttackIndexEquals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
