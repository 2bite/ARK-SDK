#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TPV_Female_Fists_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_Female_Fists_AnimBP.TPV_Female_Fists_AnimBP_C
// 0x0000 (0x37A5 - 0x37A5)
class UTPV_Female_Fists_AnimBP_C : public UTPV_Female_NoWeapon_AnimBlueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_Female_Fists_AnimBP.TPV_Female_Fists_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_TPV_Female_Fists_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif