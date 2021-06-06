// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CupidFlameImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CupidFlameImpactEmitter.CupidFlameImpactEmitter_C.UserConstructionScript
// ()

void ACupidFlameImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CupidFlameImpactEmitter.CupidFlameImpactEmitter_C.UserConstructionScript");

	ACupidFlameImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CupidFlameImpactEmitter.CupidFlameImpactEmitter_C.ExecuteUbergraph_CupidFlameImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACupidFlameImpactEmitter_C::ExecuteUbergraph_CupidFlameImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CupidFlameImpactEmitter.CupidFlameImpactEmitter_C.ExecuteUbergraph_CupidFlameImpactEmitter");

	ACupidFlameImpactEmitter_C_ExecuteUbergraph_CupidFlameImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
