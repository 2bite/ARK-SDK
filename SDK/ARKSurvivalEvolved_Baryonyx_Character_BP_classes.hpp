#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Baryonyx_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Baryonyx_Character_BP.Baryonyx_Character_BP_C
// 0x0060 (0x20E8 - 0x2088)
class ABaryonyx_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Baryonyx_C* DinoCharacterStatus_BP_Baryonyx_C1;                       // 0x2088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHoldingCharacter;                                      // 0x2090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTest;                                                    // 0x2091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x2092(0x0002) MISSED OFFSET
	float                                              WaterDinoDamageMultiplier;                                // 0x2094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              HealedByDinoClasses;                                      // 0x2098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PercentHealedPerFish;                                     // 0x20A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSeekFishIfLowHealth;                                     // 0x20AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x20AD(0x0003) MISSED OFFSET
	float                                              SeekFishHealthPercent;                                    // 0x20B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopSeekFishHealthPercent;                                // 0x20B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SeekFishRange;                                            // 0x20B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldBeSeekingFish;                                     // 0x20BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x20BD(0x0003) MISSED OFFSET
	float                                              StunAttackVelocity;                                       // 0x20C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x20C4(0x0004) MISSED OFFSET
	class UClass*                                      BaryStunBuffToAdd;                                        // 0x20C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x20D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x20DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Baryonyx_Character_BP.Baryonyx_Character_BP_C");
		return ptr;
	}


	void BPSetupTamed(bool* bWasJustTamed);
	bool IsActorHealingFish(class AActor* ActorToTest);
	void BPTimerServer();
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void BaryCanAttack(int AttackIndex, bool* RetVal);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void BPKilledSomethingEvent(class APrimalCharacter** killedTarget);
	void STATIC_K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* newMovementMode, unsigned char* PrevCustomMode, unsigned char* newCustomMode);
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void UserConstructionScript();
	void AnimNotify_StunAttackStart();
	void AnimNotify_StunAttackMid();
	void ExecuteUbergraph_Baryonyx_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
