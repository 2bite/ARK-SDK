#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionsUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MissionsUI.MissionsUI_C
// 0x01E0 (0x0C88 - 0x0AA8)
class UMissionsUI_C : public UUI_MissionList
{
public:
	class UVerticalBox*                                ActiveMissionBox;                                         // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             AllMissionsButton;                                        // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         AlphabeticalSortButton;                                   // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             ArcticBiomeButton;                                        // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             BogBiomeButton;                                           // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DetailsTabBackgroundImage;                                // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DistanceSortButton;                                       // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     EffectsButton;                                            // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UScrollBox*                                  EffectsScrollBox;                                         // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  EffectsTabButtonLabel;                                    // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                EffectsTabPanel;                                          // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  EmptyListPlaceholderTextBlock;                            // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              FilterPanel;                                              // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USizeBox*                                    Gen1BiomeFilterPanel;                                     // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  HexagonRewardsLabel;                                      // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_112;                                                // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_150;                                                // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_278;                                                // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_685;                                                // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_721;                                                // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_804;                                                // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              InnerHexagonRewardsPanel;                                 // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOverlay*                                    InnerMissionInfoPanel;                                    // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                InnerWorldBuffsRewardsPanel;                              // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  IsMissionActiveLabel;                                     // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  LeaderboardsMissionName;                                  // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             LunarBiomeButton;                                         // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MissionDescriptionPanel;                                  // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     MissionDetails_LeaderboardsButton;                        // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionDetails_MissionDescriptionTextBlock;               // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionDetails_MissionNameTextBlock;                      // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         MissionDetails_StartMissionButton;                        // 0x0BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionDetails_StartMissionButtonText;                    // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              MissionDetailsButtonPanel;                                // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                MissionDetailsContainer;                                  // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            MissionFilter;                                            // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MissionInfoBorder;                                        // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             MissionInfoTabSwitcher;                                   // 0x0BD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                MissionListBox;                                           // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                MissionListContainer;                                     // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MissionListPanel;                                         // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionNotCompletedTextBlock;                             // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                MissionPrereqListPanel;                                   // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                MissionPrerequisitePanel;                                 // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     MissionsButton;                                           // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                MissionsTabPanel;                                         // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MissionStatusPanel;                                       // 0x0C18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             OceanBiomeButton;                                         // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  RewardsLabelTextBlock;                                    // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                RewardsPanel;                                             // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     SelectAMissionPanel;                                      // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     ShowMissionInfoButton;                                    // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TabBackgroundImage;                                       // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             TabBgSwitcher;                                            // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextBlock_856;                                            // 0x0C58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                TrackedMissionBox;                                        // 0x0C60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         TrackMissionButton;                                       // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TrackMissionLabel;                                        // 0x0C70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             VolcanicBiomeButton;                                      // 0x0C78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                WorldBuffsRewardsPanel;                                   // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionsUI.MissionsUI_C");
		return ptr;
	}


	void ExecuteUbergraph_MissionsUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
