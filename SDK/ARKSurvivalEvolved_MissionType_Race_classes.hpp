#pragma once

// ARKSurvivalEvolved (320.18) SDK

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
// 0x1C55 (0x2640 - 0x09EB)
class AMissionType_Race_C : public AMissionTypeBlueprintBase_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x09EB(0x0005) MISSED OFFSET
	TArray<class AMissionTrigger*>                     Checkpoints;                                              // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame)
	TArray<struct FRacePlayerData>                     RaceData;                                                 // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	float                                              ExtraRaceSetupDuration;                                   // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnRaceDinoForPlayers;                                  // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	float                                              DinoSpawnDistance;                                        // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A1C(0x0004) MISSED OFFSET
	struct FDinoSetup                                  SpawnedDino;                                              // 0x0A20(0x00F0) (Edit, BlueprintVisible)
	TArray<class FString>                              SpawnedDinoNames;                                         // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      DinoTypeDesc;                                             // 0x0B20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<struct FLootTableEntry>                     RewardLootTable_FirstPlace;                               // 0x0B30(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLootTableEntry>                     RewardLootTable_SecondPlace;                              // 0x0B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLootTableEntry>                     RewardLootTable_ThirdPlace;                               // 0x0B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RewardXPRatio_FirstPlace;                                 // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RewardXPRatio_SecondPlace;                                // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RewardXPRatio_ThirdPlace;                                 // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RewardXPRatio_FourthOrLowerPlace;                         // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePowerups;                                              // 0x0B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0B71(0x0007) MISSED OFFSET
	TArray<class UClass*>                              RacePowerUps;                                             // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActivePowerUps;                                           // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AMissionTrigger*>                     PowerUpTriggers;                                          // 0x0B98(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_MissionStart;                           // 0x0BA8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_RaceBegin;                              // 0x0C40(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_CheckpointPassed;                       // 0x0CD8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PassingOtherPlayer;                     // 0x0D70(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_WasPassed;                              // 0x0E08(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_FinishedRaceFirstPlace;                 // 0x0EA0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_FinishedRaceRunnerup;                   // 0x0F38(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_MissionCompleteSuccess;                 // 0x0FD0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_MissionCompleteFail;                    // 0x1068(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        previous_rankings;                                        // 0x1100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeBeforeRaceStartsWhenToPlayGetReadyReaction;           // 0x1110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1114(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_GetReady;                               // 0x1118(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PassingOtherPlayer_InFirstPlace;        // 0x11B0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             ServerSpawnLocations;                                     // 0x1248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       StartingLineTagName;                                      // 0x1258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingLocationDistanceMultiplier;                       // 0x1260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x1264(0x0004) MISSED OFFSET
	class UClass*                                      StartingRaceBuff;                                         // 0x1268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMissionServerSidePoint*                     StartingLine;                                             // 0x1270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_PassingOtherPlayer_InSecondPlace;       // 0x1278(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PassingOtherPlayer_InThirdPlace;        // 0x1310(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_WasPassed_InLastPlace;                  // 0x13A8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                                     time_since_left_dino;                                     // 0x1440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       able_to_play_return_to_dino_reaction;                     // 0x1450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        index_of_player_controller_of_last_rider;                 // 0x1460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class APrimalDinoCharacter*>                mounted_dinos;                                            // 0x1470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AShooterPlayerController*>            mounted_players;                                          // 0x1480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_ReminderToGetOnDino;                    // 0x1490(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_GenericRespawn;                         // 0x1528(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Has_Played_Low_Time_Remaining_Warning;                    // 0x15C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x15C1(0x0003) MISSED OFFSET
	float                                              Low_Time_Remaining_Warning_Time;                          // 0x15C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_TimeRunningOut;                         // 0x15C8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bTriggerPowerupsOnlyOncePerPlayer;                        // 0x1660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1661(0x0003) MISSED OFFSET
	float                                              time_before_spawning_dinos_to_play_mount_up_reaction;     // 0x1664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCompanionReactionData                      CompanionReaction_MountUp;                                // 0x1668(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              time_before_triggering_get_back_on_reaction;              // 0x1700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1704(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_LeftBounds;                             // 0x1708(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_Faster_Encouragement;                   // 0x17A0(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_Winning_Encouragement;                  // 0x1838(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Interval_to_play_encouragement_reactions;                 // 0x18D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x18D4(0x0004) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_FirstPlaceLeaderboard;                  // 0x18D8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_PlacedInTop10;                          // 0x1970(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RaceDuration;                                             // 0x1A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SplineKeyName;                                            // 0x1A0C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1A14(0x0004) MISSED OFFSET
	class AMissionSpline*                              SplineToFollow;                                           // 0x1A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Was_Ever_Using_Timer;                                     // 0x1A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1A21(0x0003) MISSED OFFSET
	float                                              Higher_Remaining_Warning_Time;                            // 0x1A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Uses_Higher_Time_Remaining_Reaction;                      // 0x1A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Has_Played_Higher_Low_Time_Remaining_Warning;             // 0x1A29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x1A2A(0x0006) MISSED OFFSET
	struct FCompanionReactionData                      CompanionReaction_TimeRunningOut_Higher;                  // 0x1A30(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCompanionReactionData                      CompanionReaction_TimeFinished;                           // 0x1AC8(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AShooterCharacter*>                   RepPlayerPawns;                                           // 0x1B60(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TimePerCheckpoint;                                        // 0x1B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialTimeBeforeCheckpoint;                              // 0x1B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LocalCheckPointIndex;                                     // 0x1B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportOutOfBounds;                                     // 0x1B7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1B7D(0x0003) MISSED OFFSET
	float                                              OutOfBoundsRange;                                         // 0x1B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeCanBeOutOfBounds;                                     // 0x1B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      OverrideObjectiveString;                                  // 0x1B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeAfterCompleteToDestroyDino;                           // 0x1B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAfterCompleteToTeleportBack;                          // 0x1B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopDrawingSplineAtCheckpoint;                           // 0x1BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportingCharsSetsMovementMode;                        // 0x1BA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         TeleportingCharsNewMovementMode;                          // 0x1BA2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x5];                                       // 0x1BA3(0x0005) MISSED OFFSET
	struct FText                                       RaceFinishedFormattedText;                                // 0x1BA8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DinoCorpseLifespanOverride;                               // 0x1BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x1BD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1BD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x1BDC(0x0004) MISSED OFFSET
	class AMissionTrigger*                             K2Node_Event_Trigger;                                     // 0x1BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_OtherActor;                                  // 0x1BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_Event_OtherComp;                                   // 0x1BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_OtherBodyIndex;                              // 0x1BF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1BFC(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x1C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1C08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x1C09(0x0007) MISSED OFFSET
	class AMissionTrigger_RaceCheckpoint_C*            K2Node_DynamicCast_AsMissionTrigger_RaceCheckpoint_C;     // 0x1C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1C18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x1C19(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1C20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1C28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x1C29(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x1C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1C39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x1C3A(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetShooterCharacterFromPawn_ReturnValue;         // 0x1C40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1C48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasPlayerHitTrigger_HasHitBefore;                // 0x1C49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x1C4A(0x0006) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter2;                // 0x1C50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x1C58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x1C59(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetCharacterController_ReturnValue;              // 0x1C60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_Event_ForPlayer;                                   // 0x1C68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_Event_ForController;                               // 0x1C70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bLastPhaseSuccess2;                          // 0x1C78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x1C79(0x0003) MISSED OFFSET
	float                                              K2Node_Event_XPRewarded;                                  // 0x1C7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class UPrimalItem*>                         K2Node_Event_ItemsRewarded;                               // 0x1C80(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x1C90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x1C98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryIncrementCheckpoint_Success;                  // 0x1C99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryIncrementCheckpoint_AtEnd;                    // 0x1C9A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Power_Up_Active_for_Player_IsValid;           // 0x1C9B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x1C9C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_GetShortName_ReturnValue;                        // 0x1CA0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_RacePlayerData_NumCheckpoints_ReturnValue;       // 0x1CB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x1CB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x1CB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTime;                                   // 0x1CC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x1CC8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetCurrentMissionPhaseName_ReturnValue;          // 0x1CD4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x1CDC(0x0004) MISSED OFFSET
	TArray<int>                                        CallFunc_RacePlayerData_GetAllPlayerRankings_OutRankings; // 0x1CE0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x1CF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue2;                // 0x1CF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x2];                                       // 0x1CF2(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_GetCurrentMissionPhaseName_ReturnValue2;         // 0x1CF4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue3;                // 0x1CFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x1CFD(0x0003) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x1D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_Contains_ReturnValue;                      // 0x1D08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x1D09(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x1D10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C;            // 0x1D18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x1D20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x1D21(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue2;                            // 0x1D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C2;           // 0x1D30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast8_CastSuccess;                          // 0x1D38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x1D39(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x1D3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x1D40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x1D44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Find_ReturnValue;                          // 0x1D48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x1D4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x1D50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x1D51(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_OldPhaseName3;                         // 0x1D54(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_NewPhaseName3;                         // 0x1D5C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_OldPhaseName2;                         // 0x1D64(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_NewPhaseName2;                         // 0x1D6C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x1D74(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x1D84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x1D85(0x0003) MISSED OFFSET
	class AMissionTrigger*                             CallFunc_Array_Get_Item;                                  // 0x1D88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class APrimalCharacter*>                    CallFunc_GetAllCharactersTouchingTrigger_OutCharacters;   // 0x1D90(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue2;                 // 0x1DA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x1DA1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1DA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item2;                                 // 0x1DA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors;   // 0x1DB0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x1DC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLoadingSaveGame_ReturnValue;                   // 0x1DC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1DC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RacePlayerData_FixupControllers_ReturnValue;     // 0x1DC3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x1DC4(0x0004) MISSED OFFSET
	class AMissionDispatcher*                          K2Node_DynamicCast_AsMissionDispatcher;                   // 0x1DC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast9_CastSuccess;                          // 0x1DD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue3;                 // 0x1DD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x2];                                       // 0x1DD2(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item3;                                 // 0x1DD4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x1DDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x1DDD(0x0003) MISSED OFFSET
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors2;  // 0x1DE0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x1DF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_Array_Get_Item4;                                 // 0x1DF4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue;                 // 0x1DFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue2;                  // 0x1DFD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x2];                                       // 0x1DFE(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item5;                                 // 0x1E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue4;                 // 0x1E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue3;                  // 0x1E09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x2];                                       // 0x1E0A(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item6;                                 // 0x1E0C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue4;                  // 0x1E14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x1E15(0x0003) MISSED OFFSET
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors3;  // 0x1E18(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x1E28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue2;                // 0x1E2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue5;                 // 0x1E2D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x2];                                       // 0x1E2E(0x0002) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item7;                                 // 0x1E30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors4;  // 0x1E38(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters;            // 0x1E48(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x1E58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x1E64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x1E70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x1E74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Len_ReturnValue;                                 // 0x1E78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x1E7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x1E7D(0x0003) MISSED OFFSET
	class AMissionTrigger*                             CallFunc_Array_Get_Item8;                                 // 0x1E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x1E88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue6;                 // 0x1E94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x1E95(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue5;                // 0x1E98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_FindLookAtRotation_ReturnValue;                  // 0x1EA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_SelectRotator_ReturnValue;                       // 0x1EB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x4];                                       // 0x1EBC(0x0004) MISSED OFFSET
	TArray<class AShooterPlayerController*>            CallFunc_GetAllPlayerControllersOnMission_OutControllers; // 0x1EC0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x1ED0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x1ED4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AMissionServerSidePoint*>             CallFunc_GetAllMissionServerSidePointsWithKey_OutServerSidePointActors;// 0x1ED8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x1EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x7];                                       // 0x1EE9(0x0007) MISSED OFFSET
	class AMissionServerSidePoint*                     CallFunc_Array_Get_Item9;                                 // 0x1EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x1EF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x1EFC(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item10;                                // 0x1F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x1F08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x1F09(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue7;                       // 0x1F0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetSpawnPointsForStartingLine_ForwardRot;        // 0x1F10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue8;                       // 0x1F1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x1F20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue9;                       // 0x1F24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Array_Get_Item11;                                // 0x1F28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x1F34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x1F35(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x1F38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x1F3C(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayerCharactersInvolvedInMission_OutPlayerCharacters;// 0x1F40(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterCharacter*                           CallFunc_Array_Get_Item12;                                // 0x1F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_Array_Get_Item13;                                // 0x1F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue10;                      // 0x1F60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x1F64(0x0004) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters2;           // 0x1F68(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    CallFunc_GetSpawnPointsForStartingLine_ForwardRot2;       // 0x1F78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue11;                      // 0x1F84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TeleportTo_ReturnValue;                       // 0x1F88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x1F89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x6];                                       // 0x1F8A(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item14;                                // 0x1F90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x1F98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x1F99(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x1FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController2;            // 0x1FA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast10_CastSuccess;                         // 0x1FB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x7];                                       // 0x1FB1(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue;                      // 0x1FB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetBestTimeForPlayer_BestValidTime;              // 0x1FC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x4];                                       // 0x1FC4(0x0004) MISSED OFFSET
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C3;           // 0x1FC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast11_CastSuccess;                         // 0x1FD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue3;                     // 0x1FD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x6];                                       // 0x1FD2(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x1FD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x1FE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x3];                                       // 0x1FE1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue12;                      // 0x1FE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item15;                                // 0x1FE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x1FF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x1FF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x2];                                       // 0x1FF2(0x0002) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_OldPhaseName;                          // 0x1FF4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_NewPhaseName;                          // 0x1FFC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue7;                 // 0x2004(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x3];                                       // 0x2005(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item16;                                // 0x2008(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors5;  // 0x2010(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue8;                 // 0x2020(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x2021(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_Array_Get_Item17;                                // 0x2024(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x4];                                       // 0x202C(0x0004) MISSED OFFSET
	TArray<class AMissionTrigger*>                     CallFunc_GetAllMissionTriggersWithKey_OutTriggerActors6;  // 0x2030(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AMissionServerSidePoint*>             CallFunc_GetAllMissionServerSidePointsWithKey_OutServerSidePointActors2;// 0x2040(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AMissionServerSidePoint*                     CallFunc_Array_Get_Item18;                                // 0x2050(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue13;                      // 0x2058(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue4;                     // 0x205C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x3];                                       // 0x205D(0x0003) MISSED OFFSET
	int                                                CallFunc_FinalizeMissionPrep_ReturnValue;                 // 0x2060(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue6;                // 0x2064(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters3;           // 0x2070(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue14;                      // 0x2080(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue7;                // 0x2084(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue15;                      // 0x2090(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x2094(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x3];                                       // 0x2095(0x0003) MISSED OFFSET
	struct FCharacterAndControllerPair                 CallFunc_Array_Get_Item19;                                // 0x2098(0x0010) (Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue16;                      // 0x20A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x4];                                       // 0x20AC(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue2;                     // 0x20B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue5;                     // 0x20B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x7];                                       // 0x20B9(0x0007) MISSED OFFSET
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C4;           // 0x20C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast12_CastSuccess;                         // 0x20C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x20C9(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x20CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x20D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x7];                                       // 0x20D1(0x0007) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters4;           // 0x20D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Find_ReturnValue2;                         // 0x20E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x20EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue6;                     // 0x20ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x2];                                       // 0x20EE(0x0002) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x20F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x20F4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x3];                                       // 0x20F5(0x0003) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters5;           // 0x20F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Loop_Counter_Variable6;                          // 0x2108(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x4];                                       // 0x210C(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_Array_Get_Item20;                                // 0x2110(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x2118(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x3];                                       // 0x2119(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Array_Get_Item21;                                // 0x211C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TeleportTo_ReturnValue2;                      // 0x2128(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x2129(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue6;                         // 0x212C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable7;                          // 0x2130(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue7;                         // 0x2134(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters6;           // 0x2138(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x2148(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x214C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x3];                                       // 0x214D(0x0003) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2150(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable8;                          // 0x2158(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x4];                                       // 0x215C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_GetDinoNameFromArray_Item;                       // 0x2160(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue7;                        // 0x2170(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x7];                                       // 0x2171(0x0007) MISSED OFFSET
	struct FDinoSetup                                  CallFunc_GetNamedDinoSetup_Setup;                         // 0x2178(0x00F0) (Transient, DuplicateTransient)
	class AShooterCharacter*                           CallFunc_Array_Get_Item22;                                // 0x2268(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_ClassToStringReference_ReturnValue;              // 0x2270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue3;                     // 0x2280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C5;           // 0x2288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast13_CastSuccess;                         // 0x2290(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x7];                                       // 0x2291(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetCharacterController_ReturnValue2;             // 0x2298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x22A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController3;            // 0x22A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast14_CastSuccess;                         // 0x22B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x7];                                       // 0x22B1(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController4;            // 0x22B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast15_CastSuccess;                         // 0x22C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x7];                                       // 0x22C1(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_SpawnMissionDino_ReturnValue;                    // 0x22C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x22D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x4];                                       // 0x22D4(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue2;                      // 0x22D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x22E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x7];                                       // 0x22E1(0x0007) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_GetEquippedItemOfType_ReturnValue;               // 0x22E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x22F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x3];                                       // 0x22F1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Add_ReturnValue2;                          // 0x22F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_FindValidLocationInFrontOfTarget_OutLocation;    // 0x22F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_FindValidLocationInFrontOfTarget_ReturnValue;    // 0x2304(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayerOnMission_ReturnValue;                   // 0x2305(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_TeleportTo_ReturnValue3;                      // 0x2306(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x1];                                       // 0x2307(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2308(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue8;                // 0x2314(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AddPlayerToMission_ReturnValue;                  // 0x2320(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x3];                                       // 0x2321(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue8;                         // 0x2324(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x2328(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x7];                                       // 0x2329(0x0007) MISSED OFFSET
	TArray<class AMissionSpline*>                      CallFunc_GetAllMissionSplinesWithKey_OutSplineActors;     // 0x2330(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters7;           // 0x2340(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AMissionSpline*                              CallFunc_Array_Get_Item23;                                // 0x2350(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue17;                      // 0x2358(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x235C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue9;                 // 0x235D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x2];                                       // 0x235E(0x0002) MISSED OFFSET
	float                                              CallFunc_GetRemainingTime_ReturnValue;                    // 0x2360(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x4];                                       // 0x2364(0x0004) MISSED OFFSET
	TArray<class AActor*>                              K2Node_MakeArray_Array;                                   // 0x2368(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x2378(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x2379(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x6];                                       // 0x237A(0x0006) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters8;           // 0x2380(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_GetRemainingTime_ReturnValue2;                   // 0x2390(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue2;               // 0x2394(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x3];                                       // 0x2395(0x0003) MISSED OFFSET
	float                                              CallFunc_GetRemainingTime_ReturnValue3;                   // 0x2398(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue3;               // 0x239C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x3];                                       // 0x239D(0x0003) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_Event_Dino;                                        // 0x23A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_KillingDamage2;                              // 0x23A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x4];                                       // 0x23AC(0x0004) MISSED OFFSET
	struct FDamageEvent                                K2Node_Event_DamageEvent2;                                // 0x23B0(0x0020) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AController*                                 K2Node_Event_Killer2;                                     // 0x23D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser2;                               // 0x23D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x23E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x23E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x6];                                       // 0x23E2(0x0006) MISSED OFFSET
	TArray<class AShooterCharacter*>                   CallFunc_GetAllPlayersOnMission_OutCharacters9;           // 0x23E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Loop_Counter_Variable9;                          // 0x23F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue18;                      // 0x23FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue8;                        // 0x2400(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue9;                        // 0x2401(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x6];                                       // 0x2402(0x0006) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_Array_Get_Item24;                                // 0x2408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue9;                         // 0x2410(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x4];                                       // 0x2414(0x0004) MISSED OFFSET
	class AController*                                 CallFunc_GetCharacterController_ReturnValue3;             // 0x2418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController5;            // 0x2420(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast16_CastSuccess;                         // 0x2428(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryIncrementCheckpoint_Success2;                 // 0x2429(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryIncrementCheckpoint_AtEnd2;                   // 0x242A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x5];                                       // 0x242B(0x0005) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item25;                                // 0x2430(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x2438(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x7];                                       // 0x2439(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController6;            // 0x2448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast17_CastSuccess;                         // 0x2450(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x3];                                       // 0x2451(0x0003) MISSED OFFSET
	int                                                CallFunc_GetNextCheckpoint_Index;                         // 0x2454(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMissionTrigger*                             CallFunc_GetNextCheckpoint_NextCheckpoint;                // 0x2458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetNextCheckpoint_CompletedRace;                 // 0x2460(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x7];                                       // 0x2461(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_SpawnDinoForPlayer_SpawnedDino;                  // 0x2468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x2470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x7];                                       // 0x2471(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue4;                     // 0x2478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable10;                         // 0x2480(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x4];                                       // 0x2484(0x0004) MISSED OFFSET
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C6;           // 0x2488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast18_CastSuccess;                         // 0x2490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue10;                       // 0x2491(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2492(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x5];                                       // 0x2493(0x0005) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_Array_Get_Item26;                                // 0x2498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue5;                     // 0x24A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue10;                        // 0x24A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x4];                                       // 0x24AC(0x0004) MISSED OFFSET
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C7;           // 0x24B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast19_CastSuccess;                         // 0x24B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x7];                                      // 0x24B9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_Event_Player2;                                     // 0x24C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_Event_Controller2;                                 // 0x24C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_KillingDamage;                               // 0x24D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x4];                                      // 0x24D4(0x0004) MISSED OFFSET
	struct FDamageEvent                                K2Node_Event_DamageEvent;                                 // 0x24D8(0x0020) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AController*                                 K2Node_Event_Killer;                                      // 0x24F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x2500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue6;                     // 0x2508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C8;           // 0x2510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast20_CastSuccess;                         // 0x2518(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x3];                                      // 0x2519(0x0003) MISSED OFFSET
	int                                                Temp_int_index_Variable;                                  // 0x251C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RacePlayerData_GetCheckpointData_bCheckpointReached;// 0x2520(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x3];                                      // 0x2521(0x0003) MISSED OFFSET
	float                                              CallFunc_RacePlayerData_GetCheckpointData_CheckpointTime; // 0x2524(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue11;                           // 0x2528(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_RemoveItem_ReturnValue;                    // 0x2529(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x2];                                      // 0x252A(0x0002) MISSED OFFSET
	int                                                CallFunc_RacePlayerData_GetPlayerRanking_ReturnValue;     // 0x252C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue11;                        // 0x2530(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_AddMissionLeaderboardRow_ReturnValue;            // 0x2534(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x3];                                      // 0x2535(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue19;                      // 0x2538(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x4];                                      // 0x253C(0x0004) MISSED OFFSET
	struct FCharacterAndControllerPair                 CallFunc_Array_Get_Item27;                                // 0x2540(0x0010) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue11;                       // 0x2550(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue12;                           // 0x2551(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x6];                                      // 0x2552(0x0006) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue7;                     // 0x2558(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C9;           // 0x2560(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast21_CastSuccess;                         // 0x2568(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x3];                                      // 0x2569(0x0003) MISSED OFFSET
	int                                                CallFunc_MakeLiteralInt_ReturnValue;                      // 0x256C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_Network_ReturnValue;                   // 0x2578(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x4];                                      // 0x257C(0x0004) MISSED OFFSET
	double                                             CallFunc_Add_DoubleFloat_ReturnValue;                     // 0x2580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleFloat_ReturnValue;                // 0x2588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RacePlayerData_IndexOfController_ReturnValue;    // 0x2590(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x4];                                      // 0x2594(0x0004) MISSED OFFSET
	double                                             CallFunc_Add_DoubleFloat_ReturnValue2;                    // 0x2598(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue2;            // 0x25A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue10;                // 0x25A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x2];                                      // 0x25A2(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue20;                      // 0x25A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue7;                     // 0x25A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x7];                                      // 0x25A9(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue3;                            // 0x25B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C10;          // 0x25B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast22_CastSuccess;                         // 0x25C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x7];                                      // 0x25C1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_Event_Player;                                      // 0x25C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_Event_Controller;                                  // 0x25D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bFromMissionCompleteEvent;                   // 0x25D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bLastPhaseSuccess;                           // 0x25D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x2];                                      // 0x25DA(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x25DC(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData115[0x4];                                      // 0x25EC(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetMissionBuff_ReturnValue8;                     // 0x25F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_RaceMissionHelper_C*                   K2Node_DynamicCast_AsBuff_RaceMissionHelper_C11;          // 0x25F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast23_CastSuccess;                         // 0x2600(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue13;                           // 0x2601(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x2];                                      // 0x2602(0x0002) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x2604(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Array_RemoveItem_ReturnValue2;                   // 0x2614(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x3];                                      // 0x2615(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue21;                      // 0x2618(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RacePlayerData_GetTargetCheckpoint_ReturnValue;  // 0x261C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue3;                // 0x2620(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x3];                                      // 0x2621(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x2624(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData119[0x4];                                      // 0x2634(0x0004) MISSED OFFSET
	double                                             CallFunc_Array_Set_Item_RefProperty;                      // 0x2638(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Race.MissionType_Race_C");
		return ptr;
	}


	bool BPCanRideMissionDino(class AShooterCharacter** Character, class APrimalDinoCharacter** Dino);
	void OnTeleportedCharInBounds(class APrimalCharacter* forChar);
	void GetNearbyWaterLocation(const struct FVector& StartLocation, const struct FVector& Forward, float OverrideZOffset, struct FVector* FinalLocation);
	void Is_Power_Up_Active_for_Player(class AShooterPlayerController* SC, class AMissionTrigger* PowerUp, bool* IsValid);
	void Handle_Out_Of_Bounds();
	void TeleportPlayerAndDinoToCheckpoint(class APrimalDinoCharacter* Dino, class AShooterCharacter* Player);
	void SpawnDinoForPlayer(class AShooterCharacter* Player, class APrimalDinoCharacter** SpawnedDino);
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
	void GetSpawnPointsForStartingLine(class AMissionServerSidePoint* MissionServerSidePoint, int NumberOfRacers, class APrimalCharacter* PrimalCharacterType, struct FRotator* ForwardRot);
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
	void ExecuteUbergraph_MissionType_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
