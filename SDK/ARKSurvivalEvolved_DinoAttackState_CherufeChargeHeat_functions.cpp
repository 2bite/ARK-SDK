// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_CherufeChargeHeat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_CherufeChargeHeat_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPCanAttack");

	UDinoAttackState_CherufeChargeHeat_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ShouldSkipRangeCheckEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_CherufeChargeHeat_C::ShouldSkipRangeCheckEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ShouldSkipRangeCheckEvent");

	UDinoAttackState_CherufeChargeHeat_C_ShouldSkipRangeCheckEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOverrideAttackWeight
// ()
// Parameters:
// float*                         inputWeight                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDinoAttackState_CherufeChargeHeat_C::BPOverrideAttackWeight(float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOverrideAttackWeight");

	UDinoAttackState_CherufeChargeHeat_C_BPOverrideAttackWeight_Params params;
	params.inputWeight = inputWeight;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnClearAttackState
// ()

void UDinoAttackState_CherufeChargeHeat_C::BPOnClearAttackState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnClearAttackState");

	UDinoAttackState_CherufeChargeHeat_C_BPOnClearAttackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.EndAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_CherufeChargeHeat_C::EndAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.EndAnimationStateEvent");

	UDinoAttackState_CherufeChargeHeat_C_EndAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackEnd
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_CherufeChargeHeat_C::BPOnAttackEnd(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackEnd");

	UDinoAttackState_CherufeChargeHeat_C_BPOnAttackEnd_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackStart
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_CherufeChargeHeat_C::BPOnAttackStart(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackStart");

	UDinoAttackState_CherufeChargeHeat_C_BPOnAttackStart_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ExecuteUbergraph_DinoAttackState_CherufeChargeHeat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_CherufeChargeHeat_C::ExecuteUbergraph_DinoAttackState_CherufeChargeHeat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ExecuteUbergraph_DinoAttackState_CherufeChargeHeat");

	UDinoAttackState_CherufeChargeHeat_C_ExecuteUbergraph_DinoAttackState_CherufeChargeHeat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
