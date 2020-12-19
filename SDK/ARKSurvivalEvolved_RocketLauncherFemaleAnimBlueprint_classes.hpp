#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RocketLauncherFemaleAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass RocketLauncherFemaleAnimBlueprint.RocketLauncherFemaleAnimBlueprint_C
// 0x0000 (0x3A14 - 0x3A14)
class URocketLauncherFemaleAnimBlueprint_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RocketLauncherFemaleAnimBlueprint.RocketLauncherFemaleAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_RocketLauncherFemaleAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
