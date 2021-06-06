#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_HeavyTurret_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_HeavyTurret_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_HeavyTurret.PrimalInventoryBP_HeavyTurret_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_HeavyTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
