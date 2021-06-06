#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Megalania_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_Megalania.PrimalItemConsumable_Kibble_Megalania_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemConsumable_Kibble_Megalania_C : public UPrimalItemConsumable_Kibble_Base_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_Megalania.PrimalItemConsumable_Kibble_Megalania_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_Megalania(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
