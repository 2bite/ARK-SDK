// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TemporalInmobilize_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TemporalInmobilize.Buff_TemporalInmobilize_C.UserConstructionScript
// ()

void ABuff_TemporalInmobilize_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TemporalInmobilize.Buff_TemporalInmobilize_C.UserConstructionScript");

	ABuff_TemporalInmobilize_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TemporalInmobilize.Buff_TemporalInmobilize_C.ExecuteUbergraph_Buff_TemporalInmobilize
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TemporalInmobilize_C::ExecuteUbergraph_Buff_TemporalInmobilize(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TemporalInmobilize.Buff_TemporalInmobilize_C.ExecuteUbergraph_Buff_TemporalInmobilize");

	ABuff_TemporalInmobilize_C_ExecuteUbergraph_Buff_TemporalInmobilize_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
