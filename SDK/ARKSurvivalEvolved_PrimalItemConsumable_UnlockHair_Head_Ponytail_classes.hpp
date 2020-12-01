#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnlockHair_Head_Ponytail_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_UnlockHair_Head_Ponytail.PrimalItemConsumable_UnlockHair_Head_Ponytail_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemConsumable_UnlockHair_Head_Ponytail_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnlockHair_Head_Ponytail.PrimalItemConsumable_UnlockHair_Head_Ponytail_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_UnlockHair_Head_Ponytail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
