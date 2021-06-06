#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItem_QuickItem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_QuickItem.DataListEntryWidgetPrimalItem_QuickItem_C
// 0x0010 (0x0310 - 0x0300)
class UDataListEntryWidgetPrimalItem_QuickItem_C : public UDataListEntryWidgetPrimalItem_C
{
public:
	class UMenuAnchor*                                 CtxMenu;                                                  // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryButton_PrimalItem*             TheDataListButton;                                        // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_QuickItem.DataListEntryWidgetPrimalItem_QuickItem_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
