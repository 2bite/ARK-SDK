#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NotificationUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass NotificationUI.NotificationUI_C
// 0x0018 (0x0580 - 0x0568)
class UNotificationUI_C : public UUI_Notification
{
public:
	class UImage*                                      Image_2;                                                  // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_3;                                                  // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     OkButton;                                                 // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotificationUI.NotificationUI_C");
		return ptr;
	}


	void ExecuteUbergraph_NotificationUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
