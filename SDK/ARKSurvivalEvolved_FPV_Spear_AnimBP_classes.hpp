#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_Spear_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_Spear_AnimBP.FPV_Spear_AnimBP_C
// 0x0000 (0x0879 - 0x0879)
class UFPV_Spear_AnimBP_C : public UFPVThrowWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Spear_AnimBP.FPV_Spear_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_Spear_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
