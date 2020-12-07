#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PurloviaAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass PurloviaAnimBlueprint.PurloviaAnimBlueprint_C
// 0x0000 (0x1658 - 0x1658)
class UPurloviaAnimBlueprint_C : public UDinoBlueprintBase_RootBoneNameInterpSpeed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PurloviaAnimBlueprint.PurloviaAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_PurloviaAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
