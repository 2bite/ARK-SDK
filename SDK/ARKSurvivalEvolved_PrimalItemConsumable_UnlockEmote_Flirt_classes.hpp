#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockEmote_Flirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Flirt.PrimalItemConsumable_UnlockEmote_Flirt_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemConsumable_UnlockEmote_Flirt_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockEmote_Flirt.PrimalItemConsumable_UnlockEmote_Flirt_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockEmote_Flirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif