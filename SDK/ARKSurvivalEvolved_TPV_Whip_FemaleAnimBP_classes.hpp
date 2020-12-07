#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_Whip_FemaleAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_Whip_FemaleAnimBP.TPV_Whip_FemaleAnimBP_C
// 0x0000 (0x3A14 - 0x3A14)
class UTPV_Whip_FemaleAnimBP_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_Whip_FemaleAnimBP.TPV_Whip_FemaleAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_TPV_Whip_FemaleAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
