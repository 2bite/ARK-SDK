#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Nameless_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Nameless_AnimBlueprint.Nameless_AnimBlueprint_C
// 0x0000 (0x168C - 0x168C)
class UNameless_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneNameInterpSpeed_FallingOffset_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Nameless_AnimBlueprint.Nameless_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Nameless_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
