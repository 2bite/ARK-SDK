#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPV_Slingshot_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPV_Slingshot_AnimBP.FPV_Slingshot_AnimBP_C
// 0x0000 (0x09F1 - 0x09F1)
class UFPV_Slingshot_AnimBP_C : public UFPVBowWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPV_Slingshot_AnimBP.FPV_Slingshot_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_FPV_Slingshot_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
