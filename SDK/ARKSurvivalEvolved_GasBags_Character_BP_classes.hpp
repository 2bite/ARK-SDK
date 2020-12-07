#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GasBags_Character_BP.GasBags_Character_BP_C
// 0x0EF4 (0x307C - 0x2188)
class AGasBags_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UAudioComponent*                             FloatingSound;                                            // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             InhaleSound;                                              // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    OutgassingParticles;                                      // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FloatingParticles_Down;                                   // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FloatingParticles_W;                                      // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FloatingParticles_E;                                      // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FloatingParticles_S;                                      // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FloatingParticles_N;                                      // 0x21C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           AttachCheckCapsule;                                       // 0x21C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             FloatPushDirectionIndicator;                              // 0x21D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            ExhaleEffectArea;                                         // 0x21D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    InhaleParticles;                                          // 0x21E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_GasBag_C*   DinoCharacterStatus_BP_GasBag_C1;                         // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugInflation;                                           // 0x21F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x21F1(0x0003) MISSED OFFSET
	float                                              GasToOxygenRatio;                                         // 0x21F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaselineGasAmount;                                        // 0x21F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InflationTime;                                            // 0x21FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientInflationInterpSpeed;                               // 0x2200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InflationStaminaPerSecondCost;                            // 0x2204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseMaxFloatingVelocity;                                  // 0x2208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LaunchInitialGasCostPercent;                              // 0x220C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LaunchImpulse;                                            // 0x2210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExhaleAttackImpulse;                                      // 0x2214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LaunchFromWaterImpulseMultiplier;                         // 0x2218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampLaunchVelocity;                                      // 0x221C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LaunchStaminaCost;                                        // 0x2220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingAirControlPower;                                  // 0x2224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GasLossPerSecondWhileFloating;                            // 0x2228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GasLossPerSecondWhilePushing;                             // 0x222C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GravityZScaleRange;                                       // 0x2230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InflationAmount;                                          // 0x2238(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Client_InflationAmount;                                   // 0x223C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 InflationHUDElement;                                      // 0x2240(0x00F8) (Edit, BlueprintVisible)
	struct FHUDElement                                 GravityHUDElement;                                        // 0x2338(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsInflating;                                              // 0x2430(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFloating;                                               // 0x2431(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttached;                                               // 0x2432(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x2433(0x0005) MISSED OFFSET
	class UClass*                                      ExhaleDebuffClass;                                        // 0x2438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ServerCurrentFloatDirection;                              // 0x2440(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x244C(0x0004) MISSED OFFSET
	double                                             ServerLastSetFloatDirection;                              // 0x2450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExhaleStaminaCostMax;                                     // 0x2458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExhaleAttackCooldown_Player;                              // 0x245C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExhaleAttackCooldown_AI_Wild;                             // 0x2460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2464(0x0004) MISSED OFFSET
	double                                             LastExhaleAttackTime;                                     // 0x2468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExhaleAttackCooldown_AI_Tamed;                            // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClimbingCustomMovementMode;                               // 0x2474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2475(0x0003) MISSED OFFSET
	struct FVector                                     AttachLocation;                                           // 0x2478(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AttachRotation;                                           // 0x2484(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    AttachRotationDesired;                                    // 0x2490(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x249C(0x0004) MISSED OFFSET
	double                                             AttachedTime;                                             // 0x24A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanAttachToWalls;                                         // 0x24A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugAttaching;                                           // 0x24A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x24AA(0x0002) MISSED OFFSET
	float                                              FloatingAirControlPower_Current;                          // 0x24AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 FloatingAirControlHUDElement;                             // 0x24B0(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              StaminaLossPerSecondWhilePushing;                         // 0x25A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InflationScalingTemperatureRange;                         // 0x25AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InflationScalingMultiplierRange;                          // 0x25B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x25BC(0x0004) MISSED OFFSET
	struct FHUDElement                                 InflationMultiplierHUDElement;                            // 0x25C0(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              InflationEnvironmentMultiplier;                           // 0x26B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x26BC(0x0004) MISSED OFFSET
	TArray<struct FVector>                             LastFloatingVelocity;                                     // 0x26C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastFloatingVelocityRecordTime;                           // 0x26D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   FallImpactVelocityRange;                                  // 0x26D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallImpactDamageMaxPercent;                               // 0x26E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x26E4(0x0004) MISSED OFFSET
	class UClass*                                      LandingFallDamageType;                                    // 0x26E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 InflationArtHUDElement;                                   // 0x26F0(0x00F8) (Edit, BlueprintVisible)
	float                                              IncomingInflationDamageRatio;                             // 0x27E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlAccelUp;                                        // 0x27EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirControlAccelDown;                                      // 0x27F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x27F4(0x0004) MISSED OFFSET
	struct FHUDElement                                 DebugHUDElementLabel;                                     // 0x27F8(0x00F8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InfiniteGas;                                              // 0x28F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x28F1(0x0003) MISSED OFFSET
	struct FVector                                     FloatDirection_Client;                                    // 0x28F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastRandomImpulseTime;                                    // 0x2900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextRandomImpulseInterval;                                // 0x2908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x290C(0x0004) MISSED OFFSET
	double                                             FloatingStartTime;                                        // 0x2910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExtraRandomImpulse_Current;                               // 0x2918(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExtraRandomImpulse_AnimValue;                             // 0x2924(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               FloatingVFXSocketNames;                                   // 0x2930(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             HardLandingVFX;                                           // 0x2940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             LaunchVFX;                                                // 0x2948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraInterpSpeed_Normal;                              // 0x2950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TPVCameraInterpSpeed_Floating;                            // 0x2954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomImpulseIntervalRange;                               // 0x2958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomImpulseVerticalStrengthRange;                       // 0x2960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RandomImpulseHorizStrengthRange;                          // 0x2968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastTimeReceivedDamage;                                   // 0x2970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FloatingDamageCheckHeight;                                // 0x2978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingDamageCheckTime;                                  // 0x297C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FloatingHurtAnim;                                         // 0x2980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FloatingLandingAnim;                                      // 0x2988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             InflationDamageEffect;                                    // 0x2990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               DamageVFXSocketNames;                                     // 0x2998(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstanceDynamic*                    GasBagsDynamicMaterialBody;                               // 0x29A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GasBagsDynamicMaterialFur;                                // 0x29B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TitanModeEasterEggEnabled;                                // 0x29B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x29B9(0x0003) MISSED OFFSET
	float                                              InhaleSoundFadeTime;                                      // 0x29BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingSoundFadeTime;                                    // 0x29C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingSoundNormalVolume;                                // 0x29C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingSoundPushingVolume;                               // 0x29C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x29CC(0x0004) MISSED OFFSET
	class USoundCue*                                   LaunchSoundCue;                                           // 0x29D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x29D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x29D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x29DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x29DB(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetActorForwardVector_ReturnValue;               // 0x29DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Direction2;                            // 0x29E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x29F4(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x29F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2A00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Direction;                             // 0x2A0C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Duration;                              // 0x2A18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromX_ReturnValue;                        // 0x2A1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2A28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x2A2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2A2D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x2A2E(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Vel;                                   // 0x2A30(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Attached;                              // 0x2A3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x2A3D(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x2A40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x2A4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2A58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x2A59(0x0007) MISSED OFFSET
	class UShooterCharacterMovement*                   K2Node_DynamicCast_AsShooterCharacterMovement;            // 0x2A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2A68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x2A69(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2A70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsCooldownComplete_ReturnValue;                  // 0x2A78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2A79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x2A7A(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2A7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x2A88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x2A94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2AA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2AA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x2AA5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x2AA6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x2AA7(0x0001) MISSED OFFSET
	float                                              K2Node_CustomEvent_Val2;                                  // 0x2AA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x2AAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x2AAD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x2AAE(0x0002) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x2AB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x2AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Val;                                   // 0x2AB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x2ABC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x2AC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x2AC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_LandingForcePercent;                   // 0x2AC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x2ACC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x2ACD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2ACE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0x2ACF(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x2AD0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x2ADC(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2AE8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_CustomEvent_MessageType;                           // 0x2AF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x2AF5(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_DisplayTime;                           // 0x2AF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsSingleton;                           // 0x2AFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x2AFD(0x0003) MISSED OFFSET
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit;                           // 0x2B00(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue;                      // 0x2B88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x2B89(0x0007) MISSED OFFSET
	class FString                                      K2Node_Select_ReturnValue;                                // 0x2B90(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x2BA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x2BA1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x2BA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x2BB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x2BBC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x2BC8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x2BD4(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x2BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x2BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x2BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x2BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x2BF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x2BFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x2BFD(0x0003) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromZ_ReturnValue;                        // 0x2C08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x2C14(0x0004) MISSED OFFSET
	class APlayerController*                           K2Node_DynamicCast_AsPlayerController;                    // 0x2C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2C20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x2C21(0x0003) MISSED OFFSET
	struct FColor                                      K2Node_MakeStruct_Color;                                  // 0x2C24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AHUD*                                        CallFunc_GetHUD_ReturnValue;                              // 0x2C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 K2Node_DynamicCast_AsShooterHUD;                          // 0x2C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x2C39(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_RandomImpulse;                         // 0x2C3C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue;             // 0x2C48(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentLocation_ReturnValue;             // 0x2C54(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2C60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x2C6C(0x0004) MISSED OFFSET
	struct FHitResult                                  CallFunc_CapsuleSweepFast_OutHit;                         // 0x2C70(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_CapsuleSweepFast_ReturnValue;                    // 0x2CF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x7];                                       // 0x2CF9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Location2;                        // 0x2D08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal2;                          // 0x2D14(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint2;                     // 0x2D20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal2;                    // 0x2D2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat2;                         // 0x2D38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor2;                        // 0x2D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent2;                    // 0x2D48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName2;                     // 0x2D50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem2;                         // 0x2D58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit2;                     // 0x2D5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x2D5D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location3;                        // 0x2D60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal3;                          // 0x2D6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint3;                     // 0x2D78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal3;                    // 0x2D84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat3;                         // 0x2D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor3;                        // 0x2D98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent3;                    // 0x2DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName3;                     // 0x2DA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem3;                         // 0x2DB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit3;                     // 0x2DB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x2DB5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorVector_ReturnValue;               // 0x2DB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x2DC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x2DC5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x2DC8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromYZ_ReturnValue;                       // 0x2DD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x2DE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x2DE1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2DE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x2DF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x2DF1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x2DF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x2E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_VTraceSingleBP_OutHit2;                          // 0x2E08(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_VTraceSingleBP_ReturnValue2;                     // 0x2E90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x2E91(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x2E94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Location4;                        // 0x2EA0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal4;                          // 0x2EAC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint4;                     // 0x2EB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal4;                    // 0x2EC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat4;                         // 0x2ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor4;                        // 0x2ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent4;                    // 0x2EE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName4;                     // 0x2EE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem4;                         // 0x2EF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit4;                     // 0x2EF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AllowedToInflate_ReturnValue;                    // 0x2EF5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x2EF6(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x2EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Velocity;                              // 0x2F00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_InflationDamage;                       // 0x2F0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamageCauser;                          // 0x2F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsPointDamage;                         // 0x2F18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x2F19(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_PointDamageNormal;                     // 0x2F1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x2F28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2F34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDmgDirectionHelper_Dir;                       // 0x2F40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetActorUpVector_ReturnValue;                    // 0x2F4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x2F58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x2F64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRotFromX_ReturnValue2;                       // 0x2F70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode3;            // 0x2F7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x2F7D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x2F80(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x2F8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x2F8D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x2F90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x2F9C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<float>                                      CallFunc_FindSocketClosestToDirection_DotProducts;        // 0x2FA8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       CallFunc_FindSocketClosestToDirection_ReturnValue;        // 0x2FB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue;                  // 0x2FC0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x2FF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x2FF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x3004(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x3010(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x301C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_NameToString_ReturnValue;                   // 0x3020(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x3030(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue4;                   // 0x303C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue4;               // 0x3048(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x3054(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x3058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue5;                   // 0x3060(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x306C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x306D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue6;                   // 0x3070(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GasBags_Character_BP.GasBags_Character_BP_C");
		return ptr;
	}


	void ModifyInflationValue(float Delta, bool DeltaIsPercent, bool Subtract, float* NewInflationPercent);
	void GetInflationValue(float* Value, float* Percent);
	void BPCharacterUnsleeped();
	bool BP_ForceAllowMountedWeapon(class UClass** WeaponTemplate);
	void BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath);
	void BPCharacterSleeped();
	void GetCurrentFloatingForceDirection(struct FVector* Dir);
	bool IsInhaleSocketUnderwater();
	void OnJumped();
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	void GetDmgDirectionHelper(class AActor* DmgCauser, bool IsPointDmg, const struct FVector& DamageDir, struct FVector* Dir);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	class UAnimMontage* BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent);
	bool AllowedToInflate();
	void TrySubtractStamina(float amount, bool FailIfNotEnough, bool* Success, float* RemainingStamina);
	float GetCurrentExhaleStaminaCost();
	void STATIC_RawDamageToInflationDamage(float RawDamageAmount, bool IsFallDamage, float* HealthDamage, float* InflationDamage);
	void GetFloatingVFX(const struct FName& SocketName, class UParticleSystemComponent** Comp);
	void NonDediTickFloatingVFX(float DeltaTime);
	void OnRep_IsFloating();
	void ServerTickRandomImpulses(bool* IsActive, struct FVector* Impulse);
	TArray<struct FBlueprintVisualLogEntry> STATIC_BPGrabDebugSnapshot();
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void BPCheckJumpInput(bool* bUseCustomErrorMessage, class FString* ErrorMessageToDisplay);
	bool CanJumpInternal();
	void ClampFloatingVelocity(const struct FVector& DesiredVelocity, struct FVector* ClampedVelocity);
	void BPTimerServer();
	void GetEnvironmentData(float* Temperature);
	bool BPPreventStasis();
	void GetExhaleCooldown(double* Clock, float* Duration);
	bool STATIC_BPPreventFallDamage(float* FallDamageAmount, struct FHitResult* HitResult);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void GetMaxInflation(bool GetBaseValue, float* MaxInflationAmount);
	void BPGetOverrideCameraInterpSpeed(float* DefaultTPVCameraSpeedInterpolationMultiplier, float* DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
	void GetFloatingForceDirection(struct FVector* Direction);
	void ReceiveBeginPlay();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void LaunchAbilityFinish();
	void DoLaunchAbility(const struct FVector& Direction, bool* Success);
	float BPGetGravityZScale();
	void ExhaleAttackFinish();
	void Get_Current_Aim_Direction(float VerticalAngleOffset, struct FVector* AimDirection);
	void DoExhaleAttack(const struct FVector& Direction);
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	bool BPHandleOnStopTargeting();
	void StopInflating();
	void StartInflating();
	void OnRep_IsInflating();
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	float STATIC_BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void Get_Inflation(bool SmoothedValues, float* Value, float* Percent);
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ServerRequestStopInflating();
	void ServerRequestStartInflating();
	void ServerUpdateFloatDirection(const struct FVector& Direction);
	void MultiUpdateFloatingDirection(const struct FVector& Direction, float Duration);
	void MultiUpdateVelocity(const struct FVector& vel);
	void ServerRequestAttachment();
	void MultiUpdateAttachState(bool Attached, const struct FVector& Location, const struct FRotator& Rotation);
	void ServerRequestDetach();
	void ClientUpdateFloatingAirControlValue(float val);
	void ClientUpdateInflationMultiplier(float val);
	void MultiOnHardLanding(float LandingForcePercent);
	void ClientShowErrorMessage(unsigned char MessageType, float DisplayTime, bool IsSingleton);
	void MultiNotifyRandomImpulse(const struct FVector& RandomImpulse);
	void MultiOnLaunched();
	void MultiExhaleImpulse(const struct FVector& Velocity);
	void MultiNotifyInflationDamage(float InflationDamage, class AActor* DamageCauser, bool IsPointDamage, const struct FVector& PointDamageNormal);
	void ExecuteUbergraph_GasBags_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
