#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Tap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_Tap.PrimalInventoryBP_Tap_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_Tap_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Tap.PrimalInventoryBP_Tap_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_Tap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
