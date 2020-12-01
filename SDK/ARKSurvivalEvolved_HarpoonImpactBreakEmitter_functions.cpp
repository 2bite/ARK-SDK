// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HarpoonImpactBreakEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HarpoonImpactBreakEmitter.HarpoonImpactBreakEmitter_C.UserConstructionScript
// ()

void AHarpoonImpactBreakEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HarpoonImpactBreakEmitter.HarpoonImpactBreakEmitter_C.UserConstructionScript");

	AHarpoonImpactBreakEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HarpoonImpactBreakEmitter.HarpoonImpactBreakEmitter_C.ExecuteUbergraph_HarpoonImpactBreakEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHarpoonImpactBreakEmitter_C::ExecuteUbergraph_HarpoonImpactBreakEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HarpoonImpactBreakEmitter.HarpoonImpactBreakEmitter_C.ExecuteUbergraph_HarpoonImpactBreakEmitter");

	AHarpoonImpactBreakEmitter_C_ExecuteUbergraph_HarpoonImpactBreakEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
