#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Base_Battery_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Base_Battery.PrimalItem_Base_Battery_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItem_Base_Battery_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Base_Battery.PrimalItem_Base_Battery_C");
		return ptr;
	}


	bool BPForceAllowRemoteAddToInventory(class UPrimalInventoryComponent** toInventory);
	void ExecuteUbergraph_PrimalItem_Base_Battery(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
