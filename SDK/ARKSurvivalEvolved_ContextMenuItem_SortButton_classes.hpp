#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ContextMenuItem_SortButton_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ContextMenuItem_SortButton.ContextMenuItem_SortButton_C
// 0x0030 (0x0360 - 0x0330)
class UContextMenuItem_SortButton_C : public UContextMenuItem_Sort
{
public:
	class UImage*                                      asc;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         Button;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   CheckBox;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Desc;                                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInputKeyDisplayWidget*                      ShortcutKey;                                              // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             SortDir;                                                  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenuItem_SortButton.ContextMenuItem_SortButton_C");
		return ptr;
	}


	void ExecuteUbergraph_ContextMenuItem_SortButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
