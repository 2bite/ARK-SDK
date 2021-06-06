// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Desert_GogglesHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Desert_GogglesHelmet_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.AllowPostProcessEffect");

	ABuff_Desert_GogglesHelmet_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.UserConstructionScript
// ()

void ABuff_Desert_GogglesHelmet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.UserConstructionScript");

	ABuff_Desert_GogglesHelmet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.ExecuteUbergraph_Buff_Desert_GogglesHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Desert_GogglesHelmet_C::ExecuteUbergraph_Buff_Desert_GogglesHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Desert_GogglesHelmet.Buff_Desert_GogglesHelmet_C.ExecuteUbergraph_Buff_Desert_GogglesHelmet");

	ABuff_Desert_GogglesHelmet_C_ExecuteUbergraph_Buff_Desert_GogglesHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
