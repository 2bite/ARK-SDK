#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChatBoxUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ChatBoxUI.ChatBoxUI_C
// 0x0008 (0x05D8 - 0x05D0)
class UChatBoxUI_C : public UUI_ChatBox
{
public:
	class UEditableTextBox*                            EditTextBox;                                              // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatBoxUI.ChatBoxUI_C");
		return ptr;
	}


	void ExecuteUbergraph_ChatBoxUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
