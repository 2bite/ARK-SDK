#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetMiniHelp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ToolTipWidgetMiniHelp.ToolTipWidgetMiniHelp_C
// 0x0000 (0x02A8 - 0x02A8)
class UToolTipWidgetMiniHelp_C : public UTooltipSmartLayoutWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetMiniHelp.ToolTipWidgetMiniHelp_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetMiniHelp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
