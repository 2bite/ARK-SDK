#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Griffin_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Griffin_AnimBlueprint.Griffin_AnimBlueprint_C
// 0x0000 (0x19A0 - 0x19A0)
class UGriffin_AnimBlueprint_C : public UDinoBlueprintBase_RootTransformIK_Diving_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Griffin_AnimBlueprint.Griffin_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Griffin_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
