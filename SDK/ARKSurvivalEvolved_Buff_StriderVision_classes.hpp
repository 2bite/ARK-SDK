#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StriderVision_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_StriderVision.Buff_StriderVision_C
// 0x0210 (0x0BA8 - 0x0998)
class ABuff_StriderVision_C : public ABuff_XRay_Base_C
{
public:
	class UMaterialInstanceDynamic*                    OverlayMaterial;                                          // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      net_ref;                                                  // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_casted;                                                // 0x09A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x09A9(0x0007) MISSED OFFSET
	TArray<class APrimalCharacter*>                    Targets;                                                  // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APrimalCharacter*>                    Shared_Targets;                                           // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              highlighted_character_text_scale;                         // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Flash_Target_Rate;                                        // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    Highlighted_Targets;                                      // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class APrimalCharacter*                            highlighted_target;                                       // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                current_radar_filter_setting;                             // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	struct FHUDElement                                 PingHUDElementTemplate;                                   // 0x09F8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APrimalCharacter*                            HUDHighlightTarget;                                       // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 HUDWidgetInstance;                                        // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HUDWidget;                                                // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ViewableDuration;                                         // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B64(0x0004) MISSED OFFSET
	double                                             LastFireTime;                                             // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultPingHUDColor;                                      // 0x0B70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PingVisibility;                                           // 0x0B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReadyToDestroyHUD;                                        // 0x0B81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0B82(0x0002) MISSED OFFSET
	float                                              HUDWorldOffsetLerpMaxRange;                               // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReadyToDestroyHUD2;                                       // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B89(0x0003) MISSED OFFSET
	float                                              render_range;                                             // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               test_var;                                                 // 0x0B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0B91(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x0B98(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_StriderVision.Buff_StriderVision_C");
		return ptr;
	}


	void STATIC_GetHudData(struct FVector* PingWorldLocation, float* ProgressBarValue, struct FLinearColor* BaseColor, float* RingScale, float* Visibility);
	void stop_highlighting_target(class APrimalCharacter* InputPin);
	void set_all_target_bounds_to_1();
	void update_viewed_targets(bool Deactivate);
	void Keep_Visible();
	bool HideBuffFromHUD();
	void Setup_HUDWidget(class APlayerController* PC);
	void DestroyHUDWidget(bool Bypass);
	void Flash_Target();
	void Highlight_latest_shared_target();
	void Keep_Shared_Targets_Active();
	void BPActivated(class AActor** ForInstigator);
	void Set_All_Components_Render_Custom_Depth(class AActor* Actor, bool render_custom_depth);
	void Set_All_Components_Custom_Depth_Stencil_Value(int stencil_Value, class AActor* Actor);
	void BuffTickClient(float* DeltaTime);
	void BuffTickServer(float* DeltaTime);
	void ReceiveBeginPlay();
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ClearHUDReference();
	void ExecuteUbergraph_Buff_StriderVision(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
