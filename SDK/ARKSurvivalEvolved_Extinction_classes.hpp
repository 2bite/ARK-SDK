#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Extinction_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Extinction.Extinction_C
// 0x10A8 (0x1518 - 0x0470)
class AExtinction_C : public ALevelScriptActor
{
public:
	class UParticleSystem*                             RainVFXTemplate;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LastRainVFX;                                              // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCurrentlyRaining;                                       // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Rain_Particles;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInSnow;                                                  // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRaining;                                               // 0x0491(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSandStorm;                                             // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // 0x0493(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInCave;                                                  // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRiverWater;                                            // 0x0495(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0496(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    River_Particles;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Underwater_Particles;                                     // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSuperHeat;                                             // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayerIndoors;                                         // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x04AA(0x0006) MISSED OFFSET
	TArray<float>                                      Weather_Weights_Day___Proto;                              // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Weather_Weights_Night___Proto;                            // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      INT_Weather_Weights___Proto;                              // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bWeatherEnabled;                                          // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	int                                                Next_Weather___Proto;                                     // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Particle_Location;                                        // 0x04E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Snow_Fall;                                                // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultWaterLine;                                         // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	class UParticleSystem*                             WaterVFXTemplate;                                         // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBiomeType_Enum>                       CurrentBiome;                                             // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	float                                              HeatWaveStrength;                                         // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatWaveMinTemp;                                          // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatWaveMaxTemp;                                          // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColdWaveMinTemp;                                          // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ColdWaveMaxTemp;                                          // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SunlightSnowMaxIntensity;                                 // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkylightSnowMaxIntensity;                                 // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMeteorStorm;                                            // 0x0530(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	int                                                Next_Weather___Wasteland;                                 // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Weather_Weights___Wasteland;                              // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InWasteland;                                              // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	class AMeteor_launcher_C*                          Current_meteor_storm;                                     // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    MeteorParticles;                                          // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInCraterCave;                                            // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEclipse;                                               // 0x0561(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0562(0x0002) MISSED OFFSET
	int                                                IceCaveInt;                                               // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TestMatineeTime;                                          // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TestMatineeSelect;                                        // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IceCaveEntrance;                                          // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InKKArena;                                                // 0x0571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x0572(0x0006) MISSED OFFSET
	class USubtitlesUI_C*                              SubtitlesWidget;                                          // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    WastlandParticles;                                        // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               DesertSublevels;                                          // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SnowSublevels;                                            // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InDesertCave;                                             // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadingDome;                                              // 0x05A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WantsToUnloadDome;                                        // 0x05AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnloadingDome;                                            // 0x05AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WantsToLoadDome;                                          // 0x05AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VerifyDomeLoading;                                        // 0x05AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x05AE(0x0002) MISSED OFFSET
	TArray<struct FName>                               AscensionLevels;                                          // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsAscending;                                              // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	int                                                BossLevel;                                                // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableKKLoopMatinee;                                     // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x05C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x05CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x05CB(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x05CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x05E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x05E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x05E2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x05E3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x05E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x05E5(0x0003) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x05F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x05F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue;                  // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x0608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x0609(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x060A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x060B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x060C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x060D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x060E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x060F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue;              // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x0618(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x0624(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x0630(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue4;              // 0x0631(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x0632(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x0633(0x0005) MISSED OFFSET
	class UShooterGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue;                     // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0648(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x064C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x064D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x064E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x064F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue2;             // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue2;                    // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x0660(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x066C(0x0004) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller166;                     // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer166;               // 0x0678(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller165;                     // 0x0688(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer165;               // 0x0690(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller164;                     // 0x0698(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer164;               // 0x06A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller163;                     // 0x06A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer163;               // 0x06B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue2;                 // 0x06B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x06B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x06B9(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x06BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ACharacter*                                  CallFunc_GetPlayerCharacter_ReturnValue2;                 // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerPawnTest_C*                           K2Node_DynamicCast_AsPlayerPawnTest_C;                    // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x06D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x06D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x06D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x06D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x06DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x06DB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDaytime_ReturnValue;                           // 0x06DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x06DD(0x0003) MISSED OFFSET
	int                                                CallFunc_GetWeightedRandomIndexFromArray_ReturnValue;     // 0x06E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger2_CmpSuccess;                         // 0x06E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller162;                     // 0x06E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer162;               // 0x06F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller161;                     // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer161;               // 0x0700(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0701(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller160;                     // 0x0708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer160;               // 0x0710(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller159;                     // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer159;               // 0x0720(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x0721(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x0722(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x5];                                       // 0x0723(0x0005) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller158;                     // 0x0728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer158;               // 0x0730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x0731(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller157;                     // 0x0738(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer157;               // 0x0740(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller156;                     // 0x0748(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer156;               // 0x0750(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller155;                     // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer155;               // 0x0760(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x0761(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller154;                     // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer154;               // 0x0770(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller153;                     // 0x0778(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer153;               // 0x0780(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x0781(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller152;                     // 0x0788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer152;               // 0x0790(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x7];                                       // 0x0791(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller151;                     // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer151;               // 0x07A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller150;                     // 0x07A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer150;               // 0x07B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x7];                                       // 0x07B1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller149;                     // 0x07B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer149;               // 0x07C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x7];                                       // 0x07C1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller148;                     // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer148;               // 0x07D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller147;                     // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer147;               // 0x07E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller146;                     // 0x07E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer146;               // 0x07F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x7];                                       // 0x07F1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller145;                     // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer145;               // 0x0800(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x7];                                       // 0x0801(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller144;                     // 0x0808(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer144;               // 0x0810(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x7];                                       // 0x0811(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller143;                     // 0x0818(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer143;               // 0x0820(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller142;                     // 0x0828(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer142;               // 0x0830(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller141;                     // 0x0838(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer141;               // 0x0840(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x0841(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller140;                     // 0x0848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer140;               // 0x0850(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller139;                     // 0x0858(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer139;               // 0x0860(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x0861(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller138;                     // 0x0868(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer138;               // 0x0870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x7];                                       // 0x0871(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller137;                     // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer137;               // 0x0880(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller136;                     // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer136;               // 0x0890(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller135;                     // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer135;               // 0x08A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller134;                     // 0x08A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer134;               // 0x08B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller133;                     // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer133;               // 0x08C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x7];                                       // 0x08C1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller132;                     // 0x08C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer132;               // 0x08D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x7];                                       // 0x08D1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller131;                     // 0x08D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer131;               // 0x08E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x7];                                       // 0x08E1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller130;                     // 0x08E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer130;               // 0x08F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x7];                                       // 0x08F1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller129;                     // 0x08F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer129;               // 0x0900(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x0901(0x0003) MISSED OFFSET
	int                                                CallFunc_GetWeightedRandomIndexFromArray_ReturnValue2;    // 0x0904(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomIntegerInRange_ReturnValue;                // 0x0908(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger3_CmpSuccess;                         // 0x090C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x090D(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_X;                                     // 0x0910(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Y;                                     // 0x0914(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x0918(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue3;             // 0x0928(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x0930(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x0960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMeteor_Strike_C*                            CallFunc_FinishSpawningActor_ReturnValue;                 // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue3;             // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x0978(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x0979(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue4;                   // 0x097C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x0988(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0989(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x6];                                       // 0x098A(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller128;                     // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer128;               // 0x0998(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller127;                     // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer127;               // 0x09A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x7];                                       // 0x09A9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller126;                     // 0x09B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer126;               // 0x09B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller125;                     // 0x09C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer125;               // 0x09C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller124;                     // 0x09D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer124;               // 0x09D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x7];                                       // 0x09D9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller123;                     // 0x09E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer123;               // 0x09E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x7];                                       // 0x09E9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller122;                     // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer122;               // 0x09F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x7];                                       // 0x09F9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller121;                     // 0x0A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer121;               // 0x0A08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller120;                     // 0x0A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer120;               // 0x0A18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x7];                                       // 0x0A19(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller119;                     // 0x0A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer119;               // 0x0A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x7];                                       // 0x0A29(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller118;                     // 0x0A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer118;               // 0x0A38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x7];                                       // 0x0A39(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller117;                     // 0x0A40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer117;               // 0x0A48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue2;                      // 0x0A50(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller116;                     // 0x0A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer116;               // 0x0A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x7];                                       // 0x0A89(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue2;        // 0x0A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller115;                     // 0x0A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer115;               // 0x0AA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x7];                                       // 0x0AA1(0x0007) MISSED OFFSET
	class AMeteor_launcher_C*                          CallFunc_FinishSpawningActor_ReturnValue2;                // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller114;                     // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer114;               // 0x0AB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x7];                                       // 0x0AB9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller113;                     // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer113;               // 0x0AC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x7];                                       // 0x0AC9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller112;                     // 0x0AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer112;               // 0x0AD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x7];                                       // 0x0AD9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller111;                     // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer111;               // 0x0AE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x7];                                       // 0x0AE9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller110;                     // 0x0AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer110;               // 0x0AF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x7];                                       // 0x0AF9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller109;                     // 0x0B00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer109;               // 0x0B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller108;                     // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer108;               // 0x0B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x7];                                       // 0x0B19(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller107;                     // 0x0B20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer107;               // 0x0B28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x0B29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x6];                                       // 0x0B2A(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller106;                     // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer106;               // 0x0B38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x7];                                       // 0x0B39(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller105;                     // 0x0B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer105;               // 0x0B48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x0B49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x6];                                       // 0x0B4A(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller104;                     // 0x0B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer104;               // 0x0B58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x7];                                       // 0x0B59(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller103;                     // 0x0B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer103;               // 0x0B68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x7];                                       // 0x0B69(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller102;                     // 0x0B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer102;               // 0x0B78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x7];                                       // 0x0B79(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller101;                     // 0x0B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer101;               // 0x0B88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x7];                                       // 0x0B89(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller100;                     // 0x0B90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer100;               // 0x0B98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x7];                                       // 0x0B99(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller99;                      // 0x0BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer99;                // 0x0BA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x7];                                       // 0x0BA9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller98;                      // 0x0BB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer98;                // 0x0BB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x7];                                       // 0x0BB9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller97;                      // 0x0BC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer97;                // 0x0BC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x7];                                       // 0x0BC9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller96;                      // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer96;                // 0x0BD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x7];                                       // 0x0BD9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller95;                      // 0x0BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer95;                // 0x0BE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x7];                                       // 0x0BE9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller94;                      // 0x0BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer94;                // 0x0BF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x7];                                       // 0x0BF9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller93;                      // 0x0C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer93;                // 0x0C08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x7];                                       // 0x0C09(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller92;                      // 0x0C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer92;                // 0x0C18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x7];                                      // 0x0C19(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller91;                      // 0x0C20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer91;                // 0x0C28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x0C29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x6];                                      // 0x0C2A(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller90;                      // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer90;                // 0x0C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x0C39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x6];                                      // 0x0C3A(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller89;                      // 0x0C40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer89;                // 0x0C48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x7];                                      // 0x0C49(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller88;                      // 0x0C50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer88;                // 0x0C58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x7];                                      // 0x0C59(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller87;                      // 0x0C60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer87;                // 0x0C68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x7];                                      // 0x0C69(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller86;                      // 0x0C70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer86;                // 0x0C78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x7];                                      // 0x0C79(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller85;                      // 0x0C80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer85;                // 0x0C88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x7];                                      // 0x0C89(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller84;                      // 0x0C90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer84;                // 0x0C98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x7];                                      // 0x0C99(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller83;                      // 0x0CA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer83;                // 0x0CA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x7];                                      // 0x0CA9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller82;                      // 0x0CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer82;                // 0x0CB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x7];                                      // 0x0CB9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller81;                      // 0x0CC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer81;                // 0x0CC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x7];                                      // 0x0CC9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller80;                      // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer80;                // 0x0CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x7];                                      // 0x0CD9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller79;                      // 0x0CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer79;                // 0x0CE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x7];                                      // 0x0CE9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller78;                      // 0x0CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer78;                // 0x0CF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x7];                                      // 0x0CF9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller77;                      // 0x0D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer77;                // 0x0D08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x7];                                      // 0x0D09(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller76;                      // 0x0D10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer76;                // 0x0D18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x7];                                      // 0x0D19(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller75;                      // 0x0D20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer75;                // 0x0D28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x7];                                      // 0x0D29(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller74;                      // 0x0D30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer74;                // 0x0D38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x7];                                      // 0x0D39(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller73;                      // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer73;                // 0x0D48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x7];                                      // 0x0D49(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller72;                      // 0x0D50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer72;                // 0x0D58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0x7];                                      // 0x0D59(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller71;                      // 0x0D60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer71;                // 0x0D68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x7];                                      // 0x0D69(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller70;                      // 0x0D70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer70;                // 0x0D78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x7];                                      // 0x0D79(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller69;                      // 0x0D80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer69;                // 0x0D88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x7];                                      // 0x0D89(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller68;                      // 0x0D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer68;                // 0x0D98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x7];                                      // 0x0D99(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller67;                      // 0x0DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer67;                // 0x0DA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData125[0x7];                                      // 0x0DA9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller66;                      // 0x0DB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer66;                // 0x0DB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData126[0x7];                                      // 0x0DB9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller65;                      // 0x0DC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer65;                // 0x0DC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData127[0x7];                                      // 0x0DC9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller64;                      // 0x0DD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer64;                // 0x0DD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData128[0x7];                                      // 0x0DD9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller63;                      // 0x0DE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer63;                // 0x0DE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData129[0x7];                                      // 0x0DE9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller62;                      // 0x0DF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer62;                // 0x0DF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData130[0x7];                                      // 0x0DF9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller61;                      // 0x0E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer61;                // 0x0E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData131[0x7];                                      // 0x0E09(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller60;                      // 0x0E10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer60;                // 0x0E18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData132[0x7];                                      // 0x0E19(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller59;                      // 0x0E20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer59;                // 0x0E28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData133[0x7];                                      // 0x0E29(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller58;                      // 0x0E30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer58;                // 0x0E38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData134[0x7];                                      // 0x0E39(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller57;                      // 0x0E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer57;                // 0x0E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData135[0x7];                                      // 0x0E49(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller56;                      // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer56;                // 0x0E58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData136[0x7];                                      // 0x0E59(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller55;                      // 0x0E60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer55;                // 0x0E68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData137[0x7];                                      // 0x0E69(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller54;                      // 0x0E70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer54;                // 0x0E78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData138[0x7];                                      // 0x0E79(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller53;                      // 0x0E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer53;                // 0x0E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData139[0x7];                                      // 0x0E89(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller52;                      // 0x0E90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer52;                // 0x0E98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData140[0x7];                                      // 0x0E99(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller51;                      // 0x0EA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer51;                // 0x0EA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData141[0x7];                                      // 0x0EA9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller50;                      // 0x0EB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer50;                // 0x0EB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData142[0x7];                                      // 0x0EB9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller49;                      // 0x0EC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer49;                // 0x0EC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData143[0x7];                                      // 0x0EC9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller48;                      // 0x0ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer48;                // 0x0ED8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData144[0x7];                                      // 0x0ED9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller47;                      // 0x0EE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer47;                // 0x0EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData145[0x7];                                      // 0x0EE9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller46;                      // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer46;                // 0x0EF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData146[0x7];                                      // 0x0EF9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller45;                      // 0x0F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer45;                // 0x0F08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData147[0x7];                                      // 0x0F09(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller44;                      // 0x0F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer44;                // 0x0F18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData148[0x7];                                      // 0x0F19(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller43;                      // 0x0F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer43;                // 0x0F28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData149[0x7];                                      // 0x0F29(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller42;                      // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer42;                // 0x0F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData150[0x7];                                      // 0x0F39(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller41;                      // 0x0F40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer41;                // 0x0F48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData151[0x7];                                      // 0x0F49(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller40;                      // 0x0F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer40;                // 0x0F58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData152[0x7];                                      // 0x0F59(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller39;                      // 0x0F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer39;                // 0x0F68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData153[0x7];                                      // 0x0F69(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller38;                      // 0x0F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer38;                // 0x0F78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData154[0x7];                                      // 0x0F79(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller37;                      // 0x0F80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer37;                // 0x0F88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData155[0x7];                                      // 0x0F89(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller36;                      // 0x0F90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer36;                // 0x0F98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData156[0x7];                                      // 0x0F99(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller35;                      // 0x0FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer35;                // 0x0FA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData157[0x7];                                      // 0x0FA9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller34;                      // 0x0FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer34;                // 0x0FB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData158[0x7];                                      // 0x0FB9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller33;                      // 0x0FC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer33;                // 0x0FC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData159[0x7];                                      // 0x0FC9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller32;                      // 0x0FD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer32;                // 0x0FD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData160[0x7];                                      // 0x0FD9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller31;                      // 0x0FE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer31;                // 0x0FE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData161[0x3];                                      // 0x0FE9(0x0003) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0FEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller30;                      // 0x0FF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer30;                // 0x0FF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData162[0x7];                                      // 0x0FF9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller29;                      // 0x1000(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer29;                // 0x1008(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x1009(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData163[0x6];                                      // 0x100A(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller28;                      // 0x1010(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer28;                // 0x1018(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x1019(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData164[0x6];                                      // 0x101A(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller27;                      // 0x1020(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer27;                // 0x1028(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData165[0x7];                                      // 0x1029(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x1030(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller26;                      // 0x1038(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer26;                // 0x1040(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData166[0x7];                                      // 0x1041(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller25;                      // 0x1048(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer25;                // 0x1050(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData167[0x7];                                      // 0x1051(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller24;                      // 0x1058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer24;                // 0x1060(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData168[0x7];                                      // 0x1061(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller23;                      // 0x1068(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer23;                // 0x1070(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData169[0x7];                                      // 0x1071(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller22;                      // 0x1078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer22;                // 0x1080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData170[0x7];                                      // 0x1081(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller21;                      // 0x1088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer21;                // 0x1090(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData171[0x7];                                      // 0x1091(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller20;                      // 0x1098(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer20;                // 0x10A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData172[0x7];                                      // 0x10A1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller19;                      // 0x10A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer19;                // 0x10B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData173[0x7];                                      // 0x10B1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller18;                      // 0x10B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer18;                // 0x10C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData174[0x7];                                      // 0x10C1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller17;                      // 0x10C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer17;                // 0x10D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData175[0x7];                                      // 0x10D1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller16;                      // 0x10D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer16;                // 0x10E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData176[0x7];                                      // 0x10E1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller15;                      // 0x10E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer15;                // 0x10F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData177[0x7];                                      // 0x10F1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller14;                      // 0x10F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer14;                // 0x1100(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData178[0x7];                                      // 0x1101(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller13;                      // 0x1108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer13;                // 0x1110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData179[0x7];                                      // 0x1111(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller12;                      // 0x1118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer12;                // 0x1120(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData180[0x7];                                      // 0x1121(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller11;                      // 0x1128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer11;                // 0x1130(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x1131(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x1132(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData181[0x5];                                      // 0x1133(0x0005) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller10;                      // 0x1138(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer10;                // 0x1140(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1141(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData182[0x6];                                      // 0x1142(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller9;                       // 0x1148(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer9;                 // 0x1150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData183[0x7];                                      // 0x1151(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue2;                // 0x1158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USubtitlesUI_C*                              CallFunc_Create_ReturnValue;                              // 0x1160(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1168(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1169(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x116A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData184[0x5];                                      // 0x116B(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x1170(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x1178(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData185[0x7];                                      // 0x1179(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x1180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x1188(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x1189(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x118A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData186[0x5];                                      // 0x118B(0x0005) MISSED OFFSET
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue4;             // 0x1190(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue4;             // 0x1198(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue5;                   // 0x11A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue6;                   // 0x11AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue7;                   // 0x11B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData187[0x4];                                      // 0x11C4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x11C8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  CallFunc_LineTraceSingle_NEW_OutHit;                      // 0x11D8(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_LineTraceSingle_NEW_ReturnValue;                 // 0x1260(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData188[0x3];                                      // 0x1261(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x1264(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x1270(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x127C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x1288(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData189[0x4];                                      // 0x1294(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x1298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x12A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x12B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x12B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x12BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue5;              // 0x12BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue4;            // 0x12BE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue8;                          // 0x12BF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x12C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData190[0x7];                                      // 0x12C1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller8;                       // 0x12C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer8;                 // 0x12D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData191[0x7];                                      // 0x12D1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller7;                       // 0x12D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer7;                 // 0x12E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData192[0x3];                                      // 0x12E1(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item;                                  // 0x12E4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item2;                                 // 0x12EC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item3;                                 // 0x12F4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item4;                                 // 0x12FC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item5;                                 // 0x1304(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item6;                                 // 0x130C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item7;                                 // 0x1314(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item8;                                 // 0x131C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item9;                                 // 0x1324(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item10;                                // 0x132C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item11;                                // 0x1334(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item12;                                // 0x133C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData193[0x4];                                      // 0x1344(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_ActorBoundEvent_OtherActor;                        // 0x1348(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x1350(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState;                    // 0x1358(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1360(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData194[0x7];                                      // 0x1361(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller6;                       // 0x1368(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer6;                 // 0x1370(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData195[0x7];                                      // 0x1371(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller5;                       // 0x1378(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer5;                 // 0x1380(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData196[0x3];                                      // 0x1381(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x1384(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x1388(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x1389(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData197[0x6];                                      // 0x138A(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller4;                       // 0x1390(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer4;                 // 0x1398(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData198[0x7];                                      // 0x1399(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller3;                       // 0x13A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer3;                 // 0x13A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData199[0x7];                                      // 0x13A9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller2;                       // 0x13B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer2;                 // 0x13B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData200[0x7];                                      // 0x13B9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller;                        // 0x13C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer;                  // 0x13C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x13C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData201[0x6];                                      // 0x13CA(0x0006) MISSED OFFSET
	class AMatineeActor*                               Matinee_WeatherColdFront_ExecuteUbergraph_Extinction_RefProperty;// 0x13D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherHeatWave_ExecuteUbergraph_Extinction_RefProperty;// 0x13D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherRain_ExecuteUbergraph_Extinction_RefProperty;// 0x13E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_DayTime_ExecuteUbergraph_Extinction_RefProperty;  // 0x13E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               BuildMatinee_ExecuteUbergraph_Extinction_RefProperty;     // 0x13F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_MasterDayCycle_ExecuteUbergraph_Extinction_RefProperty;// 0x13F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALight*                                      None_ExecuteUbergraph_Extinction_RefProperty;             // 0x1400(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAtmosphericFog*                             AtmosphericFog_1_ExecuteUbergraph_Extinction_RefProperty; // 0x1408(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_1_ExecuteUbergraph_Extinction_RefProperty;// 0x1410(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExtinctionDayCycle_C*                       ExtinctionDayCycle_C_0_ExecuteUbergraph_Extinction_RefProperty;// 0x1418(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_0_ExecuteUbergraph_Extinction_RefProperty;   // 0x1420(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Desert_C*                   BP_ProtoArkDome_Desert_C_2_ExecuteUbergraph_Extinction_RefProperty;// 0x1428(0x0008) (ZeroConstructor, IsPlainOldData)
	class AChildIBL_Capture_Blueprint_C*               ChildIBL_Desert_3_ExecuteUbergraph_Extinction_RefProperty;// 0x1430(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_Desert_ExecuteUbergraph_Extinction_RefProperty;// 0x1438(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADayCycleAmbientSound*                       AmbGlobalRainSound_ExecuteUbergraph_Extinction_RefProperty;// 0x1440(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADayCycleAmbientSound*                       AmbGlobalRainSoundSnow_ExecuteUbergraph_Extinction_RefProperty;// 0x1448(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeValueInterpolationContainer_EX_C*    MatineeValueInterpolationContainer_EX_C_1_ExecuteUbergraph_Extinction_RefProperty;// 0x1450(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Snow_C*                     BP_ProtoArkDome_Snow_C_2_ExecuteUbergraph_Extinction_RefProperty;// 0x1458(0x0008) (ZeroConstructor, IsPlainOldData)
	class AChildIBL_Capture_Blueprint_C*               ChildIBL_Snow_ExecuteUbergraph_Extinction_RefProperty;    // 0x1460(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherEclipse_Moon_ExecuteUbergraph_Extinction_RefProperty;// 0x1468(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               KingKaijuDefeatMatinee_ExecuteUbergraph_Extinction_RefProperty;// 0x1470(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_1_ExecuteUbergraph_Extinction_RefProperty;   // 0x1478(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               KingKaiju_Fight_Loop_Matinee_ExecuteUbergraph_Extinction_RefProperty;// 0x1480(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherEclipse_Dlight_ExecuteUbergraph_Extinction_RefProperty;// 0x1488(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_Snow_ExecuteUbergraph_Extinction_RefProperty;// 0x1490(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               EX_Ascension_ExecuteUbergraph_Extinction_RefProperty;     // 0x1498(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAscensionData_C*                            AscensionData_C_0_ExecuteUbergraph_Extinction_RefProperty;// 0x14A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASpotLight*                                  CraterForest_Spot_2_ExecuteUbergraph_Extinction_RefProperty;// 0x14A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAtmosphericFog*                             AtmosphericFog_1_EdGraph_92079_RefProperty;               // 0x14B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEX_Skylight_Manager_C*                      EX_Skylight_Manager_C_1_EdGraph_92079_RefProperty;        // 0x14B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_Desert_EdGraph_92079_RefProperty;        // 0x14C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Snow_C*                     BP_ProtoArkDome_Snow_C_2_EdGraph_92079_RefProperty;       // 0x14C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_1_EdGraph_92079_RefProperty;             // 0x14D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_Snow_EdGraph_92079_RefProperty;          // 0x14D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            FOG_KILLER_SPHERE_EdGraph_92081_RefProperty;              // 0x14E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAtmosphericFog*                             AtmosphericFog_1_EdGraph_92081_RefProperty;               // 0x14E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkyLight*                                   SkyLight_1_EdGraph_92081_RefProperty;                     // 0x14F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_1_EdGraph_92081_RefProperty;             // 0x14F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_EX_Sky_Sphere_ARK_C*                     BP_EX_Sky_Sphere_ARK_C_1_EdGraph_92081_RefProperty;       // 0x1500(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Desert_C*                   BP_ProtoArkDome_Desert_C_2_EdGraph_92081_RefProperty;     // 0x1508(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Snow_C*                     BP_ProtoArkDome_Snow_C_2_EdGraph_92081_RefProperty;       // 0x1510(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Extinction.Extinction_C");
		return ptr;
	}


	void DomeStreaming();
	void AscensionToggle(bool Hidden, bool Lights);
	void OnRep_IsMeteorStorm();
	void DomeToggles(bool isEntering);
	void SpawnMeteors(const struct FVector& Start_Point, const struct FVector& End_Point);
	void SetWaterLine(bool IsUnderwater, bool isRiverWater, float WaterDepth);
	void K2Node_MatineeController_185_Finished();
	void K2Node_MatineeController_46_Finished();
	void K2Node_MatineeController_40_DLIGHT();
	void K2Node_MatineeController_40_Finished();
	void K2Node_MatineeController_132_END();
	void K2Node_MatineeController_132_Finished();
	void K2Node_MatineeController_31_HideSubtitle();
	void K2Node_MatineeController_31_NextSubtitle();
	void K2Node_MatineeController_31_ResetSubtitles();
	void K2Node_MatineeController_31_OpenCredits();
	void K2Node_MatineeController_31_Shot05();
	void K2Node_MatineeController_31_Shot04();
	void K2Node_MatineeController_31_Shot03();
	void K2Node_MatineeController_31_Shot02();
	void K2Node_MatineeController_31_Shot01();
	void K2Node_MatineeController_31_Finished();
	void katyperry();
	void Start_Rain();
	void Stop_Rain();
	void playit();
	void stopit();
	void stoptime();
	void StartTime();
	void CancelWeatherMatinee();
	void Stop_Weather();
	void ReceiveTick(float* DeltaSeconds);
	void Rain_Stopped();
	void ReceiveBeginPlay();
	void Cold_Front();
	void BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_42_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_52_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_121_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_134_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void Heat_Wave();
	void Start_Meteors();
	void BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_368_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_388_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_585_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_607_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_528_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_553_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_768_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_795_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_823_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_852_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_945_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_978_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1012_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1047_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1083_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1120_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1158_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1197_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1237_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1278_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1320_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1363_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1407_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1452_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1498_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1545_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1593_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1642_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1692_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1743_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2013_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2070_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2706_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2785_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void Meteor_Strike(float X, float Y);
	void BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_372_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_437_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_503_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_570_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_638_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_707_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1185_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1256_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2448_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2521_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3243_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3318_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_592_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_669_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_747_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_826_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_987_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1069_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1152_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1321_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_870_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_1312_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__MatineeValueInterpolationContainer_EX_4_K2Node_ActorBoundEvent_1743_ActorMatineeUpdated__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_534_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_626_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_719_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_813_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_908_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_1004_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1101_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1199_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2283_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2383_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_1940_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_2249_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2522_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2831_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3348_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3444_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7246_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7344_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16495_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16597_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1624_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1728_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1344_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_1976_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_2084_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2407_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2517_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2737_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2849_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3184_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3298_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3767_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3883_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5840_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5958_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6311_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6431_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7266_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7388_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7753_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7877_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8740_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8866_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16009_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16137_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17790_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17920_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1572_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1706_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1330_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1466_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2413_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2551_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4060_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4200_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5175_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5317_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6588_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6732_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1430_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1576_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4640_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4788_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_4937_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_5087_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5238_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5390_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5543_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5697_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_5852_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_6008_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12098_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12256_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void Start_Eclipse();
	void KingKaijuDefeatMatinee();
	void KingKaijuSummonMatinee();
	void BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3266_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3438_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_1061_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void Ascend0();
	void Ascend1();
	void Ascend2();
	void BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1490_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1658_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_1063_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1218_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1374_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2170_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2328_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_942_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1102_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_1263_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1425_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3198_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3362_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1321_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1503_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_7920_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_8088_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_1815_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_2164_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void PreLoadAscension();
	void BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_4622_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1336_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1506_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void FinishShot6();
	void BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_996_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_1165_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_2855_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_3025_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void StopKKMatinees();
	void ExecuteUbergraph_Extinction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
