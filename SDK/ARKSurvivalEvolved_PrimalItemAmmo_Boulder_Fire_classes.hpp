#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_Boulder_Fire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_Boulder_Fire.PrimalItemAmmo_Boulder_Fire_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemAmmo_Boulder_Fire_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_Boulder_Fire.PrimalItemAmmo_Boulder_Fire_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_Boulder_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
