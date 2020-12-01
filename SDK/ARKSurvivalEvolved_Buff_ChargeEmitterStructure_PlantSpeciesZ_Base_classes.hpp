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
// 0x0060 (0x0B20 - 0x0AC0)
class ABuff_ChargeEmitterStructure_PlantSpeciesZ_Base_C : public ABuff_ChargeEmitterStructure_C
{
public:
	class UPointLightComponent*                        ChargeLight;                                              // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightFadeOut_fadeOutAlpha_58016462417C8C1F9E73388F30C9DAA8;// 0x0AC8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightFadeOut__Direction_58016462417C8C1F9E73388F30C9DAA8; // 0x0ACC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0ACD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightFadeOut;                                             // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightFadeIn_lightAlpha_E5CC472246391ECED2F299A7D0FA5D21;  // 0x0AD8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightFadeIn__Direction_E5CC472246391ECED2F299A7D0FA5D21;  // 0x0ADC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0ADD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightFadeIn;                                              // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isLightFadingIn;                                          // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AE9(0x0003) MISSED OFFSET
	float                                              lightMinExposure;                                         // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMaxExposure;                                         // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMinIntensity;                                        // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMaxIntensity;                                        // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ChargeColor;                                              // 0x0AFC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isLightFadingOut;                                         // 0x0B0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0B0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B0E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0B0F(0x0001) MISSED OFFSET
	float                                              CallFunc_GetLightTargetIntensity_targetIntensity;         // 0x0B10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x0B14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0B19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0B1A(0x0002) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue2;                               // 0x0B1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterStructure_PlantSpeciesZ_Base.Buff_ChargeEmitterStructure_PlantSpeciesZ_Base_C");
		return ptr;
	}


	void AttachBuffToPlant();
	void InitializeEmitter();
	void UpdateLightIntensity();
	void BuffTickClient(float* DeltaTime);
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames>* variableType, bool* bBValue, float* fValue, double* dValue, int* ivalue);
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
