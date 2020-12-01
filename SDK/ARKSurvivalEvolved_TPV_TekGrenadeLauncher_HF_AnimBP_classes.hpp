#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_TekGrenadeLauncher_HF_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_TekGrenadeLauncher_HF_AnimBP.TPV_TekGrenadeLauncher_HF_AnimBP_C
// 0x0000 (0x3A14 - 0x3A14)
class UTPV_TekGrenadeLauncher_HF_AnimBP_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_TekGrenadeLauncher_HF_AnimBP.TPV_TekGrenadeLauncher_HF_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_TPV_TekGrenadeLauncher_HF_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
