#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_C4_FPV_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass C4_FPV_AnimBP.C4_FPV_AnimBP_C
// 0x0000 (0x0914 - 0x0914)
class UC4_FPV_AnimBP_C : public UFPVPlacerWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass C4_FPV_AnimBP.C4_FPV_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_C4_FPV_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
