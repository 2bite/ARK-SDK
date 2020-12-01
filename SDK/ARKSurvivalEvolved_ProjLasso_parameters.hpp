#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjLasso_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjLasso.ProjLasso_C.ReceiveTick
struct AProjLasso_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjLasso.ProjLasso_C.ReceiveBeginPlay
struct AProjLasso_C_ReceiveBeginPlay_Params
{
};

// Function ProjLasso.ProjLasso_C.BPInitializedVelocity
struct AProjLasso_C_BPInitializedVelocity_Params
{
	struct FVector                                     InVelocity;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             CustomSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjLasso.ProjLasso_C.UserConstructionScript
struct AProjLasso_C_UserConstructionScript_Params
{
};

// Function ProjLasso.ProjLasso_C.ExecuteUbergraph_ProjLasso
struct AProjLasso_C_ExecuteUbergraph_ProjLasso_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
