#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Leech_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Leech_AnimBlueprint.Leech_AnimBlueprint_C
// 0x0000 (0x1630 - 0x1630)
class ULeech_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Leech_AnimBlueprint.Leech_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Leech_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
