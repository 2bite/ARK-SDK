#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_TekHandBlades_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C
// 0x0000 (0x18CE - 0x18CE)
class UFPV_TekHandBlades_AnimBP_C : public UFPVWeaponAnimBP_Base_Carrying_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_TekHandBlades_AnimBP.FPV_TekHandBlades_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPV_TekHandBlades_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
