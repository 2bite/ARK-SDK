// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OilSlow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_OilSlow.Buff_OilSlow_C.BPPreventflight
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_OilSlow_C::BPPreventflight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlow.Buff_OilSlow_C.BPPreventflight");

	ABuff_OilSlow_C_BPPreventflight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_OilSlow.Buff_OilSlow_C.PreventJump
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_OilSlow_C::PreventJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlow.Buff_OilSlow_C.PreventJump");

	ABuff_OilSlow_C_PreventJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_OilSlow.Buff_OilSlow_C.BPPreventRunning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_OilSlow_C::BPPreventRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlow.Buff_OilSlow_C.BPPreventRunning");

	ABuff_OilSlow_C_BPPreventRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_OilSlow.Buff_OilSlow_C.UserConstructionScript
// ()

void ABuff_OilSlow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlow.Buff_OilSlow_C.UserConstructionScript");

	ABuff_OilSlow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_OilSlow.Buff_OilSlow_C.ExecuteUbergraph_Buff_OilSlow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_OilSlow_C::ExecuteUbergraph_Buff_OilSlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_OilSlow.Buff_OilSlow_C.ExecuteUbergraph_Buff_OilSlow");

	ABuff_OilSlow_C_ExecuteUbergraph_Buff_OilSlow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
