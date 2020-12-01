#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossArenaManager_EndBoss_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.RemoveElementFromCharacter
struct ABossArenaManager_EndBoss_C_RemoveElementFromCharacter_Params
{
	class APrimalCharacter*                            forChar;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ApplyDamageIfInFinalStages
struct ABossArenaManager_EndBoss_C_ApplyDamageIfInFinalStages_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.CheckAndSpawnDamageDeathParticle
struct ABossArenaManager_EndBoss_C_CheckAndSpawnDamageDeathParticle_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ShouldBossEnterFinalStage
struct ABossArenaManager_EndBoss_C_ShouldBossEnterFinalStage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DestroyImproperSubbosses
struct ABossArenaManager_EndBoss_C_DestroyImproperSubbosses_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.SetBossRevealLocation
struct ABossArenaManager_EndBoss_C_SetBossRevealLocation_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.SetCoreTransformTimes
struct ABossArenaManager_EndBoss_C_SetCoreTransformTimes_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.GetBossSpawnPointAboveGround
struct ABossArenaManager_EndBoss_C_GetBossSpawnPointAboveGround_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BossClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundPoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.Get Random Boss
struct ABossArenaManager_EndBoss_C_Get_Random_Boss_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.AdvanceStage
struct ABossArenaManager_EndBoss_C_AdvanceStage_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.SpawnBossCreature
struct ABossArenaManager_EndBoss_C_SpawnBossCreature_Params
{
	int                                                BossIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnedValidBoss;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMainBoss;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        SpawnedCharacter;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DecollideAndDamageImmune
struct ABossArenaManager_EndBoss_C_DecollideAndDamageImmune_Params
{
	bool                                               IsSubBoss;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.RevealEndBoss
struct ABossArenaManager_EndBoss_C_RevealEndBoss_Params
{
	int                                                Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasRevealed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.Was Sub Boss Killed
struct ABossArenaManager_EndBoss_C_Was_Sub_Boss_Killed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.EvaluateArenaState
struct ABossArenaManager_EndBoss_C_EvaluateArenaState_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.KillAllOccupants
struct ABossArenaManager_EndBoss_C_KillAllOccupants_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.UserConstructionScript
struct ABossArenaManager_EndBoss_C_UserConstructionScript_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ReceiveTick
struct ABossArenaManager_EndBoss_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.Do Boss Spawn
struct ABossArenaManager_EndBoss_C_Do_Boss_Spawn_Params
{
	int                                                BossToSpawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.StartBoss
struct ABossArenaManager_EndBoss_C_StartBoss_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.RemoveBossImmunityHidden
struct ABossArenaManager_EndBoss_C_RemoveBossImmunityHidden_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DissolveBoss
struct ABossArenaManager_EndBoss_C_DissolveBoss_Params
{
	bool                                               IsSubBoss;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.DelayForceSpawnMinions
struct ABossArenaManager_EndBoss_C_DelayForceSpawnMinions_Params
{
	bool                                               NewSpawn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.OnDeathEffects
struct ABossArenaManager_EndBoss_C_OnDeathEffects_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.EventTeleportToHome
struct ABossArenaManager_EndBoss_C_EventTeleportToHome_Params
{
};

// Function BossArenaManager_EndBoss.BossArenaManager_EndBoss_C.ExecuteUbergraph_BossArenaManager_EndBoss
struct ABossArenaManager_EndBoss_C_ExecuteUbergraph_BossArenaManager_EndBoss_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
