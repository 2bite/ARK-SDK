// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DKaijuFlock_AttackAIState_Slap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDKaijuFlock_AttackAIState_Slap_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.OnBeginEvent");

	UDKaijuFlock_AttackAIState_Slap_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDKaijuFlock_AttackAIState_Slap_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.BPOnAttackStart");

	UDKaijuFlock_AttackAIState_Slap_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.BPShouldEndAttack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDKaijuFlock_AttackAIState_Slap_C::BPShouldEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.BPShouldEndAttack");

	UDKaijuFlock_AttackAIState_Slap_C_BPShouldEndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.OnTickEvent
// (NetReliable, Native, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDKaijuFlock_AttackAIState_Slap_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.OnTickEvent");

	UDKaijuFlock_AttackAIState_Slap_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDKaijuFlock_AttackAIState_Slap_C::ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap");

	UDKaijuFlock_AttackAIState_Slap_C_ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
