#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnderwaterEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnderwaterEgg.PrimalItemConsumable_UnderwaterEgg_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_UnderwaterEgg_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnderwaterEgg.PrimalItemConsumable_UnderwaterEgg_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
