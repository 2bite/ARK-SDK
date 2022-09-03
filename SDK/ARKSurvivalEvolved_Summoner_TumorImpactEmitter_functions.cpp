// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Summoner_TumorImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Summoner_TumorImpactEmitter.Summoner_TumorImpactEmitter_C.UserConstructionScript
// ()

void ASummoner_TumorImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_TumorImpactEmitter.Summoner_TumorImpactEmitter_C.UserConstructionScript");

	ASummoner_TumorImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_TumorImpactEmitter.Summoner_TumorImpactEmitter_C.ExecuteUbergraph_Summoner_TumorImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_TumorImpactEmitter_C::ExecuteUbergraph_Summoner_TumorImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_TumorImpactEmitter.Summoner_TumorImpactEmitter_C.ExecuteUbergraph_Summoner_TumorImpactEmitter");

	ASummoner_TumorImpactEmitter_C_ExecuteUbergraph_Summoner_TumorImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
