// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneHarvestImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneHarvestImpactEmitter.StoneHarvestImpactEmitter_C.UserConstructionScript
// ()

void AStoneHarvestImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneHarvestImpactEmitter.StoneHarvestImpactEmitter_C.UserConstructionScript");

	AStoneHarvestImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoneHarvestImpactEmitter.StoneHarvestImpactEmitter_C.ExecuteUbergraph_StoneHarvestImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStoneHarvestImpactEmitter_C::ExecuteUbergraph_StoneHarvestImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneHarvestImpactEmitter.StoneHarvestImpactEmitter_C.ExecuteUbergraph_StoneHarvestImpactEmitter");

	AStoneHarvestImpactEmitter_C_ExecuteUbergraph_StoneHarvestImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
