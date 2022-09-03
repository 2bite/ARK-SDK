#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DrumsMinigameUI_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DrumsMinigameUI.DrumsMinigameUI_C
// 0x0554 (0x0794 - 0x0240)
class UDrumsMinigameUI_C : public UUserWidget
{
public:
	class UProgressBar*                                BeatTravelBar;                                            // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                DEBUG_BeatWindowBar;                                      // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  DEBUG_OutputText;                                         // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                DEBUG_TooLateBar;                                         // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                DEBUG_TooSoonBar;                                         // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDrumBeatWidget_C*                           DrumBeatWidget;                                           // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     GoalPanel;                                                // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     GoalPostLeft;                                             // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     GoalPostRight;                                            // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     MainPanel;                                                // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseDebugMode;                                             // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMinigamePlaying;                                        // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InputReceived;                                            // 0x0292(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBeatMovementPaused;                                     // 0x0293(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowBeatPausing;                                         // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	double                                             NextTimeOut;                                              // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             NextTimeOutWhenInputReceived;                             // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeatWindow;                                               // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeatTimeOut;                                              // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartFadeOutAtDurationPercent;                            // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndFadeInAtDurationPercent;                               // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForcedInputReleaseTime;                                   // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MainPanelWidth;                                           // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeatWidth;                                                // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeatExitWidth;                                            // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConsecutiveBeatsHit;                                      // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultMainPanelColor;                                    // 0x02CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeatHitMainPanelColor;                                    // 0x02DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BeatMissedMainPanelColor;                                 // 0x02EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultBeatWidgetColor;                                   // 0x02FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HitBeatWidgetColor;                                       // 0x030C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MissedBeatWidgetColor;                                    // 0x031C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultGoalPanelColor;                                    // 0x032C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MissedGoalPanelColor;                                     // 0x033C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultGoalPostColor;                                     // 0x034C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MissedGoalPostColor;                                      // 0x035C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MissedTravelBarColor;                                     // 0x036C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultTravelBarColor;                                    // 0x037C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UTexture2D*                                  IncomingBeatWidgetIcon;                                   // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  MissedBeatWidgetIcon;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  HitBeatWidgetIcon;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x03B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x03B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03B2(0x0002) MISSED OFFSET
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x03B4(0x0034) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x03E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x03EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class UCanvasPanelSlot*                            CallFunc_SlotAsCanvasSlot_ReturnValue;                    // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UCanvasPanelSlot*                            CallFunc_SlotAsCanvasSlot_ReturnValue2;                   // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetPosition_ReturnValue;                         // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetSize_ReturnValue;                             // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x0410(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x0414(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X2;                                // 0x0418(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y2;                                // 0x041C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetSize_ReturnValue2;                            // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X3;                                // 0x0428(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y3;                                // 0x042C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x0430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x0431(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0432(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0433(0x0005) MISSED OFFSET
	class UCanvasPanelSlot*                            CallFunc_SlotAsCanvasSlot_ReturnValue3;                   // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue4;              // 0x0440(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	struct FVector2D                                   CallFunc_GetSize_ReturnValue3;                            // 0x0444(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x044C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector2D_X4;                                // 0x0450(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y4;                                // 0x0454(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue5;              // 0x0458(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x0468(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x046C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x046D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue6;              // 0x046E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x046F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x0478(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue7;              // 0x04A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x04A8(0x0050) (Transient, DuplicateTransient)
	float                                              CallFunc_Get_Beat_Travel_Percent_ReturnValue;             // 0x04F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	class UCanvasPanelSlot*                            CallFunc_SlotAsCanvasSlot_ReturnValue4;                   // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_GetPosition_ReturnValue2;                        // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X5;                                // 0x0510(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y5;                                // 0x0514(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Get_Beat_Travel_Percent_ReturnValue2;            // 0x0518(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x051C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue2;                           // 0x0520(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Map_Beat_Travel_Based_On_Timing_State_ReturnValue;// 0x0524(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue2;                 // 0x0530(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_FloatToText_ReturnValue;                    // 0x0538(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x0560(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument2;                    // 0x0568(0x0050) (Transient, DuplicateTransient)
	bool                                               CallFunc_Is_Beat_Too_Soon__;                              // 0x05B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Beat_Too_Late__;                              // 0x05B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Beat_Too_Soon__3;                             // 0x05BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x05BB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x05BC(0x0004) MISSED OFFSET
	class FString                                      CallFunc_SelectString_ReturnValue;                        // 0x05C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                                CallFunc_SelectColor_ReturnValue;                         // 0x05D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Beat_Too_Late__3;                             // 0x05E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x05E1(0x0007) MISSED OFFSET
	class FString                                      CallFunc_SelectString_ReturnValue2;                       // 0x05E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Is_Beat_Too_Soon__4;                             // 0x05F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x0600(0x0028) (Transient, DuplicateTransient)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0628(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument3;                    // 0x0630(0x0050) (Transient, DuplicateTransient)
	bool                                               CallFunc_Is_Beat_Too_Late__4;                             // 0x0680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Beat_Too_Late__5;                             // 0x0681(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0682(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x0684(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0688(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0689(0x0003) MISSED OFFSET
	float                                              CallFunc_Next_Beat_Time_ReturnValue;                      // 0x068C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Next_Beat_Time_ReturnValue2;                     // 0x0690(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0694(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0698(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x069C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       CallFunc_Conv_FloatToText_ReturnValue2;                   // 0x06A0(0x0028) (Transient, DuplicateTransient)
	float                                              CallFunc_SelectFloat_ReturnValue3;                        // 0x06C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x06CC(0x0004) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument4;                    // 0x06D0(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x0720(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x0730(0x0028) (Transient, DuplicateTransient)
	float                                              CallFunc_SelectFloat_ReturnValue4;                        // 0x0758(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Beat_Too_Late__6;                             // 0x075C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	struct FLinearColor                                CallFunc_SelectColor_ReturnValue2;                        // 0x0760(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue8;              // 0x0770(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue9;              // 0x0771(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x0772(0x0002) MISSED OFFSET
	float                                              CallFunc_Too_Soon_Percent_ReturnValue;                    // 0x0774(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TooLatePercent_ReturnValue;                      // 0x0778(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x077C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0780(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue2;                       // 0x0784(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue3;                       // 0x078C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DrumsMinigameUI.DrumsMinigameUI_C");
		return ptr;
	}


	void Set_Minigame_Visual_State(bool IsBeatMissedState);
	float Next_Beat_Time();
	void Is_Beat_Too_Late(bool* _);
	void Is_Beat_Too_Soon(bool* _);
	float Map_Beat_Travel_Based_On_Timing_State();
	float Too_Soon_Percent();
	float TooLatePercent();
	void Map_Percent_to_Position(float Percent, float* Distance);
	void STATIC_Set_ProgressBar_Color(class UProgressBar* ProgressBar, const struct FLinearColor& TintColor);
	float Get_Beat_Travel_Percent();
	void Reset_Beat(bool TryToResetBeatPosition);
	void Stop_Minigame();
	void On_Beat_Too_Late();
	void Release_Input();
	void Receive_Input();
	void SyncWidget(double NextTimeOut, float BeatWindow, float BeatTimeOut, float BeatExitWidth, class UTexture2D* BeatWidgetIcon, bool UseDebugMode);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void ExecuteUbergraph_DrumsMinigameUI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
