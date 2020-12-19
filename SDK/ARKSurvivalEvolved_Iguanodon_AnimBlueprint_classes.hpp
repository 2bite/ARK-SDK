#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Iguanodon_AnimBlueprint.Iguanodon_AnimBlueprint_C
// 0x0000 (0x169C - 0x169C)
class UIguanodon_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Iguanodon_AnimBlueprint.Iguanodon_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Iguanodon_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
