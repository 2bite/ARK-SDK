#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDActiveMissionDisplayWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDActiveMissionDisplayWidget.HUDActiveMissionDisplayWidget_C
// 0x0090 (0x09A8 - 0x0918)
class UHUDActiveMissionDisplayWidget_C : public UHUDActiveMissionWidget
{
public:
	class UTextBlock*                                  BestTimeNumberText;                                       // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                EffectsPanel;                                             // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                InnerMissionContainer;                                    // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                MissionAlertEntryContainer;                               // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MissionAlertFlyoutContainer;                              // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionAlertHeader;                                       // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionDescriptionTextBlock;                              // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MissionDifficultyPanel;                                   // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionDifficultyTextBlock;                               // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionNameTextBlock;                                     // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USizeBox*                                    MissionRootContainer;                                     // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                MissionStatTrackerContainer;                              // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionTimeValueTextBlock;                                // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHUDActiveMissionPhaseRequirementWidget_C*   ObjectiveTimePhaseRequirementWidget;                      // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                PhaseRequirementContainer;                                // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHUDActiveMissionPhaseRequirementWidget_C*   RacePhaseRequirementWidget;                               // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                TopMissionAlertEntryContainer;                            // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TopMissionAlertTitleTextBlock;                            // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDActiveMissionDisplayWidget.HUDActiveMissionDisplayWidget_C");
		return ptr;
	}


	void ExecuteUbergraph_HUDActiveMissionDisplayWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
