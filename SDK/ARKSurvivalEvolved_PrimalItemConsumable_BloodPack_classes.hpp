#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_BloodPack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_BloodPack.PrimalItemConsumable_BloodPack_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemConsumable_BloodPack_C : public UPrimalItemConsumableEatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_BloodPack.PrimalItemConsumable_BloodPack_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_BloodPack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
