// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Tekwyvern_TamingRoll_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C.BPOnHitActor
// (Exec, Static, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)

void UDinoAttackStateMelee_Tekwyvern_TamingRoll_C::STATIC_BPOnHitActor(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C.BPOnHitActor");

	UDinoAttackStateMelee_Tekwyvern_TamingRoll_C_BPOnHitActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C.ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Tekwyvern_TamingRoll_C::ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C.ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll");

	UDinoAttackStateMelee_Tekwyvern_TamingRoll_C_ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
