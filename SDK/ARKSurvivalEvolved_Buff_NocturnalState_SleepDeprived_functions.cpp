// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NocturnalState_SleepDeprived_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NocturnalState_SleepDeprived_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.BuffTickServer");

	ABuff_NocturnalState_SleepDeprived_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.GetHUDProgressBarPercent
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_NocturnalState_SleepDeprived_C::GetHUDProgressBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.GetHUDProgressBarPercent");

	ABuff_NocturnalState_SleepDeprived_C_GetHUDProgressBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.UserConstructionScript
// ()

void ABuff_NocturnalState_SleepDeprived_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.UserConstructionScript");

	ABuff_NocturnalState_SleepDeprived_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.ExecuteUbergraph_Buff_NocturnalState_SleepDeprived
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_NocturnalState_SleepDeprived_C::ExecuteUbergraph_Buff_NocturnalState_SleepDeprived(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_NocturnalState_SleepDeprived.Buff_NocturnalState_SleepDeprived_C.ExecuteUbergraph_Buff_NocturnalState_SleepDeprived");

	ABuff_NocturnalState_SleepDeprived_C_ExecuteUbergraph_Buff_NocturnalState_SleepDeprived_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
