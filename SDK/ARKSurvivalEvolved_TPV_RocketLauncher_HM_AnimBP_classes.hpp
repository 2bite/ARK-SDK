#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_RocketLauncher_HM_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_RocketLauncher_HM_AnimBP.TPV_RocketLauncher_HM_AnimBP_C
// 0x0000 (0x3B6C - 0x3B6C)
class UTPV_RocketLauncher_HM_AnimBP_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_RocketLauncher_HM_AnimBP.TPV_RocketLauncher_HM_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_TPV_RocketLauncher_HM_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
