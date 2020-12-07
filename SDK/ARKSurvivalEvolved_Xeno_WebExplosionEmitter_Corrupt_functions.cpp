// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xeno_WebExplosionEmitter_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xeno_WebExplosionEmitter_Corrupt.Xeno_WebExplosionEmitter_Corrupt_C.UserConstructionScript
// ()

void AXeno_WebExplosionEmitter_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xeno_WebExplosionEmitter_Corrupt.Xeno_WebExplosionEmitter_Corrupt_C.UserConstructionScript");

	AXeno_WebExplosionEmitter_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xeno_WebExplosionEmitter_Corrupt.Xeno_WebExplosionEmitter_Corrupt_C.ExecuteUbergraph_Xeno_WebExplosionEmitter_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXeno_WebExplosionEmitter_Corrupt_C::ExecuteUbergraph_Xeno_WebExplosionEmitter_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xeno_WebExplosionEmitter_Corrupt.Xeno_WebExplosionEmitter_Corrupt_C.ExecuteUbergraph_Xeno_WebExplosionEmitter_Corrupt");

	AXeno_WebExplosionEmitter_Corrupt_C_ExecuteUbergraph_Xeno_WebExplosionEmitter_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
