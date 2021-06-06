#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_PointOfInterest_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.CanBeViewed
struct ABuff_Base_PointOfInterest_C_CanBeViewed_Params
{
	class AActor*                                      ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointCustomData
struct ABuff_Base_PointOfInterest_C_GetPointCustomData_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.GetPointOfInterestData
struct ABuff_Base_PointOfInterest_C_GetPointOfInterestData_Params
{
	struct FPointOfInterestData                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.InititalizePointOfInterest
struct ABuff_Base_PointOfInterest_C_InititalizePointOfInterest_Params
{
};

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UserConstructionScript
struct ABuff_Base_PointOfInterest_C_UserConstructionScript_Params
{
};

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.SetPointTagUniqueState
struct ABuff_Base_PointOfInterest_C_SetPointTagUniqueState_Params
{
	bool                                               bNewUniqueState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.UnviewPoint
struct ABuff_Base_PointOfInterest_C_UnviewPoint_Params
{
	class AActor*                                      UnviewedByActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ViewPoint
struct ABuff_Base_PointOfInterest_C_ViewPoint_Params
{
	class AActor*                                      ViewedByActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Base_PointOfInterest.Buff_Base_PointOfInterest_C.ExecuteUbergraph_Buff_Base_PointOfInterest
struct ABuff_Base_PointOfInterest_C_ExecuteUbergraph_Buff_Base_PointOfInterest_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
