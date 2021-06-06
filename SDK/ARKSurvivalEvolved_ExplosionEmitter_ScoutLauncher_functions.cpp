// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionEmitter_ScoutLauncher_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C.UserConstructionScript
// ()

void AExplosionEmitter_ScoutLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C.UserConstructionScript");

	AExplosionEmitter_ScoutLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C.ExecuteUbergraph_ExplosionEmitter_ScoutLauncher
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplosionEmitter_ScoutLauncher_C::ExecuteUbergraph_ExplosionEmitter_ScoutLauncher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_ScoutLauncher.ExplosionEmitter_ScoutLauncher_C.ExecuteUbergraph_ExplosionEmitter_ScoutLauncher");

	AExplosionEmitter_ScoutLauncher_C_ExecuteUbergraph_ExplosionEmitter_ScoutLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
