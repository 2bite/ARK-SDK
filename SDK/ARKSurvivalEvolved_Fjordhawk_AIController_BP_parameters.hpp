#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ResetAttackTimers
struct AFjordhawk_AIController_BP_C_ResetAttackTimers_Params
{
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.StartWaitingForRespawn
struct AFjordhawk_AIController_BP_C_StartWaitingForRespawn_Params
{
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindTeleportLocation
struct AFjordhawk_AIController_BP_C_FindTeleportLocation_Params
{
	class AShooterCharacter*                           InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FRotator                                    ReturnValue2;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.OnPossess
struct AFjordhawk_AIController_BP_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.CheckForRespawnedPlayer
struct AFjordhawk_AIController_BP_C_CheckForRespawnedPlayer_Params
{
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveDestroyed
struct AFjordhawk_AIController_BP_C_ReceiveDestroyed_Params
{
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveBeginPlay
struct AFjordhawk_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.PerformanceThrottledTick
struct AFjordhawk_AIController_BP_C_PerformanceThrottledTick_Params
{
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindLandingLocation
struct AFjordhawk_AIController_BP_C_FindLandingLocation_Params
{
	struct FVector                                     DesiredLOocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPOnFleeEvent
struct AFjordhawk_AIController_BP_C_BPOnFleeEvent_Params
{
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPGetTargetingDesire
struct AFjordhawk_AIController_BP_C_BPGetTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.UserConstructionScript
struct AFjordhawk_AIController_BP_C_UserConstructionScript_Params
{
};

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ExecuteUbergraph_Fjordhawk_AIController_BP
struct AFjordhawk_AIController_BP_C_ExecuteUbergraph_Fjordhawk_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
