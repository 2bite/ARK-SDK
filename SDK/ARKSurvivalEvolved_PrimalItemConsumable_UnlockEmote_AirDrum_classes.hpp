#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_AirDrum_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_AirDrum.PrimalItemConsumable_UnlockEmote_AirDrum_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemConsumable_UnlockEmote_AirDrum_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_AirDrum.PrimalItemConsumable_UnlockEmote_AirDrum_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_AirDrum(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif