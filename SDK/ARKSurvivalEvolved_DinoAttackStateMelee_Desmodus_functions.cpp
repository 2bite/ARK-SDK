// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Desmodus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_Desmodus.DinoAttackStateMelee_Desmodus_C.BPOnHitActor
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)

void UDinoAttackStateMelee_Desmodus_C::BPOnHitActor(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Desmodus.DinoAttackStateMelee_Desmodus_C.BPOnHitActor");

	UDinoAttackStateMelee_Desmodus_C_BPOnHitActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function DinoAttackStateMelee_Desmodus.DinoAttackStateMelee_Desmodus_C.ExecuteUbergraph_DinoAttackStateMelee_Desmodus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Desmodus_C::ExecuteUbergraph_DinoAttackStateMelee_Desmodus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Desmodus.DinoAttackStateMelee_Desmodus_C.ExecuteUbergraph_DinoAttackStateMelee_Desmodus");

	UDinoAttackStateMelee_Desmodus_C_ExecuteUbergraph_DinoAttackStateMelee_Desmodus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
