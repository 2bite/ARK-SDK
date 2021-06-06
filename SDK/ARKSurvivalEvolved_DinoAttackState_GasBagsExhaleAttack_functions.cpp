// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GasBagsExhaleAttack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GasBagsExhaleAttack_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPOnAttackStart");

	UDinoAttackState_GasBagsExhaleAttack_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_GasBagsExhaleAttack_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPCanAttack");

	UDinoAttackState_GasBagsExhaleAttack_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_GasBagsExhaleAttack_C::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.OnCanUseStateEvent");

	UDinoAttackState_GasBagsExhaleAttack_C_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.GetInflationAndStaminaCost
// ()
// Parameters:
// float                          CurrentInflationPercent        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentStamina                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentStaminaCost             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GasBagsExhaleAttack_C::GetInflationAndStaminaCost(float* CurrentInflationPercent, float* CurrentStamina, float* CurrentStaminaCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.GetInflationAndStaminaCost");

	UDinoAttackState_GasBagsExhaleAttack_C_GetInflationAndStaminaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentInflationPercent != nullptr)
		*CurrentInflationPercent = params.CurrentInflationPercent;
	if (CurrentStamina != nullptr)
		*CurrentStamina = params.CurrentStamina;
	if (CurrentStaminaCost != nullptr)
		*CurrentStaminaCost = params.CurrentStaminaCost;
}


// Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GasBagsExhaleAttack_C::ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack");

	UDinoAttackState_GasBagsExhaleAttack_C_ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
