#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Base_Horde_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C
// 0x08A9 (0x1731 - 0x0E88)
class ASupplyCrate_Base_Horde_C : public APrimalStructureItemContainer_HordeCrate
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnInAttachedPSC;                                       // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_SupplyCrate_C*            PrimalInventoryBP_SupplyCrate_C1;                         // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SpawningInMaterial;                                       // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          OrigMat;                                                  // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class AHordeCrateManager_Extinction_C*             Manager;                                                  // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnRadius;                                              // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0EBC(0x0004) MISSED OFFSET
	class AHordeSpawnNetwork_C*                        VarNetwork;                                               // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartingNewWave;                                         // 0x0EC8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0EC9(0x0007) MISSED OFFSET
	struct FHordeCrateDifficultyLevel                  HordeParams;                                              // 0x0ED0(0x00B0) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                MinNumOfWaves;                                            // 0x0F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumOfWaves;                                            // 0x0F84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WavesToCommence;                                          // 0x0F88(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldDebug;                                             // 0x0F8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0F8D(0x0003) MISSED OFFSET
	TArray<class APrimalDinoCharacter*>                HordeDinos;                                               // 0x0F90(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                TotalNPCsToSpawn;                                         // 0x0FA0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitiated;                                               // 0x0FA4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0FA5(0x0003) MISSED OFFSET
	int                                                MinNumOfSubwaves;                                         // 0x0FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumOfSubwaves;                                         // 0x0FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumOfSubwaves;                                            // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenSubwaves;                                      // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NPCsLeftToSpawn;                                          // 0x0FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentSubwave;                                           // 0x0FBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentWave;                                              // 0x0FC0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0FC4(0x0004) MISSED OFFSET
	class UClass*                                      NPCClass;                                                 // 0x0FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VarLevel;                                                 // 0x0FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NPCCounter;                                               // 0x0FD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentNPCsToSpawn;                                       // 0x0FD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProgressCheckInterval;                                    // 0x0FDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWaveCooldown;                                            // 0x0FE0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0FE1(0x0003) MISSED OFFSET
	int                                                StartingWaveNPCCount;                                     // 0x0FE4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDinoDelay;                                           // 0x0FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnOffset;                                              // 0x0FEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             EventStart;                                               // 0x0FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             WaveStart;                                                // 0x0FF8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinNumOfNPcAtCrate;                                       // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartingLoc;                                              // 0x1004(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StartingRot;                                              // 0x1010(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasLanded;                                               // 0x101C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x101D(0x0003) MISSED OFFSET
	class AActor*                                      LocationEmitter;                                          // 0x1020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartInitiationAfterSpawn;                               // 0x1028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1029(0x0003) MISSED OFFSET
	float                                              HordeInitiationInterval;                                  // 0x102C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseQualityScaling;                                       // 0x1030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1031(0x0003) MISSED OFFSET
	int                                                CurrentQualityTier;                                       // 0x1034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBarrier;                                              // 0x1038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBarrierActive;                                           // 0x1039(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBarrierForIntermission;                               // 0x103A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFirstAttackNotif;                                        // 0x103B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHalfHealthNotif;                                         // 0x103C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x103D(0x0003) MISSED OFFSET
	int                                                StartingShieldUnits;                                      // 0x1040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingShieldHealth;                                     // 0x1044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntermissionShieldHealth;                                 // 0x1048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IntermissionShieldUnits;                                  // 0x104C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialCrateHealth;                                       // 0x1050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPawnsInArea;                                             // 0x1054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHordeTypeEnum>                        HordeType;                                                // 0x1055(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x1056(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    SmokeEmitter;                                             // 0x1058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              NodeActors;                                               // 0x1060(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bDestroyStructuresInRadius;                               // 0x1070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseIntermission;                                         // 0x1071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInIntermission;                                        // 0x1072(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsHordeComplete;                                         // 0x1073(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1074(0x0004) MISSED OFFSET
	double                                             IntermissionStartTime;                                    // 0x1078(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NPCsLeft;                                                 // 0x1080(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TempNPC;                                                  // 0x1084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAdmin;                                                 // 0x1088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1089(0x0003) MISSED OFFSET
	float                                              RemainingIntermissionTime;                                // 0x108C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AHorde_Spline_Path_C*                        LastUsedSpline;                                           // 0x1090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                MinItemsToGive;                                           // 0x1098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxItemsToGive;                                           // 0x109C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnInMatineeLength;                                     // 0x10A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishedSpawn;                                           // 0x10A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOpenSeqInitiated;                                        // 0x10A5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x10A6(0x0002) MISSED OFFSET
	class UParticleSystem*                             MeteorImpactParticleSystem;                               // 0x10A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AStorageBox_HordeShield_C*                   HordeShield;                                              // 0x10B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FVector                                     MeteorImpactScale;                                        // 0x10B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PctTtlAggroCrate;                                         // 0x10C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAdminSupport;                                         // 0x10C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x10C9(0x0003) MISSED OFFSET
	float                                              IntermissionTimeLeft;                                     // 0x10CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        aDino;                                                    // 0x10D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalIntermissionTime;                                    // 0x10D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasClaimedItems;                                         // 0x10DC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x10DD(0x0003) MISSED OFFSET
	double                                             LastNPCKill;                                              // 0x10E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRemainingSignalSent;                                     // 0x10E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x10E9(0x0003) MISSED OFFSET
	int                                                MinimumWavesToCommence;                                   // 0x10EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LegendaryDiffNPCScale;                                    // 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDiffNPCScale;                                      // 0x10F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             MatineeBeginTime;                                         // 0x10F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsKillDamage;                                            // 0x1100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanCompleteDefense;                                       // 0x1101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x6];                                       // 0x1102(0x0006) MISSED OFFSET
	class USoundBase*                                  IntermissionEndWave0Sound;                                // 0x1108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  IntermissionEndWave1Sound;                                // 0x1110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HordeLoseSound;                                           // 0x1118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StartHordeSound;                                          // 0x1120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EndWave0Sound;                                            // 0x1128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EndWave1Sound;                                            // 0x1130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HordeWinSound;                                            // 0x1138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundAttenuation*                           SoundAttenuationSettings;                                 // 0x1140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TribeAssigned;                                            // 0x1148(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x1149(0x0003) MISSED OFFSET
	int                                                AssignedTribeID;                                          // 0x114C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x1150(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x1151(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x1152(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x1153(0x0001) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x1154(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x1158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x115C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x1160(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x1161(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x1162(0x0002) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x1164(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x1168(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue3;                  // 0x116C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x116D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x116E(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1170(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x1174(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x1178(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1179(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue3;                    // 0x117C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x1180(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x1184(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x1185(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x1186(0x0002) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetNumOfNPCAtCrate_NumNPC;                       // 0x1190(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0xC];                                       // 0x1194(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_Conv_VectorToTransform_ReturnValue;              // 0x11A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x11D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMatinee_HordeMode_C*                        CallFunc_FinishSpawningActor_ReturnValue;                 // 0x11D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x11E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x11EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x8];                                       // 0x11F8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x1200(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue2;        // 0x1230(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ANote_Blueprint_MatineeTest_C*               CallFunc_FinishSpawningActor_ReturnValue2;                // 0x1238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x1240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_ShieldRadiusUnits;                     // 0x1248(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_ShieldHealth;                          // 0x124C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x1250(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x125C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1260(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x1268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x1270(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x1274(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_LastIndex_ReturnValue;                     // 0x1278(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x127C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x127D(0x0003) MISSED OFFSET
	int                                                CallFunc_SelectInt_ReturnValue;                           // 0x1280(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Get_Item;                                  // 0x1284(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHordeCrateWave                             CallFunc_Array_Get_Item2;                                 // 0x1288(0x0060) (Transient, DuplicateTransient)
	int                                                CallFunc_Array_Get_Item3;                                 // 0x12E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomIntegerInRange_ReturnValue;                // 0x12EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Get_Item4;                                 // 0x12F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Get_Item5;                                 // 0x12F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BPGetWeightedRandomIndex_ReturnValue;            // 0x12F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomIntegerInRange_ReturnValue2;               // 0x12FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      CallFunc_Array_Get_Item6;                                 // 0x1300(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue2;                    // 0x1308(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BPGetWeightedRandomIndex_ReturnValue2;           // 0x130C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue4;                  // 0x1310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x1311(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_Array_Get_Item7;                                 // 0x1318(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue4;                    // 0x1320(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x1324(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x1325(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1326(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x1];                                       // 0x1327(0x0001) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x1328(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x132C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x1330(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1334(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x1338(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x133C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x1340(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x1344(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1350(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x1354(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x1360(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x1364(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TimerExists_ReturnValue;                      // 0x1368(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x1369(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x136C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x1370(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x1371(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue5;                    // 0x1374(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue6;                         // 0x1378(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue6;                    // 0x137C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x1380(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_LastIndex_ReturnValue2;                    // 0x1384(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue3;                     // 0x1388(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x1389(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x2];                                       // 0x138A(0x0002) MISSED OFFSET
	int                                                CallFunc_SelectInt_ReturnValue2;                          // 0x138C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHordeCrateWave                             CallFunc_Array_Get_Item8;                                 // 0x1390(0x0060) (Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue7;                       // 0x13F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x13F4(0x0004) MISSED OFFSET
	TArray<class APrimalDinoCharacter*>                CallFunc_GetNPCSCloseToCrate_NPCsAtCrate;                 // 0x13F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1408(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue8;                       // 0x140C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue4;                     // 0x1410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x1411(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x1414(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x1420(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X3;                                  // 0x1424(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0x1428(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0x142C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue2;                 // 0x1430(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1434(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x1438(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x143C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AStorageBox_HordeShield_C*                   K2Node_CustomEvent_TekShield;                             // 0x1440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue3;                         // 0x1448(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_IntermissionSeconds;                   // 0x1454(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x1458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue9;                       // 0x1460(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Divide_IntInt_ReturnValue;                       // 0x1464(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_SelectInt_ReturnValue3;                          // 0x1468(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetOriginSplinePoints_OutLoc;                    // 0x146C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AHorde_Spline_Path_C*                        CallFunc_GetOriginSplinePoints_SplineData;                // 0x1478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetOriginSplinePoints_DelayTime;                 // 0x1480(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x4];                                       // 0x1484(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_SpawnDino_ReturnValue;                           // 0x1488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue7;                    // 0x1490(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x1494(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x1498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x14A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x14A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x14A9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Conv_LinearColorToVector_ReturnValue;            // 0x14AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x14B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x14BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x14BD(0x0003) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_Array_Get_Item9;                                 // 0x14C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      CallFunc_GetQualityParticleTemplate_ATemplate;            // 0x14C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue7;                         // 0x14D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x14D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x14D5(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue2;      // 0x14D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_IntFloat_ReturnValue;                   // 0x14E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x14E4(0x0004) MISSED OFFSET
	class AEmitter*                                    K2Node_DynamicCast_AsEmitter;                             // 0x14E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x14F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x14F1(0x0003) MISSED OFFSET
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x14F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x14F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x14F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x6];                                       // 0x14FA(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x1500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Add_DoubleFloat_ReturnValue;                     // 0x1508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetNPCsLeft_NPCleft;                             // 0x1510(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue5;                  // 0x1514(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1515(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x2];                                       // 0x1516(0x0002) MISSED OFFSET
	int                                                CallFunc_RandomIntegerInRange_ReturnValue3;               // 0x1518(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x151C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue5;                     // 0x1520(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x1521(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x1522(0x0002) MISSED OFFSET
	int                                                CallFunc_SelectInt_ReturnValue4;                          // 0x1524(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item10;                                // 0x1528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue8;                         // 0x1530(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x1534(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1535(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1536(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue5;                           // 0x1537(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_K2_GetTimerRemainingTime_ReturnValue;            // 0x1538(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x153C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x153D(0x0003) MISSED OFFSET
	TArray<class AActor*>                              K2Node_MakeArray_Array;                                   // 0x1540(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue6;                           // 0x1550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x7];                                       // 0x1551(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x1558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x1560(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsReadyForNextWave_bIsReady;                     // 0x156C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsReadyForNextWave_bIsFinished;                  // 0x156D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x2];                                       // 0x156E(0x0002) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x1570(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1580(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x1581(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue10;                      // 0x1584(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_Array_Get_Item11;                                // 0x1588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x1590(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x7];                                       // 0x1591(0x0007) MISSED OFFSET
	class APlayerPawnTest_C*                           K2Node_DynamicCast_AsPlayerPawnTest_C;                    // 0x1598(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x15A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x15A1(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x15A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x15B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x15B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x15B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x15BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x1];                                       // 0x15BB(0x0001) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue3;                 // 0x15BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x15C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue6;                  // 0x15C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x15C9(0x0003) MISSED OFFSET
	float                                              CallFunc_TimeSince_Network_ReturnValue;                   // 0x15CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue11;                      // 0x15D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x15D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x15D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x15D6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x15D7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x15D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x15D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x2];                                       // 0x15DA(0x0002) MISSED OFFSET
	int                                                K2Node_CustomEvent_DmgLevel;                              // 0x15DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x15E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x15E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x2];                                       // 0x15E2(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x15E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x15E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue9;                         // 0x15F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ApplyRadialDamage_ReturnValue;                   // 0x15F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue6;                     // 0x15F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x15FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x15FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue6;                     // 0x15FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MakeLiteralFloat_ReturnValue;                    // 0x1600(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue7;                     // 0x1604(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MakeLiteralFloat_ReturnValue2;                   // 0x1608(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x160C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue2;          // 0x1610(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_FFloor_ReturnValue2;                             // 0x1620(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue12;                      // 0x1624(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_SelectInt_ReturnValue5;                          // 0x1628(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x162C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x162D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x2];                                       // 0x162E(0x0002) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item12;                                // 0x1630(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x1638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x7];                                       // 0x1641(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue2;            // 0x1648(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x1650(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x1651(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x2];                                       // 0x1652(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x1654(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1658(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x1659(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue10;                        // 0x165C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable6;                          // 0x1660(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x4];                                       // 0x1664(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue5;                        // 0x1668(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue7;                        // 0x1670(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x7];                                       // 0x1671(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item13;                                // 0x1678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x1680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue11;                        // 0x1688(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x4];                                       // 0x168C(0x0004) MISSED OFFSET
	class ABuff_HordeRouteManager_C*                   K2Node_DynamicCast_AsBuff_HordeRouteManager_C;            // 0x1690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x1698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x3];                                       // 0x1699(0x0003) MISSED OFFSET
	float                                              CallFunc_TimeSince_Network_ReturnValue2;                  // 0x169C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable7;                          // 0x16A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue2;            // 0x16A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue8;                        // 0x16A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x16A6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x1];                                       // 0x16A7(0x0001) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item14;                                // 0x16A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue12;                        // 0x16B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x16B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue13;                      // 0x16B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x4];                                       // 0x16BC(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item15;                                // 0x16C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue9;                        // 0x16C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAttacking_ReturnValue;                         // 0x16C9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x16CA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x16CB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x16CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger2_CmpSuccess;                         // 0x16CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x2];                                       // 0x16CE(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x16D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x4];                                       // 0x16DC(0x0004) MISSED OFFSET
	class APlayerController*                           K2Node_CustomEvent_PC;                                    // 0x16E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x16E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x16F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x7];                                       // 0x16F1(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue;                          // 0x16F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x1700(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x1708(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x7];                                       // 0x1709(0x0007) MISSED OFFSET
	class AShooterPlayerState*                         K2Node_DynamicCast_AsShooterPlayerState;                  // 0x1710(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x1718(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x7];                                       // 0x1719(0x0007) MISSED OFFSET
	class ADroppedItem*                                CallFunc_EjectItem_ReturnValue;                           // 0x1720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsInTribe_ReturnValue;                           // 0x1728(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x3];                                       // 0x1729(0x0003) MISSED OFFSET
	int                                                CallFunc_GetTribeId_ReturnValue;                          // 0x172C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue7;                  // 0x1730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Base_Horde.SupplyCrate_Base_Horde_C");
		return ptr;
	}


	void GetMaxSplineDistance(float* MaxDistanceFromCrate);
	void PlayHordeAudio(class USoundBase* audio);
	void BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void BPPostInitializeComponents();
	void IntermissionEnd();
	void OnRep_CurrentWave();
	bool CanForceComplete();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void PushAllDinosOutward();
	void BPUnstasis();
	bool BPPreventStasis();
	void BPTriggerStasisEvent();
	void RunLandSequence();
	void GenerateLoot();
	void GetNPCsLeft(int* NPCleft);
	void ActivateHordeBarrier(int RadiusUnits, float ShieldHealth);
	void OnRep_bOpenSeqInitiated();
	void GetQualityParticleTemplate(unsigned char AQuality, class UClass** ATemplate);
	void OpenCrate();
	void AddToAggro(TArray<class APrimalDinoCharacter*>* DinosToAggro);
	void GetNPCSCloseToCrate(TArray<class APrimalDinoCharacter*>* NPCsAtCrate);
	void CheatEndWave();
	void CheatEndHordeMode();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void KillExistingNPCS();
	void RemoveHordeDino(class APrimalDinoCharacter* APrimalDino, bool RemoveFromArray);
	void DestroyExistingStructures(float FRadius);
	void SendClientNotification(const class FString& Message);
	void RemoveBarrierActive();
	void RemoveBarrierAttack(bool bIsDestroyed);
	void GetQualityInfo(int intTier, class FString* StringQuality, struct FLinearColor* ReturnVarColor);
	void Initiate_Horde_Mode();
	void CrateCleanup();
	void NPCAttackCrate();
	void GetNumOfNPCAtCrate(int* NumNPC);
	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	void EndHordeMode();
	void GetOctreeNPCs();
	void PrepareNPCForRouting(class APrimalDinoCharacter* APrimalDino, bool bIsSpawned, const struct FSpawnPointStruct& LocationNode, class AHorde_Spline_Path_C* WorldSpline);
	void STATIC_ConfigureWaves();
	void IsReadyForNextWave(bool* bIsReady, bool* bIsFinished);
	void UserConstructionScript();
	void CheckProgress();
	void BeginWaveSpawnTimer();
	void SpawnWave();
	void RouteExistingActors();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void CheckHordeInitiation();
	void DeployHordeBarrier(int ShieldRadiusUnits, float ShieldHealth);
	void SpawnInitiationParticles();
	void DeactivateHordeShield();
	void CancelIntermission();
	void GetDinoCount();
	void GiveItems();
	void SetShieldColor(class AStorageBox_HordeShield_C* TekShield);
	void SetClientTime(float IntermissionSeconds);
	void CheckHiding();
	void PlayCameraShake();
	void GetClientTime();
	void EjectItems();
	void ShowLostIndicator();
	void MC_HasLanded();
	void MC_ToggleRelevancy();
	void ActivateLowHealthVFX(int DmgLevel);
	void MULTI_WaveEnd();
	void MULTI_IntermissionEnd();
	void MULTI_HordeWin();
	void PlayHordeStartAudio();
	void AssignCrateToTribe(class APlayerController* PC);
	void ExecuteUbergraph_SupplyCrate_Base_Horde(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
