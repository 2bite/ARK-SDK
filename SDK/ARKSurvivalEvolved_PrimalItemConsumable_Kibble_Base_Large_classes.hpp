#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Base_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_Base_Large.PrimalItemConsumable_Kibble_Base_Large_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_Kibble_Base_Large_C : public UPrimalItemConsumable_Kibble_Base_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_Base_Large.PrimalItemConsumable_Kibble_Base_Large_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif