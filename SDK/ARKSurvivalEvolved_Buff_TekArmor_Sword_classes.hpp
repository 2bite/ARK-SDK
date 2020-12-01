#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Sword_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekArmor_Sword.Buff_TekArmor_Sword_C
// 0x0377 (0x0D40 - 0x09C9)
class ABuff_TekArmor_Sword_C : public ABuff_TekArmor_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    TPV_ChargeFX;                                             // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChargeFX;                                             // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound_ChargedLoop;                                        // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound_Discharged;                                         // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound_Charged;                                            // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TekGlovePunchState>                  CurrentTekPunchState;                                     // 0x09F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09F9(0x0003) MISSED OFFSET
	float                                              TakePercentDamageFromHittingStructs;                      // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiplyDamageByMeleeMultiplier;                         // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseChargeLevel2;                                         // 0x0A01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToCharge;                                           // 0x0A02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0A03(0x0005) MISSED OFFSET
	double                                             chargeStartTime;                                          // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             cooldownStartTime;                                        // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchCooldown;                                            // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              punchRadius;                                              // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchDamage;                                              // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchImpulse;                                             // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchImpulseDragWeightLimit;                              // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchImpulse_current;                                     // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchImpulseDragWeightLimit_current;                      // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A34(0x0004) MISSED OFFSET
	class UClass*                                      currentPunchDamageType;                                   // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              PunchIgnoreActors;                                        // 0x0A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              rocketPunchDistance_Max;                                  // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     currentRocketFistVelocity;                                // 0x0A54(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RocketPunchDuration_Max;                                  // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rocketPunchDuration_current;                              // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             rocketPunchStartTime;                                     // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ChargingSound;                                            // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ChargedParticle;                                          // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ChargedSound_One;                                         // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ChargedSound_Two;                                         // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PunchImpactParticle;                                      // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PunchImpactSound;                                         // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ElementCost_Punch;                                        // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ElementCost_ChargeLoop;                                   // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargingElementCostInterval;                              // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	class UMaterial*                                   SwordTargetingCrosshairType;                              // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    currentSwordTargetingCrosshair;                           // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PunchImpactGroundParticle;                                // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0AC9(0x0003) MISSED OFFSET
	float                                              CrosshairSize;                                            // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FullyChargedPeriodicSound;                                // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PunchExplosionDamage;                                     // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchExplosionRadius;                                     // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PunchExplosionDamageType;                                 // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchExplosionImpulse;                                    // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class USoundBase*                                  PunchChargeCancelSound;                                   // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              alreadyHitActorsArray;                                    // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              punchAnimLength;                                          // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchTraceHalfSize;                                       // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TekPunch_FoliageDamageType;                               // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TekPunchCameraShake;                                      // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasValidTarget;                                          // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0B21(0x0003) MISSED OFFSET
	struct FLinearColor                                HUD_NoPawnTargetColor;                                    // 0x0B24(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUD_ValidPawnTargetColor;                                 // 0x0B34(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0B44(0x0004) MISSED OFFSET
	class USoundBase*                                  MidAirSound;                                              // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastChargeConsumeElementTime;                             // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTargetingPressed;                                        // 0x0B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_TekGlovePunchState>                  previousTekPunchState;                                    // 0x0B59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0B5A(0x0002) MISSED OFFSET
	float                                              playerWalkSpeed_Charging;                                 // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeToCharge;                                             // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ElementCost_RocketPunch;                                  // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeCancel_TPV;                                    // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeCancel_FPV;                                    // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeStart_TPV_Ground;                              // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeStart_TPV_Air;                                 // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeStart_FPV;                                     // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_RocketPunch_TPV;                                     // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Punch_TPV_Ground;                                    // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Punch_TPV_Air;                                       // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Punch_FPV;                                           // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ElementCost_Charged;                                      // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              punchDuration;                                            // 0x0BB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GloveFXSocketName_FPV;                                    // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GloveFXSocketName_TPV;                                    // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowAutoStart;                                          // 0x0BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0BC9(0x0007) MISSED OFFSET
	double                                             RocketPunchLastUpdateTime;                                // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldPunchNow;                                          // 0x0BD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0BD9(0x0003) MISSED OFFSET
	float                                              InstaPunchDistance;                                       // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RocketPunchTickCheckDistance;                             // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundCheckDistance;                                      // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChargedCameraShake;                                       // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meleeDamageMultiplierScale;                               // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAltFirePressed;                                          // 0x0BF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0BF5(0x0003) MISSED OFFSET
	double                                             lastPunchTime;                                            // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchDurationMax;                                         // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0C04(0x0004) MISSED OFFSET
	class AWeapSword_Tek_C*                            Ref_TekSword;                                             // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      RefRocketPunchTargActor;                                  // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraStructureDamageMultiplier;                           // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFallZSpeed;                                            // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastPunchedTime;                                          // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastRocketPunchedTime;                                    // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0C39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0C3A(0x0002) MISSED OFFSET
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x0C3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseTekAbility_bResult;                        // 0x0C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseTekAbility_bResult2;                       // 0x0C41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_TekGlovePunchState>                  K2Node_CustomEvent_newPunchState;                         // 0x0C42(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0C43(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0C44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x0C45(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newHasTarget;                          // 0x0C46(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x0C47(0x0001) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_newTargetPawn;                         // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0C50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x0C51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x0C52(0x0006) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C;                     // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0C60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0C61(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C2;                    // 0x0C68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0C70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0C71(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C3;                    // 0x0C78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0C80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0C81(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C4;                    // 0x0C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0C90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x0C91(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C5;                    // 0x0C98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0CA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0CA1(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C6;                    // 0x0CA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0CB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result;                      // 0x0CB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x0CB2(0x0006) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef;                 // 0x0CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result2;                     // 0x0CC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0CC1(0x0007) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef2;                // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result3;                     // 0x0CD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0CD1(0x0007) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef3;                // 0x0CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result4;                     // 0x0CE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x0CE1(0x0007) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef4;                // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetRef_OwningPlayer_player;                      // 0x0CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C7;                    // 0x0CF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x0D00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0D01(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C8;                    // 0x0D08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x0D10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0D11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x0D12(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0D13(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0D14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasShield_ReturnValue;                           // 0x0D15(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasShield_ReturnValue2;                          // 0x0D16(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0D17(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0D18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShieldActive_ReturnValue;                        // 0x0D19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0D1A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShieldActive_ReturnValue2;                       // 0x0D1B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0D1C(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_Get_Ref_Owning_PlayerController_controller;      // 0x0D20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0D28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue;                     // 0x0D29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue2;                    // 0x0D2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue3;                    // 0x0D2B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue4;                    // 0x0D2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x0D2D(0x0003) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceMulti_NEW_ActorsToIgnore_RefProperty; // 0x0D30(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Sword.Buff_TekArmor_Sword_C");
		return ptr;
	}


	bool PreventBlockingWithShield();
	bool ShieldActive();
	bool HasShield();
	void GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef);
	void Can_Decrease_Element_Ammo(int AmountToDecrease, bool isForChargedState, bool* CanDecrease);
	void TryDecreaseElementAmmo(int AmountToDecrease, bool isForChargedState);
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void CanPhysicallyTekPunch(bool* Result);
	void Should_Damage_Actor(class AActor** Victim, bool* Result);
	void STATIC_Has_Line_Of_SightToActor(class AActor* Actor, bool* Result);
	void ArePunchChargeAnimsPlaying(bool cleanUpAnims, bool* Result);
	void PlayPunchAnimsByState(TEnumAsByte<E_TekGlovePunchState> State);
	void IsPlayerAboveGround(bool* Result);
	void AreTekPantsEquipped(bool* Result, class ABuff_TekArmor_Pants_C** tekPantsRef);
	float GetBuffPostprocessIntensity();
	void BPDeactivated(class AActor** ForInstigator);
	void Update_Local_Vars_by_State(TEnumAsByte<E_TekGlovePunchState> NewState);
	void GetPlayerCameraLocation(struct FVector* Location);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void RocketPunchEnd();
	void ResetOwningPlayerVariables();
	bool PreventJump();
	void NetSetTekPunchState(TEnumAsByte<E_TekGlovePunchState> newPunchState);
	void BuffTickServer(float* DeltaTime);
	void Client_SetTekPunchState(TEnumAsByte<E_TekGlovePunchState> NewState);
	float GetTimeToRocketPunchTarget(const struct FVector& TargetLocation);
	void CheckForTargetsWhileRocketPunching(bool* punchNow);
	void Set_AudioParams_and_Play(float Volume, float Pitch, bool PlaySound, class UAudioComponent** audio);
	void OnRep_CurrentPunchState();
	struct FVector GetRelativeCenterOfMass(class APrimalCharacter* Character);
	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void ScanForRocketFistTargets(float Range, bool* anyHit, struct FVector* HitLocation, class AActor** HitActor);
	void STATIC_AccurateSphereCheck(const struct FVector& EndLocation, float SphereRadius, bool IgnoreFriendlies, bool* HitPawnOrStructure);
	void STATIC_Spawn_Sound_at_Fist_Location(class USoundBase* SoundToSpawn, float VolumeMultiplier, float PitchMultiplier);
	void BuffTickClient(float* DeltaTime);
	void Get_Punch_Location(struct FVector* Location);
	void RocketPunchStart();
	void STATIC_Punch();
	void CanUseTekAbility(bool* bNotifyIfOutOfElement, bool* bResult);
	void SetCastedArmorPieceRef();
	void UserConstructionScript();
	void InpActEvt_Targeting_K2Node_InputActionEvent_118();
	void InpActEvt_Targeting_K2Node_InputActionEvent_117();
	void InpActEvt_AltFire_K2Node_InputActionEvent_116();
	void InpActEvt_AltFire_K2Node_InputActionEvent_115();
	void InpActEvt_Fire_K2Node_InputActionEvent_114();
	void InpActEvt_Fire_K2Node_InputActionEvent_113();
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_55();
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_54();
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_53();
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_52();
	void OnSuperPunch_Pressed();
	void OnSuperPunch_Released();
	void Server_SetPunchChargeState(TEnumAsByte<E_TekGlovePunchState> newPunchState);
	void ResetCanLandAfterDelay();
	void UpdateClientHasValidRocketPunchTarget(bool newHasTarget, class APrimalCharacter* newTargetPawn);
	void ResetPunchStateAfterDelay();
	void Sword_AltFirePressed();
	void Sword_AltFireReleased();
	void ExecuteUbergraph_Buff_TekArmor_Sword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
