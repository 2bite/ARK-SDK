#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ScoutTracker_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ScoutTracker.Buff_ScoutTracker_C
// 0x0029 (0x0959 - 0x0930)
class ABuff_ScoutTracker_C : public ABuff_Base_C
{
public:
	class UStaticMeshComponent*                        LaserTracker;                                             // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPreviewTracker;                                         // 0x0938(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EScoutTrackerStates>                   TrackerState;                                             // 0x0939(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      TrackerStateReplicated;                                   // 0x093A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x093B(0x0005) MISSED OFFSET
	class APrimalCharacter*                            DamageCauserReplicated;                                   // 0x0940(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TrackerTargetZOffset;                                     // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsPreviewTracker;                      // 0x094C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x094D(0x0003) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_DamageCauser;                          // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x0958(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ScoutTracker.Buff_ScoutTracker_C");
		return ptr;
	}


	class FString BPGetDebugInfoString();
	void BuffTickClient(float* DeltaTime);
	void UpdateTrackerState();
	void OnRep_TrackerStateReplicated();
	void DisableAllEmitters(TEnumAsByte<EScoutTrackerStates> ButEnableThis);
	void UpdateFX(class UParticleSystemComponent* ParticleSystemComp);
	void ReceiveBeginPlay();
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void SetIsPreviewTracker(bool IsPreviewTracker, class AActor* DamageCauser);
	void ExecuteUbergraph_Buff_ScoutTracker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
