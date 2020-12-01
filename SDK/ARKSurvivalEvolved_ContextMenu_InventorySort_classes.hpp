#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenu_InventorySort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ContextMenu_InventorySort.ContextMenu_InventorySort_C
// 0x0000 (0x0288 - 0x0288)
class UContextMenu_InventorySort_C : public UContextMenu_InventorySort
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenu_InventorySort.ContextMenu_InventorySort_C");
		return ptr;
	}


	void ExecuteUbergraph_ContextMenu_InventorySort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
