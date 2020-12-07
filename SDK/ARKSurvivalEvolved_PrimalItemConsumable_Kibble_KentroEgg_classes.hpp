#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_KentroEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_KentroEgg.PrimalItemConsumable_Kibble_KentroEgg_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_Kibble_KentroEgg_C : public UPrimalItemConsumable_Kibble_Base_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_KentroEgg.PrimalItemConsumable_Kibble_KentroEgg_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_KentroEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
