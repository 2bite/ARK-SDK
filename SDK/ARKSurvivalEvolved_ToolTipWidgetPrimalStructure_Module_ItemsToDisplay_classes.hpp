#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalStructure_Module_ItemsToDisplay_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplay.ToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C
// 0x0010 (0x0268 - 0x0258)
class UToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C : public UToolTipWidgetPrimalStructureModuleItemsToDisplay
{
public:
	class UTextBlock*                                  HeaderTextBlock;                                          // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UScrollBox*                                  ItemsToDisplayContainer;                                  // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplay.ToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetPrimalStructure_Module_ItemsToDisplay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
