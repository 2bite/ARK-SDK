#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Para_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Para_Character_BP.Para_Character_BP_C.CanUseAlertPulse
struct APara_Character_BP_C_CanUseAlertPulse_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.ReceiveTick
struct APara_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.GetNearbyEnemies
struct APara_Character_BP_C_GetNearbyEnemies_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Para_Character_BP.Para_Character_BP_C.NotifyPlayerAboutAlert
struct APara_Character_BP_C_NotifyPlayerAboutAlert_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.SetHighFoodConsumption
struct APara_Character_BP_C_SetHighFoodConsumption_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.BPNotifyClearRider
struct APara_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.BPNotifySetRider
struct APara_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.BPHandleControllerInitiatedAttack
struct APara_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.ClassifyScanningTarget
struct APara_Character_BP_C_ClassifyScanningTarget_Params
{
	class AActor*                                      ScanTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPara_WarningMode>                     WarningMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FleeingCountsAsHostile;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnemy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSmallCreature;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.BP_OnSetDeath
struct APara_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function Para_Character_BP.Para_Character_BP_C.OnRep_IsAlertActive
struct APara_Character_BP_C_OnRep_IsAlertActive_Params
{
};

// Function Para_Character_BP.Para_Character_BP_C.BlueprintCanAttack
struct APara_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.Is Small Creature
struct APara_Character_BP_C_Is_Small_Creature_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSmall;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.Is Frighten On Cooldown
struct APara_Character_BP_C_Is_Frighten_On_Cooldown_Params
{
	bool                                               OnCooldown;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.Find Nearby Small Creatures
struct APara_Character_BP_C_Find_Nearby_Small_Creatures_Params
{
	TArray<class APrimalDinoCharacter*>                Creatures;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Para_Character_BP.Para_Character_BP_C.BlueprintCanRiderAttack
struct APara_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.IsDinoHostile
struct APara_Character_BP_C_IsDinoHostile_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FleeingCountsAsHostile;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHostile;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.BPClientDoMultiUse
struct APara_Character_BP_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.Octree Warning Scan
struct APara_Character_BP_C_Octree_Warning_Scan_Params
{
	TEnumAsByte<EPara_WarningMode>                     Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludeFleeing;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalCharacter*>                    FoundEnemies;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               FoundSmallCreature;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   FoundPlayers;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Para_Character_BP.Para_Character_BP_C.BPTryMultiUse
struct APara_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.BPGetMultiUseEntries
struct APara_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Para_Character_BP.Para_Character_BP_C.SetTurretMode
struct APara_Character_BP_C_SetTurretMode_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.UserConstructionScript
struct APara_Character_BP_C_UserConstructionScript_Params
{
};

// Function Para_Character_BP.Para_Character_BP_C.MulticastUpdateWarningMode
struct APara_Character_BP_C_MulticastUpdateWarningMode_Params
{
	bool                                               WarningModeEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.AlertTick
struct APara_Character_BP_C_AlertTick_Params
{
};

// Function Para_Character_BP.Para_Character_BP_C.StartAlertTick
struct APara_Character_BP_C_StartAlertTick_Params
{
};

// Function Para_Character_BP.Para_Character_BP_C.StopAlertTick
struct APara_Character_BP_C_StopAlertTick_Params
{
};

// Function Para_Character_BP.Para_Character_BP_C.UpdateWarningMode
struct APara_Character_BP_C_UpdateWarningMode_Params
{
	bool                                               WarningModeEnabled;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Para_Character_BP.Para_Character_BP_C.ServerRequestAlertPulse
struct APara_Character_BP_C_ServerRequestAlertPulse_Params
{
};

// Function Para_Character_BP.Para_Character_BP_C.DoAlertPulse
struct APara_Character_BP_C_DoAlertPulse_Params
{
};

// Function Para_Character_BP.Para_Character_BP_C.ExecuteUbergraph_Para_Character_BP
struct APara_Character_BP_C_ExecuteUbergraph_Para_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
