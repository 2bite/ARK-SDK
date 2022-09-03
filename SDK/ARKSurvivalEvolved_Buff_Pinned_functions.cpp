// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Pinned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Pinned.Buff_Pinned_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Pinned_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pinned.Buff_Pinned_C.BPPreventFirstPerson");

	ABuff_Pinned_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Pinned.Buff_Pinned_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Pinned_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pinned.Buff_Pinned_C.BPCheckPreventInput");

	ABuff_Pinned_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Pinned.Buff_Pinned_C.PlaySleepingAnim
// ()

void ABuff_Pinned_C::PlaySleepingAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pinned.Buff_Pinned_C.PlaySleepingAnim");

	ABuff_Pinned_C_PlaySleepingAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Pinned.Buff_Pinned_C.UserConstructionScript
// ()

void ABuff_Pinned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pinned.Buff_Pinned_C.UserConstructionScript");

	ABuff_Pinned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Pinned.Buff_Pinned_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Pinned_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pinned.Buff_Pinned_C.BPDeactivated");

	ABuff_Pinned_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Pinned.Buff_Pinned_C.ReceiveBeginPlay
// ()

void ABuff_Pinned_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pinned.Buff_Pinned_C.ReceiveBeginPlay");

	ABuff_Pinned_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Pinned.Buff_Pinned_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Pinned_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pinned.Buff_Pinned_C.BuffTickServer");

	ABuff_Pinned_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Pinned.Buff_Pinned_C.ServerStruggle
// ()

void ABuff_Pinned_C::ServerStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pinned.Buff_Pinned_C.ServerStruggle");

	ABuff_Pinned_C_ServerStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Pinned.Buff_Pinned_C.ExecuteUbergraph_Buff_Pinned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Pinned_C::ExecuteUbergraph_Buff_Pinned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Pinned.Buff_Pinned_C.ExecuteUbergraph_Buff_Pinned");

	ABuff_Pinned_C_ExecuteUbergraph_Buff_Pinned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
