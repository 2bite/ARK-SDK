#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TamingListUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TamingListUI.TamingListUI_C
// 0x0028 (0x0658 - 0x0630)
class UTamingListUI_C : public UUI_TamingList
{
public:
	class UCustomButtonWidget*                         ClearCompletedButton;                                     // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         HideTrackersButton;                                       // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            SearchTextBox;                                            // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         TrackAllButton;                                           // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         UntrackAllButton;                                         // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TamingListUI.TamingListUI_C");
		return ptr;
	}


	void ExecuteUbergraph_TamingListUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
