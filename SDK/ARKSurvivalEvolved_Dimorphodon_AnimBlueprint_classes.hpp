#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorphodon_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Dimorphodon_AnimBlueprint.Dimorphodon_AnimBlueprint_C
// 0x0000 (0x1198 - 0x1198)
class UDimorphodon_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dimorphodon_AnimBlueprint.Dimorphodon_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Dimorphodon_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
