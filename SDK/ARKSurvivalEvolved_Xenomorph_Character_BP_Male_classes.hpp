#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0028 (0x2A10 - 0x29E8)
class AXenomorph_Character_BP_Male_C : public AXenomorph_Character_BP_C
{
public:
	float                                              OffspringExtraBabyMaxScale;                               // 0x29E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x29EC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          AdultMaterialOverride;                                    // 0x29F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x29F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x29F9(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_DelayTime;                             // 0x29FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x2A00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2A01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2A02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2A03(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2A04(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2A08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

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
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
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
	void Can_Dive(bool* Return);
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
