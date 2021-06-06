#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Male_Gen2.Xenomorph_Character_BP_Male_Gen2_C
// 0x0000 (0x2A41 - 0x2A41)
class AXenomorph_Character_BP_Male_Gen2_C : public AXenomorph_Character_BP_Male_Lunar_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_Gen2.Xenomorph_Character_BP_Male_Gen2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Xenomorph_Character_BP_Male_Gen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
