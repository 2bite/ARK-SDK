#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Flashbang_PlayerPawn_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetBuffPostprocessIntensity
struct ABuff_Flashbang_PlayerPawn_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPSetupForInstigator
struct ABuff_Flashbang_PlayerPawn_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BPPreSetupForInstigator
struct ABuff_Flashbang_PlayerPawn_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ShouldStartFading
struct ABuff_Flashbang_PlayerPawn_C_ShouldStartFading_Params
{
	bool                                               ShouldFade;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.IsNearbyStructure
struct ABuff_Flashbang_PlayerPawn_C_IsNearbyStructure_Params
{
	int                                                CheckIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IndexOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StructureInBetween;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateIntensityAverage
struct ABuff_Flashbang_PlayerPawn_C_CalculateIntensityAverage_Params
{
	float                                              Exposure;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewingAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Average;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.CalculateWeightedIntensityAverage
struct ABuff_Flashbang_PlayerPawn_C_CalculateWeightedIntensityAverage_Params
{
	float                                              Exposure;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewingAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Average;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get Normalized Distance
struct ABuff_Flashbang_PlayerPawn_C_Get_Normalized_Distance_Params
{
	class AActor*                                      Actor1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Retval;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Get NormalizedViewing Angle
struct ABuff_Flashbang_PlayerPawn_C_Get_NormalizedViewing_Angle_Params
{
	struct FVector                                     v1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     v2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RetValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.GetNormalizedExposure
struct ABuff_Flashbang_PlayerPawn_C_GetNormalizedExposure_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.UserConstructionScript
struct ABuff_Flashbang_PlayerPawn_C_UserConstructionScript_Params
{
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.BuffTickClient
struct ABuff_Flashbang_PlayerPawn_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ROS_CancelBuff
struct ABuff_Flashbang_PlayerPawn_C_ROS_CancelBuff_Params
{
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.FlashbangSetup
struct ABuff_Flashbang_PlayerPawn_C_FlashbangSetup_Params
{
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.Flashbang_PreInit
struct ABuff_Flashbang_PlayerPawn_C_Flashbang_PreInit_Params
{
};

// Function Buff_Flashbang_PlayerPawn.Buff_Flashbang_PlayerPawn_C.ExecuteUbergraph_Buff_Flashbang_PlayerPawn
struct ABuff_Flashbang_PlayerPawn_C_ExecuteUbergraph_Buff_Flashbang_PlayerPawn_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
