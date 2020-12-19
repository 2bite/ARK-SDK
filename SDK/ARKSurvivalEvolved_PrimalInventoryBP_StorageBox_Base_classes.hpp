#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_StorageBox_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_StorageBox_Base.PrimalInventoryBP_StorageBox_Base_C
// 0x0000 (0x0570 - 0x0570)
class UPrimalInventoryBP_StorageBox_Base_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_StorageBox_Base.PrimalInventoryBP_StorageBox_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_StorageBox_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
