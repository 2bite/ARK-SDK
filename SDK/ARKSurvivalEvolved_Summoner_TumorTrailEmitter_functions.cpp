// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Summoner_TumorTrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Summoner_TumorTrailEmitter.Summoner_TumorTrailEmitter_C.UserConstructionScript
// ()

void ASummoner_TumorTrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_TumorTrailEmitter.Summoner_TumorTrailEmitter_C.UserConstructionScript");

	ASummoner_TumorTrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_TumorTrailEmitter.Summoner_TumorTrailEmitter_C.ExecuteUbergraph_Summoner_TumorTrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_TumorTrailEmitter_C::ExecuteUbergraph_Summoner_TumorTrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_TumorTrailEmitter.Summoner_TumorTrailEmitter_C.ExecuteUbergraph_Summoner_TumorTrailEmitter");

	ASummoner_TumorTrailEmitter_C_ExecuteUbergraph_Summoner_TumorTrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
