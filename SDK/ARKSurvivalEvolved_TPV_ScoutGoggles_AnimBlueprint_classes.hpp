#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_ScoutGoggles_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_ScoutGoggles_AnimBlueprint.TPV_ScoutGoggles_AnimBlueprint_C
// 0x0000 (0x37A5 - 0x37A5)
class UTPV_ScoutGoggles_AnimBlueprint_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_ScoutGoggles_AnimBlueprint.TPV_ScoutGoggles_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_TPV_ScoutGoggles_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
