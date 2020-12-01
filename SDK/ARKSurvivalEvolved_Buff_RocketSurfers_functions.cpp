// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RocketSurfers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RocketSurfers.Buff_RocketSurfers_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RocketSurfers_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RocketSurfers.Buff_RocketSurfers_C.BPCheckPreventInput");

	ABuff_RocketSurfers_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RocketSurfers.Buff_RocketSurfers_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RocketSurfers_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RocketSurfers.Buff_RocketSurfers_C.BuffTickClient");

	ABuff_RocketSurfers_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RocketSurfers.Buff_RocketSurfers_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RocketSurfers_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RocketSurfers.Buff_RocketSurfers_C.BuffTickServer");

	ABuff_RocketSurfers_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RocketSurfers.Buff_RocketSurfers_C.UserConstructionScript
// ()

void ABuff_RocketSurfers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RocketSurfers.Buff_RocketSurfers_C.UserConstructionScript");

	ABuff_RocketSurfers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RocketSurfers.Buff_RocketSurfers_C.ExecuteUbergraph_Buff_RocketSurfers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RocketSurfers_C::ExecuteUbergraph_Buff_RocketSurfers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RocketSurfers.Buff_RocketSurfers_C.ExecuteUbergraph_Buff_RocketSurfers");

	ABuff_RocketSurfers_C_ExecuteUbergraph_Buff_RocketSurfers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
