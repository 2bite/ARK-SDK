#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_AttackAIState_Grab_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C
// 0x0059 (0x00F9 - 0x00A0)
class UForestKaiju_AttackAIState_Grab_C : public UPrimalAIStateBPBase
{
public:
	float                                              VineGrabWedgeWidthDegrees;                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllTargetsPulledToHand;                                   // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET
	float                                              VineRetractSpeed;                                         // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VineGrabRadius;                                           // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalCharacter*>                    SmashTargets;                                             // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                NumSpawnedVines;                                          // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumRetractedVines;                                        // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VineGrabMinDistFromSocket;                                // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoTargetVineDistance;                                     // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrabAttackLocation;                                       // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnedVines;                                             // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	float                                              VineAOERadius;                                            // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpawnableVinesMax;                                        // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmashDamageMultOnRootedBuff;                              // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class AForestKaiju_Character_BP_C*                 K2Node_DynamicCast_AsForestKaiju_Character_BP_C;          // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x00F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C");
		return ptr;
	}


	void UpdateGrabAttackLocation();
	void Is_Location_in_Grab_Attack_Wedge(const struct FVector& Location, bool* Result);
	void DebugPrintString(const class FString& String);
	void StartAttackAnim();
	void PublicIsValidVineTarget(class APrimalCharacter* Target, class APrimalCharacter* ForestKaiju, bool* Valid);
	void IsValidVineTarget(class APrimalCharacter* Target, class APrimalCharacter* ForestKaiju, bool* ValidTarget);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void STATIC_VineRetracted(TArray<struct FVineTargetData>* Targets);
	void OnEndEvent();
	void Debug_Draw_Sphere(const struct FVector& Center, float Radius, const struct FLinearColor& Color);
	void STATIC_AnimNotifyGrabAttackSmash();
	void DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color);
	void SpawnVines();
	bool BPShouldEndAttack();
	void OnTickEvent(float* DeltaSeconds);
	void FailsafeMissingVineRetracts();
	void ExecuteUbergraph_ForestKaiju_AttackAIState_Grab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
