#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_Character_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndBoss_Character.EndBoss_Character_C.Update Only Core Transform Time
struct AEndBoss_Character_C_Update_Only_Core_Transform_Time_Params
{
	double                                             NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.ReceiveDestroyed
struct AEndBoss_Character_C_ReceiveDestroyed_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.DestroyAllMinions
struct AEndBoss_Character_C_DestroyAllMinions_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.BPGetHealthBarColor
struct AEndBoss_Character_C_BPGetHealthBarColor_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.UpdateDesiredNumDrones
struct AEndBoss_Character_C_UpdateDesiredNumDrones_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.ForceImpulsePrimalCharacter
struct AEndBoss_Character_C_ForceImpulsePrimalCharacter_Params
{
	class APrimalCharacter*                            TargetPrimalChar;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.EndBoss Movement Push
struct AEndBoss_Character_C_EndBoss_Movement_Push_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.UpdateMobility
struct AEndBoss_Character_C_UpdateMobility_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.BPShouldForceFlee
struct AEndBoss_Character_C_BPShouldForceFlee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.EndBoss_GetDifficultyColor
struct AEndBoss_Character_C_EndBoss_GetDifficultyColor_Params
{
	struct FLinearColor                                ReturnColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.KillAllMinions
struct AEndBoss_Character_C_KillAllMinions_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.UpdateThrone
struct AEndBoss_Character_C_UpdateThrone_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.ServerPlayTransitionSound
struct AEndBoss_Character_C_ServerPlayTransitionSound_Params
{
	bool                                               InTransition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.Update Hit Response Cycle at Index
struct AEndBoss_Character_C_Update_Hit_Response_Cycle_at_Index_Params
{
	int                                                InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClearEntry;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.CheckHitLocation
struct AEndBoss_Character_C_CheckHitLocation_Params
{
	struct FVector                                     LocationToCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldSetHit;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PreviousHit;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.AddShieldHitResponse
struct AEndBoss_Character_C_AddShieldHitResponse_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.Minion Spawned FX
struct AEndBoss_Character_C_Minion_Spawned_FX_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.Set Static Mesh Materials
struct AEndBoss_Character_C_Set_Static_Mesh_Materials_Params
{
	float                                              InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.EndBossSetDissolvePercent
struct AEndBoss_Character_C_EndBossSetDissolvePercent_Params
{
	float                                              NewPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DissolveParameterName;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.EndBoss Get Arena Difficulty
struct AEndBoss_Character_C_EndBoss_Get_Arena_Difficulty_Params
{
	TEnumAsByte<EBossDifficulty_Enum>                  difficulty;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.EndBossDissolveFunc
struct AEndBoss_Character_C_EndBossDissolveFunc_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DissolveParamName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastPercentValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.Speed by Cloud
struct AEndBoss_Character_C_Speed_by_Cloud_Params
{
	bool                                               NoCollision;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.AttemptBeamAttack
struct AEndBoss_Character_C_AttemptBeamAttack_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.CanHaveBeams
struct AEndBoss_Character_C_CanHaveBeams_Params
{
	bool                                               _return;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.GetRandomGroundPoint
struct AEndBoss_Character_C_GetRandomGroundPoint_Params
{
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.FindMinionSpawnLoc
struct AEndBoss_Character_C_FindMinionSpawnLoc_Params
{
	struct FVector                                     SpawnLoc;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRot;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundGoodLoc;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.AttemptToSpawnMinions
struct AEndBoss_Character_C_AttemptToSpawnMinions_Params
{
	bool                                               IgnoreTimeCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.SummonTankMinions
struct AEndBoss_Character_C_SummonTankMinions_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.SummonDroneMinions
struct AEndBoss_Character_C_SummonDroneMinions_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.Remove Bad Minions from List
struct AEndBoss_Character_C_Remove_Bad_Minions_from_List_Params
{
	TArray<class APrimalCharacter*>                    InputPin;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EndBoss_Character.EndBoss_Character_C.SpawnMinionDinoFromAttackInfo
struct AEndBoss_Character_C_SpawnMinionDinoFromAttackInfo_Params
{
	int                                                AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        SpawnedDino;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.BPTimerNonDedicated
struct AEndBoss_Character_C_BPTimerNonDedicated_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.Update Visual Core Transform
struct AEndBoss_Character_C_Update_Visual_Core_Transform_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.Set Core Values
struct AEndBoss_Character_C_Set_Core_Values_Params
{
	float                                              Health;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             TransformTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.BPAdjustDamage
struct AEndBoss_Character_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.IterateCurrentBeamIndex
struct AEndBoss_Character_C_IterateCurrentBeamIndex_Params
{
	bool                                               didReset;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.BlueprintCanAttack
struct AEndBoss_Character_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.BPDoAttack
struct AEndBoss_Character_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.UserConstructionScript
struct AEndBoss_Character_C_UserConstructionScript_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.BeamFire__FinishedFunc
struct AEndBoss_Character_C_BeamFire__FinishedFunc_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.BeamFire__UpdateFunc
struct AEndBoss_Character_C_BeamFire__UpdateFunc_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.UpdateCloudVisuals__FinishedFunc
struct AEndBoss_Character_C_UpdateCloudVisuals__FinishedFunc_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.UpdateCloudVisuals__UpdateFunc
struct AEndBoss_Character_C_UpdateCloudVisuals__UpdateFunc_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.FireBeamAroundCircle
struct AEndBoss_Character_C_FireBeamAroundCircle_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.FireBeamNum
struct AEndBoss_Character_C_FireBeamNum_Params
{
	bool                                               AtAimDir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BeamDesiredNum;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.BPTimerServer
struct AEndBoss_Character_C_BPTimerServer_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.ReceiveBeginPlay
struct AEndBoss_Character_C_ReceiveBeginPlay_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.OnDied_Event
struct AEndBoss_Character_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.ImpulseUnderCore
struct AEndBoss_Character_C_ImpulseUnderCore_Params
{
	struct FVector                                     ImpulseLoc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.StartDamageResponse
struct AEndBoss_Character_C_StartDamageResponse_Params
{
	struct FHitResult                                  PointHit;                                                 // (Parm)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.SetCloudForm
struct AEndBoss_Character_C_SetCloudForm_Params
{
	bool                                               NewCloudForm;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoCollision;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DissolveTransition;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.StartCloudVisualUpdate
struct AEndBoss_Character_C_StartCloudVisualUpdate_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.Multi_SetLocation
struct AEndBoss_Character_C_Multi_SetLocation_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.MultiMinionSpawned
struct AEndBoss_Character_C_MultiMinionSpawned_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.Multi_AddShieldHitResponse
struct AEndBoss_Character_C_Multi_AddShieldHitResponse_Params
{
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.MultiPlaySound
struct AEndBoss_Character_C_MultiPlaySound_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attach;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.Multi_SetCloudForm
struct AEndBoss_Character_C_Multi_SetCloudForm_Params
{
	bool                                               NewCloudForm;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoCollision;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDissolveTransition;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.Multi_SpawnThroneParticle
struct AEndBoss_Character_C_Multi_SpawnThroneParticle_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.SpawnFloatingWakeEffects
struct AEndBoss_Character_C_SpawnFloatingWakeEffects_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.Multi_SpawnDeathByDamageParticle
struct AEndBoss_Character_C_Multi_SpawnDeathByDamageParticle_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.DebugWanderDestination_Multicast
struct AEndBoss_Character_C_DebugWanderDestination_Multicast_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.DebugWanderDestination_Server
struct AEndBoss_Character_C_DebugWanderDestination_Server_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.DebugLineTrace_Multicasty
struct AEndBoss_Character_C_DebugLineTrace_Multicasty_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.DebugLineTrace_Server
struct AEndBoss_Character_C_DebugLineTrace_Server_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.SpawnThroneParticle
struct AEndBoss_Character_C_SpawnThroneParticle_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.Multi_PlayDeathMatinee
struct AEndBoss_Character_C_Multi_PlayDeathMatinee_Params
{
	class AMatineeActor*                               DeathMat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.PlayBossSound
struct AEndBoss_Character_C_PlayBossSound_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attach;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.Multi_SpawnImpulseVFXAtLoc
struct AEndBoss_Character_C_Multi_SpawnImpulseVFXAtLoc_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_Character.EndBoss_Character_C.Multi_DrawHealthBar
struct AEndBoss_Character_C_Multi_DrawHealthBar_Params
{
};

// Function EndBoss_Character.EndBoss_Character_C.ExecuteUbergraph_EndBoss_Character
struct AEndBoss_Character_C_ExecuteUbergraph_EndBoss_Character_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
