#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_TekSniper_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_TekSniper_AnimBP.FPV_TekSniper_AnimBP_C
// 0x0000 (0x1330 - 0x1330)
class UFPV_TekSniper_AnimBP_C : public UFPVWeaponAnimBP_Base_TekSniper_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_TekSniper_AnimBP.FPV_TekSniper_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_TekSniper_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
