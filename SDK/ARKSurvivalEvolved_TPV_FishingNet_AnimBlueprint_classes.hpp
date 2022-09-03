#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_FishingNet_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_FishingNet_AnimBlueprint.TPV_FishingNet_AnimBlueprint_C
// 0x0000 (0x3B6C - 0x3B6C)
class UTPV_FishingNet_AnimBlueprint_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_FishingNet_AnimBlueprint.TPV_FishingNet_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_TPV_FishingNet_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
