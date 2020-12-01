// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MudHitImpact_Emitter_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MudHitImpact_Emitter_Corrupt.MudHitImpact_Emitter_Corrupt_C.UserConstructionScript
// ()

void AMudHitImpact_Emitter_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MudHitImpact_Emitter_Corrupt.MudHitImpact_Emitter_Corrupt_C.UserConstructionScript");

	AMudHitImpact_Emitter_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MudHitImpact_Emitter_Corrupt.MudHitImpact_Emitter_Corrupt_C.ExecuteUbergraph_MudHitImpact_Emitter_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMudHitImpact_Emitter_Corrupt_C::ExecuteUbergraph_MudHitImpact_Emitter_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MudHitImpact_Emitter_Corrupt.MudHitImpact_Emitter_Corrupt_C.ExecuteUbergraph_MudHitImpact_Emitter_Corrupt");

	AMudHitImpact_Emitter_Corrupt_C_ExecuteUbergraph_MudHitImpact_Emitter_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
