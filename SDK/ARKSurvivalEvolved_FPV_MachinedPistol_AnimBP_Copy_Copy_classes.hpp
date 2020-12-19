#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_MachinedPistol_AnimBP_Copy_Copy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_MachinedPistol_AnimBP_Copy_Copy.FPV_MachinedPistol_AnimBP_Copy_Copy_C
// 0x0000 (0x08FF - 0x08FF)
class UFPV_MachinedPistol_AnimBP_Copy_Copy_C : public UFPVWeaponAnimBP_Base_MachinePistol_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_MachinedPistol_AnimBP_Copy_Copy.FPV_MachinedPistol_AnimBP_Copy_Copy_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_MachinedPistol_AnimBP_Copy_Copy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
