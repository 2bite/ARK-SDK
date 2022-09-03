#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_Sword_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_Sword_AnimBP.FPV_Sword_AnimBP_C
// 0x0000 (0x09B0 - 0x09B0)
class UFPV_Sword_AnimBP_C : public UFPVMeleeWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Sword_AnimBP.FPV_Sword_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_Sword_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
