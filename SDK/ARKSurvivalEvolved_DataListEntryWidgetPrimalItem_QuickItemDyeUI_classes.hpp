#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItem_QuickItemDyeUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_QuickItemDyeUI.DataListEntryWidgetPrimalItem_QuickItemDyeUI_C
// 0x0010 (0x0300 - 0x02F0)
class UDataListEntryWidgetPrimalItem_QuickItemDyeUI_C : public UDataListEntryWidget
{
public:
	class UMenuAnchor*                                 CtxMenu;                                                  // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryButton_PrimalItem*             TheDataListButton;                                        // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_QuickItemDyeUI.DataListEntryWidgetPrimalItem_QuickItemDyeUI_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItemDyeUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
