// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GasExplosionEmitter.GasExplosionEmitter_C.UserConstructionScript
// ()

void AGasExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasExplosionEmitter.GasExplosionEmitter_C.UserConstructionScript");

	AGasExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasExplosionEmitter.GasExplosionEmitter_C.ExecuteUbergraph_GasExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGasExplosionEmitter_C::ExecuteUbergraph_GasExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasExplosionEmitter.GasExplosionEmitter_C.ExecuteUbergraph_GasExplosionEmitter");

	AGasExplosionEmitter_C_ExecuteUbergraph_GasExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
