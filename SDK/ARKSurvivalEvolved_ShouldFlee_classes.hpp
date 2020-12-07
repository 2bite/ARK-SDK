#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldFlee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShouldFlee.ShouldFlee_C
// 0x002C (0x00A4 - 0x0078)
class UShouldFlee_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      LastTreeAttachTime;                                       // 0x0078(0x0028) (Edit, BlueprintVisible)
	float                                              FleeInterval;                                             // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShouldFlee.ShouldFlee_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_ShouldFlee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
