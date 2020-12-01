// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FrozenEffect_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.Set Frozen Value Instant
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FrozenEffect_Base_C::Set_Frozen_Value_Instant(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.Set Frozen Value Instant");

	ABuff_FrozenEffect_Base_C_Set_Frozen_Value_Instant_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.GetFrozenValue
// ()
// Parameters:
// float                          amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_FrozenEffect_Base_C::GetFrozenValue(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.GetFrozenValue");

	ABuff_FrozenEffect_Base_C_GetFrozenValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (amount != nullptr)
		*amount = params.amount;
}


// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.SetFrozenValue
// ()
// Parameters:
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FrozenEffect_Base_C::SetFrozenValue(float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.SetFrozenValue");

	ABuff_FrozenEffect_Base_C_SetFrozenValue_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.ReceiveDestroyed
// ()

void ABuff_FrozenEffect_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.ReceiveDestroyed");

	ABuff_FrozenEffect_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BPSetupForInstigator
// (NetRequest, Exec, Protected, Delegate, HasDefaults, DLLImport, Const, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FrozenEffect_Base_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BPSetupForInstigator");

	ABuff_FrozenEffect_Base_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FrozenEffect_Base_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BuffTickClient");

	ABuff_FrozenEffect_Base_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FrozenEffect_Base_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.BPDeactivated");

	ABuff_FrozenEffect_Base_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.UserConstructionScript
// ()

void ABuff_FrozenEffect_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.UserConstructionScript");

	ABuff_FrozenEffect_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.ExecuteUbergraph_Buff_FrozenEffect_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FrozenEffect_Base_C::ExecuteUbergraph_Buff_FrozenEffect_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FrozenEffect_Base.Buff_FrozenEffect_Base_C.ExecuteUbergraph_Buff_FrozenEffect_Base");

	ABuff_FrozenEffect_Base_C_ExecuteUbergraph_Buff_FrozenEffect_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
