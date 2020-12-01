#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SubtitlesUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SubtitlesUI.SubtitlesUI_C
// 0x00BA (0x0622 - 0x0568)
class USubtitlesUI_C : public UUI_Subtitles
{
public:
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            FadeOut;                                                  // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      DialogueIconImage;                                        // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  DialogueTextBlock;                                        // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  SubtitleTextBlock;                                        // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              ExtAscensionSubtitles;                                    // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                currentIndex;                                             // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CurrentSubtitleSet;                                       // 0x05A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasChatBoxShown;                                          // 0x05AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_index;                                 // 0x05B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_SubtitleSet;                           // 0x05B4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05BC(0x0004) MISSED OFFSET
	TArray<class FString>                              CallFunc_GetSubtitles_Subtitles;                          // 0x05C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x05D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05D4(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Array_Get_Item;                                  // 0x05D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x05E8(0x0028) (Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0610(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0614(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0615(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0616(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0617(0x0001) MISSED OFFSET
	class AShooterHUD*                                 CallFunc_GetShooterHUD_ReturnValue;                       // 0x0618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      CallFunc_GetVisibility_ReturnValue;                       // 0x0620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0621(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SubtitlesUI.SubtitlesUI_C");
		return ptr;
	}


	void ProcessDynamicMaterialForDialogueIcon();
	void OnShowSubtitles();
	void GetSubtitles(TArray<class FString>* Subtitles);
	void ShowSubtitleAtIndex(int index);
	void FadeOutSubtitles();
	void AddedToViewport();
	void RemovedFromViewport();
	void ShowNextSubtitle();
	void ResetToStart(const struct FName& SubtitleSet);
	void OnHideSubtitles();
	void ExecuteUbergraph_SubtitlesUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
