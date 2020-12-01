#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRock_ShapeShifter_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.BPInitializedVelocity
struct AProjRock_ShapeShifter_C_BPInitializedVelocity_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             CustomSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.ReceiveBeginPlay
struct AProjRock_ShapeShifter_C_ReceiveBeginPlay_Params
{
};

// Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.UserConstructionScript
struct AProjRock_ShapeShifter_C_UserConstructionScript_Params
{
};

// Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.ExecuteUbergraph_ProjRock_ShapeShifter
struct AProjRock_ShapeShifter_C_ExecuteUbergraph_ProjRock_ShapeShifter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
