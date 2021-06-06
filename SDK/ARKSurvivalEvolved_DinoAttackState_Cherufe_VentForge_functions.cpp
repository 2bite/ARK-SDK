// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Cherufe_VentForge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Cherufe_VentForge_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPOnAttackStart");

	UDinoAttackState_Cherufe_VentForge_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Cherufe_VentForge_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPCanAttack");

	UDinoAttackState_Cherufe_VentForge_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Cherufe_VentForge_C::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.OnCanUseStateEvent");

	UDinoAttackState_Cherufe_VentForge_C_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.GetInflationAndStaminaCost
// ()
// Parameters:
// float                          CurrentForgeChargePercent      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentStamina                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentStaminaCost             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Cherufe_VentForge_C::GetInflationAndStaminaCost(float* CurrentForgeChargePercent, float* CurrentStamina, float* CurrentStaminaCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.GetInflationAndStaminaCost");

	UDinoAttackState_Cherufe_VentForge_C_GetInflationAndStaminaCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentForgeChargePercent != nullptr)
		*CurrentForgeChargePercent = params.CurrentForgeChargePercent;
	if (CurrentStamina != nullptr)
		*CurrentStamina = params.CurrentStamina;
	if (CurrentStaminaCost != nullptr)
		*CurrentStaminaCost = params.CurrentStaminaCost;
}


// Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.ExecuteUbergraph_DinoAttackState_Cherufe_VentForge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Cherufe_VentForge_C::ExecuteUbergraph_DinoAttackState_Cherufe_VentForge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.ExecuteUbergraph_DinoAttackState_Cherufe_VentForge");

	UDinoAttackState_Cherufe_VentForge_C_ExecuteUbergraph_DinoAttackState_Cherufe_VentForge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
