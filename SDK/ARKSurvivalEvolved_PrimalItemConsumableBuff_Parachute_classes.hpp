#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableBuff_Parachute_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumableBuff_Parachute.PrimalItemConsumableBuff_Parachute_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemConsumableBuff_Parachute_C : public UPrimalItemConsumableGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableBuff_Parachute.PrimalItemConsumableBuff_Parachute_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemConsumableBuff_Parachute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
