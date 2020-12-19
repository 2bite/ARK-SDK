#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_camelsaurus_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass camelsaurus_AnimBlueprint.camelsaurus_AnimBlueprint_C
// 0x0000 (0x1658 - 0x1658)
class Ucamelsaurus_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneNameInterpSpeed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass camelsaurus_AnimBlueprint.camelsaurus_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_camelsaurus_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
