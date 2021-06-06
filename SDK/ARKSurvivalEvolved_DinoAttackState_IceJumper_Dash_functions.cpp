// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_IceJumper_Dash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_IceJumper_Dash_C::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnCanUseStateEvent");

	UDinoAttackState_IceJumper_Dash_C_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_IceJumper_Dash_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.BPCanAttack");

	UDinoAttackState_IceJumper_Dash_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnEndEvent
// ()

void UDinoAttackState_IceJumper_Dash_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnEndEvent");

	UDinoAttackState_IceJumper_Dash_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnTickEvent
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_IceJumper_Dash_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnTickEvent");

	UDinoAttackState_IceJumper_Dash_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnBeginEvent
// (Exec, Native, NetResponse, Private, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_IceJumper_Dash_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.OnBeginEvent");

	UDinoAttackState_IceJumper_Dash_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.IsAIControlled
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_IceJumper_Dash_C::IsAIControlled(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.IsAIControlled");

	UDinoAttackState_IceJumper_Dash_C_IsAIControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.ExecuteUbergraph_DinoAttackState_IceJumper_Dash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_IceJumper_Dash_C::ExecuteUbergraph_DinoAttackState_IceJumper_Dash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_IceJumper_Dash.DinoAttackState_IceJumper_Dash_C.ExecuteUbergraph_DinoAttackState_IceJumper_Dash");

	UDinoAttackState_IceJumper_Dash_C_ExecuteUbergraph_DinoAttackState_IceJumper_Dash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
