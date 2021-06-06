// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HoversailRiderLandsATrick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_HoversailRiderLandsATrick_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.AllowPostProcessEffect");

	ABuff_HoversailRiderLandsATrick_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_HoversailRiderLandsATrick_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.GetBuffPostprocessIntensity");

	ABuff_HoversailRiderLandsATrick_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HoversailRiderLandsATrick_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.BuffTickClient");

	ABuff_HoversailRiderLandsATrick_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.UserConstructionScript
// ()

void ABuff_HoversailRiderLandsATrick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.UserConstructionScript");

	ABuff_HoversailRiderLandsATrick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.ExecuteUbergraph_Buff_HoversailRiderLandsATrick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_HoversailRiderLandsATrick_C::ExecuteUbergraph_Buff_HoversailRiderLandsATrick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C.ExecuteUbergraph_Buff_HoversailRiderLandsATrick");

	ABuff_HoversailRiderLandsATrick_C_ExecuteUbergraph_Buff_HoversailRiderLandsATrick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
