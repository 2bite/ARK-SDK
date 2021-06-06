#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItem_SlotBar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_SlotBar.DataListEntryWidgetPrimalItem_SlotBar_C
// 0x0008 (0x0308 - 0x0300)
class UDataListEntryWidgetPrimalItem_SlotBar_C : public UDataListEntryWidgetPrimalItem_C
{
public:
	class UDataListEntryButton_PrimalItem*             TheDataListButton;                                        // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_SlotBar.DataListEntryWidgetPrimalItem_SlotBar_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetPrimalItem_SlotBar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
