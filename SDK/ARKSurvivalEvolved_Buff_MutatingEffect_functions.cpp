// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MutatingEffect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MutatingEffect.Buff_MutatingEffect_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffect_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffect.Buff_MutatingEffect_C.BPDeactivated");

	ABuff_MutatingEffect_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffect.Buff_MutatingEffect_C.ReceiveDestroyed
// ()

void ABuff_MutatingEffect_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffect.Buff_MutatingEffect_C.ReceiveDestroyed");

	ABuff_MutatingEffect_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffect.Buff_MutatingEffect_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffect_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffect.Buff_MutatingEffect_C.BuffTickClient");

	ABuff_MutatingEffect_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffect.Buff_MutatingEffect_C.BPSetupForInstigator
// (Exec, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffect_C::STATIC_BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffect.Buff_MutatingEffect_C.BPSetupForInstigator");

	ABuff_MutatingEffect_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffect.Buff_MutatingEffect_C.UserConstructionScript
// ()

void ABuff_MutatingEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffect.Buff_MutatingEffect_C.UserConstructionScript");

	ABuff_MutatingEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffect.Buff_MutatingEffect_C.HideMesh
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffect_C::HideMesh(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffect.Buff_MutatingEffect_C.HideMesh");

	ABuff_MutatingEffect_C_HideMesh_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffect.Buff_MutatingEffect_C.ExecuteUbergraph_Buff_MutatingEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffect_C::ExecuteUbergraph_Buff_MutatingEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffect.Buff_MutatingEffect_C.ExecuteUbergraph_Buff_MutatingEffect");

	ABuff_MutatingEffect_C_ExecuteUbergraph_Buff_MutatingEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
