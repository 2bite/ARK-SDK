#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_netGun_FPV_RIG_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass netGun_FPV_RIG_AnimBlueprint.netGun_FPV_RIG_AnimBlueprint_C
// 0x0000 (0x1218 - 0x1218)
class UnetGun_FPV_RIG_AnimBlueprint_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass netGun_FPV_RIG_AnimBlueprint.netGun_FPV_RIG_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_netGun_FPV_RIG_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
