// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Rooted_ForestKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Rooted_ForestKaiju_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BuffTickClient");

	ABuff_Rooted_ForestKaiju_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Rooted_ForestKaiju_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPSetupForInstigator");

	ABuff_Rooted_ForestKaiju_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Rooted_ForestKaiju_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPCheckPreventInput");

	ABuff_Rooted_ForestKaiju_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Rooted_ForestKaiju_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPDeactivated");

	ABuff_Rooted_ForestKaiju_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Rooted_ForestKaiju_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPActivated");

	ABuff_Rooted_ForestKaiju_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.UserConstructionScript
// ()

void ABuff_Rooted_ForestKaiju_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.UserConstructionScript");

	ABuff_Rooted_ForestKaiju_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.Multi_PreventMovementInput
// ()
// Parameters:
// bool                           Prevent                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Rooted_ForestKaiju_C::Multi_PreventMovementInput(bool Prevent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.Multi_PreventMovementInput");

	ABuff_Rooted_ForestKaiju_C_Multi_PreventMovementInput_Params params;
	params.Prevent = Prevent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.Multi_SetScale
// ()
// Parameters:
// float                          Scaler                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Rooted_ForestKaiju_C::Multi_SetScale(float Scaler)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.Multi_SetScale");

	ABuff_Rooted_ForestKaiju_C_Multi_SetScale_Params params;
	params.Scaler = Scaler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.DelayedSetScale
// ()
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Rooted_ForestKaiju_C::DelayedSetScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.DelayedSetScale");

	ABuff_Rooted_ForestKaiju_C_DelayedSetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.ExecuteUbergraph_Buff_Rooted_ForestKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Rooted_ForestKaiju_C::ExecuteUbergraph_Buff_Rooted_ForestKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.ExecuteUbergraph_Buff_Rooted_ForestKaiju");

	ABuff_Rooted_ForestKaiju_C_ExecuteUbergraph_Buff_Rooted_ForestKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
