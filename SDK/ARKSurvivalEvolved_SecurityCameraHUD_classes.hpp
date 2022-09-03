#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SecurityCameraHUD_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SecurityCameraHUD.SecurityCameraHUD_C
// 0x00F2 (0x060A - 0x0518)
class USecurityCameraHUD_C : public UPrimalUI
{
public:
	class UBorder*                                     CameraListPanel;                                          // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UScrollBox*                                  CameraListScrollBox;                                      // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  HUDDistanceLabel;                                         // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  HUDNameLabel;                                             // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalRichTextBlock*                        InputControlsRichTextBlock;                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                RootPanel;                                                // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            SearchTextBox;                                            // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ARemoteCamera_Character_BP_C*                SpawnedByCamera;                                          // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBeDisplayed;                                           // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class UClass*                                      CameraListEntryWidgetClass;                               // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UCameraListEntry_C*>                  CameraEntryList;                                          // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               CameraListHiddenInputControlsText;                        // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               InputControlsText;                                        // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsCameraListShowing;                                      // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	int                                                CurrentSelection;                                         // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FText>                               InputControlsText_Gampepad;                               // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               CameraListHiddenInputControlsText_Gamepad;                // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x05C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x05C4(0x0034) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x05F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_GetPC_ReturnValue;                               // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsHudVisible_ReturnValue;                        // 0x0609(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SecurityCameraHUD.SecurityCameraHUD_C");
		return ptr;
	}


	struct FEventReply OnControllerButtonPressed(struct FGeometry* MyGeometry, struct FControllerEvent* ControllerEvent);
	void SetInputControlsRichText(bool IsCameraListShowing);
	void SelectItemAtIndex(int index);
	void Update_Camera_HUD_Info();
	void SwitchToCameraAtIndex(int index);
	void HideListPanel();
	struct FEventReply STATIC_OnKeyUp(struct FGeometry* MyGeometry, struct FKeyboardEvent* InKeyboardEvent);
	void ShowListPanel();
	void STATIC_InitFromCamera(class ARemoteCamera_Character_BP_C* FromCamera, const class FString& CameraName, const struct FVector& CameraLocation, int Camera_Index);
	void DestroyCameraHUDWidget();
	void ResetCameraHUDWidget();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ResetHUDWidgetAlreadyInViewport();
	void ExecuteUbergraph_SecurityCameraHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
