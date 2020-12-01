#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossArenaManager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EX_BossArenaManager.EX_BossArenaManager_C.SendAscensionPreload
struct AEX_BossArenaManager_C_SendAscensionPreload_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.SetMusicInBiomes
struct AEX_BossArenaManager_C_SetMusicInBiomes_Params
{
	class USoundBase*                                  MusicToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.PlayStartingAscensionMatinee
struct AEX_BossArenaManager_C_PlayStartingAscensionMatinee_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.SendAscension
struct AEX_BossArenaManager_C_SendAscension_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.Spawn Ascension FVX
struct AEX_BossArenaManager_C_Spawn_Ascension_FVX_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.SpawnedBoss
struct AEX_BossArenaManager_C_SpawnedBoss_Params
{
	class APrimalDinoCharacter*                        Boss;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.SFXBack to Home
struct AEX_BossArenaManager_C_SFXBack_to_Home_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.IssueReturnWarning
struct AEX_BossArenaManager_C_IssueReturnWarning_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.BPClientHandleNetExecCommand
struct AEX_BossArenaManager_C_BPClientHandleNetExecCommand_Params
{
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.KillMinions
struct AEX_BossArenaManager_C_KillMinions_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.CheckForActivePlayers
struct AEX_BossArenaManager_C_CheckForActivePlayers_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.GetAllActorsOnAscensionPlatform
struct AEX_BossArenaManager_C_GetAllActorsOnAscensionPlatform_Params
{
	bool                                               bIncludeUnconscious;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUntamedCreatures;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDead;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnorePlayers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDinos;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAttached;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              TheActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.IssueTimeWarning
struct AEX_BossArenaManager_C_IssueTimeWarning_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.KillAllOccupants
struct AEX_BossArenaManager_C_KillAllOccupants_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.TeleportBackToHome
struct AEX_BossArenaManager_C_TeleportBackToHome_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.DidTeleport
struct AEX_BossArenaManager_C_DidTeleport_Params
{
	struct FVector                                     ReturnPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideBossClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.IsValidForTeleport
struct AEX_BossArenaManager_C_IsValidForTeleport_Params
{
	class FString                                      InvalidReason;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.UserConstructionScript
struct AEX_BossArenaManager_C_UserConstructionScript_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.StartBoss
struct AEX_BossArenaManager_C_StartBoss_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.ReceiveBeginPlay
struct AEX_BossArenaManager_C_ReceiveBeginPlay_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.ReceiveTick
struct AEX_BossArenaManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.KaijuKilled
struct AEX_BossArenaManager_C_KaijuKilled_Params
{
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.BndEvt__TitanInfoVolume_K2Node_ComponentBoundEvent_349_ComponentBeginOverlapSignature__DelegateSignature
struct AEX_BossArenaManager_C_BndEvt__TitanInfoVolume_K2Node_ComponentBoundEvent_349_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.Call Event Kaiju Despawned
struct AEX_BossArenaManager_C_Call_Event_Kaiju_Despawned_Params
{
	class APrimalDinoCharacter*                        Kaiju;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.CallEvent_PlayKaijuSecondPhaseMusic
struct AEX_BossArenaManager_C_CallEvent_PlayKaijuSecondPhaseMusic_Params
{
	class APrimalDinoCharacter*                        Kaiju;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_BossArenaManager.EX_BossArenaManager_C.ExecuteUbergraph_EX_BossArenaManager
struct AEX_BossArenaManager_C_ExecuteUbergraph_EX_BossArenaManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
