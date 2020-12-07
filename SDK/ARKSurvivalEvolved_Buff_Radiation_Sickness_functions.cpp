// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Radiation_Sickness_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Radiation_Sickness.Buff_Radiation_Sickness_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Sickness_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Sickness.Buff_Radiation_Sickness_C.BuffTickClient");

	ABuff_Radiation_Sickness_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Sickness.Buff_Radiation_Sickness_C.UserConstructionScript
// ()

void ABuff_Radiation_Sickness_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Sickness.Buff_Radiation_Sickness_C.UserConstructionScript");

	ABuff_Radiation_Sickness_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Radiation_Sickness.Buff_Radiation_Sickness_C.ExecuteUbergraph_Buff_Radiation_Sickness
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Radiation_Sickness_C::ExecuteUbergraph_Buff_Radiation_Sickness(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Radiation_Sickness.Buff_Radiation_Sickness_C.ExecuteUbergraph_Buff_Radiation_Sickness");

	ABuff_Radiation_Sickness_C_ExecuteUbergraph_Buff_Radiation_Sickness_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
