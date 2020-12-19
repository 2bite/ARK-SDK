#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Telemetry_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Telemetry.TelemetryFunctionLibrary.ZoneColor
struct UTelemetryFunctionLibrary_ZoneColor_Params
{
	float                                              red;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              green;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blue;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.Stop
struct UTelemetryFunctionLibrary_Stop_Params
{
};

// Function Telemetry.TelemetryFunctionLibrary.Start
struct UTelemetryFunctionLibrary_Start_Params
{
	class FString                                      server_ip;                                                // (Parm, ZeroConstructor)
};

// Function Telemetry.TelemetryFunctionLibrary.SetZoneFlag
struct UTelemetryFunctionLibrary_SetZoneFlag_Params
{
	TEnumAsByte<ETmZoneFlags>                          Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.SetZoneFilterThreshold
struct UTelemetryFunctionLibrary_SetZoneFilterThreshold_Params
{
	int                                                filter_clocks;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.SetSendBufferSize
struct UTelemetryFunctionLibrary_SetSendBufferSize_Params
{
	int                                                buffer_size;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.SetSendBufferCount
struct UTelemetryFunctionLibrary_SetSendBufferCount_Params
{
	int                                                buffer_count;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.SetMaxTimeSpanTrackCount
struct UTelemetryFunctionLibrary_SetMaxTimeSpanTrackCount_Params
{
	int                                                max_track_count;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.SetCaptureMask
struct UTelemetryFunctionLibrary_SetCaptureMask_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.Running
struct UTelemetryFunctionLibrary_Running_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.RenameZone
struct UTelemetryFunctionLibrary_RenameZone_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function Telemetry.TelemetryFunctionLibrary.Ploti
struct UTelemetryFunctionLibrary_Ploti_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.Plotf
struct UTelemetryFunctionLibrary_Plotf_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.Message
struct UTelemetryFunctionLibrary_Message_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETmMessageFlags>                       Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function Telemetry.TelemetryFunctionLibrary.LeaveAccumulationZone
struct UTelemetryFunctionLibrary_LeaveAccumulationZone_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTmAccumulator                              accumulator;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTmAccumulator                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.Leave
struct UTelemetryFunctionLibrary_Leave_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.GetSendBufferSize
struct UTelemetryFunctionLibrary_GetSendBufferSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.GetSendBufferCount
struct UTelemetryFunctionLibrary_GetSendBufferCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.GetMaxTimeSpanTrackCount
struct UTelemetryFunctionLibrary_GetMaxTimeSpanTrackCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.GetCaptureMask
struct UTelemetryFunctionLibrary_GetCaptureMask_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.EnterAccumulationZone
struct UTelemetryFunctionLibrary_EnterAccumulationZone_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTmAccumulator                              accumulator;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTmAccumulator                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.Enter
struct UTelemetryFunctionLibrary_Enter_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETmZoneFlags>                          Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// Function Telemetry.TelemetryFunctionLibrary.EndTimeSpan
struct UTelemetryFunctionLibrary_EndTimeSpan_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                time_span_id;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Telemetry.TelemetryFunctionLibrary.EmitAccumulationZone
struct UTelemetryFunctionLibrary_EmitAccumulationZone_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTmAccumulator                              accumulated_clocks;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      zone_name;                                                // (Parm, ZeroConstructor)
};

// Function Telemetry.TelemetryFunctionLibrary.BeginTimeSpan
struct UTelemetryFunctionLibrary_BeginTimeSpan_Params
{
	int                                                capture_mask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                time_span_id;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      time_span_name;                                           // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
