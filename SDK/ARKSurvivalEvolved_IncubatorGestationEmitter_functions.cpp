// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IncubatorGestationEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.ReceiveBeginPlay
// ()

void AIncubatorGestationEmitter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.ReceiveBeginPlay");

	AIncubatorGestationEmitter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.UserConstructionScript
// ()

void AIncubatorGestationEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.UserConstructionScript");

	AIncubatorGestationEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.PlayBdayMusic
// ()

void AIncubatorGestationEmitter_C::PlayBdayMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.PlayBdayMusic");

	AIncubatorGestationEmitter_C_PlayBdayMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.ExecuteUbergraph_IncubatorGestationEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIncubatorGestationEmitter_C::ExecuteUbergraph_IncubatorGestationEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IncubatorGestationEmitter.IncubatorGestationEmitter_C.ExecuteUbergraph_IncubatorGestationEmitter");

	AIncubatorGestationEmitter_C_ExecuteUbergraph_IncubatorGestationEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
