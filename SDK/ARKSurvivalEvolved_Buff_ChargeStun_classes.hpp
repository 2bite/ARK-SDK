#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeStun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeStun.Buff_ChargeStun_C
// 0x0129 (0x0AA1 - 0x0978)
class ABuff_ChargeStun_C : public ABuff_Stunned_C
{
public:
	float                                              currentStunAmount;                                        // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              baseStunAmountPerSecond;                                  // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ClassMultiplier;                                          // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      stunAmountPerSecondMultipliers;                           // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      dragWeightThresholdMultiplier;                            // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             lastTimeBuffWasAdded;                                     // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentStunPerSecondMultiplier;                           // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentDragWeightMultiplier;                              // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStunned;                                                // 0x09C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09C1(0x0003) MISSED OFFSET
	float                                              damagePercentPerSecond;                                   // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  hitResultFake;                                            // 0x09C8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BaseDamagePerSecond;                                      // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              damageWhenShieldedMultiplier;                             // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              extraTimeToReachStunPerArmorUnit;                         // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stunPercentPerSecond;                                     // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      immuneToStunBuff;                                         // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxStunDurationPlayer;                                    // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxStunDurationDino;                                      // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stunDurationReductionPerArmorUnit;                        // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stunTimeReductionPerDragWeightUnit;                       // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeToReachStun;                                          // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stunImmunityTimePlayer;                                   // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stunImmunityTimeToAddPerArmorUnit;                        // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stunImmunityTimeDino;                                     // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stunImmunityTimeToAddPerDragWeightUnit;                   // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A8C(0x0004) MISSED OFFSET
	double                                             timeStunStarted;                                          // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             originalBuffStartTime;                                    // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               wasBeamRemoved;                                           // 0x0AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeStun.Buff_ChargeStun_C");
		return ptr;
	}


	void Get_ImmunityTime(float* immunityTime);
	void Get_Max_StunTime(float* maxStunTime);
	void BuffTickClient(float* DeltaTime);
	void Get_Armor_Rating(float* rating);
	void IsUsingShield(bool* usingShield);
	void Get_Instigator_Player(class AShooterCharacter** instigatorPlayer);
	void ApplyDamage(float DeltaTime);
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void BPDeactivated(class AActor** ForInstigator);
	void DoStun();
	void Should_Be_Stunned(bool* canBeStunned);
	void Calculate_Multipliers();
	void BPPostInitializeComponents();
	void AddStunAmount(float DeltaTime);
	void BPResetBuffStart();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeStun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
