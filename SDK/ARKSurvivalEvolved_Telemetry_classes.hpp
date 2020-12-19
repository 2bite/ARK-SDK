#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Telemetry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Telemetry.TelemetryFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTelemetryFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Telemetry.TelemetryFunctionLibrary");
		return ptr;
	}


	void ZoneColor(float red, float green, float blue);
	void Stop();
	void Start(const class FString& server_ip);
	void SetZoneFlag(TEnumAsByte<ETmZoneFlags> Flags);
	void SetZoneFilterThreshold(int filter_clocks);
	void SetSendBufferSize(int buffer_size);
	void SetSendBufferCount(int buffer_count);
	void SetMaxTimeSpanTrackCount(int max_track_count);
	void SetCaptureMask(int capture_mask);
	int Running();
	void RenameZone(int capture_mask, const class FString& Name);
	void Ploti(int capture_mask, const class FString& Name, int Value);
	void Plotf(int capture_mask, const class FString& Name, float Value);
	void Message(int capture_mask, TEnumAsByte<ETmMessageFlags> Flags, const class FString& Message);
	struct FTmAccumulator LeaveAccumulationZone(int capture_mask, const struct FTmAccumulator& accumulator);
	void Leave(int capture_mask);
	int GetSendBufferSize();
	int GetSendBufferCount();
	int GetMaxTimeSpanTrackCount();
	int GetCaptureMask();
	struct FTmAccumulator EnterAccumulationZone(int capture_mask, const struct FTmAccumulator& accumulator);
	void Enter(int capture_mask, TEnumAsByte<ETmZoneFlags> Flags, const class FString& Name);
	void EndTimeSpan(int capture_mask, int time_span_id);
	void EmitAccumulationZone(int capture_mask, int Flags, int Count, const struct FTmAccumulator& accumulated_clocks, const class FString& zone_name);
	void BeginTimeSpan(int capture_mask, int time_span_id, int Flags, const class FString& time_span_name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
