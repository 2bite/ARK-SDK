#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_DodoEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_DodoEgg.PrimalItemConsumable_Kibble_DodoEgg_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_Kibble_DodoEgg_C : public UPrimalItemConsumable_Kibble_Base_XSmall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_DodoEgg.PrimalItemConsumable_Kibble_DodoEgg_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_DodoEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
