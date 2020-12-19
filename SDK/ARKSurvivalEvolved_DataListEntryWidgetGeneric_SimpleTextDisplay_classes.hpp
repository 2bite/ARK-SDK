#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetGeneric_SimpleTextDisplay_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_SimpleTextDisplay.DataListEntryWidgetGeneric_SimpleTextDisplay_C
// 0x0008 (0x02F8 - 0x02F0)
class UDataListEntryWidgetGeneric_SimpleTextDisplay_C : public UDataListEntryWidget
{
public:
	class UDataListEntryButton*                        MyDataListButton;                                         // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_SimpleTextDisplay.DataListEntryWidgetGeneric_SimpleTextDisplay_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetGeneric_SimpleTextDisplay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
