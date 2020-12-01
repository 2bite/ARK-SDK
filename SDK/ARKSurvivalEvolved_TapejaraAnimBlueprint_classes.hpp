#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TapejaraAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TapejaraAnimBlueprint.TapejaraAnimBlueprint_C
// 0x0000 (0x1BC8 - 0x1BC8)
class UTapejaraAnimBlueprint_C : public UDinoBlueprintBase_RootTransform_FlyStrafing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TapejaraAnimBlueprint.TapejaraAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_TapejaraAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
