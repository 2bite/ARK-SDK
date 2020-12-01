#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_RefinedTranqDart_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_RefinedTranqDart.PrimalItemAmmo_RefinedTranqDart_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemAmmo_RefinedTranqDart_C : public UPrimalItemAmmo_TranqDart_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_RefinedTranqDart.PrimalItemAmmo_RefinedTranqDart_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_RefinedTranqDart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
