#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_DinoPoopSmall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_DinoPoopSmall.PrimalItemConsumable_DinoPoopSmall_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemConsumable_DinoPoopSmall_C : public UPrimalItemConsumablePoop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_DinoPoopSmall.PrimalItemConsumable_DinoPoopSmall_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumable_DinoPoopSmall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
