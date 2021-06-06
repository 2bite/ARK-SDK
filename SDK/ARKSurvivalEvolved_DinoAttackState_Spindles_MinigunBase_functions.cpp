// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.IsDebugMode
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunBase_C::IsDebugMode(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.IsDebugMode");

	UDinoAttackState_Spindles_MinigunBase_C_IsDebugMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetDamageForSpine
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunBase_C::GetDamageForSpine(class APrimalCharacter* Target, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetDamageForSpine");

	UDinoAttackState_Spindles_MinigunBase_C_GetDamageForSpine_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.FireSpine
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UDinoAttackState_Spindles_MinigunBase_C::FireSpine()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.FireSpine");

	UDinoAttackState_Spindles_MinigunBase_C_FireSpine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.Get Spine Start and End Position
// ()
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VFXStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VFXEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunBase_C::Get_Spine_Start_and_End_Position(struct FVector* Start, struct FVector* End, struct FVector* VFXStart, struct FVector* VFXEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.Get Spine Start and End Position");

	UDinoAttackState_Spindles_MinigunBase_C_Get_Spine_Start_and_End_Position_Params params;

	auto flags = fn->FunctionFlags;

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


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetAttackIndex
// ()
// Parameters:
// int                            AttackIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunBase_C::GetAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetAttackIndex");

	UDinoAttackState_Spindles_MinigunBase_C_GetAttackIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackIndex != nullptr)
		*AttackIndex = params.AttackIndex;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPShouldEndAttack
// (NetReliable, Native, Event, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Spindles_MinigunBase_C::STATIC_BPShouldEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPShouldEndAttack");

	UDinoAttackState_Spindles_MinigunBase_C_BPShouldEndAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPCanAttack
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Spindles_MinigunBase_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPCanAttack");

	UDinoAttackState_Spindles_MinigunBase_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnEndEvent
// ()

void UDinoAttackState_Spindles_MinigunBase_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnEndEvent");

	UDinoAttackState_Spindles_MinigunBase_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunBase_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnBeginEvent");

	UDinoAttackState_Spindles_MinigunBase_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnTickEvent
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunBase_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnTickEvent");

	UDinoAttackState_Spindles_MinigunBase_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.PrintDPS
// ()

void UDinoAttackState_Spindles_MinigunBase_C::PrintDPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.PrintDPS");

	UDinoAttackState_Spindles_MinigunBase_C_PrintDPS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunBase_C::ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase");

	UDinoAttackState_Spindles_MinigunBase_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
