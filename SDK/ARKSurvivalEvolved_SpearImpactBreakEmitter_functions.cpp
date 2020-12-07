// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpearImpactBreakEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpearImpactBreakEmitter.SpearImpactBreakEmitter_C.UserConstructionScript
// ()

void ASpearImpactBreakEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpearImpactBreakEmitter.SpearImpactBreakEmitter_C.UserConstructionScript");

	ASpearImpactBreakEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpearImpactBreakEmitter.SpearImpactBreakEmitter_C.ExecuteUbergraph_SpearImpactBreakEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpearImpactBreakEmitter_C::ExecuteUbergraph_SpearImpactBreakEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpearImpactBreakEmitter.SpearImpactBreakEmitter_C.ExecuteUbergraph_SpearImpactBreakEmitter");

	ASpearImpactBreakEmitter_C_ExecuteUbergraph_SpearImpactBreakEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
