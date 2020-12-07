#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Male_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C
// 0x0000 (0x093A - 0x093A)
class AXenomorph_Male_AIController_BP_C : public AXenomorph_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Male_AIController_BP.Xenomorph_Male_AIController_BP_C");
		return ptr;
	}


	bool ShouldIgnoreAggression(class UObject** Target);
	void UserConstructionScript();
	void ExecuteUbergraph_Xenomorph_Male_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
