// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_AttackState_Leap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnClearAttackState
// ()

void UIceKaiju_AttackState_Leap_C::BPOnClearAttackState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnClearAttackState");

	UIceKaiju_AttackState_Leap_C_BPOnClearAttackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackEnd
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaiju_AttackState_Leap_C::BPOnAttackEnd(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackEnd");

	UIceKaiju_AttackState_Leap_C_BPOnAttackEnd_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaiju_AttackState_Leap_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.BPOnAttackStart");

	UIceKaiju_AttackState_Leap_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.ExecuteUbergraph_IceKaiju_AttackState_Leap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIceKaiju_AttackState_Leap_C::ExecuteUbergraph_IceKaiju_AttackState_Leap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_AttackState_Leap.IceKaiju_AttackState_Leap_C.ExecuteUbergraph_IceKaiju_AttackState_Leap");

	UIceKaiju_AttackState_Leap_C_ExecuteUbergraph_IceKaiju_AttackState_Leap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
