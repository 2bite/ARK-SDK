#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IncubatorGestationMonitor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.BuffTickServer
struct ABuff_IncubatorGestationMonitor_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.GetEnabledGestationMonitoringTargets
struct ABuff_IncubatorGestationMonitor_C_GetEnabledGestationMonitoringTargets_Params
{
	TArray<class APrimalDinoCharacter*>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.SetGestationMonitoringTarget
struct ABuff_IncubatorGestationMonitor_C_SetGestationMonitoringTarget_Params
{
	class APrimalDinoCharacter**                       forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ReplicateGestationData
struct ABuff_IncubatorGestationMonitor_C_ReplicateGestationData_Params
{
	struct FUnreplicatedEggData                        GestationData;                                            // (Parm)
	class APrimalDinoCharacter*                        forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.UserConstructionScript
struct ABuff_IncubatorGestationMonitor_C_UserConstructionScript_Params
{
};

// Function Buff_IncubatorGestationMonitor.Buff_IncubatorGestationMonitor_C.ExecuteUbergraph_Buff_IncubatorGestationMonitor
struct ABuff_IncubatorGestationMonitor_C_ExecuteUbergraph_Buff_IncubatorGestationMonitor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
