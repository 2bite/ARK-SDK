// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Scout_Dash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.BPShouldEndAttack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Scout_Dash_C::BPShouldEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.BPShouldEndAttack");

	UDinoAttackState_Scout_Dash_C_BPShouldEndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Scout_Dash_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.OnBeginEvent");

	UDinoAttackState_Scout_Dash_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.IsAIControlled
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Scout_Dash_C::IsAIControlled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.IsAIControlled");

	UDinoAttackState_Scout_Dash_C_IsAIControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.ExecuteUbergraph_DinoAttackState_Scout_Dash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Scout_Dash_C::ExecuteUbergraph_DinoAttackState_Scout_Dash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Scout_Dash.DinoAttackState_Scout_Dash_C.ExecuteUbergraph_DinoAttackState_Scout_Dash");

	UDinoAttackState_Scout_Dash_C_ExecuteUbergraph_DinoAttackState_Scout_Dash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
