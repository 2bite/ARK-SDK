// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoop_Shapeshifter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BP_IgnoreProjectileImpact
// ()
// Parameters:
// struct FHitResult*             ImpactHit                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjPoop_Shapeshifter_C::BP_IgnoreProjectileImpact(struct FHitResult* ImpactHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BP_IgnoreProjectileImpact");

	AProjPoop_Shapeshifter_C_BP_IgnoreProjectileImpact_Params params;
	params.ImpactHit = ImpactHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BPProjectileBounced
// ()
// Parameters:
// struct FHitResult              ImpactResult                   (Parm, OutParm, ReferenceParm)
// struct FVector                 ImpactVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AProjPoop_Shapeshifter_C::BPProjectileBounced(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.BPProjectileBounced");

	AProjPoop_Shapeshifter_C_BPProjectileBounced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactResult != nullptr)
		*ImpactResult = params.ImpactResult;
	if (ImpactVelocity != nullptr)
		*ImpactVelocity = params.ImpactVelocity;
}


// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ReceiveBeginPlay
// ()

void AProjPoop_Shapeshifter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ReceiveBeginPlay");

	AProjPoop_Shapeshifter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.UserConstructionScript
// ()

void AProjPoop_Shapeshifter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.UserConstructionScript");

	AProjPoop_Shapeshifter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ExecuteUbergraph_ProjPoop_Shapeshifter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoop_Shapeshifter_C::ExecuteUbergraph_ProjPoop_Shapeshifter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop_Shapeshifter.ProjPoop_Shapeshifter_C.ExecuteUbergraph_ProjPoop_Shapeshifter");

	AProjPoop_Shapeshifter_C_ExecuteUbergraph_ProjPoop_Shapeshifter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
