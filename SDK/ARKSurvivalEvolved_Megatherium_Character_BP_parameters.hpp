#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megatherium_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPPreventRiding
struct AMegatherium_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPTimerServer
struct AMegatherium_Character_BP_C_BPTimerServer_Params
{
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.ShouldStandUp
struct AMegatherium_Character_BP_C_ShouldStandUp_Params
{
	bool                                               megaShouldStand;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPOnAnimPlayedNotify
struct AMegatherium_Character_BP_C_BPOnAnimPlayedNotify_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplicateToOwner;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseAndServerUpdateMesh;                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceTickPoseOnServer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPGetMultiUseEntries
struct AMegatherium_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPTryMultiUse
struct AMegatherium_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.CanStandUp
struct AMegatherium_Character_BP_C_CanStandUp_Params
{
	bool                                               canStand;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.HasConflictWithAI
struct AMegatherium_Character_BP_C_HasConflictWithAI_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.CanSitDown
struct AMegatherium_Character_BP_C_CanSitDown_Params
{
	bool                                               canSit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPDoAttack
struct AMegatherium_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BlueprintCanRiderAttack
struct AMegatherium_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPModifyHarvestingQuantity
struct AMegatherium_Character_BP_C_BPModifyHarvestingQuantity_Params
{
	float*                                             originalQuantity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     resourceSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPKilledSomethingEvent
struct AMegatherium_Character_BP_C_BPKilledSomethingEvent_Params
{
	class APrimalCharacter**                           killedTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.OnNewTarget
struct AMegatherium_Character_BP_C_OnNewTarget_Params
{
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BlueprintAdjustOutputDamage
struct AMegatherium_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPAdjustDamage
struct AMegatherium_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.IsInsect
struct AMegatherium_Character_BP_C_IsInsect_Params
{
	class APrimalDinoCharacter*                        Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.UserConstructionScript
struct AMegatherium_Character_BP_C_UserConstructionScript_Params
{
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.SitDown
struct AMegatherium_Character_BP_C_SitDown_Params
{
	bool                                               PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.TryStandUp
struct AMegatherium_Character_BP_C_TryStandUp_Params
{
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.TrySitDown
struct AMegatherium_Character_BP_C_TrySitDown_Params
{
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.StandUp
struct AMegatherium_Character_BP_C_StandUp_Params
{
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.QuickSitDown
struct AMegatherium_Character_BP_C_QuickSitDown_Params
{
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.ReceiveBeginPlay
struct AMegatherium_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPUnstasis
struct AMegatherium_Character_BP_C_BPUnstasis_Params
{
};

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.ExecuteUbergraph_Megatherium_Character_BP
struct AMegatherium_Character_BP_C_ExecuteUbergraph_Megatherium_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
