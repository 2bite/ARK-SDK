#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sinomacrops_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sinomacrops_Character_BP.Sinomacrops_Character_BP_C
// 0x0400 (0x2688 - 0x2288)
class ASinomacrops_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    R_EyeWingParticle;                                        // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    L_EyeWingParticle;                                        // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Sinomacrops_C* DinoCharacterStatus_BP_Sinomacrops_C1;                    // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_ScreamEyeWing_Alpha_9805859E42A15ADB3895D4856A919661;// 0x22A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_ScreamEyeWing__Direction_9805859E42A15ADB3895D4856A919661;// 0x22A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x22A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_ScreamEyeWing;                                   // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpMountSocket_Alpha_5C3B666C41287096E4F8CB8443447F2C;// 0x22B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_LerpMountSocket__Direction_5C3B666C41287096E4F8CB8443447F2C;// 0x22B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_LerpMountSocket;                                 // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MountedBuff;                                              // 0x22C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MountedGliderBuff;                                        // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_SinoMovementState>                   SinoMovementState;                                        // 0x22D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x22D1(0x0007) MISSED OFFSET
	TArray<struct FName>                               AggroOntoTags;                                            // 0x22D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      AggroOntoItemClass;                                       // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChitinDamageMultiplier;                                   // 0x22F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x22F4(0x0004) MISSED OFFSET
	TArray<float>                                      MovementStateStaminaDrain;                                // 0x22F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastMovementStaminaDrainTime;                             // 0x2308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MovementStaminaDrainTickMinMax;                           // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreamDetectRadius;                                       // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreamAffectRadiusMultiplier;                             // 0x231C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastScreamTime;                                           // 0x2320(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ScreamInterval;                                           // 0x2328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseScreamDamage;                                         // 0x232C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreamDragWeight;                                         // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2334(0x0004) MISSED OFFSET
	class AShooterCharacter*                           BuddyCharacter;                                           // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RunGlidingStaminaMultiplier;                              // 0x2340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2344(0x0004) MISSED OFFSET
	double                                             LastWakingTameFeedTime;                                   // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamingFlyDuration;                                        // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RandomTamingWanderDirection;                              // 0x2354(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAutoScream;                                           // 0x2360(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2361(0x0007) MISSED OFFSET
	class APrimalCharacter*                            LastMountedChar;                                          // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        MountedGliderMontages;                                    // 0x2370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AShooterCharacter*                           LastThrowingChar;                                         // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               SinoMountSockets;                                         // 0x2388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MountSocketIndex;                                         // 0x2398(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x239C(0x0004) MISSED OFFSET
	TArray<class UParticleSystem*>                     WingFlapParticleTemplates;                                // 0x23A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastMountedEatAnimTime;                                   // 0x23B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBeingThrownToBuddy;                                    // 0x23B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x23B9(0x0007) MISSED OFFSET
	TArray<struct FName>                               ScreamExclusionTags;                                      // 0x23C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ScreamDamageType;                                         // 0x23D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSpooked;                                               // 0x23D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasImmobilized;                                          // 0x23D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x23DA(0x0006) MISSED OFFSET
	TArray<struct FName>                               ScreamRequireAggroTags;                                   // 0x23E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bAutoScreamRequiresAggro;                                 // 0x23F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x23F1(0x0007) MISSED OFFSET
	double                                             LastTrappedTime;                                          // 0x23F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x2400(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x2408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x2410(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotify*                                 K2Node_Event_AnimNotifyObject;                            // 0x2418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x2420(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName2_CmpSuccess;                            // 0x2421(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x2422(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2423(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x2424(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2425(0x0003) MISSED OFFSET
	class AShooterCharacter*                           K2Node_CustomEvent_ForPlayer;                             // 0x2428(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x2430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x2431(0x0007) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllLocalPlayerCharacters_ReturnValue;         // 0x2438(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2448(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Contains_ReturnValue;                      // 0x2454(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2455(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Index;                                 // 0x2460(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_playRate;                              // 0x2464(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                CallFunc_Array_Get_Item;                                  // 0x2468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x2470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2471(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2474(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x2478(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2479(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_ToIndex;                               // 0x247C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode3;            // 0x2481(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x2482(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2483(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlaying_ReturnValue;                           // 0x2484(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2485(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x2486(0x0002) MISSED OFFSET
	float                                              CallFunc_GetTimelineLength_ReturnValue;                   // 0x2488(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x248C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x248D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x248E(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item2;                                 // 0x2490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x8];                                       // 0x2498(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue;                  // 0x24A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x24D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x24D1(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item3;                                 // 0x24D4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x24DC(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue2;                 // 0x24E0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_TLerp_ReturnValue;                               // 0x2510(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x2540(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x254C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x2558(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0xC];                                       // 0x2564(0x000C) MISSED OFFSET
	struct UObject_FTransform                          K2Node_CustomEvent_Rot;                                   // 0x2570(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x25A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location2;                        // 0x25A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation2;                        // 0x25B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale2;                           // 0x25BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x25C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x25C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x25CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x25CB(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorScale3D_ReturnValue;                     // 0x25CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x8];                                       // 0x25D8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x25E0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorTransform_ReturnValue;                   // 0x2610(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x2611(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2618(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x2628(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x2638(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x2648(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore4_RefProperty; // 0x2658(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore5_RefProperty; // 0x2668(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore6_RefProperty; // 0x2678(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sinomacrops_Character_BP.Sinomacrops_Character_BP_C");
		return ptr;
	}


	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure);
	void STATIC_ScreamStaminaCheck(bool* HasStamToScream);
	void ClearPreventInventoryAccess();
	void MountedImmobilizationCheck();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void STATIC_TamingTrapCheck(bool CheckPlayer, bool* IsTrapped);
	void BPNotifyLevelUp(int* ExtraCharacterLevel);
	bool AllowPlayMontage(class UAnimMontage** AnimMontage);
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	void LaunchToBuddyChar();
	float BPGetGravityZScale();
	void BPTamedConsumeFoodItem(class UPrimalItem** foodItem);
	void OnRep_MountSocketIndex();
	void SpawnMountedFlapVFX(bool IsWings);
	void UpdateEyeWingMat(float val);
	void ClearLastThrowAvoidActors();
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void OnScreamStart();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPOnClearMountedDino();
	void AnimNotifyMountedDino();
	void RefreshSinoMountType();
	void GetCanBeMountedGlider(bool* CanBeMountedGlider);
	void FlyAfterTamingFeed();
	bool BlueprintOverrideWantsToRun(bool* bInputWantsToRun);
	void ResetChanceToFlyLand();
	bool AllowWakingTame(class APlayerController** ForPC);
	void UpdateChanceToFlyLand(bool IsFly, float Chance, bool IsDefault);
	void STATIC_OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
	void BPFedWakingTameEvent(class APlayerController** ForPC);
	bool BP_CanFly();
	void RefreshWildFollowPlayer();
	void ClearWildFollowPlayer();
	void SetWildFollowPlayer(class AShooterCharacter* ShooterChar);
	void GetWildShouldFollowPlayer(class AShooterCharacter* ShooterChar, bool SetOnSuccess, bool* ShouldFollow);
	void ClearBuddyChar();
	void ArriveAtBuddyCheck();
	void DinoShoulderMountedLaunch(struct FVector* launchDir, class AShooterCharacter** throwingCharacter);
	void GetShouldScream(bool IsAI, bool* ShouldScream);
	void Scream();
	void BPTimerServer();
	float STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void GetShouldAttackActor(class AActor* Actor, bool* ShouldAttack);
	bool BPShouldForceFlee();
	void BPSetupTamed(bool* bWasJustTamed);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void InitSino();
	void SinoMovementStamDrainTick();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BPOnSetMountedDino();
	void UserConstructionScript();
	void Timeline_LerpMountSocket__FinishedFunc();
	void Timeline_LerpMountSocket__UpdateFunc();
	void Timeline_ScreamEyeWing__FinishedFunc();
	void Timeline_ScreamEyeWing__UpdateFunc();
	void ReceiveBeginPlay();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void Multi_SpawnTamingVFX(class AShooterCharacter* ForPlayer);
	void Multi_PlayGliderMontage(int index, float PlayRate);
	void Multi_LerpMountSockets(int ToIndex);
	void StopLerpMountSockets();
	void ScreamUpdateEyeWing();
	void Multi_ThrowToBuddy(const struct UObject_FTransform& Rot);
	void Multi_PostImmobilizeRemount();
	void ExecuteUbergraph_Sinomacrops_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
