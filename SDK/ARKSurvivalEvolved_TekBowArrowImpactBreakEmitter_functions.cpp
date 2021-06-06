// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBowArrowImpactBreakEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekBowArrowImpactBreakEmitter.TekBowArrowImpactBreakEmitter_C.UserConstructionScript
// ()

void ATekBowArrowImpactBreakEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowArrowImpactBreakEmitter.TekBowArrowImpactBreakEmitter_C.UserConstructionScript");

	ATekBowArrowImpactBreakEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekBowArrowImpactBreakEmitter.TekBowArrowImpactBreakEmitter_C.ExecuteUbergraph_TekBowArrowImpactBreakEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekBowArrowImpactBreakEmitter_C::ExecuteUbergraph_TekBowArrowImpactBreakEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekBowArrowImpactBreakEmitter.TekBowArrowImpactBreakEmitter_C.ExecuteUbergraph_TekBowArrowImpactBreakEmitter");

	ATekBowArrowImpactBreakEmitter_C_ExecuteUbergraph_TekBowArrowImpactBreakEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
