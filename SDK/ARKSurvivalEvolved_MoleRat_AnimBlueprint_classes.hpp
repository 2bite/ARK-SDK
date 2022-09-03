#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MoleRat_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MoleRat_AnimBlueprint.MoleRat_AnimBlueprint_C
// 0x0000 (0x169C - 0x169C)
class UMoleRat_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MoleRat_AnimBlueprint.MoleRat_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_MoleRat_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
