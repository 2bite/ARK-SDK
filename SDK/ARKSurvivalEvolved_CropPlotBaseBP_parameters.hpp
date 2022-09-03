#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CropPlotBaseBP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CropPlotBaseBP.CropPlotBaseBP_C.BPServerHandleNetExecCommand
struct ACropPlotBaseBP_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CropPlotBaseBP.CropPlotBaseBP_C.CanAttachToExosuit
struct ACropPlotBaseBP_C_CanAttachToExosuit_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CropPlotBaseBP.CropPlotBaseBP_C.CanBeStoredByExosuit
struct ACropPlotBaseBP_C_CanBeStoredByExosuit_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CropPlotBaseBP.CropPlotBaseBP_C.UserConstructionScript
struct ACropPlotBaseBP_C_UserConstructionScript_Params
{
};

// Function CropPlotBaseBP.CropPlotBaseBP_C.ExecuteUbergraph_CropPlotBaseBP
struct ACropPlotBaseBP_C_ExecuteUbergraph_CropPlotBaseBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
