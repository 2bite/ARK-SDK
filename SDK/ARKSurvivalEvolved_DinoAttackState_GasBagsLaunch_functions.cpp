// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_GasBagsLaunch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.ShouldSkipRangeCheckEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_GasBagsLaunch_C::ShouldSkipRangeCheckEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.ShouldSkipRangeCheckEvent");

	UDinoAttackState_GasBagsLaunch_C_ShouldSkipRangeCheckEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GasBagsLaunch_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.OnBeginEvent");

	UDinoAttackState_GasBagsLaunch_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_GasBagsLaunch_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.BPCanAttack");

	UDinoAttackState_GasBagsLaunch_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_GasBagsLaunch_C::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.OnCanUseStateEvent");

	UDinoAttackState_GasBagsLaunch_C_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.GetInflation
// ()
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GasBagsLaunch_C::GetInflation(float* Value, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.GetInflation");

	UDinoAttackState_GasBagsLaunch_C_GetInflation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.ExecuteUbergraph_DinoAttackState_GasBagsLaunch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_GasBagsLaunch_C::ExecuteUbergraph_DinoAttackState_GasBagsLaunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsLaunch.DinoAttackState_GasBagsLaunch_C.ExecuteUbergraph_DinoAttackState_GasBagsLaunch");

	UDinoAttackState_GasBagsLaunch_C_ExecuteUbergraph_DinoAttackState_GasBagsLaunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
