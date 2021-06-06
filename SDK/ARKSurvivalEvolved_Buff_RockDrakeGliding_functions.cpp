// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RockDrakeGliding_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RockDrakeGliding_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.AllowPostProcessEffect");

	ABuff_RockDrakeGliding_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_RockDrakeGliding_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.GetBuffPostprocessIntensity");

	ABuff_RockDrakeGliding_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RockDrakeGliding_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.BPCustomAllowAddBuff");

	ABuff_RockDrakeGliding_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RockDrakeGliding_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.BuffTickClient");

	ABuff_RockDrakeGliding_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.UserConstructionScript
// ()

void ABuff_RockDrakeGliding_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.UserConstructionScript");

	ABuff_RockDrakeGliding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.ExecuteUbergraph_Buff_RockDrakeGliding
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RockDrakeGliding_C::ExecuteUbergraph_Buff_RockDrakeGliding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RockDrakeGliding.Buff_RockDrakeGliding_C.ExecuteUbergraph_Buff_RockDrakeGliding");

	ABuff_RockDrakeGliding_C_ExecuteUbergraph_Buff_RockDrakeGliding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
