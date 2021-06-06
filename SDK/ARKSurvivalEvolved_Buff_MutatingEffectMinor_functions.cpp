// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MutatingEffectMinor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffectMinor_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BPDeactivated");

	ABuff_MutatingEffectMinor_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.ReceiveDestroyed
// ()

void ABuff_MutatingEffectMinor_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.ReceiveDestroyed");

	ABuff_MutatingEffectMinor_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffectMinor_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BuffTickClient");

	ABuff_MutatingEffectMinor_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BPSetupForInstigator
// (NetReliable, Native, NetResponse, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffectMinor_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.BPSetupForInstigator");

	ABuff_MutatingEffectMinor_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.UserConstructionScript
// ()

void ABuff_MutatingEffectMinor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.UserConstructionScript");

	ABuff_MutatingEffectMinor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.HideMesh
// ()
// Parameters:
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffectMinor_C::HideMesh(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.HideMesh");

	ABuff_MutatingEffectMinor_C_HideMesh_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.ExecuteUbergraph_Buff_MutatingEffectMinor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MutatingEffectMinor_C::ExecuteUbergraph_Buff_MutatingEffectMinor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MutatingEffectMinor.Buff_MutatingEffectMinor_C.ExecuteUbergraph_Buff_MutatingEffectMinor");

	ABuff_MutatingEffectMinor_C_ExecuteUbergraph_Buff_MutatingEffectMinor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
