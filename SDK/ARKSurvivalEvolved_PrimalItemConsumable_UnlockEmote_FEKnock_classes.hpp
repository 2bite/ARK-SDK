#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_FEKnock_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_FEKnock.PrimalItemConsumable_UnlockEmote_FEKnock_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemConsumable_UnlockEmote_FEKnock_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_FEKnock.PrimalItemConsumable_UnlockEmote_FEKnock_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_FEKnock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
