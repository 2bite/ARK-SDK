// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ParaAlertPulse_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.Get Alert Radius
// ()
// Parameters:
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AParaAlertPulse_Emitter_C::Get_Alert_Radius(float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.Get Alert Radius");

	AParaAlertPulse_Emitter_C_Get_Alert_Radius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Radius != nullptr)
		*Radius = params.Radius;
}


// Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.UserConstructionScript
// ()

void AParaAlertPulse_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.UserConstructionScript");

	AParaAlertPulse_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ReceiveBeginPlay
// ()

void AParaAlertPulse_Emitter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ReceiveBeginPlay");

	AParaAlertPulse_Emitter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ExecuteUbergraph_ParaAlertPulse_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParaAlertPulse_Emitter_C::ExecuteUbergraph_ParaAlertPulse_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParaAlertPulse_Emitter.ParaAlertPulse_Emitter_C.ExecuteUbergraph_ParaAlertPulse_Emitter");

	AParaAlertPulse_Emitter_C_ExecuteUbergraph_ParaAlertPulse_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
