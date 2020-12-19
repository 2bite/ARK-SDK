// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FKaijuWyvAttackStateFire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C.BPOnHitActor
// ()
// Parameters:
// struct FHitResult              HitResult                      (Parm, OutParm, ReferenceParm)

void UFKaijuWyvAttackStateFire_C::BPOnHitActor(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C.BPOnHitActor");

	UFKaijuWyvAttackStateFire_C_BPOnHitActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;
}


// Function FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C.ExecuteUbergraph_FKaijuWyvAttackStateFire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFKaijuWyvAttackStateFire_C::ExecuteUbergraph_FKaijuWyvAttackStateFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C.ExecuteUbergraph_FKaijuWyvAttackStateFire");

	UFKaijuWyvAttackStateFire_C_ExecuteUbergraph_FKaijuWyvAttackStateFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
