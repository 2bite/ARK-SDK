#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Amargasaurus_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Amargasaurus_Character_BP.Amargasaurus_Character_BP_C
// 0x04E0 (0x2768 - 0x2288)
class AAmargasaurus_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    SpikeParticleLight3;                                      // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SpikeParticleLight2;                                      // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SpikeParticleLight1;                                      // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WaterMovementParticle;                                    // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    NeckTrail;                                                // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TailTrail;                                                // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TamingGlowParticle;                                       // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Amargasaurus_C* DinoCharacterStatus_BP_Amargasaurus_C1;                   // 0x22C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_SpikeEmissive_Alpha_1E5C68AE421F5647ACC5CF9DBBA60E42;// 0x22C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_SpikeEmissive__Direction_1E5C68AE421F5647ACC5CF9DBBA60E42;// 0x22CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x22CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_SpikeEmissive;                                   // 0x22D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ActiveSpikes;                                             // 0x22D8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	int                                                NextSpikeIndex;                                           // 0x22E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bWantsToAim;                                              // 0x22EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22ED(0x0003) MISSED OFFSET
	int                                                CurrentSpikeType;                                         // 0x22F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x22F4(0x0004) MISSED OFFSET
	double                                             LastRegenSpikeStartTime;                                  // 0x22F8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RegenSpikeDuration;                                       // 0x2300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2304(0x0004) MISSED OFFSET
	TArray<struct FName>                               SpikeBones;                                               // 0x2308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SpikeSockets;                                             // 0x2318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxSpikeDistance;                                         // 0x2328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AimedSpikeTargetLoc;                                      // 0x232C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpikeItemClass;                                           // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LeftHurtAnim;                                             // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WildChanceToChangeSpikeType;                              // 0x2348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x234C(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    TamingPC;                                                 // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ReqFeedingEveryAffinity;                                  // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DinoDamageToAffinityMultiplier;                           // 0x235C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerDamageToAffinityMultiplier;                         // 0x2360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2364(0x0004) MISSED OFFSET
	double                                             LastTeamDamageFromTamingTeamTime;                         // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamingDamageWithinIntervalToCancel;                       // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2374(0x0004) MISSED OFFSET
	double                                             LastStartCancellingTameTime;                              // 0x2378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TooFarDurationToCancel;                                   // 0x2380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x2384(0x0004) MISSED OFFSET
	double                                             LastCancelledTameTime;                                    // 0x2388(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceCancelForNewTame;                                // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToCancelTame;                                     // 0x2394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTamingWantsFed;                                          // 0x2398(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2399(0x0003) MISSED OFFSET
	float                                              CachedDamageAffinity;                                     // 0x239C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTamingWantsFedTime;                                   // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAimTargeting;                                          // 0x23A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x23A9(0x0007) MISSED OFFSET
	double                                             LastSpikeTargetingTime;                                   // 0x23B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAimTargetingOffsetVal;                             // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x23BC(0x0004) MISSED OFFSET
	double                                             LastSpikeFiredTime;                                       // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLockedRot;                                             // 0x23C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x23C9(0x0007) MISSED OFFSET
	TArray<class UParticleSystem*>                     SpikeMuzzleTemplates;                                     // 0x23D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        SpikeTypeColors;                                          // 0x23E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystem*>                     SpikeActivationTemplates;                                 // 0x23F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              CachedTempSpikeActorsToDebuff;                            // 0x2400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FName>                               NonAggroBuffPaths;                                        // 0x2410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SpikeTypeAtStartOfChange;                                 // 0x2420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x2424(0x0004) MISSED OFFSET
	TArray<class FString>                              TamingStrings;                                            // 0x2428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TamingHealthPercentIncPerFeed;                            // 0x2438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamingHealthIncClampPerFeed;                              // 0x243C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeAimMatsMaxEmissiveAlpha;                             // 0x2440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x2444(0x0004) MISSED OFFSET
	TArray<class UTexture2D*>                          SpikeIcons;                                               // 0x2448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      RiddenBuffClass;                                          // 0x2458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastInWaterTime;                                          // 0x2460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystem*>                     WaterEntryParticleTemplates;                              // 0x2468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            SpikeParticleLightComps;                                  // 0x2478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastAimStartFallingTime;                                  // 0x2488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AShooterPlayerController*>            NearbyTamingPCs;                                          // 0x2490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bControllerHasTarget;                                     // 0x24A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x24A1(0x0007) MISSED OFFSET
	class FString                                      CakeClassString;                                          // 0x24A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HuntTamingIneffectModifierIncDamPercent;                  // 0x24B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x24BC(0x0004) MISSED OFFSET
	double                                             LastTamingHealTime;                                       // 0x24C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWildSetTempSpikeOnBeginPlay;                             // 0x24C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x24C9(0x0007) MISSED OFFSET
	TArray<class USoundBase*>                          SpikeFireSounds;                                          // 0x24D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TamingBelowHealthPercentToLoseEff;                        // 0x24E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x24E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable;                                        // 0x24F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x24F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_TargetLoc;                             // 0x24F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x2504(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Lock2;                                 // 0x2505(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Lock;                                  // 0x2506(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x2507(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanShootSpike_CanShoot;                          // 0x2508(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2509(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x250A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x250B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_CustomEventName3;                            // 0x250C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x2514(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp3;                                   // 0x2518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation3;                                  // 0x2520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotifyState*                            K2Node_Event_AnimNotifyObject3;                           // 0x2528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x2530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x2531(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x2532(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName2_CmpSuccess;                            // 0x2533(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_SpikeBoneIndex;                        // 0x2534(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_SpikeTypeIndex;                        // 0x2538(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SpikeStaminaCheck_Success;                       // 0x253C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Bind;                                  // 0x253D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x253E(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_Damage;                                // 0x2540(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x2544(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_CustomEvent_DamageType;                            // 0x2548(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamagedActor;                          // 0x2550(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamageCauser;                          // 0x2558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_Damage;                                      // 0x2560(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x2564(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_Event_DamageType;                                  // 0x2568(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_Event_InstigatedBy;                                // 0x2570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x2578(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue;                          // 0x2580(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x2581(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2582(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x5];                                       // 0x2583(0x0005) MISSED OFFSET
	TArray<class AShooterPlayerController*>            CallFunc_GetAllLocalPlayerControllers_ReturnValue;        // 0x2588(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x2598(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x259C(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_Array_Get_Item;                                  // 0x25A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x25A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x25A9(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable2;                                       // 0x25AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x25B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x25B4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Variable3;                                       // 0x25C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable4;                                       // 0x25C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x25CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x25D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsTargeting;                           // 0x25D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x25D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x25D6(0x0002) MISSED OFFSET
	struct FName                                       K2Node_Event_CustomEventName2;                            // 0x25D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp2;                                   // 0x25E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation2;                                  // 0x25E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_TotalDuration;                               // 0x25F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x25F4(0x0004) MISSED OFFSET
	class UAnimNotifyState*                            K2Node_Event_AnimNotifyObject2;                           // 0x25F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName3_CmpSuccess;                            // 0x2600(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x2601(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode3;            // 0x2602(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x2603(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x2604(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode4;            // 0x2605(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x2606(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x2607(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x2608(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x2610(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x2618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x2620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotify*                                 K2Node_Event_AnimNotifyObject;                            // 0x2628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x2630(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x2631(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum7_CmpSuccess;                            // 0x2632(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x2633(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue3;                // 0x2634(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode5;            // 0x2635(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue2;                // 0x2636(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum8_CmpSuccess;                            // 0x2637(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x2638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x2640(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2648(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x2649(0x0003) MISSED OFFSET
	int                                                CallFunc_GetNextSpikeType_NextSpikeIndex;                 // 0x264C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetNextSpikeType_NextSpikeIndex2;                // 0x2650(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x2654(0x0004) MISSED OFFSET
	class FString                                      K2Node_Select_ReturnValue;                                // 0x2658(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x2668(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x2669(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x2670(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x2681(0x0003) MISSED OFFSET
	struct FLinearColor                                K2Node_Select_ReturnValue2;                               // 0x2684(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x2694(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Enable2;                               // 0x2695(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Interp2;                               // 0x2696(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x1];                                       // 0x2697(0x0001) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item2;                                 // 0x2698(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x26A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x26A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x26A9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic2;            // 0x26B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x26B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode6;            // 0x26B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum9_CmpSuccess;                            // 0x26BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Enable;                                // 0x26BB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Interp;                                // 0x26BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x26BD(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x26C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x26C4(0x0004) MISSED OFFSET
	class UTexture2D*                                  CallFunc_Array_Get_Item3;                                 // 0x26C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x26D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x26E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor2;                           // 0x26E4(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x26F4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item4;                                 // 0x26F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2700(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2704(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x2705(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item5;                                 // 0x2708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2710(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x2714(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x2715(0x0003) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            K2Node_MakeArray_Array;                                   // 0x2718(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterPlayerController*                    CallFunc_Array_Get_Item6;                                 // 0x2728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x2730(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x2734(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_Array_Get_Item7;                                 // 0x2738(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x2740(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x2741(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x2744(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x2748(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x2749(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x6];                                       // 0x274A(0x0006) MISSED OFFSET
	class USoundBase*                                  CallFunc_Array_Get_Item8;                                 // 0x2750(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2758(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Amargasaurus_Character_BP.Amargasaurus_Character_BP_C");
		return ptr;
	}


	void RefreshNearbyTamingPCs();
	void SpawnWaterBubbleVFX(const struct FName& NotifyName);
	void STATIC_UpdateWaterTrailVFX();
	void SpawnWaterEntryVFX();
	void UpdateRiddenBuff(class AShooterCharacter* Rider, bool IsClear);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void ToggleLockedAim();
	void SendTamingHUDMessage(int index, int ColorIndex);
	void CharacterNonAggroBuffCheck(class AShooterCharacter* ShooterChar, bool* HasNonAggroBuff);
	void ApplyTempDebuffToHitActors();
	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void BPLocalPossessedBy(class APlayerController** ByController);
	void BPLocalUnpossessed();
	void RefreshNonRiderPossessedCrosshair();
	void SpawnSpikeTypeToggleVFX(int SpikeTypeIndex);
	void UpdateSpikeColor();
	void OnRep_CurrentSpikeType();
	void SpawnSpikeMuzzleVFX(int SpikeBoneIndex, int SpikeTypeIndex);
	bool BPModifyDesiredRotation(float* DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation);
	void OnRep_ActiveSpikes();
	void BPTimerNonDedicated();
	void GetNextSpikeToRegen(int* NextIndex);
	void BPDoAttack(int* AttackIndex);
	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	struct FLinearColor STATIC_BPGetCrosshairColor();
	void OnRep_bIsAimTargeting();
	void UpdateTamingParticleEmitting(bool Emit);
	bool BPShouldForceFlee();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	bool AllowWakingTame(class APlayerController** ForPC);
	void BPFedWakingTameEvent(class APlayerController** ForPC);
	void OnRep_bTamingWantsFed();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void SetTamingPC(class AShooterPlayerController* PC, bool Set);
	void TamingTakeDamage(float Damage, class AActor* DamageCauser);
	void BPTimerServer();
	void SetWildFollowTargetFromTamingPC(bool Set);
	void ConvertDamageToAffinity(float Damage, class UDamageType* DamageType, class AActor* DamageActor, class AActor* DamageCauser);
	struct FName GetSocketForMeleeTraceForHitBlockers(int* AttackIndex);
	void GetNextSpikeType(int FromIndex, int* NextSpikeIndex);
	struct FVector BPOverrideFloatingHUDLocation();
	class UAnimMontage* BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent);
	void BP_OnJumpPressed();
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	void STATIC_SpikeStaminaCheck(bool NotifyRiderOfFail, bool* Success);
	void BPDinoARKDownloadedBegin();
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void BPSetupTamed(bool* bWasJustTamed);
	void RemoveSpike();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void STATIC_RidingTick(float* DeltaSeconds);
	void GetAimedSpikeTargetLoc(struct FVector* Loc);
	void BPTriggerStasisEvent();
	void GetNextSpikeIndex(int* NextIndex);
	void BP_OnUncryo(class AShooterPlayerController** ForPC);
	void UnstasisRegenSpikes();
	void BPUnstasis();
	void GetNumActiveSpikes(int* NumSpikes);
	void SetupSpikes();
	void STATIC_RefreshSpikeVisuals();
	void CanShootSpike(bool* CanShoot);
	void RegenSpike();
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	bool BPHandleOnStopTargeting();
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	void UserConstructionScript();
	void Timeline_SpikeEmissive__FinishedFunc();
	void Timeline_SpikeEmissive__UpdateFunc();
	void Server_ShootSpike(const struct FVector& TargetLoc);
	void Multi_LockRotRate(bool Lock);
	void Server_LockRotRate(bool Lock);
	void ReceiveBeginPlay();
	void BPAnimNotifyCustomState_End(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotifyState** AnimNotifyObject);
	void Multi_SpawnSpikeVFX(int SpikeBoneIndex, int SpikeTypeIndex);
	void SetupTamingPCDamBind(bool Bind);
	void OnInstigatedAnyDamage_Event(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void Multi_SetTamingParticleEmitting();
	void ReceiveTick(float* DeltaSeconds);
	void Server_SetIsTargeting(bool IsTargeting);
	void BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void Multi_UpdateSpikeAimMats(bool Enable, bool Interp);
	void UpdateSpikeAimMats(bool Enable, bool Interp);
	void ExecuteUbergraph_Amargasaurus_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
