#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Hungry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Hungry.PrimalItemConsumable_UnlockEmote_Hungry_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_UnlockEmote_Hungry_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Hungry.PrimalItemConsumable_UnlockEmote_Hungry_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Hungry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
