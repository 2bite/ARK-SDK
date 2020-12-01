#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DataListButtonCenteredText_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DataListButtonCenteredText.DataListButtonCenteredText_C
// 0x0010 (0x06A8 - 0x0698)
class UDataListButtonCenteredText_C : public UDinoListButtonWidget
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMenuAnchor*                                 CtxMenu;                                                  // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListButtonCenteredText.DataListButtonCenteredText_C");
		return ptr;
	}


	void ExecuteUbergraph_DataListButtonCenteredText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
