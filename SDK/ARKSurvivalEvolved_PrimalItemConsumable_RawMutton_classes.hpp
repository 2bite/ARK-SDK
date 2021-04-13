#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_RawMutton_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_RawMutton.PrimalItemConsumable_RawMutton_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_RawMutton_C : public UPrimalItemConsumable_RawPrimeMeat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_RawMutton.PrimalItemConsumable_RawMutton_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_RawMutton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
