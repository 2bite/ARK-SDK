#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0668 (0x0AC0 - 0x0458)
class AExtinction_C : public ALevelScriptActor
{
public:
	class UParticleSystem*                             RainVFXTemplate;                                          // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LastRainVFX;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCurrentlyRaining;                                       // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Rain_Particles;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInSnow;                                                  // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRaining;                                               // 0x0479(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSandStorm;                                             // 0x047A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // 0x047B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInCave;                                                  // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRiverWater;                                            // 0x047D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x047E(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    River_Particles;                                          // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Underwater_Particles;                                     // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSuperHeat;                                             // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayerIndoors;                                         // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0492(0x0006) MISSED OFFSET
	TArray<float>                                      Weather_Weights_Day___Proto;                              // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Weather_Weights_Night___Proto;                            // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      INT_Weather_Weights___Proto;                              // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bWeatherEnabled;                                          // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	int                                                Next_Weather___Proto;                                     // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Particle_Location;                                        // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Snow_Fall;                                                // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultWaterLine;                                         // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class UParticleSystem*                             WaterVFXTemplate;                                         // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBiomeType_Enum>                       CurrentBiome;                                             // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	float                                              HeatWaveStrength;                                         // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatWaveMinTemp;                                          // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatWaveMaxTemp;                                          // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColdWaveMinTemp;                                          // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ColdWaveMaxTemp;                                          // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SunlightSnowMaxIntensity;                                 // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkylightSnowMaxIntensity;                                 // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMeteorStorm;                                            // 0x0518(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	int                                                Next_Weather___Wasteland;                                 // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Weather_Weights___Wasteland;                              // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InWasteland;                                              // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class AMeteor_launcher_C*                          Current_meteor_storm;                                     // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    MeteorParticles;                                          // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInCraterCave;                                            // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsEclipse;                                               // 0x0549(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x054A(0x0002) MISSED OFFSET
	int                                                IceCaveInt;                                               // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TestMatineeTime;                                          // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TestMatineeSelect;                                        // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IceCaveEntrance;                                          // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InKKArena;                                                // 0x0559(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x055A(0x0006) MISSED OFFSET
	class USubtitlesUI_C*                              SubtitlesWidget;                                          // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    WastlandParticles;                                        // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               DesertSublevels;                                          // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SnowSublevels;                                            // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InDesertCave;                                             // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadingDome;                                              // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WantsToUnloadDome;                                        // 0x0592(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnloadingDome;                                            // 0x0593(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WantsToLoadDome;                                          // 0x0594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VerifyDomeLoading;                                        // 0x0595(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0596(0x0002) MISSED OFFSET
	TArray<struct FName>                               AscensionLevels;                                          // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsAscending;                                              // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	int                                                BossLevel;                                                // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableKKLoopMatinee;                                     // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x05B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x05B2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x05B3(0x0001) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x05B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x05B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x05C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x05C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x05CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x05CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x05CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x05E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x05E1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue;                  // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x05F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x05F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x05F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x05F3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x05F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x05F5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x05F6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x05F7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue;              // 0x05F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x0600(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x060C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x0618(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue4;              // 0x0619(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x061A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x061B(0x0005) MISSED OFFSET
	class UShooterGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue;                     // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x0628(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0630(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x0634(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x0635(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0636(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0637(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue2;             // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue2;                    // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x0648(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue2;                 // 0x0660(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x0664(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x0668(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x066C(0x0004) MISSED OFFSET
	class ACharacter*                                  CallFunc_GetPlayerCharacter_ReturnValue2;                 // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerPawnTest_C*                           K2Node_DynamicCast_AsPlayerPawnTest_C;                    // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0684(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0688(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0689(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x068A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x068B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDaytime_ReturnValue;                           // 0x068C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x068D(0x0003) MISSED OFFSET
	int                                                CallFunc_GetWeightedRandomIndexFromArray_ReturnValue;     // 0x0690(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger2_CmpSuccess;                         // 0x0694(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x0695(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x0696(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x0697(0x0001) MISSED OFFSET
	int                                                CallFunc_GetWeightedRandomIndexFromArray_ReturnValue2;    // 0x0698(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomIntegerInRange_ReturnValue;                // 0x069C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger3_CmpSuccess;                         // 0x06A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x06A1(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_X;                                     // 0x06A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Y;                                     // 0x06A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x06AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue3;             // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FTransform                                  CallFunc_MakeTransform_ReturnValue;                       // 0x06C0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x06F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMeteor_Strike_C*                            CallFunc_FinishSpawningActor_ReturnValue;                 // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue3;             // 0x0700(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x0708(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue4;                   // 0x070C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x0718(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x0719(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x6];                                       // 0x071A(0x0006) MISSED OFFSET
	struct FTransform                                  CallFunc_MakeTransform_ReturnValue2;                      // 0x0720(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue2;        // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMeteor_launcher_C*                          CallFunc_FinishSpawningActor_ReturnValue2;                // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x0760(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x0761(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x0762(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x0763(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0764(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x0768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x0769(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x6];                                       // 0x076A(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x0770(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x0778(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x0779(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x077A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x5];                                       // 0x077B(0x0005) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue2;                // 0x0780(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USubtitlesUI_C*                              CallFunc_Create_ReturnValue;                              // 0x0788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0790(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0791(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0792(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x5];                                       // 0x0793(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x07A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x07A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x07B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x07B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x07B2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x5];                                       // 0x07B3(0x0005) MISSED OFFSET
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue4;             // 0x07B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue4;             // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue5;                   // 0x07C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue6;                   // 0x07D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue7;                   // 0x07E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x07F0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  CallFunc_LineTraceSingle_NEW_OutHit;                      // 0x0800(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_LineTraceSingle_NEW_ReturnValue;                 // 0x0888(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x0889(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x088C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x0898(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x08A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x08B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x08C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x08C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x08D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x08E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x08E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue5;              // 0x08E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue4;            // 0x08E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue8;                          // 0x08E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x08E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item;                                  // 0x08EC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item2;                                 // 0x08F4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item3;                                 // 0x08FC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item4;                                 // 0x0904(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item5;                                 // 0x090C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item6;                                 // 0x0914(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item7;                                 // 0x091C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item8;                                 // 0x0924(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item9;                                 // 0x092C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item10;                                // 0x0934(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item11;                                // 0x093C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item12;                                // 0x0944(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_ActorBoundEvent_OtherActor;                        // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x0958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState;                    // 0x0960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0968(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x0969(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x096C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x0970(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0971(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x0972(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x5];                                       // 0x0973(0x0005) MISSED OFFSET
	class AMatineeActor*                               Matinee_WeatherColdFront_ExecuteUbergraph_Extinction_RefProperty;// 0x0978(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherHeatWave_ExecuteUbergraph_Extinction_RefProperty;// 0x0980(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherRain_ExecuteUbergraph_Extinction_RefProperty;// 0x0988(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_DayTime_ExecuteUbergraph_Extinction_RefProperty;  // 0x0990(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               BuildMatinee_ExecuteUbergraph_Extinction_RefProperty;     // 0x0998(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_MasterDayCycle_ExecuteUbergraph_Extinction_RefProperty;// 0x09A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ALight*                                      None_ExecuteUbergraph_Extinction_RefProperty;             // 0x09A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAtmosphericFog*                             AtmosphericFog_1_ExecuteUbergraph_Extinction_RefProperty; // 0x09B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_1_ExecuteUbergraph_Extinction_RefProperty;// 0x09B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExtinctionDayCycle_C*                       ExtinctionDayCycle_C_0_ExecuteUbergraph_Extinction_RefProperty;// 0x09C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_0_ExecuteUbergraph_Extinction_RefProperty;   // 0x09C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Desert_C*                   BP_ProtoArkDome_Desert_C_2_ExecuteUbergraph_Extinction_RefProperty;// 0x09D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AChildIBL_Capture_Blueprint_C*               ChildIBL_Desert_3_ExecuteUbergraph_Extinction_RefProperty;// 0x09D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_Desert_ExecuteUbergraph_Extinction_RefProperty;// 0x09E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADayCycleAmbientSound*                       AmbGlobalRainSound_ExecuteUbergraph_Extinction_RefProperty;// 0x09E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADayCycleAmbientSound*                       AmbGlobalRainSoundSnow_ExecuteUbergraph_Extinction_RefProperty;// 0x09F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeValueInterpolationContainer_EX_C*    MatineeValueInterpolationContainer_EX_C_1_ExecuteUbergraph_Extinction_RefProperty;// 0x09F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Snow_C*                     BP_ProtoArkDome_Snow_C_2_ExecuteUbergraph_Extinction_RefProperty;// 0x0A00(0x0008) (ZeroConstructor, IsPlainOldData)
	class AChildIBL_Capture_Blueprint_C*               ChildIBL_Snow_ExecuteUbergraph_Extinction_RefProperty;    // 0x0A08(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherEclipse_Moon_ExecuteUbergraph_Extinction_RefProperty;// 0x0A10(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               KingKaijuDefeatMatinee_ExecuteUbergraph_Extinction_RefProperty;// 0x0A18(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_1_ExecuteUbergraph_Extinction_RefProperty;   // 0x0A20(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               KingKaiju_Fight_Loop_Matinee_ExecuteUbergraph_Extinction_RefProperty;// 0x0A28(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherEclipse_Dlight_ExecuteUbergraph_Extinction_RefProperty;// 0x0A30(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_Snow_ExecuteUbergraph_Extinction_RefProperty;// 0x0A38(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               EX_Ascension_ExecuteUbergraph_Extinction_RefProperty;     // 0x0A40(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAscensionData_C*                            AscensionData_C_0_ExecuteUbergraph_Extinction_RefProperty;// 0x0A48(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASpotLight*                                  CraterForest_Spot_2_ExecuteUbergraph_Extinction_RefProperty;// 0x0A50(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAtmosphericFog*                             AtmosphericFog_1_EdGraph_75694_RefProperty;               // 0x0A58(0x0008) (ZeroConstructor, IsPlainOldData)
	class AEX_Skylight_Manager_C*                      EX_Skylight_Manager_C_1_EdGraph_75694_RefProperty;        // 0x0A60(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_Desert_EdGraph_75694_RefProperty;        // 0x0A68(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Snow_C*                     BP_ProtoArkDome_Snow_C_2_EdGraph_75694_RefProperty;       // 0x0A70(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_1_EdGraph_75694_RefProperty;             // 0x0A78(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_Snow_EdGraph_75694_RefProperty;          // 0x0A80(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            FOG_KILLER_SPHERE_EdGraph_75696_RefProperty;              // 0x0A88(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAtmosphericFog*                             AtmosphericFog_1_EdGraph_75696_RefProperty;               // 0x0A90(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkyLight*                                   SkyLight_1_EdGraph_75696_RefProperty;                     // 0x0A98(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_1_EdGraph_75696_RefProperty;             // 0x0AA0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_EX_Sky_Sphere_ARK_C*                     BP_EX_Sky_Sphere_ARK_C_1_EdGraph_75696_RefProperty;       // 0x0AA8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Desert_C*                   BP_ProtoArkDome_Desert_C_2_EdGraph_75696_RefProperty;     // 0x0AB0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_ProtoArkDome_Snow_C*                     BP_ProtoArkDome_Snow_C_2_EdGraph_75696_RefProperty;       // 0x0AB8(0x0008) (ZeroConstructor, IsPlainOldData)

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
	void BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_42_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_DesertWater_01_K2Node_ActorBoundEvent_52_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_121_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_PPVol_K2Node_ActorBoundEvent_134_PostprocessVolumeLeftSignature__DelegateSignature();
	void Heat_Wave();
	void Start_Meteors();
	void BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_368_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_DesertWater_02_K2Node_ActorBoundEvent_388_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_585_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_DesertWater_03_K2Node_ActorBoundEvent_607_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_528_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water01_PPVol_K2Node_ActorBoundEvent_553_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_768_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PostProcessVolume_80_K2Node_ActorBoundEvent_795_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_823_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water03_PPVol_K2Node_ActorBoundEvent_852_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_945_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water05_PPVol_K2Node_ActorBoundEvent_978_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1012_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water06_PPVol_K2Node_ActorBoundEvent_1047_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1083_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water07_PPVol_K2Node_ActorBoundEvent_1120_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1158_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water08_PPVol_K2Node_ActorBoundEvent_1197_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1237_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water09_PPVol_K2Node_ActorBoundEvent_1278_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1320_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water10_PPVol_K2Node_ActorBoundEvent_1363_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1407_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water11_PPVol_K2Node_ActorBoundEvent_1452_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1498_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water12_PPVol_K2Node_ActorBoundEvent_1545_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1593_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water13_PPVol_K2Node_ActorBoundEvent_1642_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1692_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water14_PPVol_K2Node_ActorBoundEvent_1743_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2013_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__CraterForest_Water17_PPVol_K2Node_ActorBoundEvent_2070_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2706_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PostProcessVolume_38_K2Node_ActorBoundEvent_2785_PostprocessVolumeLeftSignature__DelegateSignature();
	void Meteor_Strike(float X, float Y);
	void BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_372_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_01_K2Node_ActorBoundEvent_437_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_503_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_02_K2Node_ActorBoundEvent_570_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_638_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_03_K2Node_ActorBoundEvent_707_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1185_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_04_K2Node_ActorBoundEvent_1256_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2448_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_CityFountain_01_K2Node_ActorBoundEvent_2521_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3243_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_CityRiver_01_K2Node_ActorBoundEvent_3318_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_592_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_01_K2Node_ActorBoundEvent_669_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_747_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_02_K2Node_ActorBoundEvent_826_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_03_K2Node_ActorBoundEvent_987_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1069_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_04_K2Node_ActorBoundEvent_1152_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_05_K2Node_ActorBoundEvent_1321_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_870_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PostProcessVolume_2_K2Node_ActorBoundEvent_1312_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__MatineeValueInterpolationContainer_EX_4_K2Node_ActorBoundEvent_1743_ActorMatineeUpdated__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_534_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_02_K2Node_ActorBoundEvent_626_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_719_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_03_K2Node_ActorBoundEvent_813_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_908_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_04_100_K2Node_ActorBoundEvent_1004_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1101_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_05_K2Node_ActorBoundEvent_1199_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2283_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SnowRiver_01_K2Node_ActorBoundEvent_2383_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_1940_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__Snow_PPvol_2_K2Node_ActorBoundEvent_2249_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2522_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__Desert_PPVol_2_K2Node_ActorBoundEvent_2831_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3348_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_06_K2Node_ActorBoundEvent_3444_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7246_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_08_K2Node_ActorBoundEvent_7344_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16495_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_10_K2Node_ActorBoundEvent_16597_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1624_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_11_K2Node_ActorBoundEvent_1728_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1236_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_12_K2Node_ActorBoundEvent_1344_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_1976_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_13_K2Node_ActorBoundEvent_2084_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2407_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_14_K2Node_ActorBoundEvent_2517_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2737_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_15_K2Node_ActorBoundEvent_2849_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3184_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_16_K2Node_ActorBoundEvent_3298_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3767_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_17_K2Node_ActorBoundEvent_3883_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5840_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_TrenchWater_01_K2Node_ActorBoundEvent_5958_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6311_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_TrenchWater_02_K2Node_ActorBoundEvent_6431_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7266_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_TrenchWater_03_K2Node_ActorBoundEvent_7388_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7753_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_TrenchWater_04_K2Node_ActorBoundEvent_7877_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8740_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_01_K2Node_ActorBoundEvent_8866_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16009_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_02_K2Node_ActorBoundEvent_16137_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17790_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_03_K2Node_ActorBoundEvent_17920_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1572_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_05_K2Node_ActorBoundEvent_1706_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1330_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_06_K2Node_ActorBoundEvent_1466_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2413_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_07_K2Node_ActorBoundEvent_2551_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4060_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_05_K2Node_ActorBoundEvent_4200_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5175_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_06_K2Node_ActorBoundEvent_5317_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6588_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SulfurWater_07_K2Node_ActorBoundEvent_6732_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1430_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_18_K2Node_ActorBoundEvent_1576_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4640_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_19_K2Node_ActorBoundEvent_4788_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_4937_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_20_K2Node_ActorBoundEvent_5087_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5238_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_21_K2Node_ActorBoundEvent_5390_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5543_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_22_K2Node_ActorBoundEvent_5697_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_5852_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_23_K2Node_ActorBoundEvent_6008_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12098_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_DesertWater_04_K2Node_ActorBoundEvent_12256_PostprocessVolumeLeftSignature__DelegateSignature();
	void Start_Eclipse();
	void KingKaijuDefeatMatinee();
	void KingKaijuSummonMatinee();
	void BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3266_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PostProcessVolume_27_K2Node_ActorBoundEvent_3438_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_09_K2Node_ActorBoundEvent_1061_PostprocessVolumeLeftSignature__DelegateSignature();
	void Ascend0();
	void Ascend1();
	void Ascend2();
	void BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1490_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__IceCave_PPVol_Entrance_K2Node_ActorBoundEvent_1658_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_906_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_01_K2Node_ActorBoundEvent_1063_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1218_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_02_K2Node_ActorBoundEvent_1374_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2170_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__DesertCave_PPVol_K2Node_ActorBoundEvent_2328_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_942_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1102_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_03_K2Node_ActorBoundEvent_1263_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_04_K2Node_ActorBoundEvent_1425_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3198_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__BloodWater_PPVol_05_K2Node_ActorBoundEvent_3362_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1321_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__KingTitan_PPVol_167_K2Node_ActorBoundEvent_1503_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_7920_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_CityWater_09_K2Node_ActorBoundEvent_8088_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_1815_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandRiver_213_K2Node_ActorBoundEvent_2164_PostprocessVolumeLeftSignature__DelegateSignature();
	void PreLoadAscension();
	void BndEvt__TriggerSphere_1_K2Node_ActorBoundEvent_4622_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor);
	void BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1336_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_WastelandWater_24_K2Node_ActorBoundEvent_1506_PostprocessVolumeLeftSignature__DelegateSignature();
	void FinishShot6();
	void BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_996_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PPVol_SnowWater_01_K2Node_ActorBoundEvent_1165_PostprocessVolumeLeftSignature__DelegateSignature();
	void BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_2855_PostprocessVolumeEnteredSignature__DelegateSignature();
	void BndEvt__PostProcessVolume_6_K2Node_ActorBoundEvent_3025_PostprocessVolumeLeftSignature__DelegateSignature();
	void StopKKMatinees();
	void ExecuteUbergraph_Extinction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
