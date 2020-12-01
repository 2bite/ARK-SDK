#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionTrigger_RaceCheckpoint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C
// 0x0138 (0x0978 - 0x0840)
class AMissionTrigger_RaceCheckpoint_C : public AMissionTrigger
{
public:
	class UParticleSystemComponent*                    CheckpointParticleComp;                                   // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         Billboard1;                                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender1;                                              // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_FadeInCheckpoint_FadeAlpha_E0A1929A4A5F047E14B5F281D62D703A;// 0x0858(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_FadeInCheckpoint__Direction_E0A1929A4A5F047E14B5F281D62D703A;// 0x085C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_FadeInCheckpoint;                                // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_CheckpointActivate_alpha_4CF8EA73481895C205540D8F22172025;// 0x0868(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_CheckpointActivate__Direction_4CF8EA73481895C205540D8F22172025;// 0x086C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_CheckpointActivate;                              // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_PulseColor_Alpha_C908EDEB4DBDEDF4007F0699DD63901D;// 0x0878(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PulseColor__Direction_C908EDEB4DBDEDF4007F0699DD63901D;// 0x087C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x087D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PulseColor;                                      // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VFXOffset;                                                // 0x0888(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	TArray<class AMissionTrigger_RacePowerUp_C*>       PowerUpsToEnable;                                         // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UParticleSystem*                             ActivePowerUpVFX;                                         // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TriggerSize;                                              // 0x08B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ScaleMultiplier;                                          // 0x08BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CheckpointColor_Hit;                                      // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CheckpointColor_Default;                                  // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CheckpointColor_Inactive;                                 // 0x08E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCheckpointEnabled;                                     // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08F9(0x0003) MISSED OFFSET
	struct FName                                       ParamName_FadeStationary;                                 // 0x08FC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName_FadeMoving;                                     // 0x0904(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamName_CheckpointColor;                                // 0x090C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimelinePlayRate_Pulse;                                   // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimelinePlayRate_Fade;                                    // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimelinePlayRate_Enable;                                  // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasInitialized;                                          // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckpointActive;                                        // 0x0921(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCheckpoints;                                        // 0x0922(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0923(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue;                     // 0x0924(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_LinearColorLerp_ReturnValue2;                    // 0x0934(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCheckpointActive_PURE_bResult;                 // 0x0944(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0945(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0946(0x0002) MISSED OFFSET
	class FString                                      CallFunc_GetDisplayName_ReturnValue;                      // 0x0948(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x0958(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x0968(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ResetCheckpoint();
	void IsCheckpointActive_PURE(bool* bResult);
	void IsCheckpointActive(bool* bResult);
	void DeactivateCheckpoint();
	void InitCheckpoint();
	void SetCheckpointEnabled(bool NewEnabled);
	void OnCheckpointHit();
	void SetCheckpointFX_Active(bool newActive, bool AlsoEnable);
	struct FVector BP_OverrideTargetingLocation(class AActor** Attacker);
	void UserConstructionScript();
	void Timeline_PulseColor__FinishedFunc();
	void Timeline_PulseColor__UpdateFunc();
	void Timeline_CheckpointActivate__FinishedFunc();
	void Timeline_CheckpointActivate__UpdateFunc();
	void Timeline_FadeInCheckpoint__FinishedFunc();
	void Timeline_FadeInCheckpoint__UpdateFunc();
	void FadeOut();
	void FadeIn();
	void CheckpointPulse();
	void DisableCheckpoint();
	void EnableCheckpoint();
	void DisableCheckpoint_NOW();
	void EnableCheckpoint_NOW();
	void ExecuteUbergraph_MissionTrigger_RaceCheckpoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
