#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Archa_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Archa_AnimBlueprint.Archa_AnimBlueprint_C
// 0x0000 (0x1AB2 - 0x1AB2)
class UArcha_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_Archa_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Archa_AnimBlueprint.Archa_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Archa_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
