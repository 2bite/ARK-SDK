// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionEmitter_underwater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosionEmitter_underwater.ExplosionEmitter_underwater_C.UserConstructionScript
// ()

void AExplosionEmitter_underwater_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_underwater.ExplosionEmitter_underwater_C.UserConstructionScript");

	AExplosionEmitter_underwater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosionEmitter_underwater.ExplosionEmitter_underwater_C.ExecuteUbergraph_ExplosionEmitter_underwater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplosionEmitter_underwater_C::ExecuteUbergraph_ExplosionEmitter_underwater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_underwater.ExplosionEmitter_underwater_C.ExecuteUbergraph_ExplosionEmitter_underwater");

	AExplosionEmitter_underwater_C_ExecuteUbergraph_ExplosionEmitter_underwater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
