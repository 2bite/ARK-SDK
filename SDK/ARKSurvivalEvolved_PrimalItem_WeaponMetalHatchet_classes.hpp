#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponMetalHatchet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponMetalHatchet.PrimalItem_WeaponMetalHatchet_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItem_WeaponMetalHatchet_C : public UPrimalItem_WeaponBaseHatchet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponMetalHatchet.PrimalItem_WeaponMetalHatchet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponMetalHatchet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
