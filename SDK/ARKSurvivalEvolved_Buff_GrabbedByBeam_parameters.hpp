#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GrabbedByBeam_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ReceiveSkiffVars
struct ABuff_GrabbedByBeam_C_ReceiveSkiffVars_Params
{
	struct FVector                                     BeamStartLoc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BeamEndLoc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HoverSkiffBeamState>                 BeamState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetBeamCapturePercent
struct ABuff_GrabbedByBeam_C_GetBeamCapturePercent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetOwnerDragWeight
struct ABuff_GrabbedByBeam_C_GetOwnerDragWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.GetMaxProgress
struct ABuff_GrabbedByBeam_C_GetMaxProgress_Params
{
	float                                              maxProgress;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.Calculate Progress
struct ABuff_GrabbedByBeam_C_Calculate_Progress_Params
{
	float                                              timeDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewProgress;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.CalculateBeamProgressDelta
struct ABuff_GrabbedByBeam_C_CalculateBeamProgressDelta_Params
{
	float                                              timeDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ProgressDelta;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bInvalidProgress;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.InitializeBuff
struct ABuff_GrabbedByBeam_C_InitializeBuff_Params
{
	float                                              MaxBeamLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.BuffTickServer
struct ABuff_GrabbedByBeam_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.UserConstructionScript
struct ABuff_GrabbedByBeam_C_UserConstructionScript_Params
{
};

// Function Buff_GrabbedByBeam.Buff_GrabbedByBeam_C.ExecuteUbergraph_Buff_GrabbedByBeam
struct ABuff_GrabbedByBeam_C_ExecuteUbergraph_Buff_GrabbedByBeam_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
