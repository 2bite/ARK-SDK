#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListEntryWidgetPrimalItemHairStyle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItemHairStyle.DataListEntryWidgetPrimalItemHairStyle_C
// 0x0010 (0x0300 - 0x02F0)
class UDataListEntryWidgetPrimalItemHairStyle_C : public UDataListEntryWidget
{
public:
	class UMenuAnchor*                                 CtxMenu;                                                  // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryButton_PrimalItem*             TheDataListButton;                                        // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItemHairStyle.DataListEntryWidgetPrimalItemHairStyle_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListEntryWidgetPrimalItemHairStyle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
