// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Drill_HarvestImpactEmitter_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C.UserConstructionScript
// ()

void ADrill_HarvestImpactEmitter_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C.UserConstructionScript");

	ADrill_HarvestImpactEmitter_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C.ExecuteUbergraph_Drill_HarvestImpactEmitter_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADrill_HarvestImpactEmitter_Wood_C::ExecuteUbergraph_Drill_HarvestImpactEmitter_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drill_HarvestImpactEmitter_Wood.Drill_HarvestImpactEmitter_Wood_C.ExecuteUbergraph_Drill_HarvestImpactEmitter_Wood");

	ADrill_HarvestImpactEmitter_Wood_C_ExecuteUbergraph_Drill_HarvestImpactEmitter_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
