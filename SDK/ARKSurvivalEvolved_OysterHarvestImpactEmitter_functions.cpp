// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OysterHarvestImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OysterHarvestImpactEmitter.OysterHarvestImpactEmitter_C.UserConstructionScript
// ()

void AOysterHarvestImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OysterHarvestImpactEmitter.OysterHarvestImpactEmitter_C.UserConstructionScript");

	AOysterHarvestImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OysterHarvestImpactEmitter.OysterHarvestImpactEmitter_C.ExecuteUbergraph_OysterHarvestImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOysterHarvestImpactEmitter_C::ExecuteUbergraph_OysterHarvestImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OysterHarvestImpactEmitter.OysterHarvestImpactEmitter_C.ExecuteUbergraph_OysterHarvestImpactEmitter");

	AOysterHarvestImpactEmitter_C_ExecuteUbergraph_OysterHarvestImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
