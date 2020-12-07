#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PauseMenu_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PauseMenu.PauseMenu_C
// 0x0098 (0x0710 - 0x0678)
class UPauseMenu_C : public UUI_PauseMenu
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Close;                                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         AdminCommandButton;                                       // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            AdminCommandTextBox;                                      // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         AdminMenuButton;                                          // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      BackgroundOverlay;                                        // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CloseButton;                                              // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DisableGamepadButton;                                     // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         EnableCreativeModeButton;                                 // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ExitButton;                                               // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FrontOverlayAdditive;                                     // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         HelpButton;                                               // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     InventoryButton;                                          // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         InviteFriendsButton;                                      // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         OptionsButton;                                            // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     SurvivorProfileButton;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     TribeButton;                                              // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PauseMenu.PauseMenu_C");
		return ptr;
	}


	void ExecuteUbergraph_PauseMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
