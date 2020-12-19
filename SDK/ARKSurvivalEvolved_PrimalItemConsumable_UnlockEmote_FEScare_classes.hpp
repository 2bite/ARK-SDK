#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_FEScare_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_FEScare.PrimalItemConsumable_UnlockEmote_FEScare_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemConsumable_UnlockEmote_FEScare_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_FEScare.PrimalItemConsumable_UnlockEmote_FEScare_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_FEScare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
