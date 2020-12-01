#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Panic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Panic.PrimalItemConsumable_UnlockEmote_Panic_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_UnlockEmote_Panic_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Panic.PrimalItemConsumable_UnlockEmote_Panic_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Panic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
