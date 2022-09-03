#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionType_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Race.MissionType_Race_C
// 0x1F75 (0x2AC8 - 0x0B53)
class AMissionType_Race_C : public AMissionTypeBlueprintBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0B53(0x0005) MISSED OFFSET
	TArray<class AMissionTrigger*>                     Checkpoints;                                              // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame)
	TArray<struct FRacePlayerData>                     RaceData;                                                 // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              ExtraRaceSetupDuration;                                   // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnRaceDinoForPlayers;                                  // 0x0B7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B7D(0x0003) MISSED OFFSET
	float                                              DinoSpawnDistance;                                        // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B84(0x0004) MISSED OFFSET
	struct FDinoSetup                                  SpawnedDino;                                              // 0x0B88(0x00F0) (Edit, BlueprintVisible)
	TArray<class FString>                              SpawnedDinoNames;                                         // 0x0C78(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      DinoTypeDesc;                                             // 0x0C88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<struct FLootTableEntry>                     RewardLootTable_FirstPlace;                               // 0x0C98(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLootTableEntry>                     RewardLootTable_SecondPlace;                              // 0x0CA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLootTableEntry>                     RewardLootTable_ThirdPlace;                               // 0x0CB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RewardXPRatio_FirstPlace;                                 // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RewardXPRatio_SecondPlace;                                // 0x0CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RewardXPRatio_ThirdPlace;                                 // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RewardXPRatio_FourthOrLowerPlace;                         // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePowerups;                                              // 0x0CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0CD9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              RacePowerUps;                                             // 0x0CE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActivePowerUps;                                           // 0x0CF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AMissionTrigger*>                     PowerUpTriggers;                                          // 0x0D00(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_MissionStart;                           // 0x0D10(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_RaceBegin;                              // 0x0DB0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_CheckpointPassed;                       // 0x0E50(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PassingOtherPlayer;                     // 0x0EF0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_WasPassed;                              // 0x0F90(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_FinishedRaceFirstPlace;                 // 0x1030(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_FinishedRaceRunnerup;                   // 0x10D0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_MissionCompleteSuccess;                 // 0x1170(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_MissionCompleteFail;                    // 0x1210(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        previous_rankings;                                        // 0x12B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeBeforeRaceStartsWhenToPlayGetReadyReaction;           // 0x12C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x12C4(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_GetReady;                               // 0x12C8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PassingOtherPlayer_InFirstPlace;        // 0x1368(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             ServerSpawnLocations;                                     // 0x1408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       StartingLineTagName;                                      // 0x1418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingLocationDistanceMultiplier;                       // 0x1420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1424(0x0004) MISSED OFFSET
	class UClass*                                      StartingRaceBuff;                                         // 0x1428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMissionServerSidePoint*                     StartingLine;                                             // 0x1430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_PassingOtherPlayer_InSecondPlace;       // 0x1438(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PassingOtherPlayer_InThirdPlace;        // 0x14D8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_WasPassed_InLastPlace;                  // 0x1578(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                                     time_since_left_dino;                                     // 0x1618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       able_to_play_return_to_dino_reaction;                     // 0x1628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        index_of_player_controller_of_last_rider;                 // 0x1638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APrimalDinoCharacter*>                mounted_dinos;                                            // 0x1648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AShooterPlayerController*>            mounted_players;                                          // 0x1658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_ReminderToGetOnDino;                    // 0x1668(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_GenericRespawn;                         // 0x1708(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Has_Played_Low_Time_Remaining_Warning;                    // 0x17A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x17A9(0x0003) MISSED OFFSET
	float                                              Low_Time_Remaining_Warning_Time;                          // 0x17AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_TimeRunningOut;                         // 0x17B0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bTriggerPowerupsOnlyOncePerPlayer;                        // 0x1850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1851(0x0003) MISSED OFFSET
	float                                              time_before_spawning_dinos_to_play_mount_up_reaction;     // 0x1854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_MountUp;                                // 0x1858(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              time_before_triggering_get_back_on_reaction;              // 0x18F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x18FC(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_LeftBounds;                             // 0x1900(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_Faster_Encouragement;                   // 0x19A0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_Winning_Encouragement;                  // 0x1A40(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Interval_to_play_encouragement_reactions;                 // 0x1AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1AE4(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_FirstPlaceLeaderboard;                  // 0x1AE8(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PlacedInTop10;                          // 0x1B88(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RaceDuration;                                             // 0x1C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SplineKeyName;                                            // 0x1C2C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1C34(0x0004) MISSED OFFSET
	class AMissionSpline*                              SplineToFollow;                                           // 0x1C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Was_Ever_Using_Timer;                                     // 0x1C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1C41(0x0003) MISSED OFFSET
	float                                              Higher_Remaining_Warning_Time;                            // 0x1C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Uses_Higher_Time_Remaining_Reaction;                      // 0x1C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Played_Higher_Low_Time_Remaining_Warning;             // 0x1C49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x1C4A(0x0006) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_TimeRunningOut_Higher;                  // 0x1C50(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_TimeFinished;                           // 0x1CF0(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AShooterCharacter*>                   RepPlayerPawns;                                           // 0x1D90(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TimePerCheckpoint;                                        // 0x1DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialTimeBeforeCheckpoint;                              // 0x1DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LocalCheckPointIndex;                                     // 0x1DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportOutOfBounds;                                     // 0x1DAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1DAD(0x0003) MISSED OFFSET
	float                                              OutOfBoundsRange;                                         // 0x1DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeCanBeOutOfBounds;                                     // 0x1DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      OverrideObjectiveString;                                  // 0x1DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeAfterCompleteToDestroyDino;                           // 0x1DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterCompleteToTeleportBack;                          // 0x1DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopDrawingSplineAtCheckpoint;                           // 0x1DD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportingCharsSetsMovementMode;                        // 0x1DD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         TeleportingCharsNewMovementMode;                          // 0x1DD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x5];                                       // 0x1DD3(0x0005) MISSED OFFSET
	struct FText                                       RaceFinishedFormattedText;                                // 0x1DD8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bReRideDinoOnDinoRespawn;                                 // 0x1E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRespawnDinoAtLastCheckpoint;                             // 0x1E01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckOverlappedCheckpointFX;                             // 0x1E02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x5];                                       // 0x1E03(0x0005) MISSED OFFSET
	TArray<bool>                                       bCharsHitLastCheckpointFX;                                // 0x1E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               TPPlayersToStartBeforeDinosSpawn;                         // 0x1E18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideIndicatorOfOtherPlayers;                             // 0x1E19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportOOBWhenPassedCurrCheckpoint;                     // 0x1E1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x1E1B(0x0001) MISSED OFFSET
	float                                              ExtraRaceSetupDuration_Alt;                               // 0x1E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseExtraRaceSetupDur_Alt;                                // 0x1E20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAddedTeleportBuff;                                    // 0x1E21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasAddedAConsolePlayer;                                  // 0x1E22(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x1E23(0x0001) MISSED OFFSET
	float                                              ExtraRaceSetupDurationForConsole;                         // 0x1E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x1E28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x1E29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x1E2A(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x1E2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1E30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x1E34(0x0004) MISSED OFFSET
	class AMissionTrigger*                             K2Node_Event_Trigger;                                     // 0x1E38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_OtherActor;                                  // 0x1E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_Event_OtherComp;                                   // 0x1E48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_OtherBodyIndex;                              // 0x1E50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x1E54(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x1E58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1E60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x1E61(0x0007) MISSED OFFSET
	class AMissionTrigger_RaceCheckpoint_C*            K2Node_DynamicCast_AsMissionTrigger_RaceCheckpoint_C;     // 0x1E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x1E71(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1E78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1E80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x1E81(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x1E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1E90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1E91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x6];                                       // 0x1E92(0x0006) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_GetRaceShooterPCAndPawn_ShooterPC;               // 0x1E98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetRaceShooterPCAndPawn_ShooterChar;             // 0x1EA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1EA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasPlayerHitTrigger_HasHitBefore;                // 0x1EA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryIncrementCheckpoint_Success;                  // 0x1EAA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryIncrementCheckpoint_AtEnd;                    // 0x1EAB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Power_Up_Active_for_Player_IsValid;           // 0x1EAC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x1EAD(0x0003) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetShooterCharacterFromPawn_ReturnValue;         // 0x1EB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter2;                // 0x1EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x1EC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x1EC1(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetCharacterController_ReturnValue;              // 0x1EC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_Event_ForPlayer;                                   // 0x1ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_Event_ForController;                               // 0x1ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bLastPhaseSuccess2;                          // 0x1EE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x1EE1(0x0003) MISSED OFFSET
	float                                              K2Node_Event_XPRewarded;                                  // 0x1EE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class UPrimalItem*>                         K2Node_Event_ItemsRewarded;                               // 0x1EE8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	int                                                CallFunc_RacePlayerData_NumCheckpoints_ReturnValue;       // 0x1EF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x1EFC(0x0004) MISSED OFFSET
	class FString                                      CallFunc_GetShortName_ReturnValue;                        // 0x1F00(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x1F10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x1F14(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTime;                                   // 0x1F20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x1F24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetCurrentMissionPhaseName_ReturnValue;          // 0x1F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<int>                                        CallFunc_RacePlayerData_GetAllPlayerRankings_OutRankings; // 0x1F38(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x1F48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x1F49(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Find_ReturnValue;                          // 0x1F4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x1F50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x1F51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x2];                                       // 0x1F52(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_GetCurrentMissionPhaseName_ReturnValue2;         // 0x1F54(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue3;                // 0x1F5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x1F5D(0x0003) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x1F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Contains_ReturnValue;                      // 0x1F68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x1F69(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x1F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue2;                            // 0x1F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C;            // 0x1F80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x1F88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x1F89(0x0007) MISSED OFFSET
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C2;           // 0x1F90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x1F98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x1F99(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x1F9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x1FA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x1FA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x1FA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_OldPhaseName3;                         // 0x1FAC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_NewPhaseName3;                         // 0x1FB4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_OldPhaseName2;                         // 0x1FBC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_NewPhaseName2;                         // 0x1FC4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x1FCC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x1FDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x1FDD(0x0003) MISSED OFFSET
	class AMissionTrigger*                             CallFunc_Array_Get_Item;                                  // 0x1FE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class APrimalCharacter*>                    CallFunc_GetAllCharactersTouchingTrigger_OutCharacters;   // 0x1FE8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue2;                 // 0x1FF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x1FF9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1FFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item2;                                 // 0x2000(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors;   // 0x2008(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x2018(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLoadingSaveGame_ReturnValue;                   // 0x2019(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x201A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RacePlayerData_FixupControllers_ReturnValue;     // 0x201B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                                       // 0x201C(0x0004) MISSED OFFSET
	class AMissionDispatcher*                          K2Node_DynamicCast_AsMissionDispatcher;                   // 0x2020(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x2028(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue3;                 // 0x2029(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x202A(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item3;                                 // 0x202C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x2034(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x2035(0x0003) MISSED OFFSET
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors2;  // 0x2038(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2048(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item4;                                 // 0x204C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue;                 // 0x2054(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue2;                  // 0x2055(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x2];                                       // 0x2056(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item5;                                 // 0x2058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue4;                 // 0x2060(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue3;                  // 0x2061(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x2];                                       // 0x2062(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item6;                                 // 0x2064(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue4;                  // 0x206C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x206D(0x0003) MISSED OFFSET
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors3;  // 0x2070(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x2080(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue2;                // 0x2084(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue5;                 // 0x2085(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x2086(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item7;                                 // 0x2088(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors4;  // 0x2090(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters;            // 0x20A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x20B0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x20BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Len_ReturnValue;                                 // 0x20C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x20CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x20CD(0x0003) MISSED OFFSET
	class AMissionTrigger*                             CallFunc_Array_Get_Item8;                                 // 0x20D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue6;                 // 0x20D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x20D9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x20DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x20E8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_FindLookAtRotation_ReturnValue;                  // 0x20F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x2100(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_SelectRotator_ReturnValue;                       // 0x2104(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x2110(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x2114(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item9;                                 // 0x2118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x2120(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x2148(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x7];                                       // 0x2149(0x0007) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x2150(0x0050) (Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x21A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x21A4(0x0004) MISSED OFFSET
	TArray<class AMissionServerSidePoint*>             CallFunc_GetAllMissionServerSidePointsWithKey_OutServerSidePointActors;// 0x21A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AMissionServerSidePoint*                     CallFunc_Array_Get_Item10;                                // 0x21B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x21C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetSpawnPointsForStartingLine_ForwardRot;        // 0x21C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x21D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x21D1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue7;                       // 0x21D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue8;                       // 0x21D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x21DC(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue2;                     // 0x21E0(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument2;                    // 0x2208(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x2258(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue9;                       // 0x2268(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x226C(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x2270(0x0028) (Transient, DuplicateTransient)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayerCharactersInvolvedInMission_OutPlayerCharacters;// 0x2298(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x22A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterCharacter*                           CallFunc_Array_Get_Item11;                                // 0x22B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue10;                      // 0x22C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetSpawnPointsForStartingLine_ForwardRot2;       // 0x22C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue3;                     // 0x22D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x22D1(0x0007) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters2;           // 0x22D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue11;                      // 0x22E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x4];                                       // 0x22EC(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item12;                                // 0x22F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x22F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x22F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x6];                                       // 0x22FA(0x0006) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x2300(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue;                      // 0x2308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x2310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x2318(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x2319(0x0007) MISSED OFFSET
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C3;           // 0x2320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x2328(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x2329(0x0003) MISSED OFFSET
	float                                              CallFunc_GetBestTimeForPlayer_BestValidTime;              // 0x232C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2330(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x3];                                       // 0x2331(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x2334(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue12;                      // 0x2338(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x4];                                       // 0x233C(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item13;                                // 0x2340(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x2348(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x7];                                       // 0x2349(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_ObjectToString_ReturnValue;                 // 0x2350(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x2360(0x0028) (Transient, DuplicateTransient)
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x2388(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument3;                    // 0x2390(0x0050) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x23E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x7];                                       // 0x23E1(0x0007) MISSED OFFSET
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array2;                                  // 0x23E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue2;                             // 0x23F8(0x0028) (Transient, DuplicateTransient)
	struct FVector                                     CallFunc_Array_Get_Item14;                                // 0x2420(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x4];                                       // 0x242C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_TextToString_ReturnValue2;                  // 0x2430(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_K2_TeleportTo_ReturnValue;                       // 0x2440(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x3];                                       // 0x2441(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x2444(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item15;                                // 0x2448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_OldPhaseName;                          // 0x2450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_NewPhaseName;                          // 0x2458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue7;                 // 0x2461(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x2];                                       // 0x2462(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item16;                                // 0x2464(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x4];                                       // 0x246C(0x0004) MISSED OFFSET
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors5;  // 0x2470(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue8;                 // 0x2480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x2481(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item17;                                // 0x2484(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x4];                                       // 0x248C(0x0004) MISSED OFFSET
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors6;  // 0x2490(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AMissionServerSidePoint*>             CallFunc_GetAllMissionServerSidePointsWithKey_OutServerSidePointActors2;// 0x24A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AMissionServerSidePoint*                     CallFunc_Array_Get_Item18;                                // 0x24B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue13;                      // 0x24B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue4;                     // 0x24BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x3];                                       // 0x24BD(0x0003) MISSED OFFSET
	int                                                CallFunc_FinalizeMissionPrep_ReturnValue;                 // 0x24C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x24C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters3;           // 0x24D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue14;                      // 0x24E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue7;                // 0x24E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue15;                      // 0x24F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x24F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x3];                                       // 0x24F5(0x0003) MISSED OFFSET
	struct FCharacterAndControllerPair                 CallFunc_Array_Get_Item19;                                // 0x24F8(0x0010) (Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue16;                      // 0x2508(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x4];                                       // 0x250C(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue2;                     // 0x2510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue5;                     // 0x2518(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x7];                                       // 0x2519(0x0007) MISSED OFFSET
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C4;           // 0x2520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x2528(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x2529(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x252C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x2530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x3];                                       // 0x2531(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Find_ReturnValue2;                         // 0x2534(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters4;           // 0x2538(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x2548(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue6;                     // 0x2549(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x6];                                       // 0x254A(0x0006) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters5;           // 0x2550(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Loop_Counter_Variable6;                          // 0x2560(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x4];                                       // 0x2564(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item20;                                // 0x2568(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x2570(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x3];                                       // 0x2571(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Array_Get_Item21;                                // 0x2574(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TeleportTo_ReturnValue2;                      // 0x2580(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x3];                                       // 0x2581(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue6;                         // 0x2584(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters6;           // 0x2588(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2598(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x259C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x3];                                       // 0x259D(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable7;                          // 0x25A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue7;                         // 0x25A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x25A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AMissionSpline*>                      CallFunc_GetAllMissionSplinesWithKey_OutSplineActors;     // 0x25B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x25C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x7];                                       // 0x25C1(0x0007) MISSED OFFSET
	class AMissionSpline*                              CallFunc_Array_Get_Item22;                                // 0x25C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x25D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue9;                 // 0x25D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x2];                                       // 0x25D2(0x0002) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable8;                          // 0x25D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_GetDinoNameFromArray_Item;                       // 0x25D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue7;                        // 0x25E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x7];                                       // 0x25E9(0x0007) MISSED OFFSET
	struct FDinoSetup                                  CallFunc_GetNamedDinoSetup_Setup;                         // 0x25F0(0x00F0) (Transient, DuplicateTransient)
	class AShooterCharacter*                           CallFunc_Array_Get_Item23;                                // 0x26E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_ClassToStringReference_ReturnValue;              // 0x26E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue3;                     // 0x26F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C5;           // 0x2700(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x2708(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x7];                                       // 0x2709(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetCharacterController_ReturnValue2;             // 0x2710(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x2718(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x2720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast13_CastSuccess;                         // 0x2728(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x7];                                       // 0x2729(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController3;            // 0x2730(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast14_CastSuccess;                         // 0x2738(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x7];                                       // 0x2739(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_SpawnMissionDino_ReturnValue;                    // 0x2740(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x2748(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x4];                                       // 0x274C(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue2;                      // 0x2750(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x2758(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x7];                                       // 0x2759(0x0007) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_GetEquippedItemOfType_ReturnValue;               // 0x2760(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x2768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x3];                                       // 0x2769(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue2;                          // 0x276C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_FindValidLocationInFrontOfTarget_OutLocation;    // 0x2770(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_FindValidLocationInFrontOfTarget_ReturnValue;    // 0x277C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayerOnMission_ReturnValue;                   // 0x277D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TeleportTo_ReturnValue3;                      // 0x277E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x1];                                       // 0x277F(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2780(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue8;                // 0x278C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AddPlayerToMission_ReturnValue;                  // 0x2798(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x3];                                       // 0x2799(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue8;                         // 0x279C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters7;           // 0x27A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_GetRemainingTime_ReturnValue;                    // 0x27B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue17;                      // 0x27B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x27B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue8;                        // 0x27B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x6];                                       // 0x27BA(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item24;                                // 0x27C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue4;                     // 0x27C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x27D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x7];                                       // 0x27D1(0x0007) MISSED OFFSET
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C6;           // 0x27D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast15_CastSuccess;                         // 0x27E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x7];                                       // 0x27E1(0x0007) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters8;           // 0x27E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_GetRemainingTime_ReturnValue2;                   // 0x27F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x27FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x3];                                       // 0x27FD(0x0003) MISSED OFFSET
	float                                              CallFunc_GetRemainingTime_ReturnValue3;                   // 0x2800(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue3;               // 0x2804(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x3];                                       // 0x2805(0x0003) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_Event_Dino;                                        // 0x2808(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_KillingDamage2;                              // 0x2810(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x4];                                       // 0x2814(0x0004) MISSED OFFSET
	struct FDamageEvent                                K2Node_Event_DamageEvent2;                                // 0x2818(0x0020) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AController*                                 K2Node_Event_Killer2;                                     // 0x2838(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser2;                               // 0x2840(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2848(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x2849(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x6];                                       // 0x284A(0x0006) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters9;           // 0x2850(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue18;                      // 0x2860(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable9;                          // 0x2864(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable10;                         // 0x2868(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue9;                        // 0x286C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue10;                       // 0x286D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x2];                                       // 0x286E(0x0002) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_Array_Get_Item25;                                // 0x2870(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue9;                         // 0x2878(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x4];                                       // 0x287C(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetCharacterController_ReturnValue3;             // 0x2880(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController4;            // 0x2888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast16_CastSuccess;                         // 0x2890(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryIncrementCheckpoint_Success2;                 // 0x2891(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryIncrementCheckpoint_AtEnd2;                   // 0x2892(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x5];                                       // 0x2893(0x0005) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item26;                                // 0x2898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue10;                        // 0x28A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x28A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x3];                                       // 0x28A5(0x0003) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x28A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController5;            // 0x28B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast17_CastSuccess;                         // 0x28B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x3];                                       // 0x28B9(0x0003) MISSED OFFSET
	int                                                CallFunc_GetNextCheckpoint_Index;                         // 0x28BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMissionTrigger*                             CallFunc_GetNextCheckpoint_NextCheckpoint;                // 0x28C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetNextCheckpoint_CompletedRace;                 // 0x28C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x7];                                      // 0x28C9(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_SpawnDinoForPlayer_SpawnedDino;                  // 0x28D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x28D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x7];                                      // 0x28D9(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue5;                     // 0x28E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C7;           // 0x28E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast18_CastSuccess;                         // 0x28F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x7];                                      // 0x28F1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_Event_Player2;                                     // 0x28F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_Event_Controller2;                                 // 0x2900(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_KillingDamage;                               // 0x2908(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x4];                                      // 0x290C(0x0004) MISSED OFFSET
	struct FDamageEvent                                K2Node_Event_DamageEvent;                                 // 0x2910(0x0020) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AController*                                 K2Node_Event_Killer;                                      // 0x2930(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x2938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2940(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x7];                                      // 0x2941(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue6;                     // 0x2948(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C8;           // 0x2950(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast19_CastSuccess;                         // 0x2958(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue11;                           // 0x2959(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_RemoveItem_ReturnValue;                    // 0x295A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x1];                                      // 0x295B(0x0001) MISSED OFFSET
	int                                                Temp_int_index_Variable;                                  // 0x295C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue19;                      // 0x2960(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RacePlayerData_GetCheckpointData_bCheckpointReached;// 0x2964(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x3];                                      // 0x2965(0x0003) MISSED OFFSET
	float                                              CallFunc_RacePlayerData_GetCheckpointData_CheckpointTime; // 0x2968(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue11;                       // 0x296C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x3];                                      // 0x296D(0x0003) MISSED OFFSET
	int                                                CallFunc_RacePlayerData_GetPlayerRanking_ReturnValue;     // 0x2970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x4];                                      // 0x2974(0x0004) MISSED OFFSET
	struct FCharacterAndControllerPair                 CallFunc_Array_Get_Item27;                                // 0x2978(0x0010) (Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue11;                        // 0x2988(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AddMissionLeaderboardRow_ReturnValue;            // 0x298C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue12;                           // 0x298D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x2];                                      // 0x298E(0x0002) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue7;                     // 0x2990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C9;           // 0x2998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast20_CastSuccess;                         // 0x29A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x7];                                      // 0x29A1(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x29A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_Network_ReturnValue;                   // 0x29B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x4];                                      // 0x29B4(0x0004) MISSED OFFSET
	double                                             CallFunc_Add_DoubleFloat_ReturnValue;                     // 0x29B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_MakeLiteralInt_ReturnValue;                      // 0x29C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x4];                                      // 0x29C4(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleFloat_ReturnValue;                // 0x29C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Add_DoubleFloat_ReturnValue2;                    // 0x29D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue20;                      // 0x29D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue2;            // 0x29DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue7;                     // 0x29DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x2];                                      // 0x29DE(0x0002) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue3;                            // 0x29E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_Event_Player;                                      // 0x29E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_Event_Controller;                                  // 0x29F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bFromMissionCompleteEvent;                   // 0x29F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bLastPhaseSuccess;                           // 0x29F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x6];                                      // 0x29FA(0x0006) MISSED OFFSET
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C10;          // 0x2A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast21_CastSuccess;                         // 0x2A08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x7];                                      // 0x2A09(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue8;                     // 0x2A10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C11;          // 0x2A18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast22_CastSuccess;                         // 0x2A20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue13;                           // 0x2A21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x2];                                      // 0x2A22(0x0002) MISSED OFFSET
	int                                                CallFunc_RacePlayerData_IndexOfController_ReturnValue;    // 0x2A24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue10;                // 0x2A28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_RemoveItem_ReturnValue2;                   // 0x2A29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x2];                                      // 0x2A2A(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue21;                      // 0x2A2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RacePlayerData_GetTargetCheckpoint_ReturnValue;  // 0x2A30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x4];                                      // 0x2A34(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_GetRaceActorsToUnhide_Actors;                    // 0x2A38(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue3;                // 0x2A48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x3];                                      // 0x2A49(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2A4C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue22;                      // 0x2A5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue3;                  // 0x2A60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0x3];                                      // 0x2A61(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x2A64(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x2A74(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsStandalone_ReturnValue;                        // 0x2A84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2A85(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2A86(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x1];                                      // 0x2A87(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2A88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x2A8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x2A90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x2A91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x6];                                      // 0x2A92(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x2A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_Network_ReturnValue2;                  // 0x2AA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsStandalone_ReturnValue2;                       // 0x2AA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2AA5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x2AA6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x1];                                      // 0x2AA7(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x2AA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2AAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue3;                // 0x2AB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x2AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue4;               // 0x2AB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x7];                                      // 0x2AB9(0x0007) MISSED OFFSET
	double                                             CallFunc_Array_Set_Item_RefProperty;                      // 0x2AC0(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Race.MissionType_Race_C");
		return ptr;
	}


	void GetRaceData(TArray<struct FRacePlayerData>* RaceData);
	void GetPlayerRanking(int PlayerIndex, int* Ranking);
	void RaceSetupAfterDelay();
	void GetRaceShooterPCAndPawn(class APrimalCharacter* primalChar, class AShooterPlayerController** ShooterPC, class AShooterCharacter** ShooterChar);
	void TeleportPlayersToStartLine();
	void OnResultOverlappedCheckpointFX(bool Overlapped, class AShooterPlayerController* ForController);
	void CheckOverlappedCheckpointFX(class AShooterPlayerController* PlayerController, class AMissionTrigger* HitTrigger);
	void AttemptReRideDinoOnDinoRespawn(class AShooterCharacter* Player);
	void GetCheckpointToTeleportTo(int PlayerIndex, class AMissionTrigger** Checkpoint);
	void InitializeRaceData();
	void OnCheckpointIncremented(class AShooterPlayerController* PlayerController, class AMissionTrigger* HitTrigger);
	void GetSplineForOutOfBoundsCheckForPlayer(class AShooterCharacter* ShooterChar, class AMissionSpline** Spline);
	void GetRaceActorsToUnhide(TArray<class AActor*>* actors);
	void OnTeleportedCharInBounds(class APrimalCharacter* forChar);
	void STATIC_GetNearbyWaterLocation(const struct FVector& StartLocation, const struct FVector& Forward, float OverrideZOffset, struct FVector* FinalLocation);
	void Is_Power_Up_Active_for_Player(class AShooterPlayerController* SC, class AMissionTrigger* Powerup, bool* IsValid);
	void STATIC_Handle_Out_Of_Bounds();
	void TeleportPlayerAndDinoToCheckpoint(class APrimalDinoCharacter* Dino, class AShooterCharacter* Player);
	void STATIC_SpawnDinoForPlayer(class AShooterCharacter* Player, class APrimalDinoCharacter** SpawnedDino);
	void Handle_Player_Time_Outs();
	bool BPOverrideMissionTimerColor(class AShooterPlayerController** ShooterContr, struct FLinearColor* DefaultColor, struct FLinearColor* CurrentColor, struct FLinearColor* TimerOverrideColor);
	void GetBestTimeForPlayer(class AShooterPlayerController* ShooterCont, float* BestValidTime);
	void BPGetExtraLocalMissionIndicators(class APlayerController** Controller, class AShooterCharacter** PlayerPawn, TArray<struct FMissionWorldIndicator>* IndicatorsIn, TArray<struct FMissionWorldIndicator>* IndicatorsOut);
	void STATIC_GetBestTime(float* BestTime);
	void STATIC_NotifyAllTopPlayerFinish(bool Finished, class AShooterCharacter* Character);
	void STATIC_Play_Leaderboard_Reactions(float Leaderboard_Score_Float, class AShooterCharacter* Player);
	void On_Player_Got_in_Top_10_Of_The_Leaderboard(class AShooterCharacter* Player);
	void On_Player_Got_First_Place_on_the_Leaderboard(class AShooterCharacter* Player);
	void Play_Encouragement_Reactions();
	void BPOnMissionPlayerLeftBounds();
	void AddPowerTriggersFromLastCheckPointToIgnoreList(class AShooterCharacter* Player);
	void AddTriggerToIgnoreList(class AMissionTrigger* Trigger, class AShooterCharacter* Player);
	void HasPlayerHitTrigger(class AShooterCharacter* Player, class AMissionTrigger* Trigger, bool* HasHitBefore);
	void BPOnMissionPlayerRespawned(class AShooterCharacter** Player, class AShooterPlayerController** Controller);
	void OnThrottledClientTick(float* DeltaTime);
	void Play_Reaction_When_Player_Has_Left_Dino_For_Too_Long();
	void STATIC_GetSpawnPointsForStartingLine(class AMissionServerSidePoint* MissionServerSidePoint, int NumberOfRacers, class APrimalCharacter* PrimalCharacterType, struct FRotator* ForwardRot);
	void Play_Checkpoint_Reaction(bool Final_Checkpoint, class AShooterCharacter* Player);
	void GeneratePerPlayerPhaseRequirements(class AShooterPlayerController** Controller, class AShooterCharacter** Character, struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements);
	void ActivateRacePowerUps(class AMissionTrigger* Trigger, class APrimalCharacter* TriggeringActor);
	float CalcRaceXPRatio(class APrimalCharacter* Player, int Place);
	void BPGenerateMissionRewards(struct FCharacterAndControllerPair* Player, bool* bCompletedSuccessfully, float* XPReward, TArray<class UPrimalItem*>* GeneratedItems);
	class FString BPGetMissionTimerText(class AShooterPlayerController** ShootCont);
	void STATIC_GeneratePhaseRequirements(struct FName* PhaseName, TArray<struct FMissionPhaseRequirement>* Requirements);
	void GetDinoNameFromArray(int ArrayIndex, class FString* Item);
	void STATIC_GetNamedDinoSetup(const struct FDinoSetup& InSetup, const class FString& Name, struct FDinoSetup* Setup);
	bool IsMissionComplete(class AShooterCharacter** forCharacter, class AShooterPlayerController** ForController);
	void STATIC_TryIncrementCheckpoint(class AShooterPlayerController* PlayerController, class AMissionTrigger* HitTrigger, bool* Success, bool* AtEnd);
	bool BPIsPhaseComplete(struct FName* PhaseName);
	void GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators);
	void GetNextCheckpoint(class AShooterPlayerController* Controller, class AMissionTrigger* NewParam, int* index, class AMissionTrigger** NextCheckpoint, bool* CompletedRace);
	void UserConstructionScript();
	void BPOnMissionTriggerBeginOverlap(class AMissionTrigger** Trigger, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void BPOnMissionComplete(class AShooterCharacter** ForPlayer, class AShooterPlayerController** ForController, bool* bLastPhaseSuccess, float* XPRewarded, TArray<class UPrimalItem*>* ItemsRewarded);
	void OnThrottledServerTick(float* DeltaTime);
	void BPOnMissionServerSetup();
	void RaceStarted(const struct FName& OldPhaseName, const struct FName& NewPhaseName);
	void RaceSetup(const struct FName& OldPhaseName, const struct FName& NewPhaseName);
	void ReceiveBeginPlay();
	void TeleportToStart(const struct FName& OldPhaseName, const struct FName& NewPhaseName);
	void BPOnMissionDinoDied(class APrimalDinoCharacter** Dino, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void BPOnMissionPlayerDied(class AShooterCharacter** Player, class AShooterPlayerController** Controller, float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void PutPlayersOnMissionDino();
	void BPOnPlayerRemovedFromMission(class AShooterCharacter** Player, class AShooterPlayerController** Controller, bool* bFromMissionCompleteEvent, bool* bLastPhaseSuccess);
	void ServerAddConsolePlayer();
	void ExecuteUbergraph_MissionType_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
