#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeaponRadioactiveLanternCharge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C
// 0x0438 (0x1208 - 0x0DD0)
class AWeaponRadioactiveLanternCharge_C : public AShooterWeapon_Placer
{
public:
	class UAudioComponent*                             BeamLoopingSound;                                         // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             LightLoopingSound;                                        // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Particles1P;                                              // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Particles3P;                                              // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight3P;                                              // 0x0DF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight1P;                                              // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightTurnOffTimeline_NewTrack_0_6631EE2148BDF2BE6962C58BD6943684;// 0x0E00(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightTurnOffTimeline__Direction_6631EE2148BDF2BE6962C58BD6943684;// 0x0E04(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E05(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightTurnOffTimeline;                                     // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightFlickerTimeline_lightIntensity_17CCB69141D83DA471AC4CA2FC44D811;// 0x0E10(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightFlickerTimeline__Direction_17CCB69141D83DA471AC4CA2FC44D811;// 0x0E14(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E15(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightFlickerTimeline;                                     // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenServerTicks;                                // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeBetweenServerTicks;                                // 0x0E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSTR_ChargeBeamInfo>                 beamTargets;                                              // 0x0E28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              actorsWithBeams;                                          // 0x0E38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              raySpawnInterpSpeed;                                      // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rayDespawnInterpSpeed;                                    // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               stopAllRays;                                              // 0x0E50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0E51(0x0003) MISSED OFFSET
	struct FVector                                     minRayOffset;                                             // 0x0E54(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     maxRayOffset;                                             // 0x0E60(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0E6C(0x0004) MISSED OFFSET
	class UParticleSystem*                             beamParticlesTemplate;                                    // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             endParticlesTemplate;                                     // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      chargeEmitterBuff;                                        // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 emitterBuff;                                              // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                maxNumBeams;                                              // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isReceiver;                                               // 0x0E94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E95(0x0003) MISSED OFFSET
	float                                              currentChargeAmount;                                      // 0x0E98(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              emitterRange;                                             // 0x0E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               emitterIsActive;                                          // 0x0EA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0EA1(0x0007) MISSED OFFSET
	class APrimalBuff*                                 chargeManagerBuff;                                        // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      chargeManagerBuffClass;                                   // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              chargeEmittedPerSecond;                                   // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFiring;                                                 // 0x0EBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               firstFire;                                                // 0x0EBD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0EBE(0x0002) MISSED OFFSET
	float                                              maxCameraShakeWhileTargeting;                             // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                maxTargetsForCameraShake;                                 // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxLightIntensity;                                        // 0x0EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ChargeColor;                                              // 0x0ECC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isFlickering;                                             // 0x0EDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0EDD(0x0003) MISSED OFFSET
	float                                              minLightIntensity;                                        // 0x0EE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fluctuationSpeed;                                         // 0x0EE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minFluctuationIntensity;                                  // 0x0EE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxFluctuationIntensity;                                  // 0x0EEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentFluctuationTime;                                   // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isFluctuating;                                            // 0x0EF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0EF5(0x0003) MISSED OFFSET
	float                                              maxFlickerIntensity;                                      // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               failedFindingBatteryInThisBurst;                          // 0x0EFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0EFD(0x0003) MISSED OFFSET
	int                                                minAmmoToRechargeFromBattery;                             // 0x0F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0F04(0x0004) MISSED OFFSET
	double                                             lastTimeFlickered;                                        // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ammoCountToStartFlicker;                                  // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              startingLightIntensity;                                   // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMinExposure;                                         // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMaxExposure;                                         // 0x0F1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMinIntensity;                                        // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lightMaxIntensity;                                        // 0x0F24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      stunBuffAoE;                                              // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 currentStunBuffAoE;                                       // 0x0F30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              baseChargePerBeamPerSecond;                               // 0x0F38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              accumulatedChargeFromBeams;                               // 0x0F3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimeConsumedChargeFromBeams;                          // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimePressedFire;                                      // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              classesThatUseChargeLogic;                                // 0x0F50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              classesDontConsumeBeamCharge;                             // 0x0F60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                numFreeBeams;                                             // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightLoopingSound_FadeOutDuration;                        // 0x0F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightLoopingSound_FadeInDuration;                         // 0x0F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0F7C(0x0004) MISSED OFFSET
	class USoundBase*                                  LightStartSound;                                          // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LightStopSound;                                           // 0x0F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeamLoopingSoundVolumeTarget;                             // 0x0F90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0F94(0x0004) MISSED OFFSET
	class USoundBase*                                  BeamStartSound;                                           // 0x0F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  BeamEndSound;                                             // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeamLoopingSound_VolumeInterpSpeed;                       // 0x0FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BeamLoopingSound_PitchMaxNumBeams;                        // 0x0FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeamLoopingSoundPitchTarget;                              // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BeamLoopingSound_PitchInterpSpeed;                        // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeamLoopingSound_PitchMin;                                // 0x0FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeamLoopingSound_PitchMax;                                // 0x0FBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0FC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType11;                              // 0x0FC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue5;                                    // 0x0FC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0FC3(0x0001) MISSED OFFSET
	float                                              K2Node_Event_fValue5;                                     // 0x0FC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_Event_dValue5;                                     // 0x0FC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_iValue4;                                     // 0x0FD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType10;                              // 0x0FD4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue4;                                    // 0x0FD5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0FD6(0x0002) MISSED OFFSET
	float                                              K2Node_Event_fValue4;                                     // 0x0FD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0FDC(0x0004) MISSED OFFSET
	double                                             K2Node_Event_dValue4;                                     // 0x0FE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_iVariable;                                   // 0x0FE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType9;                               // 0x0FEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0FED(0x0003) MISSED OFFSET
	double                                             K2Node_Event_dValue3;                                     // 0x0FF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType8;                               // 0x0FF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0FF9(0x0007) MISSED OFFSET
	double                                             K2Node_Event_dValue2;                                     // 0x1000(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType7;                               // 0x1008(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x1009(0x0003) MISSED OFFSET
	int                                                K2Node_Event_iValue3;                                     // 0x100C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType6;                               // 0x1010(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x1011(0x0003) MISSED OFFSET
	int                                                K2Node_Event_iValue2;                                     // 0x1014(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_actorAffected;                         // 0x1018(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1020(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1021(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x1022(0x0006) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_character;                             // 0x1028(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x1030(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x1038(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x1040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1048(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x1049(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x104C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x1050(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFiring_ReturnValue;                            // 0x1051(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x1052(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue2;                       // 0x1058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1060(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x1061(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType5;                               // 0x1062(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_multicast;                                   // 0x1063(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_fValue3;                                     // 0x1064(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_Event_dValue;                                      // 0x1068(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue3;                                    // 0x1070(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_triggerEvent;                                // 0x1071(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_multicastEvent;                              // 0x1072(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x1];                                       // 0x1073(0x0001) MISSED OFFSET
	int                                                K2Node_Event_iValue;                                      // 0x1074(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x1078(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x1079(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x107A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x5];                                       // 0x107B(0x0005) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x1080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue2;              // 0x1088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UChargeFunctions_FakeLibrary_C*              K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C;       // 0x1090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1098(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x1099(0x0007) MISSED OFFSET
	class UChargeFunctions_FakeLibrary_C*              K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C2;      // 0x10A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x10A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x10A9(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_Weapon_Create_Charge_Manager_Library_chargeManager;// 0x10B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FWeaponAnim                                 K2Node_MakeStruct_WeaponAnim;                             // 0x10B8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Multiply_IntInt_ReturnValue;                     // 0x10C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayWeaponAnimationEx_ReturnValue;               // 0x10CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Divide_IntInt_ReturnValue;                       // 0x10D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x10D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x10D5(0x0003) MISSED OFFSET
	int                                                CallFunc_Min_ReturnValue;                                 // 0x10D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x10DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x10DD(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_IntFloat_ReturnValue;                   // 0x10E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x10E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x10E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x10EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x10ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Update_MaterialsAndParticles_couldUpdateMaterial;// 0x10EE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x10EF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue3;              // 0x10F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType4;                         // 0x10F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBValue2;                              // 0x10F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x6];                                       // 0x10FA(0x0006) MISSED OFFSET
	class UChargeFunctions_FakeLibrary_C*              K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C3;      // 0x1100(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1108(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType3;                         // 0x1109(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x110A(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_fValue2;                               // 0x110C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ChargeManager_C*                       K2Node_DynamicCast_AsBuff_ChargeManager_C;                // 0x1110(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x1118(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType2;                         // 0x1119(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x2];                                       // 0x111A(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_fValue;                                // 0x111C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ChargeManager_C*                       K2Node_DynamicCast_AsBuff_ChargeManager_C2;               // 0x1120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x1128(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType4;                               // 0x1129(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue2;                                    // 0x112A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType3;                               // 0x112B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_fValue2;                                     // 0x112C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType;                          // 0x1130(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBValue;                               // 0x1131(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType2;                               // 0x1132(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue;                                     // 0x1133(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType;                                // 0x1134(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x1135(0x0003) MISSED OFFSET
	float                                              K2Node_Event_fValue;                                      // 0x1138(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x113C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x113D(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_playRate;                              // 0x1140(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x1144(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1145(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x1146(0x0002) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1148(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x114C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x114D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x114E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x114F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x1150(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1154(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_DegSin_ReturnValue;                              // 0x1158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x115C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1160(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x1164(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetLightMultiplier_lightMultiplier;              // 0x1168(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x116C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1170(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x1171(0x0007) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x1178(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x1180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x1188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x1190(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimNotify*                                 K2Node_Event_AnimNotifyObject;                            // 0x1198(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Montage_IsPlaying_ReturnValue;                   // 0x11A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x11A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x11A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue7;                  // 0x11A3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x11A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Update_MaterialsAndParticles_couldUpdateMaterial2;// 0x11A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x11A6(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x11A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue8;                  // 0x11B4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x11B5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x11B6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x1];                                       // 0x11B7(0x0001) MISSED OFFSET
	int                                                CallFunc_GetItemColorID_ReturnValue;                      // 0x11B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x11BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x11BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x11BE(0x0002) MISSED OFFSET
	struct FLinearColor                                CallFunc_StaticGetColorForItemColorID_ReturnValue;        // 0x11C0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_SelectColor_ReturnValue;                         // 0x11D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_LinearColorToVector_ReturnValue;            // 0x11E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x11EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x11F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x7];                                       // 0x11F9(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_Array_Find_ItemToFind_RefProperty;               // 0x1200(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponRadioactiveLanternCharge.WeaponRadioactiveLanternCharge_C");
		return ptr;
	}


	void GetNumBatteries(int* numBatteries);
	void Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue);
	void RemoveAllBeamsServer();
	void IsFreeBeamForActor(class AActor* forActor, bool* isFreeBeam);
	void BPPrefireAction();
	void RechargeFromMaxBattery(bool* couldRecharge);
	bool BPWeaponCanFire();
	void UpdateMaterial(class UMaterialInstanceDynamic* dynamicMaterial);
	void DestroyChargeBuff();
	int BPAdjustAmmoPerShot();
	void SetBeamIntensity(class UParticleSystemComponent* BeamComponent);
	bool BPSecondaryAction();
	void GetLightMultiplier(float* lightMultiplier);
	void BPWaitingForPlacement();
	void CheckIfFireStopped(bool* NewParam);
	void UpdateLightEffects();
	void Update_MaterialsAndParticles(bool* couldUpdateMaterial);
	void DisableFiringEffects();
	void InitializeFiringEffects();
	void DetectChupasAndTriggerBeams();
	void OnStopFiring();
	void STATIC_DestroyBeamForTarget(class APrimalCharacter* forCharacter);
	void DestroyBeamVisuals(const struct FSTR_ChargeBeamInfo& beamInfo);
	void ServerTick();
	void ClientTick();
	void Remove_All_BeamsClient();
	void ReceiveDestroyed();
	void TryAddNewBeam(class AActor* forActor);
	void StartUnequipEvent();
	void Should_Remove_Beam(const struct FSTR_ChargeBeamInfo& beamInfo, bool* shouldRemove);
	void Update_Impact_Particles(const struct FSTR_ChargeBeamInfo& beamInfo, int index);
	void SetEndPoints(class UParticleSystemComponent* beam, const struct FVector& EndPoint1, const struct FVector& endPoint2, const struct FVector& endPoint3);
	void ConnectBeamToTarget(const struct FSTR_ChargeBeamInfo& beamInfo, int index);
	void STATIC_CreateNewBeam(class AActor* ToActor);
	void ShouldRemoveBeamForTarget(class APrimalCharacter* Character, bool* shouldRemove);
	void RemoveBeamTarget_Server(class AActor* BeamTarget);
	void UpdateCharge(bool ShouldActivate);
	void EffectsDisableCheck();
	void BPFiredWeapon();
	void StartSecondaryActionEvent();
	void UserConstructionScript();
	void LightFlickerTimeline__FinishedFunc();
	void LightFlickerTimeline__UpdateFunc();
	void LightTurnOffTimeline__FinishedFunc();
	void LightTurnOffTimeline__UpdateFunc();
	void Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue);
	void Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable);
	void Interface_Check_for_Batteries_and_Update_Multicast();
	void Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue);
	void ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue);
	void ReceiveBeginPlay();
	void OnNewActorAffected_Multicast(class AActor* actorAffected);
	void DestroyBeamForTarget_Multicast(class APrimalCharacter* Character);
	void PlayLanternCameraShake();
	void CreateChargeManager();
	void Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue);
	void FiringBeamLogic();
	void OnStartFiring();
	void ChargeVariableEvent_Boolean(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void ChargeVariableEvent_Float(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void ChargeVariableEvent_Float_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void ChargeVariableEvent_Boolean_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void DoLightFlicker(float PlayRate);
	void InitialMaterialUpdate();
	void TurnOffLight();
	void OnStopFiring_Multicast();
	void CancelPlacement();
	void BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void InitialMeterAnim();
	void OnStartFiring_Multicast();
	void ExecuteUbergraph_WeaponRadioactiveLanternCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
