#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Slate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x0248 (0x0278 - 0x0030)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0030(0x0248) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x0508 (0x0538 - 0x0030)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0030(0x0508) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x0398 (0x03C8 - 0x0030)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0030(0x0398) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x0350 (0x0380 - 0x0030)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0030(0x0350) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x0510 (0x0540 - 0x0030)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0030(0x0510) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0230 (0x0260 - 0x0030)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0030(0x0230) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x0170 (0x01A0 - 0x0030)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0030(0x0170) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x0260 (0x0290 - 0x0030)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0030(0x0260) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x01E8 (0x0218 - 0x0030)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0030(0x01E8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x0298 (0x02C8 - 0x0030)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0030(0x0298) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x0118 (0x0148 - 0x0030)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0030(0x0118) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
