#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Iguanodon_Character_BP.Iguanodon_Character_BP_C
// 0x013A (0x23A2 - 0x2268)
class AIguanodon_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Iguanodon_C* DinoCharacterStatus_BP_Iguanodon_C1;                      // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_MoveFwd;                                    // 0x2270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_MoveLeft;                                   // 0x2278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_MoveRight;                                  // 0x2280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_RunFwd;                                     // 0x2288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_RunLeft;                                    // 0x2290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_RunRight;                                   // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Ref_BipedAnim_Idle;                                       // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_Startled;                                   // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_Hurt;                                       // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_StartledToBiped;                            // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_QuadToBiped_Idle;                           // 0x22C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_BipedToQuad_Idle;                           // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BipedRunSpeedMultiplier;                                  // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BipedMaxWalkSpeedMultiplier;                              // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Biped_RotationRateMultiplier;                             // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBiped;                                                 // 0x22DC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x22DD(0x0003) MISSED OFFSET
	double                                             lastStanceSwitchTime;                                     // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              stanceSwitchDelay;                                        // 0x22E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasFruitInInventory;                                     // 0x22EC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPickingSeeds;                                          // 0x22ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x22EE(0x0002) MISSED OFFSET
	TArray<class UClass*>                              SeedableFruitArray;                                       // 0x22F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SeedArray;                                                // 0x2300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      convertFruitString;                                       // 0x2310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDebugIguanodon;                                          // 0x2320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwitchingStances;                                      // 0x2321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x2322(0x0002) MISSED OFFSET
	float                                              stanceSwitchBlendTime;                                    // 0x2324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Biped_TamedRunningRotationRateModifier;                   // 0x2328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x232C(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        additiveAttackAnims_Move;                                 // 0x2330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                Ref_BipedAnim_QuadToBiped_Move;                           // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_QuadToBiped_Run;                            // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_BipedToQuad_Move;                           // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_BipedAnim_BipedToQuad_Run;                            // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StanceSwitchNotifyName;                                   // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToSwitchStance;                                     // 0x2368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsToAttack;                                           // 0x2369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x236A(0x0002) MISSED OFFSET
	float                                              Biped_JumpVelocity_Z;                                     // 0x236C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Quad_MaxJumpForwardVelocity;                              // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Biped_MaxJumpForwardVelocity;                             // 0x2374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpForwardVelocity_NoRunMult;                            // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x237C(0x0004) MISSED OFFSET
	double                                             lastJumpTime;                                             // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpInterval;                                             // 0x2388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Biped_JumpInterval;                                       // 0x238C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Biped_JumpStaminaCost;                                    // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x2394(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2395(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Delay;                                 // 0x2398(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x239C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x23A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x23A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Iguanodon_Character_BP.Iguanodon_Character_BP_C");
		return ptr;
	}


	void OnJumped();
	bool CanJumpInternal();
	float BPGetAddForwardVelocityOnJump();
	void OnRep_bIsBiped();
	void ToggleStance();
	void BPTimerServer();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void StartChangingStance();
	void Get_Correct_Stance_Switch_Anim(class UAnimMontage** animRef);
	void BPUnstasis();
	void InitIguanodon();
	void NetSetHasFruitInInventory(bool Newval);
	void Update_Move_SpeedByStance();
	void UpdateStance();
	void UpdateHasFruitInInventory();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void ConvertFruitToSeeds();
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void Net_SetCurrentStance(bool isBiped);
	void BPDoAttack(int* AttackIndex);
	void SetUseStamina(bool newUse);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void ClientSetBipedState(bool isBiped);
	void GetDefaultDino(class AIguanodon_Character_BP_C** ref);
	void UserConstructionScript();
	void Server_SetWantsToSwitchStance();
	void SwitchStanceAfterDelay(float Delay);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Iguanodon_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
