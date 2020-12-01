#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_InventoryRadialSelectorBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InventoryRadialSelectorBP.InventoryRadialSelectorBP_C
// 0x0000 (0x00E0 - 0x00E0)
class UInventoryRadialSelectorBP_C : public URadialSelectorHUD_Inventory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryRadialSelectorBP.InventoryRadialSelectorBP_C");
		return ptr;
	}


	void ExecuteUbergraph_InventoryRadialSelectorBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
