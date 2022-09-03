// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xeno_WebExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xeno_WebExplosionEmitter.Xeno_WebExplosionEmitter_C.UserConstructionScript
// ()

void AXeno_WebExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xeno_WebExplosionEmitter.Xeno_WebExplosionEmitter_C.UserConstructionScript");

	AXeno_WebExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xeno_WebExplosionEmitter.Xeno_WebExplosionEmitter_C.ExecuteUbergraph_Xeno_WebExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXeno_WebExplosionEmitter_C::ExecuteUbergraph_Xeno_WebExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xeno_WebExplosionEmitter.Xeno_WebExplosionEmitter_C.ExecuteUbergraph_Xeno_WebExplosionEmitter");

	AXeno_WebExplosionEmitter_C_ExecuteUbergraph_Xeno_WebExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
