#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Daeodon_Character_BP_Eden_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Daeodon_Character_BP_Eden_Summoned.Daeodon_Character_BP_Eden_Summoned_C
// 0x0000 (0x23F5 - 0x23F5)
class ADaeodon_Character_BP_Eden_Summoned_C : public ADaeodon_Character_BP_Eden_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Daeodon_Character_BP_Eden_Summoned.Daeodon_Character_BP_Eden_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Daeodon_Character_BP_Eden_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
