#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpawnUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SpawnUI.SpawnUI_C
// 0x0238 (0x0BF0 - 0x09B8)
class USpawnUI_C : public UUI_Spawn
{
public:
	class UWidgetAnimation*                            Close;                                                    // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ArkPrimeIcon;                                             // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     ArmLengthSlider;                                          // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ArmsBottomBorder;                                         // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      ArmsTopBorder;                                            // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            BedFilter;                                                // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     BodySlider;                                               // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CancelLoadButton;                                         // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUI_PreviewWidget*                           CharacterPreview;                                         // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CharacterPreviewImage;                                    // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     ChestSlider;                                              // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CloseButton;                                              // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CreateNewPlayerButton;                                    // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DisabledPanelImage;                                       // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DoCreateNewPlayerButton;                                  // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DownloadArkCharacterData;                                 // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     EyeSlider;                                                // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     FemaleButton;                                             // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     FootSlider;                                               // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FrontOverlayAdditive;                                     // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     HairSlider;                                               // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     HandSlider;                                               // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      HeadBottomBorder;                                         // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     HeadDepth;                                                // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     HeadHeight;                                               // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     HeadSlider;                                               // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      HeadTopBorder;                                            // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     HeadWidth;                                                // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     HipSlider;                                                // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_152;                                                // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_254;                                                // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_256;                                                // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_4;                                                  // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_31;                                                 // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_43;                                                 // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_93;                                                 // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     LegLengthSlider;                                          // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      LegsBottomBorder;                                         // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      LegsTopBorder;                                            // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         LoadConfirmationButton;                                   // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         LoadFromFileButton;                                       // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     LowerArmSlider;                                           // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     LowerFaceSlider;                                          // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     LowerLegSlider;                                           // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     MaleButton;                                               // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            NameBox;                                                  // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     NeckLengthSlider;                                         // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     NeckSlider;                                               // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RandomizeButton;                                          // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      RandomizeButtonIcon;                                      // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ResetButton;                                              // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RespawnButton;                                            // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      RespawnLabelBkg;                                          // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RespawnPanelButton;                                       // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         SaveToFileButton;                                         // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     ShouldersSlider;                                          // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      SmallMapImage;                                            // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             TabBgSwitcher;                                            // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TabSplitImgPlayer;                                        // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TabSplitImgRemote;                                        // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TorsoBottomBorder;                                        // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     TorsoDepth;                                               // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     TorsoHeight;                                              // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     TorsoSlider;                                              // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TorsoTopBorder;                                           // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      UnlearnedEngramsIcon;                                     // 0x0BD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     UpperArmSlider;                                           // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     UpperFaceSlider;                                          // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     UpperLegSlider;                                           // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpawnUI.SpawnUI_C");
		return ptr;
	}


	void ExecuteUbergraph_SpawnUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
