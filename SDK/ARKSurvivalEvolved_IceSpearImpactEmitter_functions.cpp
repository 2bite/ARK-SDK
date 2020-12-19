// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceSpearImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceSpearImpactEmitter.IceSpearImpactEmitter_C.UserConstructionScript
// ()

void AIceSpearImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceSpearImpactEmitter.IceSpearImpactEmitter_C.UserConstructionScript");

	AIceSpearImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceSpearImpactEmitter.IceSpearImpactEmitter_C.ExecuteUbergraph_IceSpearImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceSpearImpactEmitter_C::ExecuteUbergraph_IceSpearImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceSpearImpactEmitter.IceSpearImpactEmitter_C.ExecuteUbergraph_IceSpearImpactEmitter");

	AIceSpearImpactEmitter_C_ExecuteUbergraph_IceSpearImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
