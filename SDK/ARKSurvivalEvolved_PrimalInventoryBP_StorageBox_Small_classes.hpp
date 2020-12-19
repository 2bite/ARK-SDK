#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_StorageBox_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_StorageBox_Small.PrimalInventoryBP_StorageBox_Small_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_StorageBox_Small_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_StorageBox_Small.PrimalInventoryBP_StorageBox_Small_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_StorageBox_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
