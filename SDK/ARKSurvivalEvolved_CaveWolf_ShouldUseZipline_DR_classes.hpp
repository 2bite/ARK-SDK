#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_ShouldUseZipline_DR_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveWolf_ShouldUseZipline_DR.CaveWolf_ShouldUseZipline_DR_C
// 0x0060 (0x00F0 - 0x0090)
class UCaveWolf_ShouldUseZipline_DR_C : public UBTDecorator_BlueprintBase
{
public:
	float                                              MinDeltaZToTarget;                                        // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetZiplineKey;                                         // 0x0098(0x0028) (Edit, BlueprintVisible)
	bool                                               UseDotProductCheck;                                       // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00C8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_ShouldUseZipline_DR.CaveWolf_ShouldUseZipline_DR_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_CaveWolf_ShouldUseZipline_DR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
