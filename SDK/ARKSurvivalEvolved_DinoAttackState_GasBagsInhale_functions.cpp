// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GasBagsInhale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GasBagsInhale_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnBeginEvent");

	UDinoAttackState_GasBagsInhale_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnEndEvent
// ()

void UDinoAttackState_GasBagsInhale_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnEndEvent");

	UDinoAttackState_GasBagsInhale_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_GasBagsInhale_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.BPCanAttack");

	UDinoAttackState_GasBagsInhale_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_GasBagsInhale_C::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnCanUseStateEvent");

	UDinoAttackState_GasBagsInhale_C_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.GetInflation
// ()
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GasBagsInhale_C::GetInflation(float* Value, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.GetInflation");

	UDinoAttackState_GasBagsInhale_C_GetInflation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.BPShouldEndAttack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_GasBagsInhale_C::BPShouldEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.BPShouldEndAttack");

	UDinoAttackState_GasBagsInhale_C_BPShouldEndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.ExecuteUbergraph_DinoAttackState_GasBagsInhale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GasBagsInhale_C::ExecuteUbergraph_DinoAttackState_GasBagsInhale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.ExecuteUbergraph_DinoAttackState_GasBagsInhale");

	UDinoAttackState_GasBagsInhale_C_ExecuteUbergraph_DinoAttackState_GasBagsInhale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
