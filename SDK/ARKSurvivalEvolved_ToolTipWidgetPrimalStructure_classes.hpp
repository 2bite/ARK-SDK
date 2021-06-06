#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ToolTipWidgetPrimalStructure_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C
// 0x0020 (0x0328 - 0x0308)
class UToolTipWidgetPrimalStructure_C : public UPrimalStructureToolTipWidget
{
public:
	class UProgressBar*                                HealthBar;                                                // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                ModulePanel;                                              // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                RepairPanel;                                              // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalRichTextBlock*                        RequirementsLabel;                                        // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C");
		return ptr;
	}


	void ExecuteUbergraph_ToolTipWidgetPrimalStructure(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
