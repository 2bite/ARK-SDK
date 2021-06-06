#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_Flamethrower_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_Flamethrower.PrimalItemAmmo_Flamethrower_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemAmmo_Flamethrower_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_Flamethrower.PrimalItemAmmo_Flamethrower_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_Flamethrower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
