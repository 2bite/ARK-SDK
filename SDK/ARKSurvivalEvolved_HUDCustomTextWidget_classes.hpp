#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDCustomTextWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDCustomTextWidget.HUDCustomTextWidget_C
// 0x0018 (0x0258 - 0x0240)
class UHUDCustomTextWidget_C : public UUserWidget
{
public:
	class UImage*                                      CustomIcon;                                               // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  CustomText;                                               // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  CustomText_Title;                                         // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDCustomTextWidget.HUDCustomTextWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_HUDCustomTextWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
