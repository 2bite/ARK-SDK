#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Kibble_Moth_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Kibble_Moth.PrimalItemConsumable_Kibble_Moth_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_Kibble_Moth_C : public UPrimalItemConsumable_Kibble_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_Moth.PrimalItemConsumable_Kibble_Moth_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Kibble_Moth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
