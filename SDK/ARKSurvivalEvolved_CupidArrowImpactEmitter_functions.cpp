// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CupidArrowImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CupidArrowImpactEmitter.CupidArrowImpactEmitter_C.UserConstructionScript
// ()

void ACupidArrowImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CupidArrowImpactEmitter.CupidArrowImpactEmitter_C.UserConstructionScript");

	ACupidArrowImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CupidArrowImpactEmitter.CupidArrowImpactEmitter_C.ExecuteUbergraph_CupidArrowImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACupidArrowImpactEmitter_C::ExecuteUbergraph_CupidArrowImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CupidArrowImpactEmitter.CupidArrowImpactEmitter_C.ExecuteUbergraph_CupidArrowImpactEmitter");

	ACupidArrowImpactEmitter_C_ExecuteUbergraph_CupidArrowImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
