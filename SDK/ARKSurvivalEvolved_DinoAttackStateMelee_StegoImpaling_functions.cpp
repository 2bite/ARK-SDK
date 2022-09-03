// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_StegoImpaling_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.BPOnHitActor
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)

void UDinoAttackStateMelee_StegoImpaling_C::BPOnHitActor(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.BPOnHitActor");

	UDinoAttackStateMelee_StegoImpaling_C_BPOnHitActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_StegoImpaling_C::ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_StegoImpaling.DinoAttackStateMelee_StegoImpaling_C.ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling");

	UDinoAttackStateMelee_StegoImpaling_C_ExecuteUbergraph_DinoAttackStateMelee_StegoImpaling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
