#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Grill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_Grill.PrimalInventoryBP_Grill_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_Grill_C : public UPrimalInventoryBP_BaseFuelBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Grill.PrimalInventoryBP_Grill_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_Grill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
