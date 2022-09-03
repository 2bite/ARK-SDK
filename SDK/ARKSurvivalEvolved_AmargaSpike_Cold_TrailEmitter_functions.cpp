// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_Cold_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.ReceiveBeginPlay
// ()

void AAmargaSpike_Cold_TrailEmitter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.ReceiveBeginPlay");

	AAmargaSpike_Cold_TrailEmitter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.InWaterCheck
// ()

void AAmargaSpike_Cold_TrailEmitter_C::InWaterCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.InWaterCheck");

	AAmargaSpike_Cold_TrailEmitter_C_InWaterCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.UserConstructionScript
// ()

void AAmargaSpike_Cold_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.UserConstructionScript");

	AAmargaSpike_Cold_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmargaSpike_Cold_TrailEmitter_C::ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C.ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter");

	AAmargaSpike_Cold_TrailEmitter_C_ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
