#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C
// 0x0060 (0x0BB0 - 0x0B50)
class ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C : public ABuff_ChargeEmitterStructure_C
{
public:
	class UPointLightComponent*                        ChargeLight;                                              // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightFadeOut_fadeOutAlpha_58016462417C8C1F9E73388F30C9DAA8;// 0x0B58(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightFadeOut__Direction_58016462417C8C1F9E73388F30C9DAA8; // 0x0B5C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B5D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightFadeOut;                                             // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightFadeIn_lightAlpha_E5CC472246391ECED2F299A7D0FA5D21;  // 0x0B68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightFadeIn__Direction_E5CC472246391ECED2F299A7D0FA5D21;  // 0x0B6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightFadeIn;                                              // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isLightFadingIn;                                          // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B79(0x0003) MISSED OFFSET
	float                                              lightMinExposure;                                         // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMaxExposure;                                         // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMinIntensity;                                        // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMaxIntensity;                                        // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ChargeColor;                                              // 0x0B8C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isLightFadingOut;                                         // 0x0B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0B9D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B9E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0B9F(0x0001) MISSED OFFSET
	float                                              CallFunc_GetLightTargetIntensity_targetIntensity;         // 0x0BA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x0BA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0BA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0BA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0BAA(0x0002) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue2;                               // 0x0BAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C");
		return ptr;
	}


	void AttachBuffToPlant();
	void InitializeEmitter();
	void UpdateLightIntensity();
	void BuffTickClient(float* DeltaTime);
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* iValue);
	void GetLightTargetIntensity(float* targetIntensity);
	void GetEmitterLineTraceOrigin(class AActor** emitterActor, struct FVector* lineTraceOrigin);
	void UserConstructionScript();
	void LightFadeIn__FinishedFunc();
	void LightFadeIn__UpdateFunc();
	void LightFadeOut__FinishedFunc();
	void LightFadeOut__UpdateFunc();
	void FadeInLight();
	void FadeOutLight();
	void ExecuteUbergraph_Buff_ChargeEmitterStructure_PlantSpeciesZ_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
