#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stego_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Stego_Character_BP.Stego_Character_BP_C
// 0x03E0 (0x2568 - 0x2188)
class AStego_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    ChangePlateVFX;                                           // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TailTrail;                                                // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpalingVFX;                                              // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Stego_C*    DinoCharacterStatus_BP_Stego_C1;                          // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultBackplateBuff;                                     // 0x21A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_StegoBackplateMode>                  BackplateMode;                                            // 0x21B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x21B1(0x0007) MISSED OFFSET
	struct FHUDElement                                 BackplateModeHudElement;                                  // 0x21B8(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HardenedModeDamageModifier;                               // 0x22B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x22B4(0x0004) MISSED OFFSET
	class UClass*                                      RiderBuff;                                                // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Impaling;                                                 // 0x22C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DebugImpaleAnyActor;                                      // 0x22C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReleasing;                                               // 0x22C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x22C3(0x0005) MISSED OFFSET
	class APrimalCharacter*                            ImpalingChracater;                                        // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpalingStartLocation;                                    // 0x22D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugImpaleIgnoreTargetHealth;                            // 0x22DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugMelee;                                              // 0x22DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x22DE(0x0002) MISSED OFFSET
	struct FLinearColor                                CurrentPlateColor;                                        // 0x22E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TargetPlateColor;                                         // 0x22F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasImpaleTarget;                                          // 0x2300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2301(0x0003) MISSED OFFSET
	struct FLinearColor                                DefaultColor;                                             // 0x2304(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DefaultColorSet;                                          // 0x2314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2315(0x0003) MISSED OFFSET
	float                                              PlateParemterCurrent;                                     // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpalingStaminaCostPerSec;                                // 0x231C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PlateColorRegionName;                                     // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HardenedPlateColor;                                       // 0x2328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HeavyPlateColor;                                          // 0x2338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SharpenedPlateColor;                                      // 0x2348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpaleCheckDistance;                                      // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x235C(0x0004) MISSED OFFSET
	class UParticleSystem*                             PreventDismountingParticle;                               // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimePlayedPreventDismount;                            // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventDismountVfxCooldown;                               // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SwipeColorHardened;                                       // 0x2374(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SwipeColorSharpened;                                      // 0x2384(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SwipeColorHeavy;                                          // 0x2394(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpalingPosition;                                         // 0x23A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsImpalingLeft;                                          // 0x23A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x23A9(0x0007) MISSED OFFSET
	double                                             WildDinoStartImpaleTime;                                  // 0x23B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildDinoImpaleDuration;                                   // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangingPlateMaterialWhenSetRider;                       // 0x23BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x23BD(0x0003) MISSED OFFSET
	struct FLinearColor                                DanderColorHeavy;                                         // 0x23C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DanderColorHardened;                                      // 0x23D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DanderColorSharpened;                                     // 0x23E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeforeBeginPlay;                                         // 0x23F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x23F1(0x0007) MISSED OFFSET
	class FString                                      HeavyPlateHUDString;                                      // 0x23F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SharpenedPlateHUDString;                                  // 0x2408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HardenedPlateHUDString;                                   // 0x2418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APrimalCharacter*                            K2Node_CustomEvent_ImpaledTarget2;                        // 0x2428(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x2430(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2438(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x2439(0x0007) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x2440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_GetPosition_ReturnValue;                 // 0x2448(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x244C(0x0004) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue2;                    // 0x2450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x2461(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x2468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x2471(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2472(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x2473(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x2474(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x2475(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x2476(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x2477(0x0001) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController;                    // 0x2488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x2491(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController2;                   // 0x2498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x24A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x24A1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_NewLocation;                           // 0x24A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode3;            // 0x24B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x24B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x24B2(0x0006) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x24B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_GetDisplayName_ReturnValue;                      // 0x24C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x24D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x24D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x24D9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_ImpaledTarget;                         // 0x24E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_K2_GetVectorParameterValue_ReturnValue;          // 0x24E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x24F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x24F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode4;            // 0x24FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x24FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x24FC(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x2518(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x2519(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum7_CmpSuccess;                            // 0x251A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x5];                                       // 0x251B(0x0005) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x2520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue2;                  // 0x2528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue;                          // 0x2530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x2531(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x2538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue2;                        // 0x2540(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic2;            // 0x2548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x2551(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2558(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Stego_Character_BP.Stego_Character_BP_C");
		return ptr;
	}


	bool BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer);
	struct FLinearColor BPGetCrosshairColor();
	struct FVector BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void OnRep_Impaling();
	int BPAdjustAttackIndex(int* AttackIndex);
	void CheckCanImpaleActor(class APrimalCharacter* Actor, bool* CanImpale);
	struct FName BPGetDragSocketName(class APrimalCharacter** DraggingChar);
	struct FName BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino);
	void ReceiveTick(float* DeltaSeconds);
	int STATIC_BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	bool BPHandleUseButtonPress(class AShooterPlayerController** RiderController);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut);
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void OnRep_BackplateMode();
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void SetBackplateMode(TEnumAsByte<E_StegoBackplateMode> BackplateMode);
	void SwitchBackplateMode();
	void BPDoAttack(int* AttackIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Dismount();
	void TryImpaleTarget(class APrimalCharacter* ImpaledTarget);
	void ReleaseImpalingTarget();
	void HandleStopImpaling();
	void SetBleedingVFXLocation(const struct FVector& NewLocation);
	void DoImpaleTarget(class APrimalCharacter* ImpaledTarget);
	void PlayPreventDismountVFX();
	void ExecuteUbergraph_Stego_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
