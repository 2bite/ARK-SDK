#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerHUDNew_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PlayerHUDNew.PlayerHUDNew_C
// 0x0040 (0x0690 - 0x0650)
class UPlayerHUDNew_C : public UPlayerHUDUI
{
public:
	class UWidgetAnimation*                            GamepadActiveToAlt;                                       // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            GamepadActiveToNormal;                                    // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C* CraftingButton;                                           // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UElementStatusBarWidget_C*                   ElementBar;                                               // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBarWidget*                          ExtraBrogress;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GamepadActiveBackground;                                  // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerHUDStatusBarsWidget_C*                PrimaryStatusBars;                                        // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoHUDStatusBarsWidget_C*                  SecondaryStatusBars;                                      // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHUDNew.PlayerHUDNew_C");
		return ptr;
	}


	void ExecuteUbergraph_PlayerHUDNew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
