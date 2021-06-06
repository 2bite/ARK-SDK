// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvernLightningImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvernLightningImpactEmitter.WyvernLightningImpactEmitter_C.UserConstructionScript
// ()

void AWyvernLightningImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernLightningImpactEmitter.WyvernLightningImpactEmitter_C.UserConstructionScript");

	AWyvernLightningImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvernLightningImpactEmitter.WyvernLightningImpactEmitter_C.ExecuteUbergraph_WyvernLightningImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvernLightningImpactEmitter_C::ExecuteUbergraph_WyvernLightningImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvernLightningImpactEmitter.WyvernLightningImpactEmitter_C.ExecuteUbergraph_WyvernLightningImpactEmitter");

	AWyvernLightningImpactEmitter_C_ExecuteUbergraph_WyvernLightningImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
