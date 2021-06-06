// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpaceDolphinMissions_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceDolphinMissions_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.BuffTickClient");

	ABuff_SpaceDolphinMissions_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.HitCollisionStarFoxMode
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_SpaceDolphinMissions_C::HitCollisionStarFoxMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.HitCollisionStarFoxMode");

	ABuff_SpaceDolphinMissions_C_HitCollisionStarFoxMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_SpaceDolphinMissions_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.AllowPostProcessEffect");

	ABuff_SpaceDolphinMissions_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_SpaceDolphinMissions_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.GetBuffPostprocessIntensity");

	ABuff_SpaceDolphinMissions_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.UserConstructionScript
// ()

void ABuff_SpaceDolphinMissions_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.UserConstructionScript");

	ABuff_SpaceDolphinMissions_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.ExecuteUbergraph_Buff_SpaceDolphinMissions
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpaceDolphinMissions_C::ExecuteUbergraph_Buff_SpaceDolphinMissions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpaceDolphinMissions.Buff_SpaceDolphinMissions_C.ExecuteUbergraph_Buff_SpaceDolphinMissions");

	ABuff_SpaceDolphinMissions_C_ExecuteUbergraph_Buff_SpaceDolphinMissions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
