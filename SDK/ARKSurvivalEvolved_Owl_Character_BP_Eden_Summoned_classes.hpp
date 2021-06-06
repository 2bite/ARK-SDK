#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Owl_Character_BP_Eden_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Owl_Character_BP_Eden_Summoned.Owl_Character_BP_Eden_Summoned_C
// 0x0000 (0x25B7 - 0x25B7)
class AOwl_Character_BP_Eden_Summoned_C : public AOwl_Character_BP_Eden_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Owl_Character_BP_Eden_Summoned.Owl_Character_BP_Eden_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Owl_Character_BP_Eden_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
