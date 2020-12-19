#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_magnifyingGlass_FPV_RIG_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass magnifyingGlass_FPV_RIG_AnimBP.magnifyingGlass_FPV_RIG_AnimBP_C
// 0x0000 (0x1218 - 0x1218)
class UmagnifyingGlass_FPV_RIG_AnimBP_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass magnifyingGlass_FPV_RIG_AnimBP.magnifyingGlass_FPV_RIG_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_magnifyingGlass_FPV_RIG_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
