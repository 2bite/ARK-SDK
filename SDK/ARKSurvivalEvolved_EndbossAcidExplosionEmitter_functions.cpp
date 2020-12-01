// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndbossAcidExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndbossAcidExplosionEmitter.EndbossAcidExplosionEmitter_C.UserConstructionScript
// ()

void AEndbossAcidExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndbossAcidExplosionEmitter.EndbossAcidExplosionEmitter_C.UserConstructionScript");

	AEndbossAcidExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndbossAcidExplosionEmitter.EndbossAcidExplosionEmitter_C.ExecuteUbergraph_EndbossAcidExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndbossAcidExplosionEmitter_C::ExecuteUbergraph_EndbossAcidExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndbossAcidExplosionEmitter.EndbossAcidExplosionEmitter_C.ExecuteUbergraph_EndbossAcidExplosionEmitter");

	AEndbossAcidExplosionEmitter_C_ExecuteUbergraph_EndbossAcidExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
