#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Evil_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Evil.PrimalItemConsumable_UnlockEmote_Evil_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemConsumable_UnlockEmote_Evil_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Evil.PrimalItemConsumable_UnlockEmote_Evil_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Evil(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
