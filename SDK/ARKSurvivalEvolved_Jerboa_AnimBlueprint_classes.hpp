#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Jerboa_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Jerboa_AnimBlueprint.Jerboa_AnimBlueprint_C
// 0x0000 (0x16B0 - 0x16B0)
class UJerboa_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_Mounted_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Jerboa_AnimBlueprint.Jerboa_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Jerboa_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
