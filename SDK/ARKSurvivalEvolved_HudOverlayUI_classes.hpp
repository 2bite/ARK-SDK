#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HudOverlayUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HudOverlayUI.HudOverlayUI_C
// 0x0008 (0x0540 - 0x0538)
class UHudOverlayUI_C : public UUI_HudOverlay
{
public:
	class UHUDOVerlayWidget*                           HudOverlay;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudOverlayUI.HudOverlayUI_C");
		return ptr;
	}


	void ExecuteUbergraph_HudOverlayUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
