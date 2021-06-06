#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantTurtleHUD_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GiantTurtleHUD.GiantTurtleHUD_C
// 0x02E8 (0x0800 - 0x0518)
class UGiantTurtleHUD_C : public UPrimalUI
{
public:
	class UTextBlock*                                  AbilityLabelTextBlock;                                    // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UProgressBar*                                AbilityProgressBar;                                       // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  AbilityStatusTextBlock;                                   // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHorizontalBox*                              AbilityTextPanel;                                         // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AGiantTurtle_Character_BP_C*                 SpawnedByTurtle;                                          // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ProgressBarColorLerpAlpha;                                // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_CustomEvent_NewLifespan;                           // 0x0544(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0548(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x054C(0x0034) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x0580(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0584(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0589(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x058A(0x0002) MISSED OFFSET
	struct FLinearColor                                CallFunc_SelectColor_ReturnValue;                         // 0x058C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController;                    // 0x05A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x05B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05B1(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x05B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x05B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x05B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x05BA(0x0002) MISSED OFFSET
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue;                     // 0x05BC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_SelectColor_ReturnValue2;                        // 0x05CC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	struct FSlateColor                                 K2Node_MakeStruct_SlateColor;                             // 0x05E0(0x0028) (Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0608(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSlateBrush                                 K2Node_MakeStruct_SlateBrush;                             // 0x0618(0x0078) (Transient, DuplicateTransient)
	struct FProgressBarStyle                           K2Node_MakeStruct_ProgressBarStyle;                       // 0x0690(0x0170) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GiantTurtleHUD.GiantTurtleHUD_C");
		return ptr;
	}


	struct FText STATIC_Get_AbilityTextBlock_Text_1();
	float Get_BubbleBreathProgressBar_Percent_1();
	void InitFromGiantTurtle(class AGiantTurtle_Character_BP_C* GiantTurtle_Char_BP);
	void StartClosingWidget(float NewLifeSpan);
	void DestroyHUDWidget();
	void ResetHudWidget();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_GiantTurtleHUD(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
