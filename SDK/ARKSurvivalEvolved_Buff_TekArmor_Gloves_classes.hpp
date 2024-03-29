#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Gloves_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C
// 0x0376 (0x0EA0 - 0x0B2A)
class ABuff_TekArmor_Gloves_C : public ABuff_TekArmor_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B2A(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    TPV_ChargeFX;                                             // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChargeFX;                                             // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound_ChargedLoop;                                        // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound_Discharged;                                         // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound_Charged;                                            // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalItemArmor_TekGloves_C*                Ref_TekGloves;                                            // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_TekGlovePunchState>                  CurrentTekPunchState;                                     // 0x0B60(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B61(0x0003) MISSED OFFSET
	float                                              TakePercentDamageFromHittingStructs;                      // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiplyDamageByMeleeMultiplier;                         // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseChargeLevel2;                                         // 0x0B69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToCharge;                                           // 0x0B6A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0B6B(0x0005) MISSED OFFSET
	double                                             ChargeStartTime;                                          // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             cooldownStartTime;                                        // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchCooldown;                                            // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              punchRadius;                                              // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchDamage;                                              // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchImpulse;                                             // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchImpulseDragWeightLimit;                              // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchImpulse_current;                                     // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchImpulseDragWeightLimit_current;                      // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B9C(0x0004) MISSED OFFSET
	class UClass*                                      currentPunchDamageType;                                   // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              PunchIgnoreActors;                                        // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class APrimalCharacter*                            Ref_RocketPunchTarget;                                    // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              rocketPunchDistance_Max;                                  // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     currentRocketFistVelocity;                                // 0x0BC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RocketPunchDuration_Max;                                  // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rocketPunchDuration_current;                              // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             rocketPunchStartTime;                                     // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ChargingSound;                                            // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ChargedParticle;                                          // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ChargedSound_One;                                         // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ChargedSound_Two;                                         // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PunchImpactParticle;                                      // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PunchImpactSound;                                         // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ElementCost_Punch;                                        // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ElementCost_ToCharge;                                     // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ElementCost_ChargeLoop;                                   // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargingElementCostInterval;                              // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   GlovesTargetingCrosshairType;                             // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    currentGlovesTargetingCrosshair;                          // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PunchImpactGroundParticle;                                // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0C39(0x0003) MISSED OFFSET
	float                                              CrosshairSize;                                            // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FullyChargedPeriodicSound;                                // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PunchExplosionDamage;                                     // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchExplosionRadius;                                     // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PunchExplosionDamageType;                                 // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchExplosionImpulse;                                    // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0C5C(0x0004) MISSED OFFSET
	class USoundBase*                                  PunchChargeCancelSound;                                   // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              alreadyHitActorsArray;                                    // 0x0C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              punchAnimLength;                                          // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchTraceHalfSize;                                       // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TekPunch_FoliageDamageType;                               // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TekPunchCameraShake;                                      // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasValidTarget;                                          // 0x0C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0C91(0x0003) MISSED OFFSET
	struct FLinearColor                                HUD_NoPawnTargetColor;                                    // 0x0C94(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUD_ValidPawnTargetColor;                                 // 0x0CA4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0CB4(0x0004) MISSED OFFSET
	class USoundBase*                                  MidAirSound;                                              // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastChargeConsumeElementTime;                             // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTargetingPressed;                                        // 0x0CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_TekGlovePunchState>                  previousTekPunchState;                                    // 0x0CC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0CCA(0x0002) MISSED OFFSET
	float                                              playerWalkSpeed_Charging;                                 // 0x0CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeToCharge;                                             // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ElementCost_RocketPunch;                                  // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeCancel_TPV;                                    // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeCancel_FPV;                                    // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeStart_TPV_Ground;                              // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeStart_TPV_Air;                                 // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeStart_FPV;                                     // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_RocketPunch_TPV;                                     // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Punch_TPV_Ground;                                    // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Punch_TPV_Air;                                       // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Punch_FPV;                                           // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ElementCost_Charged;                                      // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              punchDuration;                                            // 0x0D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GloveFXSocketName_FPV;                                    // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GloveFXSocketName_TPV;                                    // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowAutoStart;                                          // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0D39(0x0007) MISSED OFFSET
	double                                             RocketPunchLastUpdateTime;                                // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldPunchNow;                                          // 0x0D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0D49(0x0003) MISSED OFFSET
	float                                              InstaPunchDistance;                                       // 0x0D4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RocketPunchTickCheckDistance;                             // 0x0D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundCheckDistance;                                      // 0x0D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChargedCameraShake;                                       // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meleeDamageMultiplierScale;                               // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAltFirePressed;                                          // 0x0D64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0D65(0x0003) MISSED OFFSET
	double                                             lastPunchTime;                                            // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchDurationMax;                                         // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFallZSpeed;                                            // 0x0D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastPunchedTime;                                          // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastRocketPunchedTime;                                    // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_CanUseTekAbility_bResult;                        // 0x0D88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0D89(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0D98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0D99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0D9A(0x0002) MISSED OFFSET
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x0D9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseTekAbility_bResult2;                       // 0x0DA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_TekGlovePunchState>                  K2Node_CustomEvent_newPunchState;                         // 0x0DA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0DA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0DA3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newHasTarget;                          // 0x0DA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0DA5(0x0003) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_newTargetPawn;                         // 0x0DA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x0DB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0DB1(0x0007) MISSED OFFSET
	class AWeapFists_C*                                K2Node_DynamicCast_AsWeapFists_C;                         // 0x0DB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0DC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0DC1(0x0007) MISSED OFFSET
	class AWeapFists_C*                                K2Node_DynamicCast_AsWeapFists_C2;                        // 0x0DC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0DD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0DD1(0x0007) MISSED OFFSET
	class AWeapFists_C*                                K2Node_DynamicCast_AsWeapFists_C3;                        // 0x0DD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0DE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0DE1(0x0007) MISSED OFFSET
	class AWeapFists_C*                                K2Node_DynamicCast_AsWeapFists_C4;                        // 0x0DE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0DF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0DF1(0x0007) MISSED OFFSET
	class AWeapFists_C*                                K2Node_DynamicCast_AsWeapFists_C5;                        // 0x0DF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0E00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x0E01(0x0007) MISSED OFFSET
	class AWeapFists_C*                                K2Node_DynamicCast_AsWeapFists_C6;                        // 0x0E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0E10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result;                      // 0x0E11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x0E12(0x0006) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef;                 // 0x0E18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result2;                     // 0x0E20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0E21(0x0007) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef2;                // 0x0E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result3;                     // 0x0E30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0E31(0x0007) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef3;                // 0x0E38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result4;                     // 0x0E40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0E41(0x0007) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef4;                // 0x0E48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetRef_OwningPlayer_player;                      // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWeapFists_C*                                K2Node_DynamicCast_AsWeapFists_C7;                        // 0x0E58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x0E60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0E61(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x6];                                       // 0x0E62(0x0006) MISSED OFFSET
	class AWeapFists_C*                                K2Node_DynamicCast_AsWeapFists_C8;                        // 0x0E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x0E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0E71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x0E72(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0E73(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0E74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasShield_ReturnValue;                           // 0x0E75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasShield_ReturnValue2;                          // 0x0E76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x0E77(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0E78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasShield_ReturnValue3;                          // 0x0E79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShieldActive_ReturnValue;                        // 0x0E7A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x5];                                       // 0x0E7B(0x0005) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_Get_Ref_Owning_PlayerController_controller;      // 0x0E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue;                     // 0x0E89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue2;                    // 0x0E8A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue3;                    // 0x0E8B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue4;                    // 0x0E8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0E8D(0x0003) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceMulti_NEW_ActorsToIgnore_RefProperty; // 0x0E90(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C");
		return ptr;
	}


	bool PreventBlockingWithShield();
	bool HasShield();
	bool ShieldActive();
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
	void Set_AudioParams_and_Play(float Volume, float Pitch, bool PlaySound, class UAudioComponent** Audio);
	void OnRep_CurrentPunchState();
	struct FVector GetRelativeCenterOfMass(class APrimalCharacter* Character);
	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void STATIC_ScanForRocketFistTargets(float Range, bool* anyHit, struct FVector* HitLocation, class APrimalCharacter** hitPawn);
	void AccurateSphereCheck(const struct FVector& EndLocation, float SphereRadius, bool IgnoreFriendlies, bool* HitPawnOrStructure);
	void STATIC_Spawn_Sound_at_Fist_Location(class USoundBase* SoundToSpawn, float VolumeMultiplier, float PitchMultiplier);
	void BuffTickClient(float* DeltaTime);
	void Get_Punch_Location(struct FVector* Location);
	void RocketPunchStart();
	void Punch();
	void CanUseTekAbility(bool* bNotifyIfOutOfElement, bool* bResult);
	void SetCastedArmorPieceRef();
	void UserConstructionScript();
	void InpActEvt_Targeting_K2Node_InputActionEvent_87();
	void InpActEvt_Targeting_K2Node_InputActionEvent_86();
	void InpActEvt_AltFire_K2Node_InputActionEvent_85();
	void InpActEvt_AltFire_K2Node_InputActionEvent_84();
	void InpActEvt_Fire_K2Node_InputActionEvent_83();
	void InpActEvt_Fire_K2Node_InputActionEvent_82();
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_38();
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_37();
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_36();
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_35();
	void OnSuperPunch_Pressed();
	void OnSuperPunch_Released();
	void Server_SetPunchChargeState(TEnumAsByte<E_TekGlovePunchState> newPunchState);
	void ResetCanLandAfterDelay();
	void UpdateClientHasValidRocketPunchTarget(bool newHasTarget, class APrimalCharacter* newTargetPawn);
	void ResetPunchStateAfterDelay();
	void Gloves_AltFirePressed();
	void Gloves_AltFireReleased();
	void ExecuteUbergraph_Buff_TekArmor_Gloves(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
