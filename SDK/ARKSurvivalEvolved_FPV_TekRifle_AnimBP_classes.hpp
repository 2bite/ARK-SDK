#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_TekRifle_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_TekRifle_AnimBP.FPV_TekRifle_AnimBP_C
// 0x0000 (0x1348 - 0x1348)
class UFPV_TekRifle_AnimBP_C : public UFPVWeaponAnimBP_Base_TekRifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_TekRifle_AnimBP.FPV_TekRifle_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_TekRifle_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
