#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_oilPump_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_oilPump.PrimalInventoryBP_oilPump_C
// 0x0000 (0x0595 - 0x0595)
class UPrimalInventoryBP_oilPump_C : public UPrimalInventoryBP_BaseAutoGenerateItems_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_oilPump.PrimalInventoryBP_oilPump_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_oilPump(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
