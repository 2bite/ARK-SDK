#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TrophyBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TrophyBase.PrimalInventoryBP_TrophyBase_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_TrophyBase_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TrophyBase.PrimalInventoryBP_TrophyBase_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_TrophyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
