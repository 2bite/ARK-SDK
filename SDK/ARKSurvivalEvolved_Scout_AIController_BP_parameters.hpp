#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Scout_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Scout_AIController_BP.Scout_AIController_BP_C.IsTargetIsAimedAtScout
struct AScout_AIController_BP_C_IsTargetIsAimedAtScout_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.ComputeStatModifierFromTargetDistance
struct AScout_AIController_BP_C_ComputeStatModifierFromTargetDistance_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.GetDistanceToTarget
struct AScout_AIController_BP_C_GetDistanceToTarget_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.GetCustomModifierRotationRate
struct AScout_AIController_BP_C_GetCustomModifierRotationRate_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.GetCustomModifierMaxSpeed
struct AScout_AIController_BP_C_GetCustomModifierMaxSpeed_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.ScoutDamaged
struct AScout_AIController_BP_C_ScoutDamaged_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.ScoutSetTarget
struct AScout_AIController_BP_C_ScoutSetTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialAggressionWeight;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.CanLaunchTrackerAtTarget
struct AScout_AIController_BP_C_CanLaunchTrackerAtTarget_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.DropTarget
struct AScout_AIController_BP_C_DropTarget_Params
{
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.GetScout
struct AScout_AIController_BP_C_GetScout_Params
{
	class AScout_Character_BP_C*                       Scout;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.Get Last Aggression Time
struct AScout_AIController_BP_C_Get_Last_Aggression_Time_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastAttackTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.BPSetupFindTarget
struct AScout_AIController_BP_C_BPSetupFindTarget_Params
{
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.BPGetTargetingDesire
struct AScout_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.UserConstructionScript
struct AScout_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.ReceiveTick
struct AScout_AIController_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.FindAggressors
struct AScout_AIController_BP_C_FindAggressors_Params
{
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.ReceiveBeginPlay
struct AScout_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.ResumeFollowTarget
struct AScout_AIController_BP_C_ResumeFollowTarget_Params
{
};

// Function Scout_AIController_BP.Scout_AIController_BP_C.ExecuteUbergraph_Scout_AIController_BP
struct AScout_AIController_BP_C_ExecuteUbergraph_Scout_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
