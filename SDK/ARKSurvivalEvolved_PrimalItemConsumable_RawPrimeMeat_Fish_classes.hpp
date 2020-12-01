#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_RawPrimeMeat_Fish_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_RawPrimeMeat_Fish.PrimalItemConsumable_RawPrimeMeat_Fish_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_RawPrimeMeat_Fish_C : public UPrimalItemConsumable_RawPrimeMeat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_RawPrimeMeat_Fish.PrimalItemConsumable_RawPrimeMeat_Fish_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_RawPrimeMeat_Fish(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
