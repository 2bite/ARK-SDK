#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Sky_Sphere_ARK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C
// 0x01E8 (0x06C8 - 0x04E0)
class ABP_Sky_Sphere_ARK_C : public ASkyBoxLoader
{
public:
	class UStaticMeshComponent*                        Sky_Sphere_mesh;                                          // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Base;                                                     // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          BaseMaterial;                                             // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WeatherMaterial;                                          // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sky_material;                                             // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Refresh_material;                                         // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class ADirectionalLight*                           Directional_light_actor;                                  // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Colors_determined_by_sun_position;                        // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	float                                              Sun_height;                                               // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Brightness;                                           // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Horizon_falloff;                                          // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Zenith_color;                                             // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Horizon_color;                                            // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Cloud_color;                                              // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Overall_Color;                                            // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_speed;                                              // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_opacity;                                            // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stars_brightness;                                         // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           Horizon_color_curve;                                      // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Zenith_color_curve;                                       // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Cloud_color_curve;                                        // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADayCycleManager*                            DayCycleManager;                                          // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              DayLengthPower;                                           // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasUpdatedSky;                                           // 0x059C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x059D(0x0003) MISSED OFFSET
	class UCurveFloat*                                 SkyTextureLookupCurve;                                    // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DayAnimationTimeMult;                                     // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SkyNextFrameEndPosCurve;                                  // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAtmosphericFog*                             AtmosphericFog;                                           // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bWeatherEventActive;                                      // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MIC_Weather;                                              // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MIC_NoWeather;                                            // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentSkybox;                                            // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalBlend;                                              // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        RainFogTintScatterLoss;                                   // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        HeatWaveTintScatterLoss;                                  // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        ColdFrontTintScatterLoss;                                 // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        FogItUpTintScatterLoss;                                   // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        DaytimeTintScatterLoss;                                   // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        NighttimeTintScatterLoss;                                 // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        DaytimeTintScatterLoss_SM4;                               // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        NighttimeTintScatterLoss_SM4;                             // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        DaycycleTintScatterLoss;                                  // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHadScatterTextures;                                      // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0671(0x0003) MISSED OFFSET
	int                                                TickModulo;                                               // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TickAdd;                                                  // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	TArray<class AStaticMeshActor*>                    OtherSkyMeshes;                                           // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0690(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x0691(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue3;                  // 0x0692(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x5];                                       // 0x0693(0x0005) MISSED OFFSET
	TArray<float>                                      K2Node_MakeArray_Array;                                   // 0x0698(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_MaxOfFloatArray_IndexOfMaxValue;                 // 0x06A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MaxOfFloatArray_MaxValue;                        // 0x06AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x06B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ReallySupportsShaderModel5_ReturnValue;          // 0x06B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x06B2(0x0006) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue2;      // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sky_Sphere_ARK.BP_Sky_Sphere_ARK_C");
		return ptr;
	}


	void GetSkyMaterialReference(class UMaterialInstanceDynamic** Mid);
	void ResetMaterials();
	void SetMaterials(class UMaterialInterface* NewMaterial);
	void ReceiveBeginPlay();
	void ColorFilter(const struct FLinearColor& InputColor, const struct FLinearColor& FilterColor, struct FLinearColor* OutputColor);
	void Update_Material(float Time, TArray<float>* WeatherBlends);
	void UpdateSunDirection();
	void STATIC_UserConstructionScript();
	void BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_147_ActorMatineeUpdated__DelegateSignature();
	void ExecuteUbergraph_BP_Sky_Sphere_ARK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
