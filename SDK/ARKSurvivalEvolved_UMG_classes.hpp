#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UMG_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}

};


// Class UMG.Widget
// 0x0160 (0x0188 - 0x0028)
class UWidget : public UVisual
{
public:
	bool                                               bIsVariable;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCreatedByConstructionScript;                             // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	class UPanelSlot*                                  Slot;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class FString                                      CustomData;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptDelegate                             bIsEnabledDelegate;                                       // 0x0050(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       ToolTipText;                                              // 0x0060(0x0028) (Edit, DisableEditOnInstance)
	struct FScriptDelegate                             ToolTipTextDelegate;                                      // 0x0088(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               bUseCustomTooltip;                                        // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAlignHorizontalUI>                    CustomToolTipHorizontalAlignment;                         // 0x0099(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAlignVerticalUI>                      CustomToolTipVerticalAlignment;                           // 0x009A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EOrientation>                          CustomToolTipOrientation;                                 // 0x009B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamepadSelectClosestDistanceMultiplier;                   // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableAxisOrientedSweepTestOnMe;                        // 0x00A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	class UClass*                                      CustomToolTipBlueprintOverride;                           // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CustomToolTipPadding;                                     // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      CustomToolTipString;                                      // 0x00B8(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TEnumAsByte<ESlateVisibility>                      Visiblity;                                                // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             VisiblityDelegate;                                        // 0x00D4(0x0014) (ZeroConstructor, InstancedReference)
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CursorDelegate;                                           // 0x00E8(0x0014) (ZeroConstructor, InstancedReference)
	struct FWidgetTransform                            RenderTransform;                                          // 0x00F8(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FVector2D                                   RenderTransformPivot;                                     // 0x0114(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Highlightable;                                            // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDontRenderHighlight;                                     // 0x011D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWindowClippingForHighlight;                           // 0x011E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPrimalSetupSpecialAdjacents;                             // 0x011F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AdjacentUpName;                                           // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AdjacentDownName;                                         // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AdjacentRightName;                                        // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AdjacentLeftName;                                         // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x40];                                      // 0x0140(0x0040) MISSED OFFSET
	bool                                               bDesignTime;                                              // 0x0180(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0181(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}


	void SetVisibility(TEnumAsByte<ESlateVisibility> InVisibility);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderAngle(float Angle);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsHovered();
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	TEnumAsByte<ESlateVisibility> GetVisibility();
	struct FVector GetVector__DelegateSignature();
	struct FVector2D GetVector2D__DelegateSignature();
	struct FText GetText__DelegateSignature();
	TEnumAsByte<ESlateVisibility> GetSlateVisibility__DelegateSignature();
	struct FLinearColor GetSlateColor__DelegateSignature();
	class USlateBrushAsset* GetSlateBrushAsset__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	class UPanelWidget* GetParent();
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FMargin GetMargin__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsThisAndParentsEnabled();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	class UWidget* GetContent__DelegateSignature();
	TEnumAsByte<ESlateCheckBoxState> GetCheckBoxState__DelegateSignature();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceLayoutPrepass();
};


// Class UMG.UserWidget
// 0x00B8 (0x0240 - 0x0188)
class UUserWidget : public UWidget
{
public:
	int                                                SceneStackPriority;                                       // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSupportsKeyboardFocus;                                   // 0x018C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	float                                              DPIScaler;                                                // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	TArray<class UWidget*>                             Components;                                               // 0x0198(0x0010) (ZeroConstructor, Transient)
	class UWidgetTree*                                 WidgetTree;                                               // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                    // 0x01B0(0x0010) (ZeroConstructor, Transient)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                   // 0x01C0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x70];                                      // 0x01D0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopAnimationByString(const class FString& Name);
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void SetZOrderInViewport(int ZOrder);
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void RemoveFromViewport();
	bool PlayAnimationByString(const class FString& Name);
	void PlayAnimation(class UWidgetAnimation* InAnimation);
	void OnVisibilityChangedEvent__DelegateSignature(TEnumAsByte<ESlateVisibility> Visibility);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyboardEvent& InKeyboardEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyboardEvent& InKeyboardEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyboardEvent& InKeyboardEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply OnKeyboardFocusReceived(const struct FGeometry& MyGeometry, const struct FKeyboardFocusEvent& InKeyboardFocusEvent);
	void OnKeyboardFocusLost(const struct FKeyboardFocusEvent& InKeyboardFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	void OnConstructEvent__DelegateSignature();
	TEnumAsByte<ESlateVisibility> GetVisiblity();
	class APawn* GetOwningPlayerPawn();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	bool GetIsVisible();
	void Construct();
	void CloseScene();
	void AddToViewport();
};


// Class UMG.PanelWidget
// 0x0018 (0x01A0 - 0x0188)
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    // 0x0188(0x0010) (ZeroConstructor)
	bool                                               ClipChildren;                                             // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseScaledClipForChildren;                                 // 0x0199(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanNavigateToDifferentPanel;                             // 0x019A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHighlightInsteadOfChild;                                 // 0x019B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x019C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}


	bool RemoveChildAt(int index);
	bool RemoveChild(class UWidget* Content);
	void InsertChildAt(int index, class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int index);
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};


// Class UMG.ContentWidget
// 0x0000 (0x01A0 - 0x01A0)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}


	class UPanelSlot* GetContentSlot();
};


// Class UMG.Button
// 0x02F0 (0x0490 - 0x01A0)
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x01A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FButtonStyle                                WidgetStyle;                                              // 0x01A8(0x0248) (Edit, BlueprintVisible)
	bool                                               bUseDisabledStyle;                                        // 0x03F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x03F4(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0404(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0414(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0415(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0416(0x0002) MISSED OFFSET
	unsigned char                                      IsFocusable : 1;                                          // 0x0418(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceHandleMouseDown : 1;                                // 0x0418(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bRedirectGamepadPressToClick : 1;                         // 0x0418(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClickedObject;                                          // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSecondaryClicked;                                       // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSecondaryClickedObject;                                 // 0x0450(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnGamepadClicked;                                         // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGamepadClickedObject;                                   // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0480(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}


	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	void OnButtonClickedEventObject__DelegateSignature(class UWidget* clickedWidget);
	void OnButtonClickedEvent__DelegateSignature();
	void MimickClicked(bool bFromGamepad);
	bool IsPressed();
};


// Class UMG.ScrollBox
// 0x04A0 (0x0640 - 0x01A0)
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x01A0(0x01E8) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0388(0x0260) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x05E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateWidgetStyleAsset*                      BarStyle;                                                 // 0x05F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x05F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F9(0x0003) MISSED OFFSET
	int                                                NumPreviewWidgets;                                        // 0x05FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumWidgetsBeforeWrapping;                                 // 0x0600(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WidgetSize;                                               // 0x0604(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WidgetPadding;                                            // 0x060C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  WidgetHorizontalAlignment;                                // 0x0614(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    WidgetVerticalAlignment;                                  // 0x0615(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseWidgetPaddingAsMargin;                                 // 0x0616(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0617(0x0001) MISSED OFFSET
	struct FMargin                                     WidgetMargin;                                             // 0x0618(0x0010) (Edit, DisableEditOnInstance)
	bool                                               bGamepadMovementMovesScrollBox;                           // 0x0628(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPrimalAllowRightSpecialStickScroll;                      // 0x0629(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x062A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}


	void SetScrollOffset(float NewScrollOffset);
	float GetScrollOffset();
	float GetScrollMax();
	struct FVector2D GetScrollContentSize();
};


// Class UMG.Border
// 0x0140 (0x02E0 - 0x01A0)
class UBorder : public UContentWidget
{
public:
	struct FLinearColor                                ContentColorAndOpacity;                                   // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                           // 0x01B0(0x0014) (ZeroConstructor, InstancedReference)
	struct FMargin                                     Padding;                                                  // 0x01C0(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x01D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x01D1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x01D2(0x0006) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x01D8(0x0078) (Edit, DisableEditOnInstance)
	struct FScriptDelegate                             BackgroundDelegate;                                       // 0x0250(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                BrushColor;                                               // 0x0260(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             BrushColorDelegate;                                       // 0x0270(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               bShowEffectWhenDisabled;                                  // 0x0280(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x0284(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                     // 0x0294(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	struct FScriptDelegate                             OnMouseMoveEvent;                                         // 0x02A4(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                  // 0x02B4(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	unsigned char                                      UnknownData02[0x14];                                      // 0x02C4(0x0014) MISSED OFFSET
	class USlateBrushAsset*                            Brush;                                                    // 0x02D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.EditableText
// 0x0350 (0x04D8 - 0x0188)
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0188(0x0028) (Edit, DisableEditOnInstance)
	struct FScriptDelegate                             TextDelegate;                                             // 0x01B0(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       HintText;                                                 // 0x01C0(0x0028) (Edit, DisableEditOnInstance)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x01E8(0x0014) (ZeroConstructor, InstancedReference)
	struct FEditableTextStyle                          WidgetStyle;                                              // 0x01F8(0x0230) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0428(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageSelected;                                  // 0x0430(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageSelectionTarget;                           // 0x0438(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageComposing;                                 // 0x0440(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CaretImage;                                               // 0x0448(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0450(0x0020) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0470(0x0028) (Edit, DisableEditOnInstance)
	bool                                               IsReadOnly;                                               // 0x0498(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0499(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x049A(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x049C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x04A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x04A1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x04A2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x04A3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x04A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x04C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.DragDropOperation
// 0x0050 (0x0078 - 0x0028)
class UDragDropOperation : public UObject
{
public:
	class FString                                      Tag;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UObject*                                     Payload;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     DefaultDragVisual;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDrop;                                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                          // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragged;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}


	void OnDragDropMulticast__DelegateSignature(class UDragDropOperation* Operation);
	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};


// Class UMG.MovieScene2DTransformSection
// 0x02D8 (0x0310 - 0x0038)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  Translation[0x2];                                         // 0x0038(0x0068)
	struct FRichCurve                                  Rotation;                                                 // 0x0108(0x0068)
	struct FRichCurve                                  Scale[0x2];                                               // 0x0170(0x0068)
	struct FRichCurve                                  Shear[0x2];                                               // 0x0240(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x01A0 (0x01D8 - 0x0038)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  TopCurve;                                                 // 0x0038(0x0068)
	struct FRichCurve                                  LeftCurve;                                                // 0x00A0(0x0068)
	struct FRichCurve                                  RightCurve;                                               // 0x0108(0x0068)
	struct FRichCurve                                  BottomCurve;                                              // 0x0170(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}


	struct FVector2D LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D GetLocalSize(const struct FGeometry& Geometry);
	struct FVector2D AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};


// Class UMG.UMGSequencePlayer
// 0x0068 (0x0090 - 0x0028)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UWidgetAnimation*                            Animation;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMovieSceneBindings*                         RuntimeBindings;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}

};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

};


// Class UMG.BorderSlot
// 0x0028 (0x0060 - 0x0038)
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0070 - 0x0038)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                               // 0x0038(0x0028) (Edit, DisableEditOnInstance)
	bool                                               bAutoSize;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}


	void SetZOrder(int InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FAnchors GetAnchors();
};


// Class UMG.GridSlot
// 0x0028 (0x0060 - 0x0038)
class UGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RowSpan;                                                  // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Column;                                                   // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ColumnSpan;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Layer;                                                    // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   Nudge;                                                    // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, DisableEditOnInstance)
	struct FSlateChildSize                             Size;                                                     // 0x0048(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UOverlaySlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0049(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}


	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0060 - 0x0038)
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Column;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, DisableEditOnInstance)
	struct FSlateChildSize                             Size;                                                     // 0x0048(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CircularThrobber
// 0x00A0 (0x0228 - 0x0188)
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Period;                                                   // 0x018C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0198(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x01A0(0x0078) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0218(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}


	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};


// Class UMG.ComboBox
// 0x0030 (0x01B8 - 0x0188)
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                    // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0198(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x04B0 (0x0638 - 0x0188)
class UComboBoxString : public UWidget
{
public:
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0188(0x0398) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              Font;                                                     // 0x0520(0x0020) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 TextColorAndOpacity;                                      // 0x0540(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0568(0x0028) (Edit, DisableEditOnInstance)
	TArray<class FString>                              DefaultOptions;                                           // 0x0590(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SelectedOption;                                           // 0x05A0(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FMargin                                     ContentPadding;                                           // 0x05B0(0x0010) (Edit, DisableEditOnInstance)
	float                                              MaxListHeight;                                            // 0x05C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasDownArrow;                                             // 0x05C4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05C5(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x05C8(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpening;                                                // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x40];                                      // 0x05F8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}


	void SetSelectedOption(const class FString& Option);
	void SetSelectedIndex(int index);
	bool RemoveOption(const class FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	class FString GetSelectedOption();
	int GetSelectedIndex();
	class FString GetOptionAtIndex(int index);
	int FindOptionIndex(const class FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const class FString& Option);
};


// Class UMG.EditableTextBox
// 0x0628 (0x07B0 - 0x0188)
class UEditableTextBox : public UWidget
{
public:
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0188(0x0510) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0698(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x06A0(0x0028) (Edit, DisableEditOnInstance)
	struct FScriptDelegate                             TextDelegate;                                             // 0x06C8(0x0014) (ZeroConstructor, InstancedReference)
	struct FText                                       HintText;                                                 // 0x06D8(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0700(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0710(0x0020) (Edit, DisableEditOnInstance)
	struct FLinearColor                                ForegroundColor;                                          // 0x0730(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0740(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0750(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReadOnly;                                               // 0x0760(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0761(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0762(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0764(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0768(0x0010) (Edit, DisableEditOnInstance)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0778(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0779(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x077A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x077B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x077C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldHandleEscape;                                       // 0x077D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x077E(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0780(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0790(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x07A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	void ClearError();
};


// Class UMG.Image
// 0x00D8 (0x0260 - 0x0188)
class UImage : public UWidget
{
public:
	class USlateBrushAsset*                            Image;                                                    // 0x0188(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // 0x0190(0x0078) (Edit, DisableEditOnInstance)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0208(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0218(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0228(0x0014) (ZeroConstructor, InstancedReference)
	bool                                               EnableDefaultDisabledEffect;                              // 0x0238(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x023C(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	unsigned char                                      UnknownData01[0x14];                                      // 0x024C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}


	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.MultiLineEditableText
// 0x0198 (0x0320 - 0x0188)
class UMultiLineEditableText : public UWidget
{
public:
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0188(0x0118) (Edit, BlueprintVisible)
	struct FText                                       Text;                                                     // 0x02A0(0x0028) (Edit, DisableEditOnInstance)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x02C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoWrapText;                                            // 0x02C9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02CA(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x02CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x02D0(0x0020) (Edit, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.MultiLineEditableTextBox
// 0x06F0 (0x0878 - 0x0188)
class UMultiLineEditableTextBox : public UWidget
{
public:
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0188(0x0510) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0698(0x0118) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x07B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x07B8(0x0028) (Edit, DisableEditOnInstance)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x07E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoWrapText;                                            // 0x07E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07E2(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x07E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x07E8(0x0010) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x07F8(0x0020) (Edit, DisableEditOnInstance)
	struct FLinearColor                                ForegroundColor;                                          // 0x0818(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0828(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0838(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0848(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0868(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0198 - 0x0188)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

};


// Class UMG.CanvasPanel
// 0x0038 (0x01D8 - 0x01A0)
class UCanvasPanel : public UPanelWidget
{
public:
	struct FLinearColor                                ColorAndOpacity;                                          // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x01B0(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x18];                                      // 0x01C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}


	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
};


// Class UMG.CheckBox
// 0x05C8 (0x0768 - 0x01A0)
class UCheckBox : public UContentWidget
{
public:
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x01A0(0x0508) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x06A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedImage;                                           // 0x06B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                    // 0x06B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedPressedImage;                                    // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedImage;                                             // 0x06C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedHoveredImage;                                      // 0x06D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedPressedImage;                                      // 0x06D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedImage;                                        // 0x06E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                 // 0x06E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                 // 0x06F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ESlateCheckBoxState>                   CheckedState;                                             // 0x06F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06F9(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x06FC(0x0014) (ZeroConstructor, InstancedReference)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x070C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0710(0x0010) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0720(0x0028) (Edit, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                      // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0758(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(TEnumAsByte<ESlateCheckBoxState> InCheckedState);
	void OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	bool IsPressed();
	bool IsChecked();
	TEnumAsByte<ESlateCheckBoxState> GetCheckedState();
};


// Class UMG.MenuAnchor
// 0x0058 (0x01F8 - 0x01A0)
class UMenuAnchor : public UContentWidget
{
public:
	bool                                               IgnoreClicksOutside;                                      // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	class UClass*                                      MenuClass;                                                // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                    // 0x01B0(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	struct FScriptDelegate                             OnIsOpenChanged;                                          // 0x01C0(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	TEnumAsByte<EMenuPlacement>                        Placement;                                                // 0x01D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	struct FVector2D                                   Padding;                                                  // 0x01D4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x01DC(0x0014) MISSED OFFSET
	class UWidget*                                     CurrentMenuContent;                                       // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}


	void SetIsOpen(bool InIsOpen, bool bFocusMenu);
	void SetIgnoreClicksOutside(bool Ignore);
	void OnIsOpenChanged__DelegateSignature(bool IsOpen);
	bool IsOpen();
	bool GetIgnoreClicksOutside();
};


// Class UMG.ScaleBox
// 0x0018 (0x01B8 - 0x01A0)
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                         // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStretch>                              Stretch;                                                  // 0x01A1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x01A2(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}

};


// Class UMG.SizeBox
// 0x0030 (0x01D0 - 0x01A0)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      bOverride_WidthOverride : 1;                              // 0x01A0(0x0001)
	unsigned char                                      bOverride_HeightOverride : 1;                             // 0x01A0(0x0001)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                            // 0x01A0(0x0001)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                           // 0x01A0(0x0001)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                            // 0x01A0(0x0001)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                           // 0x01A0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x01A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightOverride;                                           // 0x01A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x01AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDesiredHeight;                                         // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDesiredWidth;                                          // 0x01B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDesiredHeight;                                         // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x01BC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}


	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearHeightOverride();
};


// Class UMG.Viewport
// 0x0030 (0x01D0 - 0x01A0)
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                          // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x01B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}


	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};


// Class UMG.GridPanel
// 0x0030 (0x01D0 - 0x01A0)
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      RowFill;                                                  // 0x01B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}


	class UGridSlot* AddChildToGrid(class UWidget* Content);
};


// Class UMG.HorizontalBox
// 0x0010 (0x01B0 - 0x01A0)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}


	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};


// Class UMG.Overlay
// 0x0010 (0x01B0 - 0x01A0)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}


	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};


// Class UMG.ScrollBar
// 0x0288 (0x0428 - 0x01A0)
class UScrollBar : public UPanelWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                              // 0x01A0(0x0260) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0400(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAlwaysShowScrollbar;                                     // 0x0408(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0409(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x040A(0x0002) MISSED OFFSET
	struct FVector2D                                   Thickness;                                                // 0x040C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0414(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};


// Class UMG.UniformGridPanel
// 0x0028 (0x01C8 - 0x01A0)
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                              // 0x01A0(0x0010) (Edit, DisableEditOnInstance)
	float                                              MinDesiredSlotWidth;                                      // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x01B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}


	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
};


// Class UMG.VerticalBox
// 0x0010 (0x01B0 - 0x01A0)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}


	class UVerticalBoxSlot* AddChildVerticalBox(class UWidget* Content);
};


// Class UMG.WidgetSwitcher
// 0x0018 (0x01B8 - 0x01A0)
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x01A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x01A4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}


	void SetActiveWidgetIndex(int index);
	void SetActiveWidget(class UWidget* Widget);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
};


// Class UMG.ProgressBar
// 0x01D0 (0x0358 - 0x0188)
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                              // 0x0188(0x0170) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x02F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImage;                                          // 0x0300(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            FillImage;                                                // 0x0308(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            MarqueeImage;                                             // 0x0310(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x0318(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMarquee;                                               // 0x0319(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInterpolatePercent;                                      // 0x031A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x031B(0x0001) MISSED OFFSET
	float                                              InterpolatePercentSpeed;                                  // 0x031C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Percent;                                                  // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             PercentDelegate;                                          // 0x0324(0x0014) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x0334(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0344(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}


	void SetPercentInterpolationKey(int InterpKey);
	void SetPercent(float InPercent, int InterpKey);
	void SetIsMarquee(bool InbIsMarquee);
};


// Class UMG.Slider
// 0x0268 (0x03F0 - 0x0188)
class USlider : public UWidget
{
public:
	struct FSliderStyle                                WidgetStyle;                                              // 0x0188(0x01E8) (Edit, BlueprintVisible)
	float                                              Value;                                                    // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0374(0x0014) (ZeroConstructor, InstancedReference)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0384(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x0388(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x0398(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x03A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Locked;                                                   // 0x03A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}


	void SetValue(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InSliderHandleColor);
	void SetSliderBarColor(const struct FLinearColor& InSliderBarColor);
	void OnMouseCaptureEndEvent__DelegateSignature();
	void OnMouseCaptureBeginEvent__DelegateSignature();
	void OnFloatValueChangedEvent__DelegateSignature(float Value);
	float GetValue();
};


// Class UMG.Spacer
// 0x0018 (0x01A0 - 0x0188)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0190(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}


	void SetSize(const struct FVector2D& InSize);
};


// Class UMG.SpinBox
// 0x0378 (0x0500 - 0x0188)
class USpinBox : public UWidget
{
public:
	struct FSpinBoxStyle                               WidgetStyle;                                              // 0x0188(0x0298) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0420(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Value;                                                    // 0x0428(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta;                                                    // 0x042C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SliderExponent;                                           // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0438(0x0020) (Edit, DisableEditOnInstance)
	float                                              MinDesiredWidth;                                          // 0x0458(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x045C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x045D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x045E(0x0002) MISSED OFFSET
	struct FSlateColor                                 ForegroundColor;                                          // 0x0460(0x0028) (Edit, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                         // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                    // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                      // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x04C8(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      bOverride_MinValue : 1;                                   // 0x04D8(0x0001)
	unsigned char                                      bOverride_MaxValue : 1;                                   // 0x04D8(0x0001)
	unsigned char                                      bOverride_MinSliderValue : 1;                             // 0x04D8(0x0001)
	unsigned char                                      bOverride_MaxSliderValue : 1;                             // 0x04D8(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x04E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x04E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x04EC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}


	void SetValue(float newValue);
	void SetMinValue(float newValue);
	void SetMinSliderValue(float newValue);
	void SetMaxValue(float newValue);
	void SetMaxSliderValue(float newValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};


// Class UMG.TableViewBase
// 0x0000 (0x0188 - 0x0188)
class UTableViewBase : public UWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TableViewBase");
		return ptr;
	}


	class UWidget* OnGenerateRowUObject__DelegateSignature(class UObject* Item);
};


// Class UMG.ListView
// 0x0040 (0x01C8 - 0x0188)
class UListView : public UTableViewBase
{
public:
	float                                              ItemHeight;                                               // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	TArray<class UObject*>                             Items;                                                    // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateRowEvent;                                       // 0x01A4(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	unsigned char                                      UnknownData02[0x14];                                      // 0x01B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}

};


// Class UMG.TileView
// 0x0040 (0x01C8 - 0x0188)
class UTileView : public UTableViewBase
{
public:
	float                                              ItemWidth;                                                // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemHeight;                                               // 0x018C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UObject*>                             Items;                                                    // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateTileEvent;                                      // 0x01A4(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	unsigned char                                      UnknownData01[0x14];                                      // 0x01B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}


	void SetItemWidth(float Width);
	void SetItemHeight(float Height);
	void RequestListRefresh();
};


// Class UMG.TextBlock
// 0x0210 (0x0398 - 0x0188)
class UTextBlock : public UWidget
{
public:
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0188(0x0118) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x02A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x02A8(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FScriptDelegate                             TextDelegate;                                             // 0x02D0(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x02E0(0x0028) (Edit, DisableEditOnInstance)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0308(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0318(0x0020) (Edit, DisableEditOnInstance)
	struct FVector2D                                   ShadowOffset;                                             // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0340(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            // 0x0350(0x0014) (ZeroConstructor, InstancedReference)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0360(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CenterVertically;                                         // 0x0361(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableInternalClipping;                                 // 0x0362(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DontApplyDisabledEffect;                                  // 0x0363(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0364(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x036C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0370(0x0010) (Edit, DisableEditOnInstance)
	float                                              LineHeightPercentage;                                     // 0x0380(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0384(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetString(const class FString& InString);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetJustification(TEnumAsByte<ETextJustify> Value);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	struct FText GetText();
};


// Class UMG.Throbber
// 0x0098 (0x0220 - 0x0188)
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAnimateHorizontally;                                     // 0x018C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAnimateVertically;                                       // 0x018D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAnimateOpacity;                                          // 0x018E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x018F(0x0001) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0190(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0198(0x0078) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0210(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}


	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};


// Class UMG.WidgetAnimation
// 0x0018 (0x0040 - 0x0028)
class UWidgetAnimation : public UObject
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                        // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}

};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0038 (0x0210 - 0x01D8)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                 // 0x01E0(0x0010) (ZeroConstructor)
	TArray<class UWidgetAnimation*>                    Animations;                                               // 0x01F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0200(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}


	struct FEventReply Unhandled();
	void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void SetInputMode_GameOnly(class APlayerController* Target);
	void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void SetFocusToGameViewport();
	struct FEventReply ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply);
	struct FSlateBrush NoResourceBrush();
	struct FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply Handled();
	struct FEventReply EndDragDrop(struct FEventReply* Reply);
	void DrawText(const class FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, float Thickness, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	void DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context);
	struct FEventReply DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply);
	class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);
	class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	struct FEventReply CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply);
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}


	class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
	class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
	struct FVector2D GetViewportSize(class UObject* WorldContextObject);
	float GetViewportScale(class UObject* WorldContextObject);
};


// Class UMG.WidgetTree
// 0x0018 (0x0040 - 0x0028)
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             AllWidgets;                                               // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
