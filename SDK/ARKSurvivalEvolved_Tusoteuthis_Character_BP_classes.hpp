#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tusoteuthis_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C
// 0x0548 (0x27D0 - 0x2288)
class ATusoteuthis_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Tuso_C*     DinoCharacterStatus_BP_Tuso_C1;                           // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    InkTrail;                                                 // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnActorAround_TurnRatio_7A27B9E24FC0E1B141AC4AB1071050C9;// 0x2298(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TurnActorAround__Direction_7A27B9E24FC0E1B141AC4AB1071050C9;// 0x229C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x229D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TurnActorAround;                                          // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnMeshAround_TurnRatio_DF7773704E3A5A03D67822BDB05E3DB4;// 0x22A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TurnMeshAround__Direction_DF7773704E3A5A03D67822BDB05E3DB4;// 0x22AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TurnMeshAround;                                           // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurnedAround;                                          // 0x22B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurnedAround_current;                                  // 0x22B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x22BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x22BB(0x0001) MISSED OFFSET
	float                                              TurnSpeedScale;                                           // 0x22BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetTurnVelocityRatio;                                   // 0x22C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                postTurnAction;                                           // 0x22C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              grabWeight_MIN;                                           // 0x22C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              grabcheckDuration_Start;                                  // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              grabCheckDuration_End;                                    // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              grabCheckInterval;                                        // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              grabDuration_MAX;                                         // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleasePreyAfterDamagePercent;                            // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrushingPreySpeedModifier;                                // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreyCanEscapeAboveMaxWeightPercentage;                    // 0x22E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreyEscapeChanceMax;                                      // 0x22E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              postGrabSuccessCooldown;                                  // 0x22EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TentacleAttackMinAbsDot;                                  // 0x22F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCrushingPrey;                                          // 0x22F4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x22F5(0x0003) MISSED OFFSET
	float                                              totalDamageFromPrey;                                      // 0x22F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              turn_startYaw;                                            // 0x22FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Ref_TurnAroundAnim_Left;                                  // 0x2300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              turn_targetYaw;                                           // 0x2308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x230C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Ref_TurnAroundAnim_Right;                                 // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_DropPreyAnim;                                         // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_GrabLoopAnim;                                         // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InkCloudClass;                                            // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       InkFX_SocketName;                                         // 0x2330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnedPitchRotationRate_Rider;                            // 0x2338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnedPitchRotationRate_NoRider;                          // 0x233C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PostInkFleeBuff;                                          // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CrushingBuff;                                             // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShouldTurnDotProductThreshhold;                           // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldCheckForGrabbedPrey;                               // 0x2354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2355(0x0003) MISSED OFFSET
	double                                             lastGrabStartTime;                                        // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Ref_SwimmingVFX;                                          // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    UTurnTargetRot;                                           // 0x2368(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultSwimParticleSpeed;                                 // 0x2374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwimParticleDynamicParamName;                             // 0x2378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              crushInterval;                                            // 0x2380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2384(0x0004) MISSED OFFSET
	double                                             LastCrushTime;                                            // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastGrabEndTime;                                          // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreFirstGrabDelay;                                    // 0x2398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2399(0x0007) MISSED OFFSET
	double                                             lastTentacleSlapTime;                                     // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventPreyEscapeOnFirstTry;                             // 0x23A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurnRight;                                               // 0x23A9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x23AA(0x0002) MISSED OFFSET
	float                                              UTurnDotThreshhold;                                       // 0x23AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Ref_CrushingPreyEatMontage;                               // 0x23B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x23B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x23B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x23BA(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x23BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x23C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanAttack_ReturnValue;                           // 0x23C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoAttack_ReturnValue;                            // 0x23CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x23CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x23CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x23CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x23CE(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x23D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x23DC(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x23E0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x2410(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_FinishSpawningActor_ReturnValue;                 // 0x2418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2420(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2421(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x2422(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2428(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCrushingValidCharacter_result;                 // 0x2430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2431(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x6];                                       // 0x2432(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue2;                      // 0x2438(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x2440(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCrushingValidCharacter_result2;                // 0x2441(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2442(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x2443(0x0001) MISSED OFFSET
	float                                              CallFunc_GetDistanceTo_ReturnValue;                       // 0x2444(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item;                                  // 0x2448(0x0130) (Transient, DuplicateTransient)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2578(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BlueprintCanAttack_ReturnValue;                  // 0x2579(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x257A(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_RLerp_ReturnValue;                               // 0x257C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2588(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x2594(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAttacking_ReturnValue;                         // 0x2595(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2596(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2597(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x2598(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_NegateVector_ReturnValue;                        // 0x25A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x25B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x25BC(0x0004) MISSED OFFSET
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item2;                                 // 0x25C0(0x0130) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x26F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x26F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x26F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsConscious_ReturnValue;                       // 0x26F3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x26F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x26F5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue2;                  // 0x26F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x2704(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x2710(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                              CallFunc_SortActorsByDistance_ReturnValue;                // 0x2720(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2730(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x2734(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x2735(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x2736(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2738(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x273C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x273D(0x0003) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item3;                                 // 0x2740(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x2748(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x2749(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x274A(0x0006) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x2750(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2758(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x2759(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue3;                      // 0x2760(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x2768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanCarryCharacter_ReturnValue;                   // 0x2769(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x276A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x1];                                       // 0x276B(0x0001) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x276C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue2;              // 0x2770(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_RLerp_ReturnValue2;                              // 0x277C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue;                  // 0x2788(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue2;                   // 0x2794(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x2795(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue;                // 0x2798(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x27A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x27A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x27A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x6];                                       // 0x27AA(0x0006) MISSED OFFSET
	class ATusoteuthis_Character_BP_C*                 CallFunc_GetDefaultDino_Ref;                              // 0x27B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x27B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x27BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x27C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue2;                            // 0x27C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C");
		return ptr;
	}


	struct FName GetSocketForMeleeTraceForHitBlockers(int* AttackIndex);
	void BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	void BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void PrepareForCrushingPrey();
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPSetupTamed(bool* bWasJustTamed);
	void DoesPreyEscape(bool* Result);
	void CanGrab(bool* Result);
	void BPFedWakingTameEvent(class APlayerController** ForPC);
	void GetDefaultDino(class ATusoteuthis_Character_BP_C** Ref);
	void OnRep_UTurnTargetRot();
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void CheckForIsCrushingPrey();
	void Update_MovementByTurnState();
	void OnRep_bIsCrushingPrey();
	void BPDoAttack(int* AttackIndex);
	void CheckForResetTurn();
	void STATIC_BPTimerServer();
	void CanTargetBeCrushed(bool* Result);
	void ResetTurnState(bool ForceReset);
	void TurnAround(bool newTurnState);
	void NetSetIsTurnedAround(bool NewValue, bool forceSuccess);
	void OnRep_bIsTurnedAround();
	void TryCrushingPrey();
	void RemoveCarryBuffFromPrey();
	void SyphonHealthFromPrey();
	void DropPrey(bool playDropAnim, bool forceSuccess);
	void IsCrushingValidCharacter(bool* Result);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void UserConstructionScript();
	void TurnMeshAround__FinishedFunc();
	void TurnMeshAround__UpdateFunc();
	void TurnMeshAround__Turnt__EventFunc();
	void TurnActorAround__FinishedFunc();
	void TurnActorAround__UpdateFunc();
	void InpActEvt_Jump_K2Node_InputActionEvent_268();
	void AnimNotify_ParalyzePrey();
	void InkAttackFX();
	void PlayAttackTurnTimeline();
	void ReceiveBeginPlay();
	void Multi_UpdateMovementByTurnState();
	void AnimNotify_DamagePrey();
	void PlayUTurnTimeline();
	void Server_JumpPressed();
	void UpdateMovementAfterDelay();
	void AnimNotify_GrabAllies();
	void ExecuteUbergraph_Tusoteuthis_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
