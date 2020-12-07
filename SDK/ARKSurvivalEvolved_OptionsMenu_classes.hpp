#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OptionsMenu_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
// 0x0706 (0x102E - 0x0928)
class UOptionsMenu_C : public UUI_OptionsMenu
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Close;                                                    // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Open;                                                     // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             AccessInventory;                                          // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         AdvancedSettingsMenuButton;                               // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   AllowAnimationStaggeringCheckbox;                         // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   AllowCrosshairCheckbox;                                   // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   AllowHitMarkersCheckbox;                                  // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             AltFire;                                                  // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     AmbientSoundVolumeSlider;                                 // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             AntiAliasingComboBox;                                     // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ApplyButton;                                              // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     AudioVolumeSlider;                                        // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             BrakeDino;                                                // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallAggressive;                                           // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallAttackTarget;                                         // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallFollow;                                               // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallFollowDistanceCycleOne;                               // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallFollowOne;                                            // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallLandOne;                                              // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallMoveTo;                                               // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallNeutral;                                              // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallPassive;                                              // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallSetAggressive;                                        // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallStay;                                                 // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CallStayOne;                                              // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   CameraBobCheckbox;                                        // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     CameraShakeScaleSlider;                                   // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CancelButton;                                             // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             CharacterActionWheel;                                     // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ChatBubblesCheckbox;                                      // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ChatShowSteamNameCheckbox;                                // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ChatShowTribeNameCheckbox;                                // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             ClientNetSpeedComboBox;                                   // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     CloseGamepadControlsButton;                               // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ColorizedItemNamesCheckbox;                               // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CreatureBottomBorder;                                     // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      CreatureTopBorder;                                        // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Crouch;                                                   // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   DefaultCharacterItemsCheckbox;                            // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   DisableBloomCheckbox;                                     // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   DisableLightShaftsCheckbox;                               // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   DisableMenuMusicCheckbox;                                 // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   DisableMenuTransitionsCheckbox;                           // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   DisableTorporEffectCheckbox;                              // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   DisableTPVCameraInterpolationCheckbox;                    // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   DistanceFieldShadowingCheckbox;                           // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Drag;                                                     // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             DropItem;                                                 // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   DynamicTessCheckbox;                                      // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             EmoteKey1;                                                // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             EmoteKey2;                                                // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   EnableBloodEffectsCheckbox;                               // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   EnableColorGradingCheckbox;                               // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         EnableHMDButton;                                          // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ExtraLevelStreamingDistanceCheckbox;                      // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   FilmGrainCheckbox;                                        // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Fire;                                                     // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   FirstPersonRidingCheckbox;                                // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   FloatingNamesCheckbox;                                    // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ForceCraftButton;                                         // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ForceTPVCameraOffsetCheckbox;                             // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     FOVSlider;                                                // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FrontOverlayAdditive;                                     // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     GamepadControlsButton;                                    // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GamepadIcon_NextMenu;                                     // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GamepadIcon_PrevMenu;                                     // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      GamepadImage;                                             // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         GamepadMenuButton;                                        // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            Gamma1Editbox;                                            // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            Gamma2Editbox;                                            // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             GiveDefaultWeapon;                                        // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             GraphicsQualityComboBox;                                  // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     GraphicsQualityHelpTooltip;                               // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     GroundClutterDensitySlider;                               // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     GroundClutterDistanceSlider;                              // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             GroupAddOrRemoveTame;                                     // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            HeightTextBox;                                            // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   HideFloatingPlayerNamesCheckbox;                          // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   HideGamepadItemSelectionModifierCheckbox;                 // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   HideServerInfoCheckbox;                                   // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   HighQualityAnisotropicFilteringCheckbox;                  // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   HighQualityLODsCheckbox;                                  // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   HighQualityMaterialsCheckbox;                             // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   HighQualitySurfacesCheckbox;                              // 0x0BD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   HighQualityVFXCheckbox;                                   // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_12;                                                 // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_152;                                                // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1545;                                               // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1546;                                               // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_321;                                                // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_419;                                                // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_537;                                                // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_538;                                                // 0x0C18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_55;                                                 // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_56;                                                 // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_59;                                                 // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_64;                                                 // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_66;                                                 // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_67;                                                 // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_9;                                                  // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_93;                                                 // 0x0C58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_963;                                                // 0x0C60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   InventoryAccessSoundCheckbox;                             // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   InvertMouse;                                              // 0x0C70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   JoinNotificationsCheckbox;                                // 0x0C78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Jump;                                                     // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         KeyBindingsMenuButton;                                    // 0x0C88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     LODScalarSlider;                                          // 0x0C90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             LookDown;                                                 // 0x0C98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     LookLeftRightSensitivitySlider;                           // 0x0CA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             LookUp;                                                   // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     LookUpDownSensitivitySlider;                              // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   LowQualityAnimationsCheckbox;                             // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   MeleeCameraSwingAnimsCheckbox;                            // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   MotionBlurCheckbox;                                       // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             MoveBackward;                                             // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             MoveForward;                                              // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     MusicSlider;                                              // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   NoTooltipDelayCheckbox;                                   // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             OpenMapMarkers;                                           // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         OptionsMenuButton;                                        // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             OrbitCam;                                                 // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             OrbitCamToggle;                                           // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   PlayActionWheelClickSoundCheckbox;                        // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Poop;                                                     // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             PostProcessingComboBox;                                   // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Prone;                                                    // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             PushToTalk;                                               // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   QuickToggleItemNamesCheckbox;                             // 0x0D38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Reload;                                                   // 0x0D40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         RepositionHMDViewButton;                                  // 0x0D48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ResetButton;                                              // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     ResetTutorials;                                           // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     ResolutionScaleSlider;                                    // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             ResolutionsComboBox;                                      // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Run;                                                      // 0x0D70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             RunToggle;                                                // 0x0D78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         SaveButton;                                               // 0x0D80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     ScaleSlider;                                              // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             SetGamma1;                                                // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             SetGamma2;                                                // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     SFXSlider;                                                // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             ShadowsComboBox;                                          // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ShowChatCheckbox;                                         // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ShowExtendedInfo;                                         // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ShowLocalChat;                                            // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ShowMyCraftables;                                         // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ShowMyInventory;                                          // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ShowTribeChat;                                            // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ShowTribeManager;                                         // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   SimpleDistanceMovementCheckbox;                           // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   SSAOCheckbox;                                             // 0x0DF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   StatusNotificationMessagesCheckbox;                       // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             StrafeLeft;                                               // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             StrafeRight;                                              // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             SubMenuSwitcher;                                          // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Targeting;                                                // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   TemperatureFCheckbox;                                     // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             TerrainShadowComboBox;                                    // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             TexturesComboBox;                                         // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ToggleAutoChat;                                           // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ToggleConsole;                                            // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ToggleExtendedHUDInfoCheckbox;                            // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ToggleHUDHidden;                                          // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ToggleMap;                                                // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   ToggleToTalkCheckBox;                                     // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     TrueSkyQualitySlider;                                     // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             TurnLeft;                                                 // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             TurnRight;                                                // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     UIQuickbarScalingSlider;                                  // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Use;                                                      // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   UseDFAOCheckbox;                                          // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem1;                                                 // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem10;                                                // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem2;                                                 // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem3;                                                 // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem4;                                                 // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem5;                                                 // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem6;                                                 // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem7;                                                 // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem8;                                                 // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             UseItem9;                                                 // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCheckBox*                                   UseLowQualityFarLevelStreamingCheckbox;                   // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             ViewDistanceComboBox;                                     // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USlider*                                     VoiceSlider;                                              // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             WeaponAccessory;                                          // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Whisper;                                                  // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            WidthTextBox;                                             // 0x0F10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             WindowModeComboBox;                                       // 0x0F18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             WorldTileBufferComboBox;                                  // 0x0F20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             Yell;                                                     // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ZoomIn;                                                   // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKeyInputWidget*                             ZoomOut;                                                  // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GraphicsToolTipIsVisible;                                 // 0x0F40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F41(0x0003) MISSED OFFSET
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x0F44(0x0034) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x0F78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0F7C(0x0004) MISSED OFFSET
	class FString                                      K2Node_ComponentBoundEvent_SelectedItem5;                 // 0x0F80(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ESelectInfo>                           K2Node_ComponentBoundEvent_SelectionType5;                // 0x0F90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0F91(0x0007) MISSED OFFSET
	class FString                                      K2Node_ComponentBoundEvent_SelectedItem4;                 // 0x0F98(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ESelectInfo>                           K2Node_ComponentBoundEvent_SelectionType4;                // 0x0FA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0FA9(0x0007) MISSED OFFSET
	class FString                                      K2Node_ComponentBoundEvent_SelectedItem3;                 // 0x0FB0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ESelectInfo>                           K2Node_ComponentBoundEvent_SelectionType3;                // 0x0FC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0FC1(0x0007) MISSED OFFSET
	class FString                                      K2Node_ComponentBoundEvent_SelectedItem2;                 // 0x0FC8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ESelectInfo>                           K2Node_ComponentBoundEvent_SelectionType2;                // 0x0FD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0FD9(0x0007) MISSED OFFSET
	class FString                                      K2Node_ComponentBoundEvent_SelectedItem;                  // 0x0FE0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ESelectInfo>                           K2Node_ComponentBoundEvent_SelectionType;                 // 0x0FF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0FF1(0x0007) MISSED OFFSET
	class FString                                      K2Node_ComponentBoundEvent_SelectedItem6;                 // 0x0FF8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ESelectInfo>                           K2Node_ComponentBoundEvent_SelectionType6;                // 0x1008(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1009(0x0003) MISSED OFFSET
	float                                              K2Node_ComponentBoundEvent_Value2;                        // 0x100C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_ComponentBoundEvent_Value;                         // 0x1010(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bIsChecked4;                   // 0x1014(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bIsChecked3;                   // 0x1015(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bIsChecked2;                   // 0x1016(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bIsChecked;                    // 0x1017(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      K2Node_ComponentBoundEvent_SelectedItem7;                 // 0x1018(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ESelectInfo>                           K2Node_ComponentBoundEvent_SelectionType7;                // 0x1028(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1029(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsHovered_ReturnValue;                           // 0x102A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x102B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x102C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x102D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C");
		return ptr;
	}


	void BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void BndEvt__TrueSkyQualitySlider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__GroundClutterDensitySlider_K2Node_ComponentBoundEvent_81_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MotionBlurCheckbox_K2Node_ComponentBoundEvent_181_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__FilmGrainCheckbox_K2Node_ComponentBoundEvent_193_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void OptionsGraphTick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_OptionsMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
