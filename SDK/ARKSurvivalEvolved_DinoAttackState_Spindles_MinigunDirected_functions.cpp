// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunDirected_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPGetDebugInfoString
// (Net, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDinoAttackState_Spindles_MinigunDirected_C::BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPGetDebugInfoString");

	UDinoAttackState_Spindles_MinigunDirected_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetRandomVectorOnCircle
// ()
// Parameters:
// float                          MinRadius                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRadius                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RandomVector                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunDirected_C::GetRandomVectorOnCircle(float MinRadius, float MaxRadius, struct FVector* RandomVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetRandomVectorOnCircle");

	UDinoAttackState_Spindles_MinigunDirected_C_GetRandomVectorOnCircle_Params params;
	params.MinRadius = MinRadius;
	params.MaxRadius = MaxRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomVector != nullptr)
		*RandomVector = params.RandomVector;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPShouldEndAttack
// (NetReliable, NetRequest, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Spindles_MinigunDirected_C::BPShouldEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPShouldEndAttack");

	UDinoAttackState_Spindles_MinigunDirected_C_BPShouldEndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnEndEvent
// ()

void UDinoAttackState_Spindles_MinigunDirected_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnEndEvent");

	UDinoAttackState_Spindles_MinigunDirected_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunDirected_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnBeginEvent");

	UDinoAttackState_Spindles_MinigunDirected_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Spindles_MinigunDirected_C::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnCanUseStateEvent");

	UDinoAttackState_Spindles_MinigunDirected_C_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Spindles_MinigunDirected_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPCanAttack");

	UDinoAttackState_Spindles_MinigunDirected_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetAttackIndex
// ()
// Parameters:
// int                            AttackIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunDirected_C::GetAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetAttackIndex");

	UDinoAttackState_Spindles_MinigunDirected_C_GetAttackIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackIndex != nullptr)
		*AttackIndex = params.AttackIndex;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.Get Spine Start and End Position
// (Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VFXStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VFXEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunDirected_C::Get_Spine_Start_and_End_Position(struct FVector* Start, struct FVector* End, struct FVector* VFXStart, struct FVector* VFXEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.Get Spine Start and End Position");

	UDinoAttackState_Spindles_MinigunDirected_C_Get_Spine_Start_and_End_Position_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
	if (VFXStart != nullptr)
		*VFXStart = params.VFXStart;
	if (VFXEnd != nullptr)
		*VFXEnd = params.VFXEnd;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.UpdateAimedActors
// ()

void UDinoAttackState_Spindles_MinigunDirected_C::UpdateAimedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.UpdateAimedActors");

	UDinoAttackState_Spindles_MinigunDirected_C_UpdateAimedActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunDirected_C::ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected");

	UDinoAttackState_Spindles_MinigunDirected_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
