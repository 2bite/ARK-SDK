#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HordeSpawnNetwork_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetOriginSplinePoints
struct AHordeSpawnNetwork_C_GetOriginSplinePoints_Params
{
	class AHorde_Spline_Path_C*                        LastSpline;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AHorde_Spline_Path_C*                        SplineData;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DelayTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.DoNodeLineTrace
struct AHordeSpawnNetwork_C_DoNodeLineTrace_Params
{
	struct FVector                                     Begin;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFrontNode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetAngleBetweenVectors
struct AHordeSpawnNetwork_C_GetAngleBetweenVectors_Params
{
	struct FVector                                     v1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     v2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.FindClosestNode
struct AHordeSpawnNetwork_C_FindClosestNode_Params
{
	struct FVector                                     MyLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExcludeExisitingNode;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpawnPointStruct                           ExistingNode;                                             // (Parm)
	struct FSpawnPointStruct                           RetNode;                                                  // (Parm, OutParm)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.CheckHitTolerance
struct AHordeSpawnNetwork_C_CheckHitTolerance_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm)
	struct FVector                                     OriginalVector;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecondVector;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FrontNode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitVector;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.DrawDebugLines
struct AHordeSpawnNetwork_C_DrawDebugLines_Params
{
	bool                                               bIsBlocked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     v1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     v2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetNeighborPoints
struct AHordeSpawnNetwork_C_GetNeighborPoints_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetValidOriginPoints
struct AHordeSpawnNetwork_C_GetValidOriginPoints_Params
{
	int                                                RingIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpawnPointStruct                           RetNodes;                                                 // (Parm, OutParm)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.Evaluate Points
struct AHordeSpawnNetwork_C_Evaluate_Points_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetNearbyPoints
struct AHordeSpawnNetwork_C_GetNearbyPoints_Params
{
	struct FSpawnPointStruct                           In;                                                       // (Parm)
	int                                                ArrayIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnPointStruct>                   Points;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.FindPaths
struct AHordeSpawnNetwork_C_FindPaths_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GetPointsInRadius
struct AHordeSpawnNetwork_C_GetPointsInRadius_Params
{
	int                                                RingNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnPointStruct>                   RetSpawnPoints;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GenerateRing
struct AHordeSpawnNetwork_C_GenerateRing_Params
{
	float                                              RadiusInput;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumOfPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Radiuslevel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GenerateSpawnPoints
struct AHordeSpawnNetwork_C_GenerateSpawnPoints_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.UserConstructionScript
struct AHordeSpawnNetwork_C_UserConstructionScript_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.ReceiveBeginPlay
struct AHordeSpawnNetwork_C_ReceiveBeginPlay_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.GenerateInitialSpawnPoints
struct AHordeSpawnNetwork_C_GenerateInitialSpawnPoints_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.ClearAllSpawnPoints
struct AHordeSpawnNetwork_C_ClearAllSpawnPoints_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.RegeneratePaths
struct AHordeSpawnNetwork_C_RegeneratePaths_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.EnablePostProcess
struct AHordeSpawnNetwork_C_EnablePostProcess_Params
{
};

// Function HordeSpawnNetwork.HordeSpawnNetwork_C.ExecuteUbergraph_HordeSpawnNetwork
struct AHordeSpawnNetwork_C_ExecuteUbergraph_HordeSpawnNetwork_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
