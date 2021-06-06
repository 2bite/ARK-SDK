#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem.ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C
// 0x0010 (0x0260 - 0x0250)
class UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C : public UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem
{
public:
	class UImage*                                      ItemIconImage;                                            // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  ItemQuantityTextBlock;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem.ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
