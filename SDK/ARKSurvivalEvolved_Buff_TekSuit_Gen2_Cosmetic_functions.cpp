// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekSuit_Gen2_Cosmetic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekSuit_Gen2_Cosmetic_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.AllowPostProcessEffect");

	ABuff_TekSuit_Gen2_Cosmetic_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekSuit_Gen2_Cosmetic_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.BuffTickClient");

	ABuff_TekSuit_Gen2_Cosmetic_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.UserConstructionScript
// ()

void ABuff_TekSuit_Gen2_Cosmetic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.UserConstructionScript");

	ABuff_TekSuit_Gen2_Cosmetic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekSuit_Gen2_Cosmetic_C::ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C.ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic");

	ABuff_TekSuit_Gen2_Cosmetic_C_ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
