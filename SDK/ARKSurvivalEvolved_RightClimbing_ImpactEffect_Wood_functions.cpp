// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RightClimbing_ImpactEffect_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RightClimbing_ImpactEffect_Wood.RightClimbing_ImpactEffect_Wood_C.UserConstructionScript
// ()

void ARightClimbing_ImpactEffect_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RightClimbing_ImpactEffect_Wood.RightClimbing_ImpactEffect_Wood_C.UserConstructionScript");

	ARightClimbing_ImpactEffect_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightClimbing_ImpactEffect_Wood.RightClimbing_ImpactEffect_Wood_C.ExecuteUbergraph_RightClimbing_ImpactEffect_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARightClimbing_ImpactEffect_Wood_C::ExecuteUbergraph_RightClimbing_ImpactEffect_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RightClimbing_ImpactEffect_Wood.RightClimbing_ImpactEffect_Wood_C.ExecuteUbergraph_RightClimbing_ImpactEffect_Wood");

	ARightClimbing_ImpactEffect_Wood_C_ExecuteUbergraph_RightClimbing_ImpactEffect_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
