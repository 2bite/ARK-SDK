// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_KingKaiju_Charge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.BPOnAttackEnd
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_Charge_C::BPOnAttackEnd(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.BPOnAttackEnd");

	UDinoAttackState_KingKaiju_Charge_C_BPOnAttackEnd_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_Charge_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.BPOnAttackStart");

	UDinoAttackState_KingKaiju_Charge_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.OnTickEvent
// (Native, Delegate, NetServer, HasOutParms, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_Charge_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.OnTickEvent");

	UDinoAttackState_KingKaiju_Charge_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.FinishCharge
// ()

void UDinoAttackState_KingKaiju_Charge_C::FinishCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.FinishCharge");

	UDinoAttackState_KingKaiju_Charge_C_FinishCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.FinishChargeHitKaiju
// ()

void UDinoAttackState_KingKaiju_Charge_C::FinishChargeHitKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.FinishChargeHitKaiju");

	UDinoAttackState_KingKaiju_Charge_C_FinishChargeHitKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.ExecuteUbergraph_DinoAttackState_KingKaiju_Charge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_KingKaiju_Charge_C::ExecuteUbergraph_DinoAttackState_KingKaiju_Charge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_KingKaiju_Charge.DinoAttackState_KingKaiju_Charge_C.ExecuteUbergraph_DinoAttackState_KingKaiju_Charge");

	UDinoAttackState_KingKaiju_Charge_C_ExecuteUbergraph_DinoAttackState_KingKaiju_Charge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
