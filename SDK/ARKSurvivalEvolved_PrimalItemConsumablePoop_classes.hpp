#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumablePoop_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumablePoop.PrimalItemConsumablePoop_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemConsumablePoop_C : public UPrimalItemConsumable_Fertilizer_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumablePoop.PrimalItemConsumablePoop_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumablePoop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
