#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bee_Queen_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Bee_Queen_AnimBlueprint.Bee_Queen_AnimBlueprint_C
// 0x0000 (0x1198 - 0x1198)
class UBee_Queen_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bee_Queen_AnimBlueprint.Bee_Queen_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Bee_Queen_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
