#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_ArgentEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_ArgentEgg.PrimalItemConsumable_Kibble_ArgentEgg_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_Kibble_ArgentEgg_C : public UPrimalItemConsumable_Kibble_Base_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_ArgentEgg.PrimalItemConsumable_Kibble_ArgentEgg_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_ArgentEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
