#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NamelessOffspring_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass NamelessOffspring_AnimBlueprint.NamelessOffspring_AnimBlueprint_C
// 0x0000 (0x1658 - 0x1658)
class UNamelessOffspring_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneNameInterpSpeed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass NamelessOffspring_AnimBlueprint.NamelessOffspring_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_NamelessOffspring_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
