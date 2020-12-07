#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Phoenix_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Phoenix_AnimBlueprint.Phoenix_AnimBlueprint_C
// 0x0000 (0x1198 - 0x1198)
class UPhoenix_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Phoenix_AnimBlueprint.Phoenix_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Phoenix_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
