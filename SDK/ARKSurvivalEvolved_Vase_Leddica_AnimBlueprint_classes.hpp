#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Vase_Leddica_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Vase_Leddica_AnimBlueprint.Vase_Leddica_AnimBlueprint_C
// 0x0000 (0x0480 - 0x0480)
class UVase_Leddica_AnimBlueprint_C : public UChest_AnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Vase_Leddica_AnimBlueprint.Vase_Leddica_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Vase_Leddica_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
