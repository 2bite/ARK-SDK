#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pegomastax_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pegomastax_AIController_BP.Pegomastax_AIController_BP_C
// 0x0007 (0x0920 - 0x0919)
class APegomastax_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	float                                              attackDestinationOffsetWhileWaiting;                      // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pegomastax_AIController_BP.Pegomastax_AIController_BP_C");
		return ptr;
	}


	void UpdateAttackDestinationOffset(bool isInWaitingState);
	void UserConstructionScript();
	void ExecuteUbergraph_Pegomastax_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
