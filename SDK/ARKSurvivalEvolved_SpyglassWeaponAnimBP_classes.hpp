#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpyglassWeaponAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SpyglassWeaponAnimBP.SpyglassWeaponAnimBP_C
// 0x0000 (0x1218 - 0x1218)
class USpyglassWeaponAnimBP_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpyglassWeaponAnimBP.SpyglassWeaponAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SpyglassWeaponAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
