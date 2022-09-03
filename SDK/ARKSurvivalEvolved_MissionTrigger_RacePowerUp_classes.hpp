#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTrigger_RacePowerUp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C
// 0x0168 (0x0A38 - 0x08D0)
class AMissionTrigger_RacePowerUp_C : public AMissionTrigger
{
public:
	class UParticleSystemComponent*                    PowerUpParticleComp;                                      // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_PowerUp_Fade_Alpha_DF7FB7BB40E346CF5436EE92E6948F6B;// 0x08D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PowerUp_Fade__Direction_DF7FB7BB40E346CF5436EE92E6948F6B;// 0x08DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PowerUp_Fade;                                    // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_PowerUpActivate_alpha_886190DB449682F9ECF511A052FD2010;// 0x08E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PowerUpActivate__Direction_886190DB449682F9ECF511A052FD2010;// 0x08EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PowerUpActivate;                                 // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_PulseColor_Alpha_9A393B074C61BA9AEB6DAE94865C0439;// 0x08F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PulseColor__Direction_9A393B074C61BA9AEB6DAE94865C0439;// 0x08FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PulseColor;                                      // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TriggerSize;                                              // 0x0908(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0914(0x0004) MISSED OFFSET
	class UParticleSystem*                             ActivePowerUpVFX;                                         // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VFXOffset;                                                // 0x0920(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PowerUpColor_Default;                                     // 0x092C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PowerUpColor_Pulse;                                       // 0x093C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PowerUpColor_Inactive;                                    // 0x094C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightColor_Default;                                       // 0x095C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPowerUpEnabled;                                          // 0x096C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	struct FName                                       ParamName_FadeStationary;                                 // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName_FadeMoving;                                     // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName_PowerUpColor;                                   // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName_LightColor;                                     // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibilityRange;                                          // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenUsed;                                             // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPulsing;                                               // 0x0995(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0996(0x0002) MISSED OFFSET
	float                                              TimelinePlayRate_Fade;                                    // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimelinePlayRate_Pulse;                                   // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimelinePlayRate_Enable;                                  // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasInitialized;                                          // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPowerUpActive;                                           // 0x09A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugPowerUps;                                           // 0x09A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x09A7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Square_ReturnValue;                              // 0x09A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x09AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue;                     // 0x09B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue2;                    // 0x09C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue3;                    // 0x09D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue4;                    // 0x09E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x09F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x09F1(0x0003) MISSED OFFSET
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue5;                    // 0x09F4(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPowerUpActive_PURE_bResult;                    // 0x0A04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0A05(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0A06(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x0A07(0x0001) MISSED OFFSET
	class FString                                      CallFunc_GetDisplayName_ReturnValue;                      // 0x0A08(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x0A18(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x0A28(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionTrigger_RacePowerUp.MissionTrigger_RacePowerUp_C");
		return ptr;
	}


	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void ResetPowerUp();
	void IsPowerUpActive_PURE(bool* bResult);
	void IsPowerUpActive(bool* bResult);
	void DeactivatePowerUp();
	void InitPowerUp();
	void SetPowerUpEnabled(bool NewEnabled);
	void SetPowerUpFX_Active(bool newActive, bool AlsoEnable);
	void OnPowerUpTriggerHit(bool UsesPowerUp);
	void UserConstructionScript();
	void Timeline_PowerUp_Fade__FinishedFunc();
	void Timeline_PowerUp_Fade__UpdateFunc();
	void Timeline_PulseColor__FinishedFunc();
	void Timeline_PulseColor__UpdateFunc();
	void Timeline_PowerUpActivate__FinishedFunc();
	void Timeline_PowerUpActivate__UpdateFunc();
	void FadeOut();
	void FadeIn();
	void PowerUpPulse();
	void DisablePowerUp_NOW();
	void EnablePowerUp();
	void DisablePowerUp();
	void EnablePowerUp_NOW();
	void ExecuteUbergraph_MissionTrigger_RacePowerUp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
