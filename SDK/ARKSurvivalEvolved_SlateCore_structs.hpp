#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__EButtonClickMethod_MAX = 3
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__PreciseTap = 1,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 2
};


// Enum SlateCore.EFocusMoveDirection
enum class EFocusMoveDirection : uint8_t
{
	EFocusMoveDirection__Next      = 0,
	EFocusMoveDirection__Previous  = 1,
	EFocusMoveDirection__EFocusMoveDirection_MAX = 2
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_ComboBox         = 1,
	MenuPlacement_ComboBoxRight    = 2,
	MenuPlacement_MenuRight        = 3,
	MenuPlacement_AboveAnchor      = 4,
	MenuPlacement_MAX              = 5
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5
};


// Enum SlateCore.EKeyboardFocusCause
enum class EKeyboardFocusCause : uint8_t
{
	EKeyboardFocusCause__Mouse     = 0,
	EKeyboardFocusCause__Keyboard  = 1,
	EKeyboardFocusCause__SetDirectly = 2,
	EKeyboardFocusCause__Cleared   = 3,
	EKeyboardFocusCause__OtherWidgetLostFocus = 4,
	EKeyboardFocusCause__WindowActivate = 5,
	EKeyboardFocusCause__EKeyboardFocusCause_MAX = 6
};


// Enum SlateCore.SlateTypes.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0078
struct FSlateBrush
{
	struct FVector2D                                   ImageSize;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FMargin                                     Margin;                                                   // 0x000C(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                Tint;                                                     // 0x001C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FSlateColor                                 TintColor;                                                // 0x0030(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	class UObject*                                     ResourceObject;                                           // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResourceName;                                             // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDynamicallyLoaded;                                     // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUObject;                                              // 0x0071(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.ButtonStyle
// 0x0240 (0x0248 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                  // 0x0080(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                  // 0x00F8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                 // 0x0170(0x0078) (Edit, BlueprintVisible)
	struct FMargin                                     NormalPadding;                                            // 0x01E8(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     PressedPadding;                                           // 0x01F8(0x0010) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0208(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0220(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x0238(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x0240(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0020
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FontDrawScalar;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableOutlineAndGlowInShader;                             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       FontName;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.TextBlockStyle
// 0x0110 (0x0118 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0020) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0028(0x0028) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x0068(0x0028) (Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 HighlightShape;                                           // 0x00A0(0x0078) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.WindowStyle
// 0x0DA8 (0x0DB0 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x0008(0x0248) (Edit, BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x0250(0x0248) (Edit, BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x0498(0x0248) (Edit, BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x06E0(0x0248) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x0928(0x0118) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x0A40(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x0AB8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x0B30(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OutlineBrush;                                             // 0x0BA8(0x0078) (Edit, BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                             // 0x0C20(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0C48(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0CC0(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x0D38(0x0078) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.ScrollBorderStyle
// 0x00F0 (0x00F8 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0080(0x0078) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.ScrollBoxStyle
// 0x01E0 (0x01E8 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0080(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x00F8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x0170(0x0078) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.DockTabStyle
// 0x05D0 (0x05D8 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0008(0x0248) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0250(0x0078) (Edit)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x02C8(0x0078) (Edit)
	struct FSlateBrush                                 ColorOverlayBrush;                                        // 0x0340(0x0078) (Edit)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x03B8(0x0078) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0430(0x0078) (Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x04A8(0x0078) (Edit)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x0520(0x0078) (Edit)
	struct FMargin                                     TabPadding;                                               // 0x0598(0x0010) (Edit)
	float                                              OverlapWidth;                                             // 0x05A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	struct FSlateColor                                 FlashColor;                                               // 0x05B0(0x0028) (Edit)
};

// ScriptStruct SlateCore.SlateTypes.TableColumnHeaderStyle
// 0x0438 (0x0440 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x0008(0x0078) (Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x0080(0x0078) (Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x00F8(0x0078) (Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x0170(0x0078) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x01E8(0x0078) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0260(0x0078) (Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x02D8(0x0078) (Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x0350(0x0078) (Edit)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x03C8(0x0078) (Edit)
};

// ScriptStruct SlateCore.SlateTypes.SplitterStyle
// 0x00F0 (0x00F8 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x0080(0x0078) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.HeaderRowStyle
// 0x0A18 (0x0A20 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x0008(0x0440) (Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x0448(0x0440) (Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x0888(0x00F8) (Edit)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0980(0x0078) (Edit)
	struct FSlateColor                                 ForegroundColor;                                          // 0x09F8(0x0028) (Edit)
};

// ScriptStruct SlateCore.SlateTypes.TableRowStyle
// 0x0578 (0x0580 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x0080(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x00F8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x0170(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x01E8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x0260(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x02D8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x0350(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x03C8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DragDropLineIndicatorBrush;                               // 0x0440(0x0078) (Edit)
	struct FSlateBrush                                 DragDropBorderIndicatorBrush;                             // 0x04B8(0x0078) (Edit)
	struct FSlateColor                                 TextColor;                                                // 0x0530(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x0558(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.SpinBoxStyle
// 0x0290 (0x0298 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x0080(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x00F8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x0170(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x01E8(0x0078) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0260(0x0028)
	struct FMargin                                     TextPadding;                                              // 0x0288(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.InlineTextImageStyle
// 0x0080 (0x0088 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x0078) (Edit)
	int16_t                                            Baseline;                                                 // 0x0080(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.SliderStyle
// 0x01E0 (0x01E8 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                           // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x0080(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x00F8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x0170(0x0078) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.VolumeControlStyle
// 0x0440 (0x0448 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              // 0x0008(0x01E8) (Edit)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x01F0(0x0078) (Edit)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x0268(0x0078) (Edit)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x02E0(0x0078) (Edit)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x0358(0x0078) (Edit)
	struct FSlateBrush                                 MutedImage;                                               // 0x03D0(0x0078) (Edit)
};

// ScriptStruct SlateCore.SlateTypes.ScrollBarStyle
// 0x0258 (0x0260 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x0080(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x00F8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x0170(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x01E8(0x0078) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.EditableTextBoxStyle
// 0x0508 (0x0510 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x0080(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x00F8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x0170(0x0078) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x01E8(0x0010) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              Font;                                                     // 0x01F8(0x0020) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0218(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x0240(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x0268(0x0028) (Edit, BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                        // 0x0290(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     VScrollBarPadding;                                        // 0x02A0(0x0010) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x02B0(0x0260) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.SearchBoxStyle
// 0x0710 (0x0718 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x0008(0x0510) (Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x0518(0x0020) (Edit)
	struct FSlateBrush                                 UpArrowImage;                                             // 0x0538(0x0078) (Edit)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x05B0(0x0078) (Edit)
	struct FSlateBrush                                 GlassImage;                                               // 0x0628(0x0078) (Edit)
	struct FSlateBrush                                 ClearImage;                                               // 0x06A0(0x0078) (Edit)
};

// ScriptStruct SlateCore.SlateTypes.ExpandableAreaStyle
// 0x00F0 (0x00F8 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                           // 0x0008(0x0078) (Edit)
	struct FSlateBrush                                 ExpandedImage;                                            // 0x0080(0x0078) (Edit)
};

// ScriptStruct SlateCore.SlateTypes.ProgressBarStyle
// 0x0168 (0x0170 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                // 0x0080(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MarqueeImage;                                             // 0x00F8(0x0078) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.InlineEditableTextBlockStyle
// 0x0628 (0x0630 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0008(0x0510) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0518(0x0118) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.EditableTextStyle
// 0x0228 (0x0230 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0020) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0028(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x0050(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelectionTarget;                           // 0x00C8(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x0140(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CaretImage;                                               // 0x01B8(0x0078) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.HyperlinkStyle
// 0x0370 (0x0378 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                           // 0x0008(0x0248) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0250(0x0118) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0368(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.ComboButtonStyle
// 0x0348 (0x0350 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              // 0x0008(0x0248) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0250(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x02C8(0x0078) (Edit, BlueprintVisible)
	struct FMargin                                     MenuBorderPadding;                                        // 0x0340(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct SlateCore.SlateTypes.ComboBoxStyle
// 0x0390 (0x0398 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0008(0x0350) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0358(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x0370(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x0388(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       SelectionChangeSound;                                     // 0x0390(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct SlateCore.SlateTypes.CheckBoxStyle
// 0x0500 (0x0508 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FSlateBrush                                 UncheckedImage;                                           // 0x0010(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x0088(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x0100(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                             // 0x0178(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x01F0(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x0268(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x02E0(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x0358(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x03D0(0x0078) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0448(0x0010) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0458(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0480(0x0028) (Edit, BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x04A8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x04C0(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x04D8(0x0018) (Edit, BlueprintVisible)
	struct FName                                       CheckedSound;                                             // 0x04F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       UncheckedSound;                                           // 0x04F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x0500(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct SlateCore.InputEvent
// 0x0020
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0078 - 0x0020)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.Geometry
// 0x0034
struct FGeometry
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct SlateCore.ControllerEvent
// 0x0020 (0x0040 - 0x0020)
struct FControllerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyboardFocusEvent
// 0x0008
struct FKeyboardFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0028 - 0x0020)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyboardEvent
// 0x0020 (0x0040 - 0x0020)
struct FKeyboardEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0038 (0x0058 - 0x0020)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0020(0x0038) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
