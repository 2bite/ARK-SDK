#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetFolder_New_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetFolder_New.DataListEntryWidgetFolder_New_C
// 0x0010 (0x0310 - 0x0300)
class UDataListEntryWidgetFolder_New_C : public UDataListEntryWidgetPrimalItem_C
{
public:
	class UMenuAnchor*                                 CtxMenu;                                                  // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryButton_PrimalFolder*           DataListEntryButton_PrimalFolder_1;                       // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetFolder_New.DataListEntryWidgetFolder_New_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetFolder_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
