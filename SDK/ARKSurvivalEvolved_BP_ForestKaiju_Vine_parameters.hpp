#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ForestKaiju_Vine_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.VineCollisionCheck
struct ABP_ForestKaiju_Vine_C_VineCollisionCheck_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  ActorToIgnore;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OtherActorToIgnore;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.OnRep_EndVineLocation
struct ABP_ForestKaiju_Vine_C_OnRep_EndVineLocation_Params
{
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.TargetDataContainsTarget
struct ABP_ForestKaiju_Vine_C_TargetDataContainsTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.Get Current Vine End Location
struct ABP_ForestKaiju_Vine_C_Get_Current_Vine_End_Location_Params
{
	struct FVector                                     EndPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetVineTargets
struct ABP_ForestKaiju_Vine_C_GetVineTargets_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UpdateVines
struct ABP_ForestKaiju_Vine_C_UpdateVines_Params
{
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.InitVines
struct ABP_ForestKaiju_Vine_C_InitVines_Params
{
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveBeginPlay
struct ABP_ForestKaiju_Vine_C_ReceiveBeginPlay_Params
{
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.GetAIState
struct ABP_ForestKaiju_Vine_C_GetAIState_Params
{
	class UForestKaiju_AttackAIState_Grab_C*           State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ReceiveTick
struct ABP_ForestKaiju_Vine_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.UserConstructionScript
struct ABP_ForestKaiju_Vine_C_UserConstructionScript_Params
{
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SERVER_VineReachedGoal
struct ABP_ForestKaiju_Vine_C_SERVER_VineReachedGoal_Params
{
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.SetVineStartEnd
struct ABP_ForestKaiju_Vine_C_SetVineStartEnd_Params
{
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.MULTI_ReplicateTargets
struct ABP_ForestKaiju_Vine_C_MULTI_ReplicateTargets_Params
{
	TArray<struct FVineTargetData>                     Targets;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ForestKaiju_Vine.BP_ForestKaiju_Vine_C.ExecuteUbergraph_BP_ForestKaiju_Vine
struct ABP_ForestKaiju_Vine_C_ExecuteUbergraph_BP_ForestKaiju_Vine_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
