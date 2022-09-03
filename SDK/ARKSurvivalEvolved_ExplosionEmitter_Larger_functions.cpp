// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionEmitter_Larger_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosionEmitter_Larger.ExplosionEmitter_Larger_C.UserConstructionScript
// ()

void AExplosionEmitter_Larger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Larger.ExplosionEmitter_Larger_C.UserConstructionScript");

	AExplosionEmitter_Larger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosionEmitter_Larger.ExplosionEmitter_Larger_C.ExecuteUbergraph_ExplosionEmitter_Larger
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplosionEmitter_Larger_C::ExecuteUbergraph_ExplosionEmitter_Larger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Larger.ExplosionEmitter_Larger_C.ExecuteUbergraph_ExplosionEmitter_Larger");

	AExplosionEmitter_Larger_C_ExecuteUbergraph_ExplosionEmitter_Larger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
