#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Troodon_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Troodon_AnimBlueprint.Troodon_AnimBlueprint_C
// 0x0000 (0x1630 - 0x1630)
class UTroodon_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Troodon_AnimBlueprint.Troodon_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Troodon_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
