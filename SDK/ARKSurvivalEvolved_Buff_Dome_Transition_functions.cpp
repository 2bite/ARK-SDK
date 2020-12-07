// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Dome_Transition_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Dome_Transition.Buff_Dome_Transition_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Dome_Transition_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dome_Transition.Buff_Dome_Transition_C.BPDeactivated");

	ABuff_Dome_Transition_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Dome_Transition.Buff_Dome_Transition_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Dome_Transition_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dome_Transition.Buff_Dome_Transition_C.BuffTickClient");

	ABuff_Dome_Transition_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Dome_Transition.Buff_Dome_Transition_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Dome_Transition_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dome_Transition.Buff_Dome_Transition_C.GetBuffPostprocessIntensity");

	ABuff_Dome_Transition_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Dome_Transition.Buff_Dome_Transition_C.ReceiveBeginPlay
// ()

void ABuff_Dome_Transition_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dome_Transition.Buff_Dome_Transition_C.ReceiveBeginPlay");

	ABuff_Dome_Transition_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Dome_Transition.Buff_Dome_Transition_C.UserConstructionScript
// ()

void ABuff_Dome_Transition_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dome_Transition.Buff_Dome_Transition_C.UserConstructionScript");

	ABuff_Dome_Transition_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Dome_Transition.Buff_Dome_Transition_C.ExecuteUbergraph_Buff_Dome_Transition
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Dome_Transition_C::ExecuteUbergraph_Buff_Dome_Transition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Dome_Transition.Buff_Dome_Transition_C.ExecuteUbergraph_Buff_Dome_Transition");

	ABuff_Dome_Transition_C_ExecuteUbergraph_Buff_Dome_Transition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
