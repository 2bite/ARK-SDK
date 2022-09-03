// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BiomeApplied_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BiomeApplied.Buff_BiomeApplied_C.UserConstructionScript
// ()

void ABuff_BiomeApplied_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiomeApplied.Buff_BiomeApplied_C.UserConstructionScript");

	ABuff_BiomeApplied_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BiomeApplied.Buff_BiomeApplied_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BiomeApplied_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiomeApplied.Buff_BiomeApplied_C.ReceiveTick");

	ABuff_BiomeApplied_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BiomeApplied.Buff_BiomeApplied_C.DoDeactivate
// ()

void ABuff_BiomeApplied_C::DoDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiomeApplied.Buff_BiomeApplied_C.DoDeactivate");

	ABuff_BiomeApplied_C_DoDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BiomeApplied.Buff_BiomeApplied_C.ExecuteUbergraph_Buff_BiomeApplied
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BiomeApplied_C::ExecuteUbergraph_Buff_BiomeApplied(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BiomeApplied.Buff_BiomeApplied_C.ExecuteUbergraph_Buff_BiomeApplied");

	ABuff_BiomeApplied_C_ExecuteUbergraph_Buff_BiomeApplied_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
