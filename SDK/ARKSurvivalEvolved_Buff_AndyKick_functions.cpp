// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AndyKick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AndyKick.Buff_AndyKick_C.BPPreventflight
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_AndyKick_C::BPPreventflight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyKick.Buff_AndyKick_C.BPPreventflight");

	ABuff_AndyKick_C_BPPreventflight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AndyKick.Buff_AndyKick_C.PreventJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_AndyKick_C::PreventJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyKick.Buff_AndyKick_C.PreventJump");

	ABuff_AndyKick_C_PreventJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AndyKick.Buff_AndyKick_C.BPPreventRunning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_AndyKick_C::BPPreventRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyKick.Buff_AndyKick_C.BPPreventRunning");

	ABuff_AndyKick_C_BPPreventRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_AndyKick.Buff_AndyKick_C.UserConstructionScript
// ()

void ABuff_AndyKick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyKick.Buff_AndyKick_C.UserConstructionScript");

	ABuff_AndyKick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AndyKick.Buff_AndyKick_C.ExecuteUbergraph_Buff_AndyKick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AndyKick_C::ExecuteUbergraph_Buff_AndyKick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AndyKick.Buff_AndyKick_C.ExecuteUbergraph_Buff_AndyKick");

	ABuff_AndyKick_C_ExecuteUbergraph_Buff_AndyKick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
