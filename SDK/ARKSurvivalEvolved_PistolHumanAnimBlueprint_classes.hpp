#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PistolHumanAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PistolHumanAnimBlueprint.PistolHumanAnimBlueprint_C
// 0x0000 (0x3B6C - 0x3B6C)
class UPistolHumanAnimBlueprint_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PistolHumanAnimBlueprint.PistolHumanAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_PistolHumanAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
