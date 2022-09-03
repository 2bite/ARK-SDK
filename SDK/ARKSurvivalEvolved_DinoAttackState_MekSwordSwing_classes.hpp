#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_MekSwordSwing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C
// 0x0030 (0x00D0 - 0x00A0)
class UDinoAttackState_MekSwordSwing_C : public UPrimalAIStateBPBase
{
public:
	TArray<struct UObject_FTransform>                  SwordCapsuleTransforms;                                   // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebugAttacks;                                             // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SwordTraceChannel;                                        // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HitPause;                                                 // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttackStarted;                                            // 0x00B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowFPSMode;                                               // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              TotalDamage;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<float>                                      LowFPSSweepIntervals;                                     // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_MekSwordSwing.DinoAttackState_MekSwordSwing_C");
		return ptr;
	}


	void ShouldDoDamageTo(class AActor* Actor, bool* AllowDamage);
	void BPOnAttackEnd(int* AttackIndex);
	void BPOnAnimNotifyCustomEvent(struct FName* CustomEventName, class UAnimSequenceBase** Animation, TEnumAsByte<ENetRole>* Role);
	void STATIC_DoSwordDamage();
	void GetSwordCapsule(struct UObject_FTransform* WorldTransform, float* CapsuleRadius, float* CapsuleHalfHeight);
	void GetSwordDamagePoint(struct FVector* Loc, struct FRotator* Rot);
	void BPOnAttackStart(int* AttackIndex);
	void ExecuteUbergraph_DinoAttackState_MekSwordSwing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
