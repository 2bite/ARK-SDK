#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.Find Emergency Wander Point Actor
struct AEndBoss_AIController_BP_C_Find_Emergency_Wander_Point_Actor_Params
{
	class AActor*                                      navPointToVisit;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.Find Next Wander Point Actor
struct AEndBoss_AIController_BP_C_Find_Next_Wander_Point_Actor_Params
{
	class AActor*                                      navPointToVisit;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.InitializeNavigation
struct AEndBoss_AIController_BP_C_InitializeNavigation_Params
{
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.OnWanderingPointReached
struct AEndBoss_AIController_BP_C_OnWanderingPointReached_Params
{
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.GetPointFromIndex
struct AEndBoss_AIController_BP_C_GetPointFromIndex_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Points;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Point;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.HasReachedDestination
struct AEndBoss_AIController_BP_C_HasReachedDestination_Params
{
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hasReached;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.UserConstructionScript
struct AEndBoss_AIController_BP_C_UserConstructionScript_Params
{
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.ReceiveBeginPlay
struct AEndBoss_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.DebugWanderDestination_Multicast
struct AEndBoss_AIController_BP_C_DebugWanderDestination_Multicast_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.DebugWanderDestination_Server
struct AEndBoss_AIController_BP_C_DebugWanderDestination_Server_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.DebugLineTrace_Server
struct AEndBoss_AIController_BP_C_DebugLineTrace_Server_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndBoss_AIController_BP.EndBoss_AIController_BP_C.ExecuteUbergraph_EndBoss_AIController_BP
struct AEndBoss_AIController_BP_C_ExecuteUbergraph_EndBoss_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
