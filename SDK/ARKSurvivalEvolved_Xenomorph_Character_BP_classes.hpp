#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP.Xenomorph_Character_BP_C
// 0x0760 (0x28E8 - 0x2188)
class AXenomorph_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UStaticMeshComponent*                        BuriedMound;                                              // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    UndergroundMovement_VFX;                                  // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             UndergroundMovement_SFX;                                  // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             UndergroundMovement_SFXX;                                 // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    currentVFXRotation;                                       // 0x21A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x21B4(0x0004) MISSED OFFSET
	class UParticleSystem*                             DuneFX;                                                   // 0x21B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      UndergroundCameraShake;                                   // 0x21C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveInAnimation;                                          // 0x21C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAmbushing;                                             // 0x21D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x21D1(0x0007) MISSED OFFSET
	double                                             LastAmbushingTime;                                        // 0x21D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             StartNextAmbushingTime;                                   // 0x21E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActiveUndergroundMoveFX;                                  // 0x21E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x21E9(0x0003) MISSED OFFSET
	float                                              AmbushingDuration;                                        // 0x21EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbushingDurationMin;                                     // 0x21F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbushingDurationMax;                                     // 0x21F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutGroundDurationMin;                                     // 0x21F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutGroundDurationMax;                                     // 0x21FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AcidSprayRadius;                                          // 0x2200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2204(0x0004) MISSED OFFSET
	class UClass*                                      AcidSprayClass;                                           // 0x2208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasRunAwayFromLightVector;                               // 0x2210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2211(0x0003) MISSED OFFSET
	struct FVector                                     RunAwayFromLightTargetLocation;                           // 0x2214(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveOutAnimation;                                         // 0x2220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveIdleAnimation;                                        // 0x2228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AcidSprayDistance;                                        // 0x2230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOffspringMode;                                         // 0x2234(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2235(0x0003) MISSED OFFSET
	class UClass*                                      AcidDeathCloud;                                           // 0x2238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isChupacabraSpawn;                                        // 0x2240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2241(0x0003) MISSED OFFSET
	struct FVector                                     DiveInParticleOffset;                                     // 0x2244(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DiveOutParticleOffset;                                    // 0x2250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x225C(0x0004) MISSED OFFSET
	double                                             LastTimeRecievedAffinity;                                 // 0x2260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isUnderground;                                            // 0x2268(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x2269(0x0007) MISSED OFFSET
	double                                             LastUndergroundStaminaLossTime;                           // 0x2270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UndergroundStaminaCost;                                   // 0x2278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x227C(0x0004) MISSED OFFSET
	class UAnimMontage*                                DiveInOffspringAnimation;                                 // 0x2280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                DiveIdleOffspringAnimation;                               // 0x2288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldAllowAmbushBury;                                   // 0x2290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x2291(0x0007) MISSED OFFSET
	double                                             LastDiveTime;                                             // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldBuryWithNoTarget;                                  // 0x22A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x22A1(0x0003) MISSED OFFSET
	float                                              ProbabilityQueenStartsBuried;                             // 0x22A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              currentChargeAmount;                                      // 0x22A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isReceiver;                                               // 0x22AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x22AD(0x0003) MISSED OFFSET
	float                                              currentChargeLossPerSecond;                               // 0x22B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentChargeReceivedPerSecond;                           // 0x22B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 chargeManagerBuff;                                        // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      chargeManagerBuffClass;                                   // 0x22C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             chargeDamageParticlesTemplate;                            // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    currentDissolveParticles;                                 // 0x22D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NoChargeDamageMultiplier;                                 // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BuryMoundZOffset;                                         // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ChargeFXSocketName;                                       // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnburyCheckDistance;                                      // 0x22E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x22EC(0x0004) MISSED OFFSET
	class APrimalBuff*                                 underChargeVisualsBuff;                                   // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUpdateHurtFX;                                          // 0x22F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x22F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x22FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x22FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType4;                               // 0x22FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x22FD(0x0003) MISSED OFFSET
	int                                                K2Node_Event_iValue3;                                     // 0x2300(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_HitLoc2;                               // 0x2304(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_HitDir2;                               // 0x2310(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_HitBone2;                              // 0x231C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x2324(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2330(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x2331(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2338(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_HitLoc;                                // 0x2340(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_HitDir;                                // 0x234C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_HitBone;                               // 0x2358(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType5;                               // 0x2360(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x2361(0x0003) MISSED OFFSET
	int                                                K2Node_Event_iValue4;                                     // 0x2364(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class UAnimMontage*>                        K2Node_MakeArray_Array;                                   // 0x2368(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Is_Animation_Playing_Result;                     // 0x2378(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2379(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType6;                               // 0x237A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x5];                                       // 0x237B(0x0005) MISSED OFFSET
	double                                             K2Node_Event_dValue4;                                     // 0x2380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2388(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0xC];                                       // 0x2394(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_Conv_VectorToTransform_ReturnValue;              // 0x23A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType7;                               // 0x23D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x23D1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_fValue4;                                     // 0x23D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x23D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x23E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x23F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType8;                               // 0x23FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue4;                                    // 0x23FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x23FE(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2400(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewUnderground;                        // 0x240C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x240D(0x0003) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x2410(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x2440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_FinishSpawningActor_ReturnValue;                 // 0x2448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType9;                               // 0x2450(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x2451(0x0007) MISSED OFFSET
	double                                             K2Node_Event_dValue5;                                     // 0x2458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x2460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x2461(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue;                     // 0x2464(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Can_Dive_Return;                                 // 0x2468(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Can_Dive_Return2;                                // 0x2469(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType10;                              // 0x246A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0x246B(0x0001) MISSED OFFSET
	float                                              K2Node_Event_fValue5;                                     // 0x246C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType11;                              // 0x2471(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue5;                                    // 0x2472(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x5];                                       // 0x2473(0x0005) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x2478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x2480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x2481(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimMontage_ReturnValue2;                    // 0x2484(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2488(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x2489(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x24A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasValidAggroTarget_ReturnValue;                 // 0x24A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x24A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x24A3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x24A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x24A5(0x0003) MISSED OFFSET
	struct FDecalData                                  K2Node_MakeStruct_DecalData;                              // 0x24A8(0x0020) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x24C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x24D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x24D9(0x0007) MISSED OFFSET
	struct FDecalData                                  K2Node_MakeStruct_DecalData2;                             // 0x24E0(0x0020) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsDead_ReturnValue;                              // 0x2500(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2501(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x2502(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2503(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x2504(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2505(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2506(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x2507(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x2508(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue2;                       // 0x2514(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystem*                             K2Node_Select_ReturnValue2;                               // 0x2520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x2528(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x2529(0x0007) MISSED OFFSET
	class UParticleSystem*                             K2Node_Select_ReturnValue3;                               // 0x2530(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x2538(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x2539(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x6];                                       // 0x253A(0x0006) MISSED OFFSET
	TArray<class APawn*>                               CallFunc_GetTrueBasedPawns_ReturnValue;                   // 0x2540(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2550(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x2554(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x2558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue2;                           // 0x2560(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue;                           // 0x2561(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x2562(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x2563(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue3;                           // 0x2564(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue2;                          // 0x2565(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue4;                           // 0x2566(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue3;                          // 0x2567(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2568(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2569(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x6];                                       // 0x256A(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue2;                          // 0x2578(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x2579(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsActive_ReturnValue;                            // 0x257A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x257B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x257C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x257D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x257E(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x2580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x2589(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x258A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x5];                                       // 0x258B(0x0005) MISSED OFFSET
	class ABuff_ChargeManager_C*                       K2Node_DynamicCast_AsBuff_ChargeManager_C;                // 0x2590(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2598(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType7;                         // 0x2599(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x6];                                       // 0x259A(0x0006) MISSED OFFSET
	double                                             K2Node_CustomEvent_dValue3;                               // 0x25A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ChargeManager_C*                       K2Node_DynamicCast_AsBuff_ChargeManager_C2;               // 0x25A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x25B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType6;                         // 0x25B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x2];                                       // 0x25B2(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_fValue3;                               // 0x25B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ChargeManager_C*                       K2Node_DynamicCast_AsBuff_ChargeManager_C3;               // 0x25B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x25C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType5;                         // 0x25C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBValue3;                              // 0x25C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x5];                                       // 0x25C3(0x0005) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x25C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UChargeFunctions_FakeLibrary_C*              K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C;       // 0x25D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x25D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType4;                         // 0x25D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x6];                                       // 0x25DA(0x0006) MISSED OFFSET
	double                                             K2Node_CustomEvent_dValue2;                               // 0x25E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType3;                         // 0x25E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x25E9(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_fValue2;                               // 0x25EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue2;              // 0x25F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UChargeFunctions_FakeLibrary_C*              K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C2;      // 0x25F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2600(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType2;                         // 0x2601(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBValue2;                              // 0x2602(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x5];                                       // 0x2603(0x0005) MISSED OFFSET
	class ABuff_ChargeManager_C*                       K2Node_DynamicCast_AsBuff_ChargeManager_C4;               // 0x2608(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x2610(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType;                          // 0x2611(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBValue;                               // 0x2612(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x1];                                       // 0x2613(0x0001) MISSED OFFSET
	float                                              K2Node_CustomEvent_fValue;                                // 0x2614(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_CustomEvent_dValue;                                // 0x2618(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType3;                               // 0x2620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue3;                                    // 0x2621(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x2622(0x0002) MISSED OFFSET
	float                                              K2Node_Event_fValue3;                                     // 0x2624(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_Event_dValue3;                                     // 0x2628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_iVariable;                                   // 0x2630(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType2;                               // 0x2634(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue2;                                    // 0x2635(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x2];                                       // 0x2636(0x0002) MISSED OFFSET
	float                                              K2Node_Event_fValue2;                                     // 0x2638(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x263C(0x0004) MISSED OFFSET
	double                                             K2Node_Event_dValue2;                                     // 0x2640(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_iValue2;                                     // 0x2648(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType;                                // 0x264C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_multicast;                                   // 0x264D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x2];                                       // 0x264E(0x0002) MISSED OFFSET
	float                                              K2Node_Event_fValue;                                      // 0x2650(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x2654(0x0004) MISSED OFFSET
	double                                             K2Node_Event_dValue;                                      // 0x2658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue;                                     // 0x2660(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_triggerEvent;                                // 0x2661(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_multicastEvent;                              // 0x2662(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x1];                                       // 0x2663(0x0001) MISSED OFFSET
	int                                                K2Node_Event_iValue;                                      // 0x2664(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue4;                // 0x2668(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x2669(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue2;              // 0x266A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue3;              // 0x266B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x266C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x266D(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x2670(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2674(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x2675(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2678(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x267C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x267D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2680(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue2;               // 0x268C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0x2698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_orientToGround;                        // 0x2699(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x6];                                       // 0x269A(0x0006) MISSED OFFSET
	class UParticleSystem*                             K2Node_CustomEvent_ParticleSystem;                        // 0x26A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_OffsetFromRoot;                        // 0x26A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0x26B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x26B5(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x26B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x26BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x26C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x26C4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x26CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x26D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x26DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x26E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x26E1(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_Array_Get_Item;                                  // 0x26E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x26F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x26F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x26F9(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x26FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x2700(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x270C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x2718(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x271C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x2720(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2724(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x2730(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X3;                                  // 0x273C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0x2740(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0x2744(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2748(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x2754(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2760(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  CallFunc_LineTraceSingle_NEW_OutHit;                      // 0x2770(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_LineTraceSingle_NEW_ReturnValue;                 // 0x27F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x27F9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x27FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x2808(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x2814(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x2820(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x4];                                       // 0x282C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x2830(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x2838(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x2840(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x2848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x2850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x2854(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x2855(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRotFromZ_ReturnValue;                        // 0x2858(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x2864(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetUpVector_ReturnValue;                         // 0x2870(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue4;                   // 0x287C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x2888(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue5;                   // 0x2894(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue3;               // 0x28A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x4];                                       // 0x28AC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x28B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_NormalizedDeltaRotator_ReturnValue;              // 0x28B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x4];                                       // 0x28C4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x28C8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore3_RefProperty; // 0x28D8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP.Xenomorph_Character_BP_C");
		return ptr;
	}


	void GetNumBatteries(int* numBatteries);
	void Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue);
	bool BPPreventAttachments(class UObject** ForItem);
	void RefreshTamedAttachments();
	bool AllowPlayMontage(class UAnimMontage** AnimMontage);
	class UAnimMontage* GetDinoLevelUpAnimation();
	struct FName GetSocketForMeleeTraceForHitBlockers(int* AttackIndex);
	bool BPIsHidden();
	void BPSetupTamed(bool* bWasJustTamed);
	void ShouldBury(bool* Result);
	bool ShouldUnbury();
	void OnRep_isUnderground();
	void OnRep_bIsOffspringMode();
	void DisableEyeGlow();
	void STATIC_UpdateBuryMound(bool ShouldShow);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void OnChargeEvent();
	void CreateChargeManager();
	void InitializeDive();
	void DiveEnd();
	void BuriedWithNoTarget();
	bool BPAllowCarryCharacter(class APrimalCharacter** checkCharacter);
	float TimeSinceLastAttackForIndex(int index);
	void BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	bool HasValidAggroTarget();
	void CancelImpregnateGrab();
	void IncreaseTameAffinity(float AffinityToAdd, class AShooterCharacter* PlayerChar);
	void BPOnTamedProcessOrder(class APrimalCharacter** FromCharacter, TEnumAsByte<EDinoTamedOrder>* OrderType, bool* bForce, class AActor** enemyTarget, bool* orderNotExecuted);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void BPDoAttack(int* AttackIndex);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void STATIC_Can_Dive(bool* Return);
	bool Tamed_Has_Valid_Enemy();
	void AcidDamageEvent(const struct FVector& OriginLoc, const struct FVector& SprayDir);
	void DiveSetup();
	void DiveIdle();
	void Is_Animation_Playing(TArray<class UAnimMontage*>* Montage, bool* Result);
	float BlueprintGetAttackWeight(int* AttackIndex, float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	bool BlueprintOverrideWantsToRun(bool* bInputWantsToRun);
	void Update_Underground_Trail();
	void SetDinoCollisionState(bool Active);
	void DetachChildren();
	void BPTimerNonDedicated();
	void BPTimerServer();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void UserConstructionScript();
	void InpActEvt_AltFire_K2Node_InputActionEvent_71();
	void InpActEvt_Reload_K2Node_InputActionEvent_70();
	void InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_69();
	void InpActEvt_Prone_K2Node_InputActionEvent_68();
	void Interface_Check_for_Batteries_and_Update_Multicast();
	void Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue);
	void ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue);
	void ReceiveBeginPlay();
	void StartAcidSpray(const struct FVector& HitLoc, const struct FVector& HitDir, const struct FName& HitBone);
	void Server_StartAcidSpray(const struct FVector& HitLoc, const struct FVector& HitDir, const struct FName& HitBone);
	void Server_TryDive(bool NewUnderground);
	void AnimNotify_StartBury();
	void AnimNotify_EndBury();
	void Multi_DiveOut();
	void AttemptDiveOut();
	void Attempt_Dive_In();
	void Multi_DiveIn();
	void BPUnstasis();
	void BPDinoPostBeginPlay();
	void StartBuried();
	void AnimNotify_Death();
	void UpdateHurtFX();
	void DelayUpdateHurtFX();
	void ForceDiveEnd();
	void Multi_ForceDiveEnd();
	void Server_Roar();
	void BP_OnJumpPressed();
	void Server_TailWeb();
	void Server_ImpregnateAttack();
	void Proxy_RefreshAttachments();
	void StopDissolveVisuals_Multicast();
	void StartDissolveVisuals_Multicast();
	void ChargeVariableEvent_Double(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void ChargeVariableEvent_Float(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void ChargeVariableEvent_Boolean(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void ChargeVariableEvent_Double_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void ChargeVariableEvent_Float_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void ChargeVariableEvent_Boolean_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue);
	void Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable);
	void Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue);
	void Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue);
	void PlayGroundParticleVFX(bool orientToGround, class UParticleSystem* ParticleSystem, const struct FVector& OffsetFromRoot);
	void ExecuteUbergraph_Xenomorph_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
