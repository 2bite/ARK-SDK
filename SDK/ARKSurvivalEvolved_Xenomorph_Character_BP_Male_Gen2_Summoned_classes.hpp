#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_Gen2_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Male_Gen2_Summoned.Xenomorph_Character_BP_Male_Gen2_Summoned_C
// 0x0000 (0x2A3A - 0x2A3A)
class AXenomorph_Character_BP_Male_Gen2_Summoned_C : public AXenomorph_Character_BP_Male_InitialBuryOnly_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_Gen2_Summoned.Xenomorph_Character_BP_Male_Gen2_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Xenomorph_Character_BP_Male_Gen2_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
