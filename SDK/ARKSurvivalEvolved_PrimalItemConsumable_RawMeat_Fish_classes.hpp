#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_RawMeat_Fish_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_RawMeat_Fish.PrimalItemConsumable_RawMeat_Fish_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemConsumable_RawMeat_Fish_C : public UPrimalItemConsumable_RawMeat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_RawMeat_Fish.PrimalItemConsumable_RawMeat_Fish_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_RawMeat_Fish(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
