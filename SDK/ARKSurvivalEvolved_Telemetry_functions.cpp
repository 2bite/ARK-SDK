// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Telemetry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Telemetry.TelemetryFunctionLibrary.ZoneColor
// ()
// Parameters:
// float                          red                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          green                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          blue                           (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::ZoneColor(float red, float green, float blue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.ZoneColor");

	UTelemetryFunctionLibrary_ZoneColor_Params params;
	params.red = red;
	params.green = green;
	params.blue = blue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.Stop
// ()

void UTelemetryFunctionLibrary::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Stop");

	UTelemetryFunctionLibrary_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.Start
// ()
// Parameters:
// class FString                  server_ip                      (Parm, ZeroConstructor)

void UTelemetryFunctionLibrary::Start(const class FString& server_ip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Start");

	UTelemetryFunctionLibrary_Start_Params params;
	params.server_ip = server_ip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.SetZoneFlag
// ()
// Parameters:
// TEnumAsByte<ETmZoneFlags>      Flags                          (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::SetZoneFlag(TEnumAsByte<ETmZoneFlags> Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetZoneFlag");

	UTelemetryFunctionLibrary_SetZoneFlag_Params params;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.SetZoneFilterThreshold
// ()
// Parameters:
// int                            filter_clocks                  (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::SetZoneFilterThreshold(int filter_clocks)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetZoneFilterThreshold");

	UTelemetryFunctionLibrary_SetZoneFilterThreshold_Params params;
	params.filter_clocks = filter_clocks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.SetSendBufferSize
// ()
// Parameters:
// int                            buffer_size                    (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::SetSendBufferSize(int buffer_size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetSendBufferSize");

	UTelemetryFunctionLibrary_SetSendBufferSize_Params params;
	params.buffer_size = buffer_size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.SetSendBufferCount
// ()
// Parameters:
// int                            buffer_count                   (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::SetSendBufferCount(int buffer_count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetSendBufferCount");

	UTelemetryFunctionLibrary_SetSendBufferCount_Params params;
	params.buffer_count = buffer_count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.SetMaxTimeSpanTrackCount
// ()
// Parameters:
// int                            max_track_count                (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::SetMaxTimeSpanTrackCount(int max_track_count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetMaxTimeSpanTrackCount");

	UTelemetryFunctionLibrary_SetMaxTimeSpanTrackCount_Params params;
	params.max_track_count = max_track_count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.SetCaptureMask
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::SetCaptureMask(int capture_mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.SetCaptureMask");

	UTelemetryFunctionLibrary_SetCaptureMask_Params params;
	params.capture_mask = capture_mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.Running
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTelemetryFunctionLibrary::Running()
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Running");

	UTelemetryFunctionLibrary_Running_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Telemetry.TelemetryFunctionLibrary.RenameZone
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)

void UTelemetryFunctionLibrary::RenameZone(int capture_mask, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.RenameZone");

	UTelemetryFunctionLibrary_RenameZone_Params params;
	params.capture_mask = capture_mask;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.Ploti
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::Ploti(int capture_mask, const class FString& Name, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Ploti");

	UTelemetryFunctionLibrary_Ploti_Params params;
	params.capture_mask = capture_mask;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.Plotf
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::Plotf(int capture_mask, const class FString& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Plotf");

	UTelemetryFunctionLibrary_Plotf_Params params;
	params.capture_mask = capture_mask;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.Message
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETmMessageFlags>   Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Message                        (Parm, ZeroConstructor)

void UTelemetryFunctionLibrary::Message(int capture_mask, TEnumAsByte<ETmMessageFlags> Flags, const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Message");

	UTelemetryFunctionLibrary_Message_Params params;
	params.capture_mask = capture_mask;
	params.Flags = Flags;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.LeaveAccumulationZone
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTmAccumulator          accumulator                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTmAccumulator          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FTmAccumulator UTelemetryFunctionLibrary::LeaveAccumulationZone(int capture_mask, const struct FTmAccumulator& accumulator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.LeaveAccumulationZone");

	UTelemetryFunctionLibrary_LeaveAccumulationZone_Params params;
	params.capture_mask = capture_mask;
	params.accumulator = accumulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Telemetry.TelemetryFunctionLibrary.Leave
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::Leave(int capture_mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Leave");

	UTelemetryFunctionLibrary_Leave_Params params;
	params.capture_mask = capture_mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.GetSendBufferSize
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTelemetryFunctionLibrary::GetSendBufferSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.GetSendBufferSize");

	UTelemetryFunctionLibrary_GetSendBufferSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Telemetry.TelemetryFunctionLibrary.GetSendBufferCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTelemetryFunctionLibrary::GetSendBufferCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.GetSendBufferCount");

	UTelemetryFunctionLibrary_GetSendBufferCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Telemetry.TelemetryFunctionLibrary.GetMaxTimeSpanTrackCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTelemetryFunctionLibrary::GetMaxTimeSpanTrackCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.GetMaxTimeSpanTrackCount");

	UTelemetryFunctionLibrary_GetMaxTimeSpanTrackCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Telemetry.TelemetryFunctionLibrary.GetCaptureMask
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTelemetryFunctionLibrary::GetCaptureMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.GetCaptureMask");

	UTelemetryFunctionLibrary_GetCaptureMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Telemetry.TelemetryFunctionLibrary.EnterAccumulationZone
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTmAccumulator          accumulator                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTmAccumulator          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FTmAccumulator UTelemetryFunctionLibrary::EnterAccumulationZone(int capture_mask, const struct FTmAccumulator& accumulator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.EnterAccumulationZone");

	UTelemetryFunctionLibrary_EnterAccumulationZone_Params params;
	params.capture_mask = capture_mask;
	params.accumulator = accumulator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Telemetry.TelemetryFunctionLibrary.Enter
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETmZoneFlags>      Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)

void UTelemetryFunctionLibrary::Enter(int capture_mask, TEnumAsByte<ETmZoneFlags> Flags, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.Enter");

	UTelemetryFunctionLibrary_Enter_Params params;
	params.capture_mask = capture_mask;
	params.Flags = Flags;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.EndTimeSpan
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            time_span_id                   (Parm, ZeroConstructor, IsPlainOldData)

void UTelemetryFunctionLibrary::EndTimeSpan(int capture_mask, int time_span_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.EndTimeSpan");

	UTelemetryFunctionLibrary_EndTimeSpan_Params params;
	params.capture_mask = capture_mask;
	params.time_span_id = time_span_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.EmitAccumulationZone
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTmAccumulator          accumulated_clocks             (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  zone_name                      (Parm, ZeroConstructor)

void UTelemetryFunctionLibrary::EmitAccumulationZone(int capture_mask, int Flags, int Count, const struct FTmAccumulator& accumulated_clocks, const class FString& zone_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.EmitAccumulationZone");

	UTelemetryFunctionLibrary_EmitAccumulationZone_Params params;
	params.capture_mask = capture_mask;
	params.Flags = Flags;
	params.Count = Count;
	params.accumulated_clocks = accumulated_clocks;
	params.zone_name = zone_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Telemetry.TelemetryFunctionLibrary.BeginTimeSpan
// ()
// Parameters:
// int                            capture_mask                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            time_span_id                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  time_span_name                 (Parm, ZeroConstructor)

void UTelemetryFunctionLibrary::BeginTimeSpan(int capture_mask, int time_span_id, int Flags, const class FString& time_span_name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Telemetry.TelemetryFunctionLibrary.BeginTimeSpan");

	UTelemetryFunctionLibrary_BeginTimeSpan_Params params;
	params.capture_mask = capture_mask;
	params.time_span_id = time_span_id;
	params.Flags = Flags;
	params.time_span_name = time_span_name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
