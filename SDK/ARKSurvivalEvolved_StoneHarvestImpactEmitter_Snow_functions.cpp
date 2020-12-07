// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneHarvestImpactEmitter_Snow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneHarvestImpactEmitter_Snow.StoneHarvestImpactEmitter_Snow_C.UserConstructionScript
// ()

void AStoneHarvestImpactEmitter_Snow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneHarvestImpactEmitter_Snow.StoneHarvestImpactEmitter_Snow_C.UserConstructionScript");

	AStoneHarvestImpactEmitter_Snow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoneHarvestImpactEmitter_Snow.StoneHarvestImpactEmitter_Snow_C.ExecuteUbergraph_StoneHarvestImpactEmitter_Snow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStoneHarvestImpactEmitter_Snow_C::ExecuteUbergraph_StoneHarvestImpactEmitter_Snow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneHarvestImpactEmitter_Snow.StoneHarvestImpactEmitter_Snow_C.ExecuteUbergraph_StoneHarvestImpactEmitter_Snow");

	AStoneHarvestImpactEmitter_Snow_C_ExecuteUbergraph_StoneHarvestImpactEmitter_Snow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
