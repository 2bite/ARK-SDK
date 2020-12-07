#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Microraptor_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Microraptor_AIController_BP.Microraptor_AIController_BP_C
// 0x000C (0x0925 - 0x0919)
class AMicroraptor_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	float                                              NonRiderTargetingRange;                                   // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RiderTargetingBiasMultiplier;                             // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTest;                                                    // 0x0924(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Microraptor_AIController_BP.Microraptor_AIController_BP_C");
		return ptr;
	}


	bool Is_Target_Good(class AActor* Target, class AMicroraptor_Character_BP_C* Microraptor);
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ExecuteUbergraph_Microraptor_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
