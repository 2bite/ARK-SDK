#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moth_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Moth_AnimBlueprint.Moth_AnimBlueprint_C
// 0x0000 (0x1570 - 0x1570)
class UMoth_AnimBlueprint_C : public UDinoBlueprintBase_RootTransformIK_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Moth_AnimBlueprint.Moth_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Moth_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
