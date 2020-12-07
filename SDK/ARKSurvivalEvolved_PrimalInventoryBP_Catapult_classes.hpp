#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Catapult_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_Catapult.PrimalInventoryBP_Catapult_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_Catapult_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Catapult.PrimalInventoryBP_Catapult_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_Catapult(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
