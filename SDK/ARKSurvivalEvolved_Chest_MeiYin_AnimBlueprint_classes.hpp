#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Chest_MeiYin_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Chest_MeiYin_AnimBlueprint.Chest_MeiYin_AnimBlueprint_C
// 0x0000 (0x0480 - 0x0480)
class UChest_MeiYin_AnimBlueprint_C : public UChest_AnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Chest_MeiYin_AnimBlueprint.Chest_MeiYin_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Chest_MeiYin_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
