#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionType_Race_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Race.MissionType_Race_C.GetRaceData
struct AMissionType_Race_C_GetRaceData_Params
{
	TArray<struct FRacePlayerData>                     RaceData;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Race.MissionType_Race_C.GetPlayerRanking
struct AMissionType_Race_C_GetPlayerRanking_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ranking;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.RaceSetupAfterDelay
struct AMissionType_Race_C_RaceSetupAfterDelay_Params
{
};

// Function MissionType_Race.MissionType_Race_C.GetRaceShooterPCAndPawn
struct AMissionType_Race_C_GetRaceShooterPCAndPawn_Params
{
	class APrimalCharacter*                            primalChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ShooterPC;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.TeleportPlayersToStartLine
struct AMissionType_Race_C_TeleportPlayersToStartLine_Params
{
};

// Function MissionType_Race.MissionType_Race_C.OnResultOverlappedCheckpointFX
struct AMissionType_Race_C_OnResultOverlappedCheckpointFX_Params
{
	bool                                               Overlapped;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.CheckOverlappedCheckpointFX
struct AMissionType_Race_C_CheckOverlappedCheckpointFX_Params
{
	class AShooterPlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.AttemptReRideDinoOnDinoRespawn
struct AMissionType_Race_C_AttemptReRideDinoOnDinoRespawn_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.GetCheckpointToTeleportTo
struct AMissionType_Race_C_GetCheckpointToTeleportTo_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             Checkpoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.InitializeRaceData
struct AMissionType_Race_C_InitializeRaceData_Params
{
};

// Function MissionType_Race.MissionType_Race_C.OnCheckpointIncremented
struct AMissionType_Race_C_OnCheckpointIncremented_Params
{
	class AShooterPlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.GetSplineForOutOfBoundsCheckForPlayer
struct AMissionType_Race_C_GetSplineForOutOfBoundsCheckForPlayer_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionSpline*                              Spline;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.GetRaceActorsToUnhide
struct AMissionType_Race_C_GetRaceActorsToUnhide_Params
{
	TArray<class AActor*>                              actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Race.MissionType_Race_C.OnTeleportedCharInBounds
struct AMissionType_Race_C_OnTeleportedCharInBounds_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.GetNearbyWaterLocation
struct AMissionType_Race_C_GetNearbyWaterLocation_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideZOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FinalLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.Is Power Up Active for Player
struct AMissionType_Race_C_Is_Power_Up_Active_for_Player_Params
{
	class AShooterPlayerController*                    SC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             Powerup;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.Handle Out Of Bounds
struct AMissionType_Race_C_Handle_Out_Of_Bounds_Params
{
};

// Function MissionType_Race.MissionType_Race_C.TeleportPlayerAndDinoToCheckpoint
struct AMissionType_Race_C_TeleportPlayerAndDinoToCheckpoint_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.SpawnDinoForPlayer
struct AMissionType_Race_C_SpawnDinoForPlayer_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        SpawnedDino;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.Handle Player Time Outs
struct AMissionType_Race_C_Handle_Player_Time_Outs_Params
{
};

// Function MissionType_Race.MissionType_Race_C.BPOverrideMissionTimerColor
struct AMissionType_Race_C_BPOverrideMissionTimerColor_Params
{
	class AShooterPlayerController**                   ShooterContr;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DefaultColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                CurrentColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                TimerOverrideColor;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.GetBestTimeForPlayer
struct AMissionType_Race_C_GetBestTimeForPlayer_Params
{
	class AShooterPlayerController*                    ShooterCont;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BestValidTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.BPGetExtraLocalMissionIndicators
struct AMissionType_Race_C_BPGetExtraLocalMissionIndicators_Params
{
	class APlayerController**                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              IndicatorsIn;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMissionWorldIndicator>              IndicatorsOut;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Race.MissionType_Race_C.GetBestTime
struct AMissionType_Race_C_GetBestTime_Params
{
	float                                              BestTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.NotifyAllTopPlayerFinish
struct AMissionType_Race_C_NotifyAllTopPlayerFinish_Params
{
	bool                                               Finished;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.Play Leaderboard Reactions
struct AMissionType_Race_C_Play_Leaderboard_Reactions_Params
{
	float                                              Leaderboard_Score_Float;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.On Player Got in Top 10 Of The Leaderboard
struct AMissionType_Race_C_On_Player_Got_in_Top_10_Of_The_Leaderboard_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.On Player Got First Place on the Leaderboard
struct AMissionType_Race_C_On_Player_Got_First_Place_on_the_Leaderboard_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.Play Encouragement Reactions
struct AMissionType_Race_C_Play_Encouragement_Reactions_Params
{
};

// Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerLeftBounds
struct AMissionType_Race_C_BPOnMissionPlayerLeftBounds_Params
{
};

// Function MissionType_Race.MissionType_Race_C.AddPowerTriggersFromLastCheckPointToIgnoreList
struct AMissionType_Race_C_AddPowerTriggersFromLastCheckPointToIgnoreList_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.AddTriggerToIgnoreList
struct AMissionType_Race_C_AddTriggerToIgnoreList_Params
{
	class AMissionTrigger*                             Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.HasPlayerHitTrigger
struct AMissionType_Race_C_HasPlayerHitTrigger_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasHitBefore;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerRespawned
struct AMissionType_Race_C_BPOnMissionPlayerRespawned_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.OnThrottledClientTick
struct AMissionType_Race_C_OnThrottledClientTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.Play Reaction When Player Has Left Dino For Too Long
struct AMissionType_Race_C_Play_Reaction_When_Player_Has_Left_Dino_For_Too_Long_Params
{
};

// Function MissionType_Race.MissionType_Race_C.GetSpawnPointsForStartingLine
struct AMissionType_Race_C_GetSpawnPointsForStartingLine_Params
{
	class AMissionServerSidePoint*                     MissionServerSidePoint;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfRacers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            PrimalCharacterType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ForwardRot;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.Play Checkpoint Reaction
struct AMissionType_Race_C_Play_Checkpoint_Reaction_Params
{
	bool                                               Final_Checkpoint;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.GeneratePerPlayerPhaseRequirements
struct AMissionType_Race_C_GeneratePerPlayerPhaseRequirements_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Race.MissionType_Race_C.ActivateRacePowerUps
struct AMissionType_Race_C_ActivateRacePowerUps_Params
{
	class AMissionTrigger*                             Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            TriggeringActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.CalcRaceXPRatio
struct AMissionType_Race_C_CalcRaceXPRatio_Params
{
	class APrimalCharacter*                            Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Place;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.BPGenerateMissionRewards
struct AMissionType_Race_C_BPGenerateMissionRewards_Params
{
	struct FCharacterAndControllerPair*                Player;                                                   // (Parm)
	bool*                                              bCompletedSuccessfully;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              XPReward;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         GeneratedItems;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Race.MissionType_Race_C.BPGetMissionTimerText
struct AMissionType_Race_C_BPGetMissionTimerText_Params
{
	class AShooterPlayerController**                   ShootCont;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MissionType_Race.MissionType_Race_C.GeneratePhaseRequirements
struct AMissionType_Race_C_GeneratePhaseRequirements_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionPhaseRequirement>            Requirements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Race.MissionType_Race_C.GetDinoNameFromArray
struct AMissionType_Race_C_GetDinoNameFromArray_Params
{
	int                                                ArrayIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Item;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Race.MissionType_Race_C.GetNamedDinoSetup
struct AMissionType_Race_C_GetNamedDinoSetup_Params
{
	struct FDinoSetup                                  InSetup;                                                  // (Parm)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	struct FDinoSetup                                  Setup;                                                    // (Parm, OutParm)
};

// Function MissionType_Race.MissionType_Race_C.IsMissionComplete
struct AMissionType_Race_C_IsMissionComplete_Params
{
	class AShooterCharacter**                          forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.TryIncrementCheckpoint
struct AMissionType_Race_C_TryIncrementCheckpoint_Params
{
	class AShooterPlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             HitTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AtEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.BPIsPhaseComplete
struct AMissionType_Race_C_BPIsPhaseComplete_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.GetPerPlayerWorldIndicators
struct AMissionType_Race_C_GetPerPlayerWorldIndicators_Params
{
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter**                          Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMissionWorldIndicator>              WorldIndicators;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Race.MissionType_Race_C.GetNextCheckpoint
struct AMissionType_Race_C_GetNextCheckpoint_Params
{
	class AShooterPlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AMissionTrigger*                             NextCheckpoint;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CompletedRace;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.UserConstructionScript
struct AMissionType_Race_C_UserConstructionScript_Params
{
};

// Function MissionType_Race.MissionType_Race_C.BPOnMissionTriggerBeginOverlap
struct AMissionType_Race_C_BPOnMissionTriggerBeginOverlap_Params
{
	class AMissionTrigger**                            Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.BPOnMissionComplete
struct AMissionType_Race_C_BPOnMissionComplete_Params
{
	class AShooterCharacter**                          ForPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   ForController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPRewarded;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPrimalItem*>                         ItemsRewarded;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionType_Race.MissionType_Race_C.OnThrottledServerTick
struct AMissionType_Race_C_OnThrottledServerTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.BPOnMissionServerSetup
struct AMissionType_Race_C_BPOnMissionServerSetup_Params
{
};

// Function MissionType_Race.MissionType_Race_C.RaceStarted
struct AMissionType_Race_C_RaceStarted_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.RaceSetup
struct AMissionType_Race_C_RaceSetup_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.ReceiveBeginPlay
struct AMissionType_Race_C_ReceiveBeginPlay_Params
{
};

// Function MissionType_Race.MissionType_Race_C.TeleportToStart
struct AMissionType_Race_C_TeleportToStart_Params
{
	struct FName                                       OldPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.BPOnMissionDinoDied
struct AMissionType_Race_C_BPOnMissionDinoDied_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerDied
struct AMissionType_Race_C_BPOnMissionPlayerDied_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class AController**                                Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.PutPlayersOnMissionDino
struct AMissionType_Race_C_PutPlayersOnMissionDino_Params
{
};

// Function MissionType_Race.MissionType_Race_C.BPOnPlayerRemovedFromMission
struct AMissionType_Race_C_BPOnPlayerRemovedFromMission_Params
{
	class AShooterCharacter**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController**                   Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromMissionCompleteEvent;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bLastPhaseSuccess;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_Race.MissionType_Race_C.ExecuteUbergraph_MissionType_Race
struct AMissionType_Race_C_ExecuteUbergraph_MissionType_Race_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
