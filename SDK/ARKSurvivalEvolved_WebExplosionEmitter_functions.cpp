// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WebExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WebExplosionEmitter.WebExplosionEmitter_C.UserConstructionScript
// ()

void AWebExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebExplosionEmitter.WebExplosionEmitter_C.UserConstructionScript");

	AWebExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebExplosionEmitter.WebExplosionEmitter_C.ExecuteUbergraph_WebExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWebExplosionEmitter_C::ExecuteUbergraph_WebExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebExplosionEmitter.WebExplosionEmitter_C.ExecuteUbergraph_WebExplosionEmitter");

	AWebExplosionEmitter_C_ExecuteUbergraph_WebExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
