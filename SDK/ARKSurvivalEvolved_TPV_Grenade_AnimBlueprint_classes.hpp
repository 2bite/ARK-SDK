#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_Grenade_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_Grenade_AnimBlueprint.TPV_Grenade_AnimBlueprint_C
// 0x0000 (0x3A14 - 0x3A14)
class UTPV_Grenade_AnimBlueprint_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_Grenade_AnimBlueprint.TPV_Grenade_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_TPV_Grenade_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
