#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Narcotic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Narcotic.PrimalItemConsumable_Narcotic_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_Narcotic_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Narcotic.PrimalItemConsumable_Narcotic_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Narcotic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
