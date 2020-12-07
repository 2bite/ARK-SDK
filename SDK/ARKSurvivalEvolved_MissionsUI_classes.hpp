#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0120 (0x0AC0 - 0x09A0)
class UMissionsUI_C : public UUI_MissionList
{
public:
	class UImage*                                      ActiveMissionIconImage;                                   // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             AllMissionsButton;                                        // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         AlphabeticalSortButton;                                   // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             ArcticBiomeButton;                                        // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             BogBiomeButton;                                           // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         DistanceSortButton;                                       // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  HexagonRewardsLabel;                                      // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_112;                                                // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_150;                                                // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_250;                                                // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_278;                                                // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_403;                                                // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_490;                                                // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image_620;                                                // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  IsMissionActiveLabel;                                     // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  LeaderboardsMissionName;                                  // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             LunarBiomeButton;                                         // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionDetails_MissionDescriptionTextBlock;               // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionDetails_MissionNameTextBlock;                      // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         MissionDetails_StartMissionButton;                        // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionDetails_StartMissionButtonText;                    // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                MissionDetailsContainer;                                  // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEditableTextBox*                            MissionFilter;                                            // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             MissionInfoTabSwitcher;                                   // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                MissionListContainer;                                     // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  MissionNotCompletedTextBlock;                             // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UButton*                                     MissionsButton;                                           // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MissionStatusPanel;                                       // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             OceanBiomeButton;                                         // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         ShowMissionInfoButton;                                    // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             TabBgSwitcher;                                            // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      TabSplitImgInventory;                                     // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextBlock_856;                                            // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCustomButtonWidget*                         TrackMissionButton;                                       // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TrackMissionLabel;                                        // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMissionBiomeCompletionButton_C*             VolcanicBiomeButton;                                      // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
