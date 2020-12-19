#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HudOverlayUITop_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HudOverlayUITop.HudOverlayUITop_C
// 0x0008 (0x0540 - 0x0538)
class UHudOverlayUITop_C : public UUI_HudOverlay
{
public:
	class UHUDOVerlayWidget*                           HudOverlay;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudOverlayUITop.HudOverlayUITop_C");
		return ptr;
	}


	void ExecuteUbergraph_HudOverlayUITop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
