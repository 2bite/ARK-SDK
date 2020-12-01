#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HordeRouteManager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ActivateLostParticle
struct ABuff_HordeRouteManager_C_ActivateLostParticle_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.CheckForBlockades
struct ABuff_HordeRouteManager_C_CheckForBlockades_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.FlyerInterval Attack
struct ABuff_HordeRouteManager_C_FlyerInterval_Attack_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.OnFinishedRouting
struct ABuff_HordeRouteManager_C_OnFinishedRouting_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.RemoveRoutingLogic
struct ABuff_HordeRouteManager_C_RemoveRoutingLogic_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.IsValidRoutePath
struct ABuff_HordeRouteManager_C_IsValidRoutePath_Params
{
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.CheckForValidNPCs
struct ABuff_HordeRouteManager_C_CheckForValidNPCs_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ReceiveDestroyed
struct ABuff_HordeRouteManager_C_ReceiveDestroyed_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.GetAiController
struct ABuff_HordeRouteManager_C_GetAiController_Params
{
	class APrimalDinoAIController*                     Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.BuffTickServer
struct ABuff_HordeRouteManager_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.RouteToPoint
struct ABuff_HordeRouteManager_C_RouteToPoint_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.AreVectorsNearlyEqual
struct ABuff_HordeRouteManager_C_AreVectorsNearlyEqual_Params
{
	struct FVector                                     v1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     v2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ErrorTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AreEqual;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.IsReady for Next Point
struct ABuff_HordeRouteManager_C_IsReady_for_Next_Point_Params
{
	bool                                               Ready;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.Set Route to Pos
struct ABuff_HordeRouteManager_C_Set_Route_to_Pos_Params
{
	struct FSpawnPointStruct                           SpawnPoint;                                               // (Parm)
	struct FSpawnPointStruct                           Node;                                                     // (Parm, OutParm)
	bool                                               IsLastPoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.InitiateRoute
struct ABuff_HordeRouteManager_C_InitiateRoute_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.UserConstructionScript
struct ABuff_HordeRouteManager_C_UserConstructionScript_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.StartRoutingLogic
struct ABuff_HordeRouteManager_C_StartRoutingLogic_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.IsStuckDetection
struct ABuff_HordeRouteManager_C_IsStuckDetection_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ResumeStuckDetection
struct ABuff_HordeRouteManager_C_ResumeStuckDetection_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.CheckFlyerAttackInterval
struct ABuff_HordeRouteManager_C_CheckFlyerAttackInterval_Params
{
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.DelayedTeleportAndInitiateRoute
struct ABuff_HordeRouteManager_C_DelayedTeleportAndInitiateRoute_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HordeRouteManager.Buff_HordeRouteManager_C.ExecuteUbergraph_Buff_HordeRouteManager
struct ABuff_HordeRouteManager_C_ExecuteUbergraph_Buff_HordeRouteManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
