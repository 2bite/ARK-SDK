#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_Pistol_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_Pistol_AnimBP.FPV_Pistol_AnimBP_C
// 0x0000 (0x1218 - 0x1218)
class UFPV_Pistol_AnimBP_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Pistol_AnimBP.FPV_Pistol_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_Pistol_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
