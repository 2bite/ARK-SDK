#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Owl_Character_BP_Eden_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Owl_Character_BP_Eden.Owl_Character_BP_Eden_C
// 0x0000 (0x25D7 - 0x25D7)
class AOwl_Character_BP_Eden_C : public AOwl_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Owl_Character_BP_Eden.Owl_Character_BP_Eden_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Owl_Character_BP_Eden(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
