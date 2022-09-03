#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Daeodon_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Daeodon_Character_BP.Daeodon_Character_BP_C
// 0x016D (0x23F5 - 0x2288)
class ADaeodon_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Daeodon_C*  DinoCharacterStatus_BP_Daeodon_C1;                        // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mushroomHarvestWeightMultiplier;                          // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minMushroomsToHarvest;                                    // 0x2294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxMushroomHarvestQuantityMultiplier;                     // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x229C(0x0004) MISSED OFFSET
	class UClass*                                      healingBuffClass;                                         // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              initialFoodRequiredForHealAttack;                         // 0x22A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isPassiveHealing;                                         // 0x22AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22AD(0x0003) MISSED OFFSET
	class UClass*                                      passiveHealingBuffClass;                                  // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              initialFoodRequiredForHealAttackPassive;                  // 0x22B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              hudMessageDisplayTime;                                    // 0x22BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FStatusValueModifierDescription             cantUseHealingDescription;                                // 0x22C0(0x0050) (Edit, BlueprintVisible)
	double                                             lastHUDMessageTime;                                       // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lastHUDMessageDuration;                                   // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x231C(0x0004) MISSED OFFSET
	class UClass*                                      wildHealingBuffClass;                                     // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastTimeUsedActiveHealing;                                // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               allowWildHealing;                                         // 0x2330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               allowShortHealing;                                        // 0x2331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x2332(0x0006) MISSED OFFSET
	class UParticleSystem*                             healCastParticles;                                        // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isHarvestingSeedComponent;                                // 0x2340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2341(0x0003) MISSED OFFSET
	float                                              chanceToGatherMushroomFromSeedComponent;                  // 0x2344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isHarvestingPlant;                                        // 0x2348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2349(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x234A(0x0002) MISSED OFFSET
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x234C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2354(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x2358(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x2360(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotify*                                 K2Node_Event_AnimNotifyObject;                            // 0x2368(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2370(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x2371(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x2372(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2373(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x2374(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue;                  // 0x2380(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x23B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x23BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x23C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x23D4(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x23D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x23E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlly_isSameTeamOrAlly;                         // 0x23E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x23E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x23EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x23EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BPIncrementItemTemplateQuantity_ReturnValue;     // 0x23EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloat_ReturnValue;                         // 0x23F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x23F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Daeodon_Character_BP.Daeodon_Character_BP_C");
		return ptr;
	}


	float BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage);
	void IsAlly(int otherTargetingTeam, bool* isSameTeamOrAlly);
	void TryTrigger_Attack(int AttackIndex);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void SendNetExecCommandToCharacter(class AShooterCharacter* Character, const struct FName& CommandName);
	void ShowHUDNotification(const struct FStatusValueModifierDescription& notificationDescription, class APlayerController* PlayerController);
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void EnablePassiveHealing();
	void DisablePassiveHealing();
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void Trigger_Healing(int BuffClass, bool isShortHealing);
	void DisableActiveHealing();
	void ToggleActiveHealing();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void BPTimerServer();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void Toggle_Passive_Healing();
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void OnJumped();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void BPDoAttack(int* AttackIndex);
	float BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected);
	void BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut);
	void UserConstructionScript();
	void MovementChangedEvent();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void ExecuteUbergraph_Daeodon_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
