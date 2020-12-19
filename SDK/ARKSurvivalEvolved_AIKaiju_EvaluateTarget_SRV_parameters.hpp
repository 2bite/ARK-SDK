#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AIKaiju_EvaluateTarget_SRV_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeLiqBombTowardsDK
struct UAIKaiju_EvaluateTarget_SRV_C_MaybeLiqBombTowardsDK_Params
{
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsTamedAndPassive
struct UAIKaiju_EvaluateTarget_SRV_C_IsTamedAndPassive_Params
{
	bool                                               IsPassive;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseLeapTarget
struct UAIKaiju_EvaluateTarget_SRV_C_ChooseLeapTarget_Params
{
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.GetHighestPriorityActor
struct UAIKaiju_EvaluateTarget_SRV_C_GetHighestPriorityActor_Params
{
	TArray<class AActor*>                              EnemyList;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      HighestPriTarget;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AllowedToTarget
struct UAIKaiju_EvaluateTarget_SRV_C_AllowedToTarget_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseQuadWithMostEnemies
struct UAIKaiju_EvaluateTarget_SRV_C_ChooseQuadWithMostEnemies_Params
{
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeAcquireClusterTarget
struct UAIKaiju_EvaluateTarget_SRV_C_MaybeAcquireClusterTarget_Params
{
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.MaybeShakePlayersOff
struct UAIKaiju_EvaluateTarget_SRV_C_MaybeShakePlayersOff_Params
{
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ChooseCloseQuadrantWithMostEnemy
struct UAIKaiju_EvaluateTarget_SRV_C_ChooseCloseQuadrantWithMostEnemy_Params
{
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.AddToCloseQuadrantArray
struct UAIKaiju_EvaluateTarget_SRV_C_AddToCloseQuadrantArray_Params
{
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.IsAttackerUsingRangedWeapon
struct UAIKaiju_EvaluateTarget_SRV_C_IsAttackerUsingRangedWeapon_Params
{
	class UObject*                                     Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UsingRanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ClearTargeting
struct UAIKaiju_EvaluateTarget_SRV_C_ClearTargeting_Params
{
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.TargetAcquire
struct UAIKaiju_EvaluateTarget_SRV_C_TargetAcquire_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveActivation
struct UAIKaiju_EvaluateTarget_SRV_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ReceiveTick
struct UAIKaiju_EvaluateTarget_SRV_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIKaiju_EvaluateTarget_SRV.AIKaiju_EvaluateTarget_SRV_C.ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV
struct UAIKaiju_EvaluateTarget_SRV_C_ExecuteUbergraph_AIKaiju_EvaluateTarget_SRV_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
