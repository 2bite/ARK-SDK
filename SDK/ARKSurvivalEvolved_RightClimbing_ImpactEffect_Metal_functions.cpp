// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RightClimbing_ImpactEffect_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RightClimbing_ImpactEffect_Metal.RightClimbing_ImpactEffect_Metal_C.UserConstructionScript
// ()

void ARightClimbing_ImpactEffect_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RightClimbing_ImpactEffect_Metal.RightClimbing_ImpactEffect_Metal_C.UserConstructionScript");

	ARightClimbing_ImpactEffect_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightClimbing_ImpactEffect_Metal.RightClimbing_ImpactEffect_Metal_C.ExecuteUbergraph_RightClimbing_ImpactEffect_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARightClimbing_ImpactEffect_Metal_C::ExecuteUbergraph_RightClimbing_ImpactEffect_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RightClimbing_ImpactEffect_Metal.RightClimbing_ImpactEffect_Metal_C.ExecuteUbergraph_RightClimbing_ImpactEffect_Metal");

	ARightClimbing_ImpactEffect_Metal_C_ExecuteUbergraph_RightClimbing_ImpactEffect_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
