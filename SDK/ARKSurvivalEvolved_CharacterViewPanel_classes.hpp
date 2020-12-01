#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CharacterViewPanel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CharacterViewPanel.CharacterViewPanel_C
// 0x0008 (0x0270 - 0x0268)
class UCharacterViewPanel_C : public UCharacterViewPanelWidget
{
public:
	class UUI_PreviewWidget*                           UI_PreviewWidget;                                         // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterViewPanel.CharacterViewPanel_C");
		return ptr;
	}


	void ExecuteUbergraph_CharacterViewPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
