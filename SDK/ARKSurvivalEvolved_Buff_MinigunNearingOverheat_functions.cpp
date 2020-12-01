// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MinigunNearingOverheat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.ReceiveBeginPlay
// ()

void ABuff_MinigunNearingOverheat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.ReceiveBeginPlay");

	ABuff_MinigunNearingOverheat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MinigunNearingOverheat_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.BuffTickClient");

	ABuff_MinigunNearingOverheat_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_MinigunNearingOverheat_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.GetBuffPostprocessIntensity");

	ABuff_MinigunNearingOverheat_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_MinigunNearingOverheat_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.AllowPostProcessEffect");

	ABuff_MinigunNearingOverheat_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.UserConstructionScript
// ()

void ABuff_MinigunNearingOverheat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.UserConstructionScript");

	ABuff_MinigunNearingOverheat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.ExecuteUbergraph_Buff_MinigunNearingOverheat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_MinigunNearingOverheat_C::ExecuteUbergraph_Buff_MinigunNearingOverheat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_MinigunNearingOverheat.Buff_MinigunNearingOverheat_C.ExecuteUbergraph_Buff_MinigunNearingOverheat");

	ABuff_MinigunNearingOverheat_C_ExecuteUbergraph_Buff_MinigunNearingOverheat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
