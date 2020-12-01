#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_HasReachedDestination_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.IsBossStuck
struct UEndBoss_HasReachedDestination_C_IsBossStuck_Params
{
	class APrimalDinoAIController*                     bossController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isVelocityLow;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isNavigationInvalid;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.ReceiveActivation
struct UEndBoss_HasReachedDestination_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.ReceiveTick
struct UEndBoss_HasReachedDestination_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_HasReachedDestination.EndBoss_HasReachedDestination_C.ExecuteUbergraph_EndBoss_HasReachedDestination
struct UEndBoss_HasReachedDestination_C_ExecuteUbergraph_EndBoss_HasReachedDestination_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
