#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_CannonShell_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_CannonShell.PrimalItemAmmo_CannonShell_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemAmmo_CannonShell_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_CannonShell.PrimalItemAmmo_CannonShell_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_CannonShell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
