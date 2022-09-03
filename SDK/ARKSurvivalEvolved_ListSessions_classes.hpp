#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ListSessions_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ListSessions.ListSessions_C
// 0x00E3 (0x0C3B - 0x0B58)
class UListSessions_C : public UUI_ListSessions
{
public:
	class UWidgetAnimation*                            Close;                                                    // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         AcceptPassword;                                           // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      AscendingDescendingIcon;                                  // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   AutoFavoriteCheckBox;                                     // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CancelButton;                                             // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CancelPassword;                                           // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CreatureBottomBorder;                                     // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CreatureTopBorder;                                        // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         FavoritesButton;                                          // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            FindSessionName;                                          // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             GameModeComboBox;                                         // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_FaceLeft;                             // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_FaceTop;                              // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGamepadButtonLegend_C*                      GamepadButtonLegend_Start;                                // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_3195;                                               // 0x0BD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   IncludeServersWithActiveModsCheckBox;                     // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         JoinLastPlayedServer;                                     // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         JoinSessionButton;                                        // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             MapComboBox;                                              // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            PasswordField;                                            // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RefreshSessionsButton;                                    // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RentYourOwnServerButton;                                  // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             ServerTypeComboBox;                                       // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ShowNotFullServers;                                       // 0x0C18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ShowProtectedServersCheckBox;                             // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             SortComboBox;                                             // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         SortOrderToggleButton;                                    // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bIsChecked;                    // 0x0C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bIsChecked3;                   // 0x0C39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bIsChecked2;                   // 0x0C3A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ListSessions.ListSessions_C");
		return ptr;
	}


	void BndEvt__ShowOfficialServersCheckBox_K2Node_ComponentBoundEvent_78_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ShowUnOfficialServersCheckBox_K2Node_ComponentBoundEvent_84_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_ListSessions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
