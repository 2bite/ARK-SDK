// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekSniper_XRay_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.GetFriendOrFoe
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekSniper_XRay_C::GetFriendOrFoe(class AActor* Actor, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.GetFriendOrFoe");

	ABuff_TekSniper_XRay_C_GetFriendOrFoe_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekSniper_XRay_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BPDeactivated");

	ABuff_TekSniper_XRay_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BuffTickClient
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekSniper_XRay_C::STATIC_BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BuffTickClient");

	ABuff_TekSniper_XRay_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekSniper_XRay_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.GetBuffPostprocessIntensity");

	ABuff_TekSniper_XRay_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.Smooth Overheating Amount
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_TekSniper_XRay_C::Smooth_Overheating_Amount(float amount, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.Smooth Overheating Amount");

	ABuff_TekSniper_XRay_C_Smooth_Overheating_Amount_Params params;
	params.amount = amount;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.Set Overheating Amount
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekSniper_XRay_C::Set_Overheating_Amount(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.Set Overheating Amount");

	ABuff_TekSniper_XRay_C_Set_Overheating_Amount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekSniper_XRay_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.BPActivated");

	ABuff_TekSniper_XRay_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.ReceiveBeginPlay
// ()

void ABuff_TekSniper_XRay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.ReceiveBeginPlay");

	ABuff_TekSniper_XRay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.UserConstructionScript
// ()

void ABuff_TekSniper_XRay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.UserConstructionScript");

	ABuff_TekSniper_XRay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.ExecuteUbergraph_Buff_TekSniper_XRay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekSniper_XRay_C::ExecuteUbergraph_Buff_TekSniper_XRay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSniper_XRay.Buff_TekSniper_XRay_C.ExecuteUbergraph_Buff_TekSniper_XRay");

	ABuff_TekSniper_XRay_C_ExecuteUbergraph_Buff_TekSniper_XRay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
