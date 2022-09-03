#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x03EE (0x0F18 - 0x0B2A)
class ABuff_TekArmor_Sword_C : public ABuff_TekArmor_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B2A(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    TPV_ChargeFX;                                             // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FPV_ChargeFX;                                             // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound_ChargedLoop;                                        // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound_Discharged;                                         // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Sound_Charged;                                            // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TekGlovePunchState>                  CurrentTekPunchState;                                     // 0x0B58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B59(0x0003) MISSED OFFSET
	float                                              TakePercentDamageFromHittingStructs;                      // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiplyDamageByMeleeMultiplier;                         // 0x0B60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseChargeLevel2;                                         // 0x0B61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToCharge;                                           // 0x0B62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0B63(0x0005) MISSED OFFSET
	double                                             ChargeStartTime;                                          // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             cooldownStartTime;                                        // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchCooldown;                                            // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              punchRadius;                                              // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchDamage;                                              // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchImpulse;                                             // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchImpulseDragWeightLimit;                              // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchImpulse_current;                                     // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchImpulseDragWeightLimit_current;                      // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B94(0x0004) MISSED OFFSET
	class UClass*                                      currentPunchDamageType;                                   // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              PunchIgnoreActors;                                        // 0x0BA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              rocketPunchDistance_Max;                                  // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     currentRocketFistVelocity;                                // 0x0BB4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RocketPunchDuration_Max;                                  // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rocketPunchDuration_current;                              // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             rocketPunchStartTime;                                     // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ChargingSound;                                            // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ChargedParticle;                                          // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ChargedSound_One;                                         // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ChargedSound_Two;                                         // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PunchImpactParticle;                                      // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PunchImpactSound;                                         // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ElementCost_Punch;                                        // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ElementCost_ChargeLoop;                                   // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargingElementCostInterval;                              // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0C0C(0x0004) MISSED OFFSET
	class UMaterial*                                   SwordTargetingCrosshairType;                              // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    currentSwordTargetingCrosshair;                           // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PunchImpactGroundParticle;                                // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0C29(0x0003) MISSED OFFSET
	float                                              CrosshairSize;                                            // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FullyChargedPeriodicSound;                                // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PunchExplosionDamage;                                     // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchExplosionRadius;                                     // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PunchExplosionDamageType;                                 // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchExplosionImpulse;                                    // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0C4C(0x0004) MISSED OFFSET
	class USoundBase*                                  PunchChargeCancelSound;                                   // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              alreadyHitActorsArray;                                    // 0x0C58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              punchAnimLength;                                          // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchTraceHalfSize;                                       // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TekPunch_FoliageDamageType;                               // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TekPunchCameraShake;                                      // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasValidTarget;                                          // 0x0C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0C81(0x0003) MISSED OFFSET
	struct FLinearColor                                HUD_NoPawnTargetColor;                                    // 0x0C84(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HUD_ValidPawnTargetColor;                                 // 0x0C94(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0CA4(0x0004) MISSED OFFSET
	class USoundBase*                                  MidAirSound;                                              // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             lastChargeConsumeElementTime;                             // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTargetingPressed;                                        // 0x0CB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_TekGlovePunchState>                  previousTekPunchState;                                    // 0x0CB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0CBA(0x0002) MISSED OFFSET
	float                                              playerWalkSpeed_Charging;                                 // 0x0CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeToCharge;                                             // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ElementCost_RocketPunch;                                  // 0x0CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeCancel_TPV;                                    // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeCancel_FPV;                                    // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeStart_TPV_Ground;                              // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeStart_TPV_Air;                                 // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_ChargeStart_FPV;                                     // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_RocketPunch_TPV;                                     // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Punch_TPV_Ground;                                    // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Punch_TPV_Air;                                       // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Punch_FPV;                                           // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ElementCost_Charged;                                      // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              punchDuration;                                            // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GloveFXSocketName_FPV;                                    // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GloveFXSocketName_TPV;                                    // 0x0D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowAutoStart;                                          // 0x0D28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0D29(0x0007) MISSED OFFSET
	double                                             RocketPunchLastUpdateTime;                                // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldPunchNow;                                          // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0D39(0x0003) MISSED OFFSET
	float                                              InstaPunchDistance;                                       // 0x0D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RocketPunchTickCheckDistance;                             // 0x0D40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundCheckDistance;                                      // 0x0D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChargedCameraShake;                                       // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              meleeDamageMultiplierScale;                               // 0x0D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAltFirePressed;                                          // 0x0D54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0D55(0x0003) MISSED OFFSET
	double                                             lastPunchTime;                                            // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              punchDurationMax;                                         // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0D64(0x0004) MISSED OFFSET
	class AWeapSword_Tek_C*                            Ref_TekSword;                                             // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      RefRocketPunchTargActor;                                  // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraStructureDamageMultiplier;                           // 0x0D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFallZSpeed;                                            // 0x0D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastPunchedTime;                                          // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastRocketPunchedTime;                                    // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInputActionFireHoldSecondary;                         // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInputActionAltFireHoldSecondary;                      // 0x0D91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseGamepadRightTriggerHoldSecondary;                     // 0x0D92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInputActionTargetingHoldSecondary;                    // 0x0D93(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseGamepadLeftTriggerHoldSecondary;                      // 0x0D94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0D95(0x0003) MISSED OFFSET
	float                                              HoldActionThreshold;                                      // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0D9C(0x0004) MISSED OFFSET
	struct UObject_FTransform                          OverrideFPVChargeVFXTransform;                            // 0x0DA0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_AllowTekPunch_Allow;                             // 0x0DD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0DD1(0x0003) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue;            // 0x0DD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed10;                            // 0x0DD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0DD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed9;                             // 0x0DDA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed8;                             // 0x0DDB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed7;                             // 0x0DDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed6;                             // 0x0DDD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0DDE(0x0002) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue2;           // 0x0DE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0DE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0DE5(0x0003) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue3;           // 0x0DE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x0DEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0DED(0x0003) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue4;           // 0x0DF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x0DF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0DF5(0x0003) MISSED OFFSET
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue5;           // 0x0DF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x0DFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseTekAbility_bResult;                        // 0x0DFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x0DFE(0x0002) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0E09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x0E0A(0x0002) MISSED OFFSET
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x0E0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseTekAbility_bResult2;                       // 0x0E10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_TekGlovePunchState>                  K2Node_CustomEvent_newPunchState;                         // 0x0E11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x0E12(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0E13(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x0E14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_newHasTarget;                          // 0x0E15(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x0E16(0x0002) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_newTargetPawn;                         // 0x0E18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x0E20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x0E21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x6];                                       // 0x0E22(0x0006) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C;                     // 0x0E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0E30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x0E31(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C2;                    // 0x0E38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0E40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0E41(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C3;                    // 0x0E48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0E50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0E51(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C4;                    // 0x0E58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0E60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x0E61(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C5;                    // 0x0E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x0E71(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C6;                    // 0x0E78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0E80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result;                      // 0x0E81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x6];                                       // 0x0E82(0x0006) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef;                 // 0x0E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result2;                     // 0x0E90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x0E91(0x0007) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef2;                // 0x0E98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result3;                     // 0x0EA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x0EA1(0x0007) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef3;                // 0x0EA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AreTekPantsEquipped_result4;                     // 0x0EB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x0EB1(0x0007) MISSED OFFSET
	class ABuff_TekArmor_Pants_C*                      CallFunc_AreTekPantsEquipped_tekPantsRef4;                // 0x0EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetRef_OwningPlayer_player;                      // 0x0EC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C7;                    // 0x0EC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x0ED0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x0ED1(0x0007) MISSED OFFSET
	class AWeapSword_Tek_C*                            K2Node_DynamicCast_AsWeapSword_Tek_C8;                    // 0x0ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x0EE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0EE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x0EE2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0EE3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0EE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasShield_ReturnValue;                           // 0x0EE5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasShield_ReturnValue2;                          // 0x0EE6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0EE7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShieldActive_ReturnValue;                        // 0x0EE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0EEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0EEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShieldActive_ReturnValue2;                       // 0x0EEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x0EED(0x0003) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_Get_Ref_Owning_PlayerController_controller;      // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x0EF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue;                     // 0x0EF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue2;                    // 0x0EFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue3;                    // 0x0EFB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlacingActive_ReturnValue4;                    // 0x0EFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed5;                             // 0x0EFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed4;                             // 0x0EFE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed3;                             // 0x0EFF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed2;                             // 0x0F00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bPressed;                              // 0x0F01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x6];                                       // 0x0F02(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceMulti_NEW_ActorsToIgnore_RefProperty; // 0x0F08(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Sword.Buff_TekArmor_Sword_C");
		return ptr;
	}


	void AllowTekPunch(bool* Allow);
	bool PreventBlockingWithShield();
	bool ShieldActive();
	bool HasShield();
	void GetRelatedTekArmorRef(class UPrimalItemArmor_Base_Tek_C** tekArmorRef);
	void Can_Decrease_Element_Ammo(int AmountToDecrease, bool IsForChargedState, bool* CanDecrease);
	void TryDecreaseElementAmmo(int AmountToDecrease, bool IsForChargedState);
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
	void InpActEvt_AltFire_K2Node_InputActionEvent_100();
	void InpActEvt_AltFire_K2Node_InputActionEvent_99();
	void InpActEvt_Fire_K2Node_InputActionEvent_98();
	void InpActEvt_Fire_K2Node_InputActionEvent_97();
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_44();
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_43();
	void InpActEvt_Targeting_K2Node_InputActionEvent_96();
	void InpActEvt_Targeting_K2Node_InputActionEvent_95();
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_42();
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_41();
	void Proxy_Gamepad_Left_Trigger_Hold(bool bPressed);
	void Proxy_InputAction_Targeting_Hold(bool bPressed);
	void Proxy_InputAction_Fire_Hold(bool bPressed);
	void Proxy_Gamepad_Right_Trigger_Hold(bool bPressed);
	void Proxy_InputAction_AltFire_Hold(bool bPressed);
	void Proxy_Fire_HoldTimer();
	void Proxy_Targeting_HoldTimer();
	void Proxy_AltFire_HoldTimer();
	void Proxy_LeftTrigger_HoldTimer();
	void Proxy_RightTrigger_HoldTimer();
	void OnSuperPunch_Pressed();
	void OnSuperPunch_Released();
	void Server_SetPunchChargeState(TEnumAsByte<E_TekGlovePunchState> newPunchState);
	void ResetCanLandAfterDelay();
	void UpdateClientHasValidRocketPunchTarget(bool newHasTarget, class APrimalCharacter* newTargetPawn);
	void ResetPunchStateAfterDelay();
	void Sword_AltFirePressed();
	void Sword_AltFireReleased();
	void Proxy_InputAction_Fire(bool bPressed);
	void Proxy_Gamepad_Right_Trigger(bool bPressed);
	void Proxy_InputAction_AltFire(bool bPressed);
	void Proxy_InputAction_Targeting(bool bPressed);
	void Proxy_Gamepad_Left_Trigger(bool bPressed);
	void Skill_SuperPunch_Pressed();
	void Skill_SuperPunch_Released();
	void Skill_SuperPunch_Mod_Released();
	void Skill_SuperPunch_Mod_Pressed();
	void ExecuteUbergraph_Buff_TekArmor_Sword(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
