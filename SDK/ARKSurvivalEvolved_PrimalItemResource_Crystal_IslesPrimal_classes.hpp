#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Crystal_IslesPrimal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Crystal_IslesPrimal.PrimalItemResource_Crystal_IslesPrimal_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemResource_Crystal_IslesPrimal_C : public UPrimalItemResource_Crystal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Crystal_IslesPrimal.PrimalItemResource_Crystal_IslesPrimal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Crystal_IslesPrimal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
