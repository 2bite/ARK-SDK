#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_ArrowFlame_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_ArrowFlame.PrimalItemAmmo_ArrowFlame_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemAmmo_ArrowFlame_C : public UPrimalItemAmmo_ArrowBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_ArrowFlame.PrimalItemAmmo_ArrowFlame_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_ArrowFlame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
