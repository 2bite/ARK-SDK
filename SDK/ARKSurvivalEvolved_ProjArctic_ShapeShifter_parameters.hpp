#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArctic_ShapeShifter_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.BPInitializedVelocity
struct AProjArctic_ShapeShifter_C_BPInitializedVelocity_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             CustomSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ReceiveBeginPlay
struct AProjArctic_ShapeShifter_C_ReceiveBeginPlay_Params
{
};

// Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.UserConstructionScript
struct AProjArctic_ShapeShifter_C_UserConstructionScript_Params
{
};

// Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ExecuteUbergraph_ProjArctic_ShapeShifter
struct AProjArctic_ShapeShifter_C_ExecuteUbergraph_ProjArctic_ShapeShifter_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
