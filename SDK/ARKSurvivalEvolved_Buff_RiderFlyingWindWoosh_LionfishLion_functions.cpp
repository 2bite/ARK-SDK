// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_LionfishLion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RiderFlyingWindWoosh_LionfishLion_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.AllowPostProcessEffect");

	ABuff_RiderFlyingWindWoosh_LionfishLion_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_RiderFlyingWindWoosh_LionfishLion_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.GetBuffPostprocessIntensity");

	ABuff_RiderFlyingWindWoosh_LionfishLion_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderFlyingWindWoosh_LionfishLion_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.BuffTickClient");

	ABuff_RiderFlyingWindWoosh_LionfishLion_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.UserConstructionScript
// ()

void ABuff_RiderFlyingWindWoosh_LionfishLion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.UserConstructionScript");

	ABuff_RiderFlyingWindWoosh_LionfishLion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_LionfishLion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RiderFlyingWindWoosh_LionfishLion_C::ExecuteUbergraph_Buff_RiderFlyingWindWoosh_LionfishLion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RiderFlyingWindWoosh_LionfishLion.Buff_RiderFlyingWindWoosh_LionfishLion_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_LionfishLion");

	ABuff_RiderFlyingWindWoosh_LionfishLion_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_LionfishLion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
