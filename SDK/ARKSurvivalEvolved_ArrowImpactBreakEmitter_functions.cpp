// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArrowImpactBreakEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArrowImpactBreakEmitter.ArrowImpactBreakEmitter_C.UserConstructionScript
// ()

void AArrowImpactBreakEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrowImpactBreakEmitter.ArrowImpactBreakEmitter_C.UserConstructionScript");

	AArrowImpactBreakEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArrowImpactBreakEmitter.ArrowImpactBreakEmitter_C.ExecuteUbergraph_ArrowImpactBreakEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArrowImpactBreakEmitter_C::ExecuteUbergraph_ArrowImpactBreakEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrowImpactBreakEmitter.ArrowImpactBreakEmitter_C.ExecuteUbergraph_ArrowImpactBreakEmitter");

	AArrowImpactBreakEmitter_C_ExecuteUbergraph_ArrowImpactBreakEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
