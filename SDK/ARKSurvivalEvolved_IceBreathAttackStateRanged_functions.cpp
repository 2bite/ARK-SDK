// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceBreathAttackStateRanged_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.BPShouldEndAttack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIceBreathAttackStateRanged_C::BPShouldEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.BPShouldEndAttack");

	UIceBreathAttackStateRanged_C_BPShouldEndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.OnEndEvent
// ()

void UIceBreathAttackStateRanged_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.OnEndEvent");

	UIceBreathAttackStateRanged_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIceBreathAttackStateRanged_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.BPCanAttack");

	UIceBreathAttackStateRanged_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.OnTickEvent
// (NetRequest, Native, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UIceBreathAttackStateRanged_C::STATIC_OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.OnTickEvent");

	UIceBreathAttackStateRanged_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UIceBreathAttackStateRanged_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.OnBeginEvent");

	UIceBreathAttackStateRanged_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.ExecuteUbergraph_IceBreathAttackStateRanged
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIceBreathAttackStateRanged_C::ExecuteUbergraph_IceBreathAttackStateRanged(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceBreathAttackStateRanged.IceBreathAttackStateRanged_C.ExecuteUbergraph_IceBreathAttackStateRanged");

	UIceBreathAttackStateRanged_C_ExecuteUbergraph_IceBreathAttackStateRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
