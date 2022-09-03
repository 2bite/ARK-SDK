#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlug_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BrainSlug_AnimBlueprint.BrainSlug_AnimBlueprint_C
// 0x0000 (0x182A - 0x182A)
class UBrainSlug_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_Mounted_AllowBackwardsMove_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BrainSlug_AnimBlueprint.BrainSlug_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_BrainSlug_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
