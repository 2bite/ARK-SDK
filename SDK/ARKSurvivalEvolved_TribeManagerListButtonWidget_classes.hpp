#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TribeManagerListButtonWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TribeManagerListButtonWidget.TribeManagerListButtonWidget_C
// 0x0008 (0x0538 - 0x0530)
class UTribeManagerListButtonWidget_C : public UTribeManagerListButton
{
public:
	class UCustomButtonWidget*                         Button;                                                   // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TribeManagerListButtonWidget.TribeManagerListButtonWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_TribeManagerListButtonWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
