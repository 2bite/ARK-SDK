#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Eel_AIController_BP_Tamed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Eel_AIController_BP_Tamed.Eel_AIController_BP_Tamed_C
// 0x0000 (0x0919 - 0x0919)
class AEel_AIController_BP_Tamed_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Eel_AIController_BP_Tamed.Eel_AIController_BP_Tamed_C");
		return ptr;
	}


	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ExecuteUbergraph_Eel_AIController_BP_Tamed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
