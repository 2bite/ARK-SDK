// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Summoner_XenoExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Summoner_XenoExplosionEmitter.Summoner_XenoExplosionEmitter_C.UserConstructionScript
// ()

void ASummoner_XenoExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_XenoExplosionEmitter.Summoner_XenoExplosionEmitter_C.UserConstructionScript");

	ASummoner_XenoExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Summoner_XenoExplosionEmitter.Summoner_XenoExplosionEmitter_C.ExecuteUbergraph_Summoner_XenoExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASummoner_XenoExplosionEmitter_C::ExecuteUbergraph_Summoner_XenoExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Summoner_XenoExplosionEmitter.Summoner_XenoExplosionEmitter_C.ExecuteUbergraph_Summoner_XenoExplosionEmitter");

	ASummoner_XenoExplosionEmitter_C_ExecuteUbergraph_Summoner_XenoExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
