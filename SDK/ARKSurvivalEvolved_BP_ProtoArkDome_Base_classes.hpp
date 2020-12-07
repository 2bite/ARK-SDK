#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ProtoArkDome_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C
// 0x05EC (0x0ACC - 0x04E0)
class ABP_ProtoArkDome_Base_C : public ASkyBoxLoader
{
public:
	class USphereComponent*                            OuterBoundary;                                            // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            BoundarySphere;                                           // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            InnerBoundary;                                            // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        OuterGlow;                                                // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Cave_Visibility;                                          // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Bubble;                                                   // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Sky_Sphere_mesh;                                          // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Base;                                                     // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sky_material;                                             // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Refresh_material;                                         // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	class ADirectionalLight*                           Directional_light_actor;                                  // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Colors_determined_by_sun_position;                        // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0539(0x0003) MISSED OFFSET
	float                                              Sun_height;                                               // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Brightness;                                           // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Horizon_falloff;                                          // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Zenith_color;                                             // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Horizon_color;                                            // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Cloud_color;                                              // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Overall_Color;                                            // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_speed;                                              // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_opacity;                                            // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stars_brightness;                                         // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           Horizon_color_curve;                                      // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Zenith_color_curve;                                       // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Cloud_color_curve;                                        // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADayCycleManager*                            DayCycleManager;                                          // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              DayLengthPower;                                           // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasUpdatedSky;                                           // 0x05BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05BD(0x0003) MISSED OFFSET
	class UCurveFloat*                                 SkyTextureLookupCurve;                                    // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DayAnimationTimeMult;                                     // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SkyNextFrameEndPosCurve;                                  // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWeatherEventActive;                                      // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIC_Weather;                                              // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MIC_NoWeather;                                            // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentSkybox;                                            // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalBlend;                                              // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHadScatterTextures;                                      // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05F9(0x0003) MISSED OFFSET
	int                                                TickModulo;                                               // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TickAdd;                                                  // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FogColor;                                                 // 0x0604(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FogDensity;                                               // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ObjectScale;                                              // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMaster;                                                 // 0x061C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x061D(0x0003) MISSED OFFSET
	class AExtinctionDayCycle_C*                       ExtinctionDayCycleManager;                                // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AAtmosphericFog*                             AtmosphericFog;                                           // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FLinearColor>                        RainFogTintScatterLoss;                                   // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        HeatWaveTintScatterLoss;                                  // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        ColdFrontTintScatterLoss;                                 // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        FogItUpTintScatterLoss;                                   // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        DaytimeTintScatterLoss;                                   // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        NighttimeTintScatterLoss;                                 // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        DaytimeTintScatterLoss_SM4;                               // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        NighttimeTintScatterLoss_SM4;                             // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        DaycycleTintScatterLoss;                                  // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InWasteland;                                              // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x06C1(0x0003) MISSED OFFSET
	int                                                currentSkyTextureIndex;                                   // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                nextSkyTextureIndex;                                      // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               insideOuter;                                              // 0x06CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               outsideInner;                                             // 0x06CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x06CE(0x0002) MISSED OFFSET
	class UPostProcessComponent*                       TransitionPP;                                             // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               updateSkyTexture;                                         // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	class ABuff_Dome_Transition_C*                     TransitionBuff;                                           // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionBuffInit;                                       // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	class ADirectionalLight*                           Wasteland_Directional_light_actor;                        // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     CaveCenter;                                               // 0x06F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CaveExtents;                                              // 0x0704(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InsideBoundarySphere;                                     // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	class ASpherePostProcessVolume*                    PPVol;                                                    // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              RadiusOffset;                                             // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               K2Node_CustomEvent_InWasteland;                           // 0x0724(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0725(0x0003) MISSED OFFSET
	class FString                                      CallFunc_Conv_IntToString_ReturnValue;                    // 0x0728(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_SetSkyMaterial_Time;                             // 0x0738(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	TArray<float>                                      CallFunc_SetSkyMaterial_Weather;                          // 0x0740(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x0750(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0760(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0761(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x0762(0x0006) MISSED OFFSET
	class FString                                      CallFunc_Conv_BoolToString_ReturnValue;                   // 0x0768(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x0778(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue3;                      // 0x0788(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_ReallySupportsShaderModel5_ReturnValue;          // 0x0798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0799(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x079C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<int>                                        CallFunc_MakeIndexArray_OutIndexArray;                    // 0x07A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_LoadSkyTextureIndexArray_ReturnValue;            // 0x07B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x07B1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor2;                   // 0x07B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp2;                    // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex2;               // 0x07C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x07CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x07D0(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue;         // 0x0858(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0859(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x0860(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x0868(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x0870(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlledByPlayer_ReturnValue2;        // 0x0874(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0875(0x0003) MISSED OFFSET
	class AExtinctionDayCycle_C*                       K2Node_DynamicCast_AsExtinctionDayCycle_C;                // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0880(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	class ACharacter*                                  CallFunc_GetPlayerCharacter_ReturnValue;                  // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0890(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	class ACharacter*                                  CallFunc_GetPlayerCharacter_ReturnValue2;                 // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x08A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor8;                   // 0x08A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp8;                    // 0x08B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex8;               // 0x08B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep4;                   // 0x08BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult4;                  // 0x08C0(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor7;                   // 0x0948(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp7;                    // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex7;               // 0x0958(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor6;                   // 0x0960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp6;                    // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex6;               // 0x0970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep3;                   // 0x0974(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult3;                  // 0x0978(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor5;                   // 0x0A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp5;                    // 0x0A08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex5;               // 0x0A10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep2;                   // 0x0A14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult2;                  // 0x0A18(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor3;                   // 0x0AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp3;                    // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex3;               // 0x0AB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x0AB4(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor4;                   // 0x0AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp4;                    // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex4;               // 0x0AC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProtoArkDome_Base.BP_ProtoArkDome_Base_C");
		return ptr;
	}


	void ExitBoundarySphere();
	void EnterBoundarySphere();
	void PrintBoundary();
	void UpdateBoundary();
	void BoundaryCheck();
	void EnterInnerBoundary();
	void ExitOuterBoundary();
	void Exit_Inner_Boundary();
	void EnterOuterBoundary();
	void TriggerDomeTransition();
	void ReceiveBeginPlay();
	void IsInCave(bool* F);
	void PlayerTest(class AActor* Player, bool* IsPlayer0);
	void RemovePP();
	void addPP();
	void TextureCheck(int Texture0, int Texture1, bool* Update);
	void ColorFilter(const struct FLinearColor& InputColor, const struct FLinearColor& FilterColor, struct FLinearColor* OutputColor);
	void Update_Material(float Time, TArray<float>* WeatherBlends);
	void UpdateSunDirection(float Time);
	void UserConstructionScript();
	void BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature();
	void SetAtmosphericFog(bool InWasteland);
	void ToggleDomeVisibility();
	void BndEvt__BoundarySphere_K2Node_ComponentBoundEvent_313_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__BoundarySphere_K2Node_ComponentBoundEvent_317_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__OuterBoundary_K2Node_ComponentBoundEvent_240_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__InnerBoundary_K2Node_ComponentBoundEvent_246_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__OuterBoundary_K2Node_ComponentBoundEvent_253_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__InnerBoundary_K2Node_ComponentBoundEvent_261_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Cave_Visibility_K2Node_ComponentBoundEvent_678_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__Cave_Visibility_K2Node_ComponentBoundEvent_688_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_ProtoArkDome_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
