#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_CryoFridge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_CryoFridge.PrimalInventoryBP_CryoFridge_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_CryoFridge_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_CryoFridge.PrimalInventoryBP_CryoFridge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_CryoFridge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
