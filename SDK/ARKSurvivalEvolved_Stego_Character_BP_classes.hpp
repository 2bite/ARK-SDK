#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0438 (0x26C0 - 0x2288)
class AStego_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    ChangePlateVFX;                                           // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TailTrail;                                                // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ImpalingVFX;                                              // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Stego_C*    DinoCharacterStatus_BP_Stego_C1;                          // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultBackplateBuff;                                     // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_StegoBackplateMode>                  BackplateMode;                                            // 0x22B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x22B1(0x0007) MISSED OFFSET
	struct FHUDElement                                 BackplateModeHudElement;                                  // 0x22B8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HardenedModeDamageModifier;                               // 0x2408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x240C(0x0004) MISSED OFFSET
	class UClass*                                      RiderBuff;                                                // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Impaling;                                                 // 0x2418(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DebugImpaleAnyActor;                                      // 0x2419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReleasing;                                               // 0x241A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x241B(0x0005) MISSED OFFSET
	class APrimalCharacter*                            ImpalingChracater;                                        // 0x2420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpalingStartLocation;                                    // 0x2428(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugImpaleIgnoreTargetHealth;                            // 0x2434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugMelee;                                              // 0x2435(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x2436(0x0002) MISSED OFFSET
	struct FLinearColor                                CurrentPlateColor;                                        // 0x2438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TargetPlateColor;                                         // 0x2448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasImpaleTarget;                                          // 0x2458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2459(0x0003) MISSED OFFSET
	struct FLinearColor                                DefaultColor;                                             // 0x245C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DefaultColorSet;                                          // 0x246C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x246D(0x0003) MISSED OFFSET
	float                                              PlateParemterCurrent;                                     // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpalingStaminaCostPerSec;                                // 0x2474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PlateColorRegionName;                                     // 0x2478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HardenedPlateColor;                                       // 0x2480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HeavyPlateColor;                                          // 0x2490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SharpenedPlateColor;                                      // 0x24A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpaleCheckDistance;                                      // 0x24B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x24B4(0x0004) MISSED OFFSET
	class UParticleSystem*                             PreventDismountingParticle;                               // 0x24B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimePlayedPreventDismount;                            // 0x24C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreventDismountVfxCooldown;                               // 0x24C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SwipeColorHardened;                                       // 0x24CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SwipeColorSharpened;                                      // 0x24DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SwipeColorHeavy;                                          // 0x24EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpalingPosition;                                         // 0x24FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsImpalingLeft;                                          // 0x2500(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2501(0x0007) MISSED OFFSET
	double                                             WildDinoStartImpaleTime;                                  // 0x2508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildDinoImpaleDuration;                                   // 0x2510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangingPlateMaterialWhenSetRider;                       // 0x2514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2515(0x0003) MISSED OFFSET
	struct FLinearColor                                DanderColorHeavy;                                         // 0x2518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DanderColorHardened;                                      // 0x2528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DanderColorSharpened;                                     // 0x2538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeforeBeginPlay;                                         // 0x2548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x2549(0x0007) MISSED OFFSET
	class FString                                      HeavyPlateHUDString;                                      // 0x2550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SharpenedPlateHUDString;                                  // 0x2560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      HardenedPlateHUDString;                                   // 0x2570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APrimalCharacter*                            K2Node_CustomEvent_ImpaledTarget2;                        // 0x2580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x2588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2590(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x2591(0x0007) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x2598(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_GetPosition_ReturnValue;                 // 0x25A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x25A4(0x0004) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue2;                    // 0x25A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x25B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x25B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x25B9(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x25C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x25C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x25C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x25CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x25CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x25CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x25CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x25CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x25CF(0x0001) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x25D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x25D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController;                    // 0x25E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x25E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x25E9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController2;                   // 0x25F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x25F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x25F9(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_NewLocation;                           // 0x25FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode3;            // 0x2608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x2609(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x260A(0x0006) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x2610(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_GetDisplayName_ReturnValue;                      // 0x2618(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x2628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2630(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x2631(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_ImpaledTarget;                         // 0x2638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_K2_GetVectorParameterValue_ReturnValue;          // 0x2640(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x2650(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x2651(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode4;            // 0x2652(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x2653(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x2654(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2660(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2668(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x2670(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x2671(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum7_CmpSuccess;                            // 0x2672(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x5];                                       // 0x2673(0x0005) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x2678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue2;                  // 0x2680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue;                          // 0x2688(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x2689(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x2690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue2;                        // 0x2698(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic2;            // 0x26A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x26A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x26A9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x26B0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Stego_Character_BP.Stego_Character_BP_C");
		return ptr;
	}


	void BPCharacterSleeped();
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
	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void OnRep_BackplateMode();
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void STATIC_SetBackplateMode(TEnumAsByte<E_StegoBackplateMode> BackplateMode);
	void SwitchBackplateMode();
	void BPDoAttack(int* AttackIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void dismount();
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
