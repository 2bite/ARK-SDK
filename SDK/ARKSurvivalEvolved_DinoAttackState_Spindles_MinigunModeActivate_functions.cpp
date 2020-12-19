// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunModeActivate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.OnEndEvent
// ()

void UDinoAttackState_Spindles_MinigunModeActivate_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.OnEndEvent");

	UDinoAttackState_Spindles_MinigunModeActivate_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.BPCanAttack
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Spindles_MinigunModeActivate_C::STATIC_BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.BPCanAttack");

	UDinoAttackState_Spindles_MinigunModeActivate_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunModeActivate_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.OnBeginEvent");

	UDinoAttackState_Spindles_MinigunModeActivate_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeActivate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunModeActivate_C::ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeActivate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunModeActivate.DinoAttackState_Spindles_MinigunModeActivate_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeActivate");

	UDinoAttackState_Spindles_MinigunModeActivate_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeActivate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
