// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Climbing_ImpactEffect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DestroyImpactEffect
// ()

void AClimbing_ImpactEffect_C::DestroyImpactEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DestroyImpactEffect");

	AClimbing_ImpactEffect_C_DestroyImpactEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DeactivateImpactEffect
// ()

void AClimbing_ImpactEffect_C::DeactivateImpactEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DeactivateImpactEffect");

	AClimbing_ImpactEffect_C_DeactivateImpactEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.UserConstructionScript
// ()

void AClimbing_ImpactEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.UserConstructionScript");

	AClimbing_ImpactEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ReceiveBeginPlay
// ()

void AClimbing_ImpactEffect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ReceiveBeginPlay");

	AClimbing_ImpactEffect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ExecuteUbergraph_Climbing_ImpactEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AClimbing_ImpactEffect_C::ExecuteUbergraph_Climbing_ImpactEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ExecuteUbergraph_Climbing_ImpactEffect");

	AClimbing_ImpactEffect_C_ExecuteUbergraph_Climbing_ImpactEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
