// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoTekHelmet_RockDrake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_RockDrake_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.BuffTickClient");

	ABuff_DinoTekHelmet_RockDrake_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.GetSocketClampDelta
// ()
// Parameters:
// float                          OutSocketClampDelta            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_RockDrake_C::GetSocketClampDelta(float* OutSocketClampDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.GetSocketClampDelta");

	ABuff_DinoTekHelmet_RockDrake_C_GetSocketClampDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSocketClampDelta != nullptr)
		*OutSocketClampDelta = params.OutSocketClampDelta;
}


// Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.UserConstructionScript
// ()

void ABuff_DinoTekHelmet_RockDrake_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.UserConstructionScript");

	ABuff_DinoTekHelmet_RockDrake_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoTekHelmet_RockDrake_C::ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C.ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake");

	ABuff_DinoTekHelmet_RockDrake_C_ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
