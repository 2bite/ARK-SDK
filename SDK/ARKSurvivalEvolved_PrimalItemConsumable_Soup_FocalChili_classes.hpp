#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Soup_FocalChili_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Soup_FocalChili.PrimalItemConsumable_Soup_FocalChili_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_Soup_FocalChili_C : public UPrimalItemConsumableEatable_BuffingSoup_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Soup_FocalChili.PrimalItemConsumable_Soup_FocalChili_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_Soup_FocalChili(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
