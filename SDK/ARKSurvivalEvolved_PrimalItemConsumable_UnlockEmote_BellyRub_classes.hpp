#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_BellyRub_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_BellyRub.PrimalItemConsumable_UnlockEmote_BellyRub_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_UnlockEmote_BellyRub_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_BellyRub.PrimalItemConsumable_UnlockEmote_BellyRub_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_BellyRub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif