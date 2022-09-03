// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tentacle_HazardBP_Spawned_FromSummoner_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C.UserConstructionScript
// ()

void ATentacle_HazardBP_Spawned_FromSummoner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C.UserConstructionScript");

	ATentacle_HazardBP_Spawned_FromSummoner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C.ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATentacle_HazardBP_Spawned_FromSummoner_C::ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP_Spawned_FromSummoner.Tentacle_HazardBP_Spawned_FromSummoner_C.ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner");

	ATentacle_HazardBP_Spawned_FromSummoner_C_ExecuteUbergraph_Tentacle_HazardBP_Spawned_FromSummoner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
