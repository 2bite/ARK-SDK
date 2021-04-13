#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHair_Head_Viking_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockHair_Head_Viking.PrimalItemConsumable_UnlockHair_Head_Viking_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemConsumable_UnlockHair_Head_Viking_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockHair_Head_Viking.PrimalItemConsumable_UnlockHair_Head_Viking_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Viking(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
