#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekSecurityConsole_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_TekSecurityConsole_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekSecurityConsole.PrimalInventoryBP_TekSecurityConsole_C");
		return ptr;
	}


	void OnConsoleUpdated();
	void BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem);
	void ExecuteUbergraph_PrimalInventoryBP_TekSecurityConsole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
