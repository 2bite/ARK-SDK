// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosionEmitter.ExplosionEmitter_C.UserConstructionScript
// ()

void AExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter.ExplosionEmitter_C.UserConstructionScript");

	AExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosionEmitter.ExplosionEmitter_C.ExecuteUbergraph_ExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplosionEmitter_C::ExecuteUbergraph_ExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter.ExplosionEmitter_C.ExecuteUbergraph_ExplosionEmitter");

	AExplosionEmitter_C_ExecuteUbergraph_ExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
