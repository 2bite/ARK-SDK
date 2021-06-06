#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpinoBipedAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SpinoBipedAnimBlueprint.SpinoBipedAnimBlueprint_C
// 0x0000 (0x169C - 0x169C)
class USpinoBipedAnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpinoBipedAnimBlueprint.SpinoBipedAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SpinoBipedAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
