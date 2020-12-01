// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IceJumper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_IceJumper.Buff_IceJumper_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_IceJumper_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IceJumper.Buff_IceJumper_C.GetBuffPostprocessIntensity");

	ABuff_IceJumper_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_IceJumper.Buff_IceJumper_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_IceJumper_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IceJumper.Buff_IceJumper_C.AllowPostProcessEffect");

	ABuff_IceJumper_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_IceJumper.Buff_IceJumper_C.UserConstructionScript
// ()

void ABuff_IceJumper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IceJumper.Buff_IceJumper_C.UserConstructionScript");

	ABuff_IceJumper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IceJumper.Buff_IceJumper_C.ExecuteUbergraph_Buff_IceJumper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IceJumper_C::ExecuteUbergraph_Buff_IceJumper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IceJumper.Buff_IceJumper_C.ExecuteUbergraph_Buff_IceJumper");

	ABuff_IceJumper_C_ExecuteUbergraph_Buff_IceJumper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
