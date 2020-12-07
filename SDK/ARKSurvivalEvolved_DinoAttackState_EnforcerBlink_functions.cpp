// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_EnforcerBlink_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPDoAttack
// ()

void UDinoAttackState_EnforcerBlink_C::BPDoAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPDoAttack");

	UDinoAttackState_EnforcerBlink_C_BPDoAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnEndEvent
// ()

void UDinoAttackState_EnforcerBlink_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnEndEvent");

	UDinoAttackState_EnforcerBlink_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_EnforcerBlink_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.OnBeginEvent");

	UDinoAttackState_EnforcerBlink_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPShouldEndAttack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_EnforcerBlink_C::BPShouldEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.BPShouldEndAttack");

	UDinoAttackState_EnforcerBlink_C_BPShouldEndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.ExecuteUbergraph_DinoAttackState_EnforcerBlink
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_EnforcerBlink_C::ExecuteUbergraph_DinoAttackState_EnforcerBlink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_EnforcerBlink.DinoAttackState_EnforcerBlink_C.ExecuteUbergraph_DinoAttackState_EnforcerBlink");

	UDinoAttackState_EnforcerBlink_C_ExecuteUbergraph_DinoAttackState_EnforcerBlink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
