#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hub_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Hub.Hub_C
// 0x0100 (0x0820 - 0x0720)
class UHub_C : public UUI_Hub
{
public:
	class UWidgetAnimation*                            ExtraClose;                                               // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            ExtraOpen;                                                // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Close;                                                    // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CloseHubButton;                                           // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         EngramsMenuButton;                                        // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_FaceBottom;                           // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_Left_C*                 GamepadButtonLegend_FaceLeft;                             // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_FaceRight;                            // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_Left_C*                 GamepadButtonLegend_FaceTop;                              // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_Left_C*                 GamepadButtonLegend_LeftShoulder;                         // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_LeftStick;                            // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_Left_C*                 GamepadButtonLegend_LeftTrigger;                          // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_RightStick;                           // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_Left_C*                 GamepadButtonLegend_RightTrigger;                         // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_Start;                                // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GamepadIcon_NextMenu;                                     // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GamepadIcon_PrevMenu;                                     // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_367;                                                // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_517;                                                // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_55;                                                 // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_56;                                                 // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_57;                                                 // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_59;                                                 // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_66;                                                 // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_93;                                                 // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         InventoryMenuButton;                                      // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         MissionListMenuButton;                                    // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             SubMenuSwitcher;                                          // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         SurvivorProfileMenuButton;                                // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         TameGroupsMenuButton;                                     // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         TribeManagerMenuButton;                                   // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hub.Hub_C");
		return ptr;
	}


	void ExecuteUbergraph_Hub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
