#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternPet_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LanternPet_Character_BP.LanternPet_Character_BP_C
// 0x0330 (0x25B8 - 0x2288)
class ALanternPet_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    DetectDinos;                                              // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    DetectPlayers;                                            // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OnParticle;                                               // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IsChargingParticle;                                       // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        ChargeLight;                                              // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minLightIntensity;                                        // 0x22B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLightIntensity;                                        // 0x22B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightInterpolationTime;                                   // 0x22B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IsReceivingChargeThreshold;                               // 0x22BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ChargeReceiveMontage;                                     // 0x22C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ChargeReceiveMountedMontage;                              // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ChargeFinishedMontage;                                    // 0x22D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ChargeFinishedMountedMontage;                             // 0x22D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastChargePercentage;                                     // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeThresholdPercentage;                                // 0x22E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             TimeOfLastTimerTick;                                      // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FemalePetMontage;                                         // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MalePetMontage;                                           // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             ClientLastTimeOfTimerTick;                                // 0x2300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoChargeActive;                                        // 0x2308(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2309(0x0003) MISSED OFFSET
	float                                              PassiveChargeToGainPerSecond;                             // 0x230C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastTimePlayedRecievedChargeAnim;                         // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimePlayedRecievedMaxChargeAnim;                      // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanPlayFullChargeAnim;                                   // 0x2320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2321(0x0007) MISSED OFFSET
	double                                             LastTimeRecievedCharge;                                   // 0x2328(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CooldownTimeOnChargeAnims;                                // 0x2330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeCanPlayRecieveChargeAnimSinceLastRecievingCharge;     // 0x2334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanPlayRecChargeAnim;                                    // 0x2338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2339(0x0007) MISSED OFFSET
	class UParticleSystem*                             IsChargingTemplate;                                       // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PettedMontage;                                            // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             OnParticleTemplate;                                       // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tempIntensityPercent;                                     // 0x2358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x235C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x235D(0x0003) MISSED OFFSET
	struct FLinearColor                                ChargeColor;                                              // 0x2360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseChargeColor;                                          // 0x2370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2371(0x0003) MISSED OFFSET
	float                                              DelayPetAnim;                                             // 0x2374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxEmissive;                                              // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinChargeToBeMaxLightIntensity;                           // 0x237C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minEmissive;                                              // 0x2380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EmissiveUseChargeColor;                                   // 0x2384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2385(0x0003) MISSED OFFSET
	class APrimalCharacter*                            MountedCharcterRef;                                       // 0x2388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                EmoteMontageOn;                                           // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeRegenMultiplier;                                    // 0x2398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseChargeRadius;                                         // 0x239C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedExtraMaxDamageAsPercent;                          // 0x23A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPossibleRange;                                         // 0x23A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isReceiver;                                               // 0x23A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x23A9(0x0003) MISSED OFFSET
	float                                              currentChargeAmount;                                      // 0x23AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              emitterRange;                                             // 0x23B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               emitterIsActive;                                          // 0x23B4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x23B5(0x0003) MISSED OFFSET
	float                                              chargeEmittedPerSecond;                                   // 0x23B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              emitterChargeConsumedPerSecond;                           // 0x23BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 chargeManagerBuff;                                        // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      chargeManagerBuffClass;                                   // 0x23C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FinishedChargingTemplate;                                 // 0x23D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              chargeAddedToBatteryPerSecond;                            // 0x23D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentChargeLossPerSecond;                               // 0x23DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PettedMontageTurnOff;                                     // 0x23E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EmoteMontageOff;                                          // 0x23E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Light_Min_Exposure;                                       // 0x23F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Light_Min_Intensity;                                      // 0x23F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Light_Max_Exposure;                                       // 0x23F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Light_Max_Intensity;                                      // 0x23FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnTamedPassiveChargeToGainPerSecond;                      // 0x2400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TamedEmitterChargeConsumed;                               // 0x2404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UntamedEmitterChargeConsumed;                             // 0x2408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivateAtMaxCharge;                                // 0x240C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bWarnOfPlayers;                                           // 0x240D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bWarnOfHighLevelDinos;                                    // 0x240E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x240F(0x0001) MISSED OFFSET
	float                                              SearchPlayerRadius;                                       // 0x2410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFoundEnemyPlayers;                                       // 0x2414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFoundHighLevelDinos;                                     // 0x2415(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x2416(0x0002) MISSED OFFSET
	float                                              SearchWildDinoRadius;                                     // 0x2418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x241C(0x0004) MISSED OFFSET
	class USoundCue*                                   AlertPlayerSound;                                         // 0x2420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cachedDifficultyValue;                                    // 0x2428(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentMaxCharge;                                         // 0x242C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEmoteForcedLightOffWhileMounted;                         // 0x2430(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideChargeFloatingHUD;                                   // 0x2431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2432(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x2433(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType10;                              // 0x2434(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2435(0x0003) MISSED OFFSET
	float                                              K2Node_Event_fValue5;                                     // 0x2438(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType9;                               // 0x243C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x243D(0x0003) MISSED OFFSET
	double                                             K2Node_Event_dValue5;                                     // 0x2440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType8;                               // 0x2448(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue4;                                    // 0x2449(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType7;                               // 0x244A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x244B(0x0001) MISSED OFFSET
	float                                              K2Node_Event_fValue4;                                     // 0x244C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType6;                               // 0x2450(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x2451(0x0007) MISSED OFFSET
	double                                             K2Node_Event_dValue4;                                     // 0x2458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType5;                               // 0x2460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2461(0x0003) MISSED OFFSET
	int                                                K2Node_Event_iValue4;                                     // 0x2464(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType4;                               // 0x2468(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x2469(0x0003) MISSED OFFSET
	int                                                K2Node_Event_iValue3;                                     // 0x246C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsActive_ReturnValue;                            // 0x2470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsActive_ReturnValue2;                           // 0x2471(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2472(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x2473(0x0001) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2474(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType11;                              // 0x2478(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue5;                                    // 0x2479(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x247A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x247B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x247C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x247D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x247E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x247F(0x0001) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x2480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ChargeEmitter_C*                       K2Node_DynamicCast_AsBuff_ChargeEmitter_C;                // 0x2488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x2491(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_LinearColorToVector_ReturnValue;            // 0x24A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType3;                               // 0x24AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_multicast;                                   // 0x24AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x24AE(0x0002) MISSED OFFSET
	float                                              K2Node_Event_fValue3;                                     // 0x24B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x24B4(0x0004) MISSED OFFSET
	double                                             K2Node_Event_dValue3;                                     // 0x24B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue3;                                    // 0x24C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_triggerEvent;                                // 0x24C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_multicastEvent;                              // 0x24C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x24C3(0x0001) MISSED OFFSET
	int                                                K2Node_Event_iValue2;                                     // 0x24C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x24C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x24C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue2;              // 0x24CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue3;              // 0x24CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue4;              // 0x24CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue5;              // 0x24CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue6;              // 0x24CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x24CF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x24D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType2;                               // 0x24D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue2;                                    // 0x24D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x1];                                       // 0x24D3(0x0001) MISSED OFFSET
	float                                              K2Node_Event_fValue2;                                     // 0x24D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_Event_dValue2;                                     // 0x24D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_iValue;                                      // 0x24E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType;                                // 0x24E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue;                                     // 0x24E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x24E6(0x0002) MISSED OFFSET
	float                                              K2Node_Event_fValue;                                      // 0x24E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x24EC(0x0004) MISSED OFFSET
	double                                             K2Node_Event_dValue;                                      // 0x24F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_iVariable;                                   // 0x24F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType2;                         // 0x24FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBValue2;                              // 0x24FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x24FE(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_fValue2;                               // 0x2500(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x2504(0x0004) MISSED OFFSET
	double                                             K2Node_CustomEvent_dValue2;                               // 0x2508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType;                          // 0x2510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBValue;                               // 0x2511(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x2];                                       // 0x2512(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_fValue;                                // 0x2514(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_CustomEvent_dValue;                                // 0x2518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ChargeEmitter_C*                       K2Node_DynamicCast_AsBuff_ChargeEmitter_C2;               // 0x2520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2528(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x2529(0x0007) MISSED OFFSET
	class ABuff_ChargeManager_C*                       K2Node_DynamicCast_AsBuff_ChargeManager_C;                // 0x2530(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2538(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x2539(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x2540(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2548(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x2549(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x2550(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UChargeFunctions_FakeLibrary_C*              K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C;       // 0x2558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2560(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x2561(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x2];                                       // 0x2562(0x0002) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x2564(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2568(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x2569(0x0003) MISSED OFFSET
	float                                              CallFunc_BPGetMaxStatusValue_ReturnValue;                 // 0x256C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2570(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x2574(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2575(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2];                                       // 0x2576(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x2578(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x257C(0x0004) MISSED OFFSET
	class ABuff_ChargeManager_C*                       K2Node_DynamicCast_AsBuff_ChargeManager_C2;               // 0x2580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2589(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x258A(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x258C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x259C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x259D(0x0003) MISSED OFFSET
	float                                              CallFunc_BPGetMaxStatusValue_ReturnValue2;                // 0x25A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x25A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x25A8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LanternPet_Character_BP.LanternPet_Character_BP_C");
		return ptr;
	}


	void GetNumBatteries(int* numBatteries);
	void Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue);
	void UpdateMaxCharge();
	void UpdateFoundHighLevelDinos();
	void UpdateFoundEnemyPlayers();
	void GetPassiveChargeGain(float* chargeGain);
	void UnstasisLogic();
	void BPTriggerStasisEvent();
	void DestroyChargeBuff();
	void BPSetupTamed(bool* bWasJustTamed);
	void CreateChargeManager();
	void UpdateChargeRadius();
	void GetActualRadius(float* Radius);
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void BPOnClearMountedDino();
	void BPNotifyLevelUp(int* ExtraCharacterLevel);
	void InitializeChargeBuff();
	void BPOnSetMountedDino();
	void AnimNotifyMountedDino();
	void SetLightColor();
	void OnLaunched(struct FVector* LaunchVelocity, bool* bXYOverride, bool* bZOverride);
	void Can_Generate_Charge_OverTime(bool* CanCharge);
	void CanPlaySpecialAnim(bool* CanPlay);
	void Init();
	void AutoChargeNotify();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void OnRep_bAutoChargeActive();
	void BPTimerNonDedicated();
	void OnUpdateMountedDinoMeshHiding(bool* bshouldBeVisible);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void Get_Charge_Receive_Montage(class UAnimMontage** Montage);
	void GetChargeFinishedMontage(class UAnimMontage** Montage);
	void Update_ChargeAnimation();
	void BPTimerServer();
	void UpdateLightIntensity(float DeltaTime, float* Alpha, float* Emmissive);
	void UserConstructionScript();
	void Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue);
	void ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue);
	void NetUpdateCharge();
	void BPUnstasis();
	void NetRestartParticles();
	void PlayPetAnimAfterDelay();
	void AnimNotify_FinishParticle();
	void Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue);
	void Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue);
	void Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable);
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue);
	void ChargeVariableEvent_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue);
	void CheckForBatteriesAndUpdate_Multicast();
	void Interface_Check_for_Batteries_and_Update_Multicast();
	void ReceiveBeginPlay();
	void OnDied_Event(class APrimalCharacter* DiedCharacter);
	void RandomizeUntamedStart();
	void CreateChargeBuff_Multicast();
	void CreateChargeBuff();
	void DestroyChargeBuff_Multicast();
	void ExecuteUbergraph_LanternPet_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
