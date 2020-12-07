#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Turkey_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Turkey_AnimBlueprint.Turkey_AnimBlueprint_C
// 0x0000 (0x1630 - 0x1630)
class UTurkey_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Turkey_AnimBlueprint.Turkey_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Turkey_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
