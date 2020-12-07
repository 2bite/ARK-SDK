#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDCustomImageWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDCustomImageWidget.HUDCustomImageWidget_C
// 0x0008 (0x0248 - 0x0240)
class UHUDCustomImageWidget_C : public UUserWidget
{
public:
	class UImage*                                      CustomImage;                                              // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDCustomImageWidget.HUDCustomImageWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_HUDCustomImageWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
