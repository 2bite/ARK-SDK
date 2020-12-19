// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekGravityGrenadeExplosionEmitter_Repel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C.UserConstructionScript
// ()

void ATekGravityGrenadeExplosionEmitter_Repel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C.UserConstructionScript");

	ATekGravityGrenadeExplosionEmitter_Repel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C.ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Repel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekGravityGrenadeExplosionEmitter_Repel_C::ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Repel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekGravityGrenadeExplosionEmitter_Repel.TekGravityGrenadeExplosionEmitter_Repel_C.ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Repel");

	ATekGravityGrenadeExplosionEmitter_Repel_C_ExecuteUbergraph_TekGravityGrenadeExplosionEmitter_Repel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
