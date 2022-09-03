#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Arthro_Character_BP_Aberrant_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Arthro_Character_BP_Aberrant_Summoned.Arthro_Character_BP_Aberrant_Summoned_C
// 0x0000 (0x2290 - 0x2290)
class AArthro_Character_BP_Aberrant_Summoned_C : public AArthro_Character_BP_Aberrant_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Arthro_Character_BP_Aberrant_Summoned.Arthro_Character_BP_Aberrant_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Arthro_Character_BP_Aberrant_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
