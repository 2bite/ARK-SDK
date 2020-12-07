#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Male_AIController_BP_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C
// 0x0000 (0x093A - 0x093A)
class AXenomorph_Male_AIController_BP_Corrupt_C : public AXenomorph_Male_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Male_AIController_BP_Corrupt.Xenomorph_Male_AIController_BP_Corrupt_C");
		return ptr;
	}


	bool BPShouldNotifyAnyNeighbor(class APrimalDinoCharacter** neighbor);
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	bool BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor);
	void UserConstructionScript();
	void ExecuteUbergraph_Xenomorph_Male_AIController_BP_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
