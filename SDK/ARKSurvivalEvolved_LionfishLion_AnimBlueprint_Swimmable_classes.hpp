#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLion_AnimBlueprint_Swimmable_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass LionfishLion_AnimBlueprint_Swimmable.LionfishLion_AnimBlueprint_Swimmable_C
// 0x0000 (0x1980 - 0x1980)
class ULionfishLion_AnimBlueprint_Swimmable_C : public UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_With_Swimming_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LionfishLion_AnimBlueprint_Swimmable.LionfishLion_AnimBlueprint_Swimmable_C");
		return ptr;
	}


	void ExecuteUbergraph_LionfishLion_AnimBlueprint_Swimmable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
