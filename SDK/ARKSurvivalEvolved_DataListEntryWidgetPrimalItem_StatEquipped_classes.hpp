#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItem_StatEquipped_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_StatEquipped.DataListEntryWidgetPrimalItem_StatEquipped_C
// 0x0010 (0x0300 - 0x02F0)
class UDataListEntryWidgetPrimalItem_StatEquipped_C : public UDataListEntryWidget
{
public:
	class UMenuAnchor*                                 CtxMenu;                                                  // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryButton_PrimalItem*             TheDataListButton;                                        // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_StatEquipped.DataListEntryWidgetPrimalItem_StatEquipped_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetPrimalItem_StatEquipped(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
