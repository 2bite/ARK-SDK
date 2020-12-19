#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDCustomProgressWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDCustomProgressWidget.HUDCustomProgressWidget_C
// 0x0020 (0x0260 - 0x0240)
class UHUDCustomProgressWidget_C : public UUserWidget
{
public:
	class UImage*                                      CustomIcon;                                               // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                CustomProgress;                                           // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  CustomText;                                               // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  CustomText_Title;                                         // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDCustomProgressWidget.HUDCustomProgressWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_HUDCustomProgressWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
