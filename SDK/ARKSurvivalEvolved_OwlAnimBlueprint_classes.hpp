#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OwlAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass OwlAnimBlueprint.OwlAnimBlueprint_C
// 0x0000 (0x19A0 - 0x19A0)
class UOwlAnimBlueprint_C : public UDinoBlueprintBase_RootTransformIK_Diving_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass OwlAnimBlueprint.OwlAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_OwlAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
