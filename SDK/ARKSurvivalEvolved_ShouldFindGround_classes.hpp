#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldFindGround_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShouldFindGround.ShouldFindGround_C
// 0x0030 (0x00C0 - 0x0090)
class UShouldFindGround_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      LastWanderTime;                                           // 0x0090(0x0028) (Edit, BlueprintVisible)
	float                                              MaxTimeOnTree;                                            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomLandLikelihood;                                     // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShouldFindGround.ShouldFindGround_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_ShouldFindGround(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
