// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EmitterImpact_TekExplosive_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C.UserConstructionScript
// ()

void AEmitterImpact_TekExplosive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C.UserConstructionScript");

	AEmitterImpact_TekExplosive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C.ExecuteUbergraph_EmitterImpact_TekExplosive
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitterImpact_TekExplosive_C::ExecuteUbergraph_EmitterImpact_TekExplosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmitterImpact_TekExplosive.EmitterImpact_TekExplosive_C.ExecuteUbergraph_EmitterImpact_TekExplosive");

	AEmitterImpact_TekExplosive_C_ExecuteUbergraph_EmitterImpact_TekExplosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
