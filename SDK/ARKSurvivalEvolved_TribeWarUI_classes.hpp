#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TribeWarUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TribeWarUI.TribeWarUI_C
// 0x0048 (0x05B0 - 0x0568)
class UTribeWarUI_C : public UUI_TribeWarEntry
{
public:
	class UCustomButtonWidget*                         AcceptButton;                                             // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         CloseButton;                                              // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            EndDayEditBox;                                            // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            EndTimeEditBox;                                           // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      FrontOverlayAdditive;                                     // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_152;                                                // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            StartDayEditBox;                                          // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            StartTimeEditBox;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TribeWarUI.TribeWarUI_C");
		return ptr;
	}


	void ExecuteUbergraph_TribeWarUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
