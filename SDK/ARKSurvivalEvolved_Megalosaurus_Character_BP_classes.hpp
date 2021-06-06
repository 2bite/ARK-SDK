#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalosaurus_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Megalosaurus_Character_BP.Megalosaurus_Character_BP_C
// 0x023E (0x26C3 - 0x2485)
class AMegalosaurus_Character_BP_C : public ADino_Character_BP_Nocturnal_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x2485(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    NightEyes;                                                // 0x2488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Megalosaurus_C* DinoCharacterStatus_BP_Megalosaurus_C1;                   // 0x2490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShakingPrey;                                           // 0x2498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2499(0x0003) MISSED OFFSET
	float                                              canEscapePastWeight;                                      // 0x249C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              escapePerCheckChance_MAX;                                 // 0x24A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              currentDamageFromPrey;                                    // 0x24A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              damageFromPreyToDrop;                                     // 0x24A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x24AC(0x0004) MISSED OFFSET
	double                                             lastChompTime;                                            // 0x24B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              postChompAttackCooldown;                                  // 0x24B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x24BC(0x0004) MISSED OFFSET
	double                                             lastShakePrayStartTime;                                   // 0x24C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              shakePreyTime_Max;                                        // 0x24C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rotationRate_Day;                                         // 0x24CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rotationRate_Night;                                       // 0x24D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToHowlAtMoon;                                       // 0x24D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x24D5(0x0003) MISSED OFFSET
	float                                              howlTimeRange_Min;                                        // 0x24D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              howlTimeRange_Max;                                        // 0x24DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrabWeightThreshhold_Day;                                 // 0x24E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrabWeightThreshhold_Night;                               // 0x24E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              firstHowlDelay;                                           // 0x24E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              howlDeltaTime;                                            // 0x24EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastHowlTime;                                             // 0x24F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Ref_DynamicSkinMat;                                       // 0x24F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkinSpecular_Day;                                         // 0x2500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkinSpecular_Night;                                       // 0x2504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpecularParameterName;                                    // 0x2508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanHowl;                                                 // 0x2510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2511(0x0007) MISSED OFFSET
	class UMaterialInstance*                           Ref_SkinMat;                                              // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2520(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class AController*                                 CallFunc_GetCharacterController_ReturnValue;              // 0x2530(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCarryingValidLivingCharacter_bResult;          // 0x2538(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2539(0x0007) MISSED OFFSET
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item;                                  // 0x2540(0x0130) (Transient, DuplicateTransient)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x2670(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2674(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCarryingValidLivingCharacter_bResult2;         // 0x2675(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2676(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2677(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2678(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2679(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x2680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2688(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x268C(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x2699(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x26A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x26A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x26B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasSleepDebt_result;                             // 0x26C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x26C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x26C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Megalosaurus_Character_BP.Megalosaurus_Character_BP_C");
		return ptr;
	}


	struct FName GetSocketForMeleeTraceForHitBlockers(int* AttackIndex);
	void UpdateSeverTimerLimits(float newMin, float newMax);
	void InitNocturnalDino();
	void SetupRefs();
	void BPUnstasis();
	void BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure);
	void BPTimerServer();
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void OnWakeUp();
	void OnRep_bIsDaytime();
	void OnFallAsleep();
	void Howl();
	void UpdateAppearance();
	void OnRep_bIsNaturallySleeping();
	void CheckPrey();
	void CanSleep(bool* Result);
	void CanWake(bool* Result);
	void CheckForSleep();
	void CheckForWake();
	void RemoveCarryBuffFromPrey();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void IsSleepDeprived(bool* Result);
	void DropPrey(bool PlayAnim);
	void FoodTriesToEscape(bool* bSuccess);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void IsCarryingValidLivingCharacter(bool* bResult);
	void TryShakePreyAttack();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void UserConstructionScript();
	void AnimNotify_DamagePrey();
	void AnimNotify_ThrowPrey();
	void AnimNotify_CheckForPrey();
	void OnCarriedCharacterDeath(class APrimalCharacter* DiedCharacter);
	void OnIsDaytime();
	void OnIsNighttime();
	void ReceiveBeginPlay();
	void FirstHowl();
	void ExecuteUbergraph_Megalosaurus_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
