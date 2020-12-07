// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TreeHarvestImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TreeHarvestImpactEmitter.TreeHarvestImpactEmitter_C.UserConstructionScript
// ()

void ATreeHarvestImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TreeHarvestImpactEmitter.TreeHarvestImpactEmitter_C.UserConstructionScript");

	ATreeHarvestImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TreeHarvestImpactEmitter.TreeHarvestImpactEmitter_C.ExecuteUbergraph_TreeHarvestImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATreeHarvestImpactEmitter_C::ExecuteUbergraph_TreeHarvestImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TreeHarvestImpactEmitter.TreeHarvestImpactEmitter_C.ExecuteUbergraph_TreeHarvestImpactEmitter");

	ATreeHarvestImpactEmitter_C_ExecuteUbergraph_TreeHarvestImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
