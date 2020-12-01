#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_Gift_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_Gift.PrimalInventoryBP_Gift_C
// 0x0000 (0x0538 - 0x0538)
class UPrimalInventoryBP_Gift_C : public UPrimalInventoryBP_StorageBox_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_Gift.PrimalInventoryBP_Gift_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_Gift(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
