#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OneShotRifle_FPV_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass OneShotRifle_FPV_AnimBP.OneShotRifle_FPV_AnimBP_C
// 0x0000 (0x1218 - 0x1218)
class UOneShotRifle_FPV_AnimBP_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass OneShotRifle_FPV_AnimBP.OneShotRifle_FPV_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_OneShotRifle_FPV_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
