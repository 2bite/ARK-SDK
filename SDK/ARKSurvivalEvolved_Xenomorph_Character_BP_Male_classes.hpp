#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C
// 0x0018 (0x2808 - 0x27F0)
class AXenomorph_Character_BP_Male_C : public AXenomorph_Character_BP_C
{
public:
	float                                              OffspringExtraBabyMaxScale;                               // 0x27F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x27F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x27F5(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_DelayTime;                             // 0x27F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x27FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x27FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x27FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x27FF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male.Xenomorph_Character_BP_Male_C");
		return ptr;
	}


	void DiveEnd();
	void BPNotifyClaimed();
	void BPChangedActorTeam();
	bool BPPreventOrderAllowed(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	float BlueprintExtraBabyScaling();
	bool BPShouldForceFlee();
	bool BPAllowClaiming(class AShooterPlayerController** ForPlayer);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void DiveSetup();
	void DiveIdle();
	void OnRep_isUnderground();
	int BPAdjustAttackIndex(int* AttackIndex);
	void OnRep_bIsOffspringMode();
	float BlueprintGetAttackWeight(int* AttackIndex, float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void BPNotifyBabyAgeIncrement(float* PreviousAge, float* NewAge);
	void GetDefaultMaleXeno(class AXenomorph_Character_BP_Male_C** AsXenomorph_Character_BP_Male_C);
	void SetupOffspringMeshAndSettings(bool OffspringMode);
	void InitializeDive();
	void BPBecomeAdult();
	void Can_Dive(bool* _return);
	void UserConstructionScript();
	void DelayedUnbury(float DelayTime);
	void BornDiveOut();
	void AnimNotify_EndBury();
	void BeginMaturationTransform();
	void AnimNotify_ChestBurst();
	void ExecuteUbergraph_Xenomorph_Character_BP_Male(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
