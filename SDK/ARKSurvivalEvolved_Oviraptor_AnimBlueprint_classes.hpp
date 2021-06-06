#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Oviraptor_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Oviraptor_AnimBlueprint.Oviraptor_AnimBlueprint_C
// 0x0000 (0x18B0 - 0x18B0)
class UOviraptor_AnimBlueprint_C : public UDinoBlueprintBase_VariableMovement_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Oviraptor_AnimBlueprint.Oviraptor_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Oviraptor_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
