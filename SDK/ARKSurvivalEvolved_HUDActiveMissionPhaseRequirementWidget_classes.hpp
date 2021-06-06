#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDActiveMissionPhaseRequirementWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDActiveMissionPhaseRequirementWidget.HUDActiveMissionPhaseRequirementWidget_C
// 0x0040 (0x0558 - 0x0518)
class UHUDActiveMissionPhaseRequirementWidget_C : public UPrimalUI
{
public:
	class UBorder*                                     PhaseBorder;                                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  PhaseMaxValueTextBlock;                                   // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                PhaseProgressBar;                                         // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USizeBox*                                    PhaseProgressContainer;                                   // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalRichTextBlock*                        PhaseRichTextBlock;                                       // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              PhaseValueContainer;                                      // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  PhaseValueSlashTextBlock;                                 // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  PhaseValueTextBlock;                                      // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDActiveMissionPhaseRequirementWidget.HUDActiveMissionPhaseRequirementWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_HUDActiveMissionPhaseRequirementWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
