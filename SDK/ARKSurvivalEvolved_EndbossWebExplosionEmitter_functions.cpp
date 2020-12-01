// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndbossWebExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndbossWebExplosionEmitter.EndbossWebExplosionEmitter_C.UserConstructionScript
// ()

void AEndbossWebExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndbossWebExplosionEmitter.EndbossWebExplosionEmitter_C.UserConstructionScript");

	AEndbossWebExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndbossWebExplosionEmitter.EndbossWebExplosionEmitter_C.ExecuteUbergraph_EndbossWebExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndbossWebExplosionEmitter_C::ExecuteUbergraph_EndbossWebExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndbossWebExplosionEmitter.EndbossWebExplosionEmitter_C.ExecuteUbergraph_EndbossWebExplosionEmitter");

	AEndbossWebExplosionEmitter_C_ExecuteUbergraph_EndbossWebExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
