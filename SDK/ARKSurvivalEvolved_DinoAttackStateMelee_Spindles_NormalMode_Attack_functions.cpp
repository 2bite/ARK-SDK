// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Spindles_NormalMode_Attack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackStateMelee_Spindles_NormalMode_Attack_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.BPCanAttack");

	UDinoAttackStateMelee_Spindles_NormalMode_Attack_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Spindles_NormalMode_Attack_C::ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack");

	UDinoAttackStateMelee_Spindles_NormalMode_Attack_C_ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
