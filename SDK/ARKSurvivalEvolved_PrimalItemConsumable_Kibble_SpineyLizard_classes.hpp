#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_SpineyLizard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_SpineyLizard.PrimalItemConsumable_Kibble_SpineyLizard_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_Kibble_SpineyLizard_C : public UPrimalItemConsumable_Kibble_Base_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_SpineyLizard.PrimalItemConsumable_Kibble_SpineyLizard_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_SpineyLizard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
