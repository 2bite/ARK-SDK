#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RifleHumanAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass RifleHumanAnimBlueprint.RifleHumanAnimBlueprint_C
// 0x0000 (0x3B6C - 0x3B6C)
class URifleHumanAnimBlueprint_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RifleHumanAnimBlueprint.RifleHumanAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_RifleHumanAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
