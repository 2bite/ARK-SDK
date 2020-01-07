#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrueSkyPlugin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TrueSkyPlugin.TrueSkyComponent
// 0x0000 (0x00D8 - 0x00D8)
class UTrueSkyComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkyComponent");
		return ptr;
	}

};


// Class TrueSkyPlugin.TrueSkySequenceActor
// 0x0070 (0x04C0 - 0x0450)
class ATrueSkySequenceActor : public AActor
{
public:
	TArray<class UTrueSkySequenceAsset*>               ActiveSequences;                                          // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  MoonTexture;                                              // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CosmicBackgroundTexture;                                  // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      External_ScatterRT;                                       // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      External_LossRT;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Brightness;                                               // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MetresPerUnit;                                            // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSimpleCloudShadowing;                                  // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimpleCloudShadowing;                                  // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSimpleCloudShadowingDistance;                          // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimpleCloudShadowingDistance;                          // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimpleCloudShadowSharpness;                               // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	bool                                               Visible;                                                  // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x04B1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkySequenceActor");
		return ptr;
	}


	void SetTime(float Value);
	void SetPointLightSource(int ID, const struct FLinearColor& lightColour, float Intensity, const struct FVector& pos, float MinRadius, float MaxRadius);
	void SetPointLight(class APointLight* Source);
	void SetKeyframeInt(int keyframeUid, const class FString& Name, int Value);
	void SetKeyframeFloat(int keyframeUid, const class FString& Name, float Value);
	void SetInt(const class FString& Name, int Value);
	void SetFloat(const class FString& Name, float Value);
	struct FRotator GetSunRotation();
	struct FLinearColor GetSunColor();
	int GetNextModifiableSkyKeyframe();
	int GetNextModifiableCloudKeyframe(int Layer);
	int GetKeyframeInt(int keyframeUid, const class FString& Name);
	float GetKeyframeFloat(int keyframeUid, const class FString& Name);
	int GetInt(const class FString& Name);
	float GetFloat(const class FString& Name);
	void ForceUpdate();
	float CloudPointTest(int queryId, const struct FVector& pos);
	float CloudLineTest(int queryId, const struct FVector& StartPos, const struct FVector& EndPos);
};


// Class TrueSkyPlugin.TrueSkySequenceAsset
// 0x0010 (0x0038 - 0x0028)
class UTrueSkySequenceAsset : public UObject
{
public:
	TArray<unsigned char>                              SequenceText;                                             // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TrueSkyPlugin.TrueSkySequenceAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
