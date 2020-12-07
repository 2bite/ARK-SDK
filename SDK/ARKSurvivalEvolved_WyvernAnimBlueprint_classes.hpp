#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvernAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass WyvernAnimBlueprint.WyvernAnimBlueprint_C
// 0x0000 (0x15C1 - 0x15C1)
class UWyvernAnimBlueprint_C : public UDinoBlueprintBase_RootTransformIK_FullFlight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass WyvernAnimBlueprint.WyvernAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_WyvernAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
