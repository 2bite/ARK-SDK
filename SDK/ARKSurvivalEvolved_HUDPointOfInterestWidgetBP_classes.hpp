#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HUDPointOfInterestWidgetBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C
// 0x01D3 (0x0943 - 0x0770)
class UHUDPointOfInterestWidgetBP_C : public UHUDPointOfInterestWidget
{
public:
	class UWidgetAnimation*                            Pulse;                                                    // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Despawn;                                                  // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Spawn;                                                    // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            HideImmediately;                                          // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Unfocused;                                                // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation*                            Focused;                                                  // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                OffScreenIndicatorContainerPanel;                         // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      OffScreenIndicatorImage;                                  // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                OffScreenPrimaryPanel;                                    // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  OffScreenProgressLabel;                                   // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      OffScreenProgressMaterialHost;                            // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                OnScreenIndicatorContainerPanel;                          // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      OnScreenIndicatorImage;                                   // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                OnScreenPrimaryPanel;                                     // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  OnScreenProgressLabel;                                    // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      OnScreenProgressMaterialHost;                             // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  PointDescTextBlock;                                       // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      PointIcon;                                                // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      PointOffScreenArrowIcon;                                  // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImage*                                      PointOffScreenIcon;                                       // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             PointSwitcher;                                            // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  PointTitleTextBlock;                                      // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APrimalBuff_Companion*                       MyPlayerCompanionBuff;                                    // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFocused;                                               // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanBeFocused;                                            // 0x0829(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_visible;                                               // 0x082A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_despawning;                                            // 0x082B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x082C(0x0004) MISSED OFFSET
	class UMaterialInstance*                           ProgressMaterial;                                         // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProgressMaterialInstanceDynamic;                          // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0840(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0850(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetOwningPlayerPawn_ReturnValue;                 // 0x0858(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0860(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0868(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0869(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff_Companion*                       K2Node_DynamicCast_AsPrimalBuff_Companion;                // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0880(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0881(0x0003) MISSED OFFSET
	struct FGeometry                                   K2Node_Event_MyGeometry;                                  // 0x0884(0x0034) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_InDeltaTime;                                 // 0x08B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x08BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetPointOfInterestWorldLocation_ReturnValue;     // 0x08C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x08CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x08CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x08CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x08CF(0x0001) MISSED OFFSET
	class UWidgetAnimation*                            K2Node_Select_ReturnValue;                                // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x08D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x08D9(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_GetOwningPlayerPawn_ReturnValue2;                // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x08E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x08F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x08F1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x08F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x0900(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x090C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0910(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x0911(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x0912(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue2;              // 0x0913(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue3;              // 0x0914(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0915(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x0916(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0917(0x0001) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x0918(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x0920(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0921(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_GetDynamicMaterial_ReturnValue;                  // 0x0928(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue4;              // 0x0930(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue5;              // 0x0931(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x0932(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_GetDynamicMaterial_ReturnValue2;                 // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue6;              // 0x0940(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue7;              // 0x0941(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue8;              // 0x0942(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDPointOfInterestWidgetBP.HUDPointOfInterestWidgetBP_C");
		return ptr;
	}


	void DestroyPointOfInterestWidget();
	void Construct();
	void DestroyWidgetAfterAnim();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void PlayPulseAnimation();
	void ExecuteUbergraph_HUDPointOfInterestWidgetBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
