// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MudHitImpact_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MudHitImpact_Emitter.MudHitImpact_Emitter_C.UserConstructionScript
// ()

void AMudHitImpact_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MudHitImpact_Emitter.MudHitImpact_Emitter_C.UserConstructionScript");

	AMudHitImpact_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MudHitImpact_Emitter.MudHitImpact_Emitter_C.ExecuteUbergraph_MudHitImpact_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMudHitImpact_Emitter_C::ExecuteUbergraph_MudHitImpact_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MudHitImpact_Emitter.MudHitImpact_Emitter_C.ExecuteUbergraph_MudHitImpact_Emitter");

	AMudHitImpact_Emitter_C_ExecuteUbergraph_MudHitImpact_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
