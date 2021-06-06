#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_InventoryMenu2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InventoryMenu2.InventoryMenu2_C
// 0x0050 (0x0900 - 0x08B0)
class UInventoryMenu2_C : public UUI_Inventory
{
public:
	class UWidgetAnimation*                            HideEngrams;                                              // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            OpenEngrams;                                              // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Close;                                                    // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterViewPanel_C*                       CharacterViewPanel;                                       // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoAncestryOverlay_C*                      DinoAncestryOverlay;                                      // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInventoryPanel_C*                           PlayerInventoryPanel;                                     // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInventoryPanel_C*                           RemoteInventoryPanel;                                     // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStatsPanel_C*                               StatsPanel;                                               // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             WidgetSwitcherRight;                                      // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryMenu2.InventoryMenu2_C");
		return ptr;
	}


	void ExecuteUbergraph_InventoryMenu2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
