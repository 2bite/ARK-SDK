#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_Diana_Chest_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_Diana_Chest_AnimBlueprint.SK_Diana_Chest_AnimBlueprint_C
// 0x0000 (0x0480 - 0x0480)
class USK_Diana_Chest_AnimBlueprint_C : public UChest_AnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Diana_Chest_AnimBlueprint.SK_Diana_Chest_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Diana_Chest_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
