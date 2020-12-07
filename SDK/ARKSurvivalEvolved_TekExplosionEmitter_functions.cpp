// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekExplosionEmitter.TekExplosionEmitter_C.UserConstructionScript
// ()

void ATekExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekExplosionEmitter.TekExplosionEmitter_C.UserConstructionScript");

	ATekExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekExplosionEmitter.TekExplosionEmitter_C.ExecuteUbergraph_TekExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekExplosionEmitter_C::ExecuteUbergraph_TekExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekExplosionEmitter.TekExplosionEmitter_C.ExecuteUbergraph_TekExplosionEmitter");

	ATekExplosionEmitter_C_ExecuteUbergraph_TekExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
