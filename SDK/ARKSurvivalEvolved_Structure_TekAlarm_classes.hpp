#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TekAlarm_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_TekAlarm.Structure_TekAlarm_C
// 0x0390 (0x1168 - 0x0DD8)
class AStructure_TekAlarm_C : public AStructureItemContainerBaseBP_C
{
public:
	class UStaticMeshComponent*                        TargetDetectBoxMesh;                                      // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StructureDetectBoxMesh;                                   // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StructureDetectSphereMesh;                                // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TargetDetectSphereMesh;                                   // 0x0DF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               StructureDetectBox;                                       // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StructureDetectSphere;                                    // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               TargetDetectBox;                                          // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            TargetDetectSphere;                                       // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetDetectBox_X_Depth;                                  // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              TargetDetectBox_Y_Width;                                  // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              TargetDetectBox_Z_Height;                                 // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              DetectBox_X_MIN;                                          // 0x0E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetectBox_Y_MIN;                                          // 0x0E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetectBox_Z_MIN;                                          // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetectBox_X_MAX;                                          // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetectBox_Y_MAX;                                          // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetectBox_Z_MAX;                                          // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdjustSpeed_Slow;                                         // 0x0E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdjustSpeed_Medium;                                       // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdjustSpeed_Fast;                                         // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AdjustSpeedOption;                                        // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SelectedOptionTextColor;                                  // 0x0E4C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDetectSphere_Radius;                                // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              DetectSphere_Radius_MIN;                                  // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetectSphere_Radius_MAX;                                  // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetScanInterval;                                       // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StructureDetectBox_X_Depth;                               // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              StructureDetectBox_Y_Width;                               // 0x0E70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              StructureDetectBox_Z_Height;                              // 0x0E74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              StructureDetectSphere_Radius;                             // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E7C(0x0004) MISSED OFFSET
	double                                             LastTimeScanStructures;                                   // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StructureScanInterval;                                    // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StructureTriggerStateOption;                              // 0x0E8C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldToggle;                                             // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasFilteredTargetInTheAreaLastFrame;                      // 0x0E91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanConfigureDetectTargets;                                // 0x0E92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanConfigureDeltaSize;                                    // 0x0E93(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0E94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E95(0x0003) MISSED OFFSET
	double                                             LastTimeChangeTargetDetectShape;                          // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeChangeStructureDetectShape;                       // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToInvisibleVisuals;                                   // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowTargetDetectBoxMesh;                                  // 0x0EAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0EAD(0x0003) MISSED OFFSET
	int                                                OnTargetSightedResponse;                                  // 0x0EB0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                OnTargetLostResponse;                                     // 0x0EB4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                ActivePINCodes;                                           // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DeactivatedPINCodes;                                      // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      OnTargetLostDisplayString;                                // 0x0EC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      OnTargetSightedDisplayString;                             // 0x0ED0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ConfigStructureDetectDisplayString;                       // 0x0EE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ConfigTargetDetectDisplaySring;                           // 0x0EF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                IncreaseTextColor;                                        // 0x0F00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ReduceTextColor;                                          // 0x0F10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnTargetLostActivateDelay;                                // 0x0F20(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              OnTargetLostDeactivateDelay;                              // 0x0F24(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              OnTargetSightedActivateDelay;                             // 0x0F28(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              OnTargetSightedDeactivateDelay;                           // 0x0F2C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                ActivatedPINCodes;                                        // 0x0F30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0F34(0x0004) MISSED OFFSET
	TArray<struct FTekAlarmPINData>                    PINData;                                                  // 0x0F38(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              CDOSphereRadius;                                          // 0x0F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CDOSphereMeshScale;                                       // 0x0F4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CDOBoxScale;                                              // 0x0F58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CDOBoxScaleMesh;                                          // 0x0F5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      NoLoggingString;                                          // 0x0F60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       LoggingText;                                              // 0x0F70(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                EveryoneTribeLoggingSetting;                              // 0x0F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WildDinosTribeLoggingSetting;                             // 0x0F9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AlliedSurvivorsTribeLoggingSetting;                       // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EnemySurvivorsTribeLoggingSetting;                        // 0x0FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EnemyDinosTribeLoggingSetting;                            // 0x0FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AlliedDinosTribeLoggingSetting;                           // 0x0FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<double>                                     LastTimeTribeLoggedForType;                               // 0x0FB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	class UParticleSystemComponent*                    ScannerLightParticleComponent;                            // 0x0FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowDetectionRange;                                       // 0x0FC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SupportsTribeLogging;                                     // 0x0FC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanConfigurePINBroadcastSettings;                         // 0x0FCA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanShowTargetDetectArea;                                  // 0x0FCB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0FCC(0x0004) MISSED OFFSET
	class FString                                      PIN_Set;                                                  // 0x0FD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     CurrentTargetDetectBoxExtent;                             // 0x0FE0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FVector                                     CurrentStructureDetectBoxExtent;                          // 0x0FEC(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                ReplicatedTribeLoggingSettings;                           // 0x0FF8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               ShowBroadcastRange;                                       // 0x0FFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlignDetectionBoxWithWorldUp;                             // 0x0FFD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlignBroadcastBoxWithWorldUp;                             // 0x0FFE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFowardActionToKeypad;                                  // 0x0FFF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForwardActionToKeypad;                                    // 0x1000(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1001(0x0003) MISSED OFFSET
	int                                                LastActivePINCodes;                                       // 0x1004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastDeactivatedPINCodes;                                  // 0x1008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowRangePreviewAfterPlacement;                           // 0x100C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x100D(0x0003) MISSED OFFSET
	class USoundBase*                                  AlarmActivationSound;                                     // 0x1010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AlarmDeactivationSound;                                   // 0x1018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ActiveParticleFX;                                         // 0x1020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalStructure*>                    StructuresPendingAutoDeactivation;                        // 0x1028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<double>                                     StructuresPendingAutoDeactivationTimes;                   // 0x1038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    CurrentTargetDetectBoxRotation;                           // 0x1048(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FRotator                                    CurrentStructureDetectBoxRotation;                        // 0x1054(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              RotationAngleIncrease;                                    // 0x1060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanChangeDetectionBoxRotation;                            // 0x1064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanChangeStructureBoxRotation;                            // 0x1065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnlyTriggerIfWalking;                                     // 0x1066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x1067(0x0001) MISSED OFFSET
	float                                              K2Node_CustomEvent_Delta7;                                // 0x1068(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x106C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Extent2;                               // 0x1070(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x107C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delta6;                                // 0x1080(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1084(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delta5;                                // 0x1088(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x108C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1090(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x1094(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Radius2;                               // 0x1098(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x109C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasFiltered_Target_in_the_Area_TargetLost;       // 0x10A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x10A9(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_NewParam;                              // 0x10AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_NewParam1;                             // 0x10B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_extent;                                // 0x10BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_radius;                                // 0x10C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x10CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delta8;                                // 0x10D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x10DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delta4;                                // 0x10E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x10E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delta3;                                // 0x10E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delta2;                                // 0x10EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x10F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue6;                     // 0x10F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x10F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x10FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue7;                     // 0x1100(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue7;                             // 0x1104(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Delta;                                 // 0x1108(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue8;                     // 0x110C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue8;                             // 0x1110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1114(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1115(0x0003) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1120(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1121(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x1124(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_NotEqual_BoolBool_ReturnValue;                   // 0x1134(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1135(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1136(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1137(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_CalcuateMeshAlpha_Fn_Alpha;                      // 0x1138(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue;              // 0x113C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x113D(0x0003) MISSED OFFSET
	float                                              CallFunc_CalcuateMeshAlpha_Fn_Alpha2;                     // 0x1140(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue2;             // 0x1144(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x1145(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasPendingPINActivation_Result;                  // 0x1146(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1147(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1148(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x1149(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x114A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x114B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x114C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x114D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x114E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue2;                    // 0x114F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x1150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1151(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x1152(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x1153(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1154(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x1155(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x1156(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x1158(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x1164(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode3;            // 0x1165(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x1166(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x1167(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_TekAlarm.Structure_TekAlarm_C");
		return ptr;
	}


	void InitSavedTribeLoggingSettings();
	void GetNextRotation(const struct FRotator& currentRotation, bool bDecrease, bool Roll, bool Pitch, bool Yaw, struct FRotator* NextRotation);
	void OnRep_CurrentStructureDetectBoxRotation();
	void OnRep_CurrentTargetDetectBoxRotation();
	void UpdateAutoDeactivation();
	void GetTargetTypesToChange(TArray<TEnumAsByte<ETekAlarmTargetTypes>>* ActiveTypes, TArray<bool>* ShouldActivate);
	void ToggleKeypadLink(class AShooterPlayerController* OptionalShooterPC);
	void AlignBoxedToWorldUp();
	void OnRep_CurrentStructureDetectBoxExtent();
	void OnRep_CurrentTargetDetectBoxExtent();
	void Is_Target_Detect_Box(bool* bIsBox);
	void IsStructureDetectBox(bool* bIsBox);
	void SetTargetDetectBoxExtent(const struct FVector& Extent);
	void Set_Target_Detect_Sphere_Radius(float Radius);
	void SetStructureDetectBoxExtent(const struct FVector& Extent);
	void SetStructureDetectSphereRadius(float Radius);
	void GetTribeLoggingSetting(TEnumAsByte<ETekAlarmTargetTypes> Type, int* Integer);
	void MakeReplicatedTribeLoggingSettings(int* TribeLoggingSettings);
	void GetMappedTribeLoggingInteger(int TribeLoggingState, int* TribeLoggingInteger);
	void BPChangedActorTeam();
	void ReceiveDestroyed();
	void STATIC_Has_Any_PINsSet(bool* Result);
	void OnRep_ShowAreaVisuals();
	void UpdateAreaVisualsVisibility();
	void BPContainerDeactivated();
	void GetTribeLoggingSettingForTargetType(TEnumAsByte<ETekAlarmTargetTypes> Type, int* Result);
	void GetTribeLogNameForType(TEnumAsByte<ETekAlarmTargetTypes> Type, class FString* Name);
	void TryTribeLogging(TEnumAsByte<ETekAlarmTargetTypes> Type);
	void GetNextTribeLoggingSetting(int CurrentSetting, int* NewSetting);
	void GetTribe_Logging_String(const class FString& TypeName, int CooldownInSeconds, class FString* Output);
	void HasPendingPINActivation(bool* Result);
	void GetPINDataByType(TEnumAsByte<ETekAlarmTargetTypes> Type, struct FTekAlarmPINData* Ret);
	void SetPINCodeInPINData(int pinCode, TEnumAsByte<ETekAlarmTargetTypes> Type);
	void GetMultiUseTitleWithDelay(float DelaySeconds, const struct FText& Title, class FString* Output);
	void GetPINDataByPIN(int PIN, struct FTekAlarmPINData* Res, int* retIndex);
	void CalcuateDelay(float CurrentDelay, float* NewDelay);
	void STATIC_PinCodeFlagsToString(int PinCodesFlag, class FString* Output);
	void Was_Pin_Code_Bit_Triggered(int Bit, bool* Ret, bool* Activated, bool* Deactivated);
	void STATIC_IsRelevantPinCode(int pinCode, bool* Ret, bool* IsDeactivation);
	void IsAreaVisualsLocallyVisible(bool* Result);
	void CalcuateMeshAlpha_Fn(class UStaticMeshComponent* Mesh1, class UStaticMeshComponent* Mesh2, double TimeSince, float* Alpha);
	void BPContainerActivated();
	void SetActivateStateToStructure(class APrimalStructure* PrimalStructure, bool toggle, bool NewActivateState, bool Force);
	void Get_Octree_Data_For_Structure_Detect_Area(float* Radius, struct FVector* Location);
	void Update_Structures_in_Area_to_Goal_State();
	void Update_Structure_Detect_Sphere();
	void UpdateStructureDetectBox();
	void SwitchStructureDetectStyle();
	void STATIC_IsActorInBoxArea(class AActor* Actor, class UBoxComponent* BoxComponent, bool* Value);
	void GetOctreeCheckType(TEnumAsByte<EServerOctreeGroup>* Value);
	void Get_Octree_Data_ForTarget_Detect_Area(float* Radius, struct FVector* Location);
	void STATIC_HasFiltered_Target_in_the_Area(bool* TargetLost);
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	bool BPApplyPinCode(class AShooterPlayerController** ForPC, int* appledPinCode, bool* bIsSetting, int* TheCustomIndex);
	void Get_Detect_Area_Adjust_Speed(float* AdjustSpeed);
	void ReceiveBeginPlay();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void UpdateTargetDetectSphere();
	void UpdateTargetDetectBox();
	void BPPlacedStructure(class APlayerController** ForPC);
	void Switch_Target_Detect_Style();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void MulticastTargetDetectStyleChange();
	void AdjustTargetDetectBoxDepthX(float Delta);
	void AdjustTargetDetectBoxWidthY(float Delta);
	void MulticastTargetDetectBoxExtent(const struct FVector& Extent);
	void AdjustTargetDetectBoxHeightZ(float Delta);
	void SignalServerToggleActivateState();
	void AdjustTargetDetectSphereRadius(float Delta);
	void MulticastTargetDetectSphereRadius(float Radius);
	void ScanTargetDetectArea();
	void DrawDebugSphere(const struct FVector& NewParam, float NewParam1);
	void MulticastStructureDetectStyleChange();
	void MulticastStructureDetectBoxExtent(const struct FVector& Extent);
	void MulticastStructureDetectSphereRadius(float Radius);
	void AdjustStructureDetectBoxDepthX(float Delta);
	void AdjustStructureDetectBoxWidthY(float Delta);
	void AdjustStructureDetectBoxHeightZ(float Delta);
	void AdjustStructureDetectSphereRadius(float Delta);
	void CalcuateTargetDetectAlpha();
	void CalcuateStructureDetectAlpha();
	void UpdateAreaVisualsVisibilityEvent();
	void MulticastShowPreview();
	void MulticastPlayActivationSound();
	void MulticastPlayDeactivationSound();
	void ExecuteUbergraph_Structure_TekAlarm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
