#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_Scissors_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_Scissors_AnimBP.FPV_Scissors_AnimBP_C
// 0x0000 (0x09B0 - 0x09B0)
class UFPV_Scissors_AnimBP_C : public UFPVMeleeWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Scissors_AnimBP.FPV_Scissors_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_Scissors_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
