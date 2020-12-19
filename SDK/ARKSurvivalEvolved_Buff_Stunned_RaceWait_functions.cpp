// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Stunned_RaceWait_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Stunned_RaceWait_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BuffTickServer");

	ABuff_Stunned_RaceWait_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Stunned_RaceWait_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BPSetupForInstigator");

	ABuff_Stunned_RaceWait_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Stunned_RaceWait_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.BPDeactivated");

	ABuff_Stunned_RaceWait_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.UserConstructionScript
// ()

void ABuff_Stunned_RaceWait_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.UserConstructionScript");

	ABuff_Stunned_RaceWait_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.ExecuteUbergraph_Buff_Stunned_RaceWait
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Stunned_RaceWait_C::ExecuteUbergraph_Buff_Stunned_RaceWait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Stunned_RaceWait.Buff_Stunned_RaceWait_C.ExecuteUbergraph_Buff_Stunned_RaceWait");

	ABuff_Stunned_RaceWait_C_ExecuteUbergraph_Buff_Stunned_RaceWait_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
