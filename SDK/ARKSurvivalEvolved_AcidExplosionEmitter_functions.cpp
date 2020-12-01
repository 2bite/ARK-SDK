// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AcidExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AcidExplosionEmitter.AcidExplosionEmitter_C.UserConstructionScript
// ()

void AAcidExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AcidExplosionEmitter.AcidExplosionEmitter_C.UserConstructionScript");

	AAcidExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AcidExplosionEmitter.AcidExplosionEmitter_C.ExecuteUbergraph_AcidExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAcidExplosionEmitter_C::ExecuteUbergraph_AcidExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AcidExplosionEmitter.AcidExplosionEmitter_C.ExecuteUbergraph_AcidExplosionEmitter");

	AAcidExplosionEmitter_C_ExecuteUbergraph_AcidExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
