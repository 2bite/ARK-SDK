#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScoutAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ScoutAnimBlueprint.ScoutAnimBlueprint_C
// 0x0000 (0x1BC8 - 0x1BC8)
class UScoutAnimBlueprint_C : public UDinoBlueprintBase_RootTransform_FlyStrafing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ScoutAnimBlueprint.ScoutAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_ScoutAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
