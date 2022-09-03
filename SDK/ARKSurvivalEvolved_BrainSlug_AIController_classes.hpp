#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlug_AIController_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BrainSlug_AIController.BrainSlug_AIController_C
// 0x0000 (0x0919 - 0x0919)
class ABrainSlug_AIController_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BrainSlug_AIController.BrainSlug_AIController_C");
		return ptr;
	}


	void ChangedAITarget();
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void ReceiveDestroyed();
	void UserConstructionScript();
	void ExecuteUbergraph_BrainSlug_AIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
