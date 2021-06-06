#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStriderRadarPingWidget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TekStriderRadarPingWidget.TekStriderRadarPingWidget_C
// 0x0070 (0x0588 - 0x0518)
class UTekStriderRadarPingWidget_C : public UPrimalUI
{
public:
	class UImage*                                      MaterialHostImage;                                        // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           ProgressMaterial;                                         // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProgressMaterialInstanceDynamic;                          // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWidgetDestroyed;                                        // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              HUDIndicatorVisibilityRange;                              // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndicatorScaleFar;                                        // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndicatorScaleClose;                                      // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPulseRingOuterRadius;                                  // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPulseRingInnerRadius;                                  // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPulseRingOuterRadius;                                  // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPulseRingInnerRadius;                                  // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimePerAnimationLoop;                                     // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLocationOnScreen;                                       // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x056D(0x0003) MISSED OFFSET
	float                                              IndicatorMaterialOpacityFar;                              // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IndicatorMaterialOpacityClose;                            // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       CallFunc_GetOwningPlayerPawn_ReturnValue;                 // 0x0578(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TekStriderRadarPingWidget.TekStriderRadarPingWidget_C");
		return ptr;
	}


	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void SetMaterialHostScaleAndLocation(const struct FVector& WorldLocation);
	void SyncHUDData();
	void SetupDynamicMaterial();
	void InitializeHUDWidget(class AActor* Instigator);
	void Reset_HUD_Widget();
	void DestroyWidget();
	void ExecuteUbergraph_TekStriderRadarPingWidget(int EntryPoint);
	void OnWidgetDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
