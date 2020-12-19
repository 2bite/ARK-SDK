#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Daeodon_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Daeodon_AnimBlueprint.Daeodon_AnimBlueprint_C
// 0x0000 (0x1658 - 0x1658)
class UDaeodon_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneNameInterpSpeed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Daeodon_AnimBlueprint.Daeodon_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Daeodon_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
