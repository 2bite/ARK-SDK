// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekRifleImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekRifleImpactEmitter.TekRifleImpactEmitter_C.UserConstructionScript
// ()

void ATekRifleImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekRifleImpactEmitter.TekRifleImpactEmitter_C.UserConstructionScript");

	ATekRifleImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekRifleImpactEmitter.TekRifleImpactEmitter_C.ExecuteUbergraph_TekRifleImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekRifleImpactEmitter_C::ExecuteUbergraph_TekRifleImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekRifleImpactEmitter.TekRifleImpactEmitter_C.ExecuteUbergraph_TekRifleImpactEmitter");

	ATekRifleImpactEmitter_C_ExecuteUbergraph_TekRifleImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
