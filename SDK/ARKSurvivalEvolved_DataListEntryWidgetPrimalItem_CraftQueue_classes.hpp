#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItem_CraftQueue_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_CraftQueue.DataListEntryWidgetPrimalItem_CraftQueue_C
// 0x0008 (0x02F8 - 0x02F0)
class UDataListEntryWidgetPrimalItem_CraftQueue_C : public UDataListEntryWidget
{
public:
	class UDataListEntryButton_PrimalItem*             TheDataListButton;                                        // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_CraftQueue.DataListEntryWidgetPrimalItem_CraftQueue_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftQueue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
