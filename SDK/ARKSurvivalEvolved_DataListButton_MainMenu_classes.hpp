#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListButton_MainMenu_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListButton_MainMenu.DataListButton_MainMenu_C
// 0x0008 (0x0588 - 0x0580)
class UDataListButton_MainMenu_C : public UDataListEntryButton_MainMenu
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListButton_MainMenu.DataListButton_MainMenu_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListButton_MainMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
