#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_AnkyloEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_AnkyloEgg.PrimalItemConsumable_Kibble_AnkyloEgg_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemConsumable_Kibble_AnkyloEgg_C : public UPrimalItemConsumable_Kibble_Base_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_AnkyloEgg.PrimalItemConsumable_Kibble_AnkyloEgg_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_AnkyloEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
