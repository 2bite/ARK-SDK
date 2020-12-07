// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionEmitter_TropeProj_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C.UserConstructionScript
// ()

void AExplosionEmitter_TropeProj_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C.UserConstructionScript");

	AExplosionEmitter_TropeProj_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C.ExecuteUbergraph_ExplosionEmitter_TropeProj
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplosionEmitter_TropeProj_C::ExecuteUbergraph_ExplosionEmitter_TropeProj(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C.ExecuteUbergraph_ExplosionEmitter_TropeProj");

	AExplosionEmitter_TropeProj_C_ExecuteUbergraph_ExplosionEmitter_TropeProj_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
