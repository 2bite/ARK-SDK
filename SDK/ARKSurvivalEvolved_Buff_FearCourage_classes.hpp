#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FearCourage_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FearCourage.Buff_FearCourage_C
// 0x0558 (0x0ED0 - 0x0978)
class ABuff_FearCourage_C : public APrimalBuff
{
public:
	float                                              DecelerationTimeline_NewTrack_1_6AACC36F4F2B4E29B9CEB1A067F3E6E4;// 0x0978(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DecelerationTimeline__Direction_6AACC36F4F2B4E29B9CEB1A067F3E6E4;// 0x097C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x097D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DecelerationTimeline;                                     // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              remoteForceFleeTime;                                      // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isInTerror;                                               // 0x098C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x098D(0x0003) MISSED OFFSET
	float                                              currentMasterIndexValue;                                  // 0x0990(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              fearPerRoarFixedAmount;                                   // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxDragWeightToAffect;                                    // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              initialFearAsWeightPercentage;                            // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fearDecreaseRate;                                         // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	double                                             timeTerrorStarted;                                        // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EPrimalCharacterStatusValue>>   statsGainPerSecondCourage;                                // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      statsGainPerSecondAmountCourage;                          // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               gainPerSecondIsPercentOfMaxCourage;                       // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09D1(0x0003) MISSED OFFSET
	float                                              couragePerRoarFixedAmount;                                // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              courageDecreaseRate;                                      // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              initialCourageWeightPercentage;                           // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fearPerRoarAsWeightPercent;                               // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isMounted;                                                // 0x09E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09E5(0x0003) MISSED OFFSET
	float                                              oldForcedFleeTime;                                        // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              hudMessageDisplayTime;                                    // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStatusValueModifierDescription             terrorMessageDescription;                                 // 0x09F0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               takeAwayControlDuringTerror;                              // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A41(0x0003) MISSED OFFSET
	float                                              couragePerRoarAsWeightPercent;                            // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastTimeIndexChanged;                                     // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeAtMaxCourage;                                         // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0A54(0x0004) MISSED OFFSET
	class AActor*                                      currentDamageCauser;                                      // 0x0A58(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           lastRiderWithInput;                                       // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              terrorLevel;                                              // 0x0A68(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               showPercentageHUDNotificationsToRider;                    // 0x0A6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0A6D(0x0003) MISSED OFFSET
	float                                              decelerationTime;                                         // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              initialFearFixedAmount;                                   // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              initialCourageFixedAmount;                                // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialVelocity;                                          // 0x0A7C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fleeDestinationUpdateFrequency;                           // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0A8C(0x0004) MISSED OFFSET
	double                                             lastTimeUpdateFakeDestination;                            // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              itemsToReduceTerror;                                      // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      terrorReductionPerItem;                                   // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              maxTerrorLevel;                                           // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0ABC(0x0004) MISSED OFFSET
	struct FStatusValueModifierDescription             cantAttackMessageDescription;                             // 0x0AC0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             lastTimeCantAttackMessage;                                // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fixedDistanceForFleePoint;                                // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              randomDistanceForFleePoint;                               // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                tamedAggressionLevelBeforeTerror;                         // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               lastAdditionWasFear;                                      // 0x0B24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0B25(0x0003) MISSED OFFSET
	float                                              cooldownTimeForSameEffect;                                // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0B2C(0x0004) MISSED OFFSET
	class UAnimMontage*                                poopAnim;                                                 // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                allyColor;                                                // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                enemyColor;                                               // 0x0B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EPrimalCharacterStatusValue>>   statMultipliersCourage;                                   // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      statMultipliersValueCourage;                              // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              terrorToLosePerSecond;                                    // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeBeforeStartLosingTerror;                              // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              terrorReducedByItems;                                     // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxTerrorToLosePerSecond;                                 // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EPrimalCharacterStatusValue>>   statsDecreasePerSecondFear;                               // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      statsDecreasePerSecondAmountFear;                         // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EPrimalCharacterStatusValue>>   statMultipliersFear;                                      // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      statMultipliersValueFear;                                 // 0x0BB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               gainPerSecondIsPercentOfMaxFear;                          // 0x0BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0BC9(0x0003) MISSED OFFSET
	float                                              receivedDamageMultiplierFear;                             // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              receivedDamageMultiplierCourage;                          // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              terrorDuration;                                           // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStatusValueModifierDescription             onFearRoarDescription;                                    // 0x0BD8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStatusValueModifierDescription             onCourageRoarDescription;                                 // 0x0C28(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              lastIndexValueClient;                                     // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0C7C(0x0004) MISSED OFFSET
	double                                             lastTimeIndexChangedClient;                               // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             timeMaxCourageStartedClient;                              // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStatusValueModifierDescription             fearStateDescription;                                     // 0x0C90(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStatusValueModifierDescription             courageStateDescription;                                  // 0x0CE0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               allowMaxCourageRefresh;                                   // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0D31(0x0003) MISSED OFFSET
	float                                              currentMasterIndexValueClient;                            // 0x0D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      savedTameFollowTarget;                                    // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      savedWanderAroundActor;                                   // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               variablesRestored;                                        // 0x0D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               savedAllowMountedWeaponry;                                // 0x0D49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x0D4A(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    circleParticleComponent;                                  // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               useSecondaryParticlesForCircle;                           // 0x0D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0D59(0x0007) MISSED OFFSET
	class UParticleSystem*                             circleParticles;                                          // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              shortMessageDuration;                                     // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0D6C(0x0004) MISSED OFFSET
	class UClass*                                      immuneToFearBuff;                                         // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue;                 // 0x0D78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0D79(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_duration;                              // 0x0D7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x0D80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0D84(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0D88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0D90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0D91(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0D94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x0D98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0D99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x0D9A(0x0006) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_Instigator;                            // 0x0DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_delay2;                                // 0x0DA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0DAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0DAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x0DAE(0x0002) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0DB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue;              // 0x0DB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0DC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0DC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x0DC2(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_newPathingDestination;                 // 0x0DC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x0DD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0DD1(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0DD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0DE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x0DE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x0DE9(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Delay;                                 // 0x0DEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0DF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0DF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ClassClass_ReturnValue;                 // 0x0DF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Poop_ReturnValue;                                // 0x0DFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x5];                                       // 0x0DFB(0x0005) MISSED OFFSET
	class ADoed_Character_BP_C*                        K2Node_DynamicCast_AsDoed_Character_BP_C;                 // 0x0E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x0E09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x0E0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x5];                                       // 0x0E0B(0x0005) MISSED OFFSET
	class ADoed_Character_BP_C*                        K2Node_DynamicCast_AsDoed_Character_BP_C2;                // 0x0E10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0E18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0E19(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x0E1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetTeamColorForParticles_finalColor;             // 0x0E28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x0E34(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x0E38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x0E49(0x0003) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0E4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0E50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x0E51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x6];                                       // 0x0E52(0x0006) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter2;                // 0x0E58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0E60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0xF];                                       // 0x0E61(0x000F) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue;                  // 0x0E70(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x0EA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x0EAC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x0EB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0EC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0EC5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x2];                                       // 0x0EC6(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x0EC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FearCourage.Buff_FearCourage_C");
		return ptr;
	}


	int GetBuffType();
	void Process_Courage_Value(float Value, class APrimalCharacter* forCharacter, bool CanSwitch, bool useClientIndex, float* finalValue);
	void ProcessFearValue(float Value, class APrimalCharacter* forCharacter, bool CanSwitch, bool useClientIndex, float* finalValue);
	void Max_Courage_ActionsClient();
	void BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult);
	struct FStatusValueModifierDescription GetBuffDescription();
	void Add_Fear_Or_CourageClient(float amountToAdd, bool isFear, class APrimalCharacter* fearCauser, bool switchFromFearToCourageIfNeeded, bool isFromRoar);
	void IsAtMax_f(class APrimalCharacter* Character, bool useClientIndex, bool* Courage, bool* Fear);
	void GetTeamColorForParticles(struct FVector* finalColor);
	void SetMultiplier(TEnumAsByte<EPrimalCharacterStatusValue> statusValue, int index, bool isFear);
	void isSameTeamOrAlly(int secondTargetingTeam, int firstTargetingTeamOverride, bool* isAllyOrSameTeam);
	void CanAddFearOrCourage(bool isFear, bool* CanAdd);
	void UpdateFleePoint();
	void STATIC_Send_HUDMessage_to_Rider_From_Server(const class FString& messageID, float Duration);
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void ReduceTerror(float amount);
	void BPInventoryItemUsed(class UObject** InventoryItemObject);
	void OnFearAdded(class APrimalCharacter* causer, float fearAmount);
	void ReceiveDestroyed();
	void RestoreVariables();
	void ExtendBuffTimeIfNeeded(bool forceExtend, float toDuration);
	void BuffTickClient(float* DeltaTime);
	void CheckDeactivateCondition();
	float GetBuffPostprocessIntensity();
	void OnDinoDismounted();
	void OnDinoMounted();
	void BPDeactivated(class AActor** ForInstigator);
	void SendHUDMessageToRider(const struct FStatusValueModifierDescription& Description, float Scale, float Duration);
	void TerrorActions(float DeltaTime);
	void ActivateUnmountedFlee();
	void ActivateMountedFlee();
	void OnRep_isMounted();
	void UpdateMountedVariable(bool ForceUpdate);
	void OnCourageRoar(bool canSwitchToCourage, float amountOverride, bool useAmountOverride, bool sendMessageToRider);
	void InitializeBuff(bool isFear);
	void IncreaseStat(TEnumAsByte<EPrimalCharacterStatusValue> statusValue, int index, class UPrimalCharacterStatusComponent* statusComponent, float DeltaTime, bool isFear);
	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BuffTickServer(float* DeltaTime);
	void Check_Terror_Condition(class APrimalCharacter* fearCauser);
	void On_FearRoar(class APrimalCharacter* fearCauser, float amountOverride, bool useAmountOverride, bool switchFromFearToCourageIfNeeded, bool sendMessageToRider);
	void Add_FearOrCourage(float amountToAdd, bool isFear, class APrimalCharacter* fearCauser, bool switchFromFearToCourageIfNeeded, bool isFromRoar);
	void Start_Terror(class APrimalCharacter* fearCauser);
	void UserConstructionScript();
	void DecelerationTimeline__FinishedFunc();
	void DecelerationTimeline__UpdateFunc();
	void InpActEvt_Fire_K2Node_InputActionEvent_158();
	void InpActEvt_Targeting_K2Node_InputActionEvent_157();
	void InpActEvt_Crouch_K2Node_InputActionEvent_156();
	void InpActEvt_Jump_K2Node_InputActionEvent_155();
	void ReceiveBeginPlay();
	void InitializeNonDedi();
	void Decelerate(float Duration);
	void GivePlayerControlAfterDelay(class APrimalDinoCharacter* Instigator, float Delay);
	void UpdatePathingDestination_Multicast(const struct FVector& newPathingDestination);
	void EmitPoopAfterDelay(float Delay);
	void UnrollDoed_Multicast();
	void SetParticlesColorByTeam();
	void UnrollDoed();
	void UnrollDoedIfNeeded();
	void InitializeCircleParticles();
	void ExecuteUbergraph_Buff_FearCourage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
