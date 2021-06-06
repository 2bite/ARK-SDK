#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotLarge_SM_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CropPlotLarge_SM.CropPlotLarge_SM_C.AllowManualMultiUseActivation
struct ACropPlotLarge_SM_C_AllowManualMultiUseActivation_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CropPlotLarge_SM.CropPlotLarge_SM_C.ReceiveBeginPlay
struct ACropPlotLarge_SM_C_ReceiveBeginPlay_Params
{
};

// Function CropPlotLarge_SM.CropPlotLarge_SM_C.ReceiveTick
struct ACropPlotLarge_SM_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CropPlotLarge_SM.CropPlotLarge_SM_C.UserConstructionScript
struct ACropPlotLarge_SM_C_UserConstructionScript_Params
{
};

// Function CropPlotLarge_SM.CropPlotLarge_SM_C.ExecuteUbergraph_CropPlotLarge_SM
struct ACropPlotLarge_SM_C_ExecuteUbergraph_CropPlotLarge_SM_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
