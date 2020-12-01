// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_Spindles_MinigunAOE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.IsDebugMode
// ()
// Parameters:
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunAOE_C::IsDebugMode(bool* Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.IsDebugMode");

	UDinoAttackState_Spindles_MinigunAOE_C_IsDebugMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPShouldEndAttack
// (NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Spindles_MinigunAOE_C::STATIC_BPShouldEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPShouldEndAttack");

	UDinoAttackState_Spindles_MinigunAOE_C_BPShouldEndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.GetDamageForSpine
// ()
// Parameters:
// class APrimalCharacter**       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunAOE_C::GetDamageForSpine(class APrimalCharacter** Target, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.GetDamageForSpine");

	UDinoAttackState_Spindles_MinigunAOE_C_GetDamageForSpine_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedHitSpine
// ()

void UDinoAttackState_Spindles_MinigunAOE_C::FireGuaranteedHitSpine()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedHitSpine");

	UDinoAttackState_Spindles_MinigunAOE_C_FireGuaranteedHitSpine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPCanAttack
// (NetReliable, MulticastDelegate, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackState_Spindles_MinigunAOE_C::BPCanAttack(float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPCanAttack");

	UDinoAttackState_Spindles_MinigunAOE_C_BPCanAttack_Params params;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnEndEvent
// ()

void UDinoAttackState_Spindles_MinigunAOE_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnEndEvent");

	UDinoAttackState_Spindles_MinigunAOE_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunAOE_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnBeginEvent");

	UDinoAttackState_Spindles_MinigunAOE_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.Get Spine Start and End Position
// (Event, NetResponse, MulticastDelegate, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VFXStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VFXEnd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunAOE_C::Get_Spine_Start_and_End_Position(struct FVector* Start, struct FVector* End, struct FVector* VFXStart, struct FVector* VFXEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.Get Spine Start and End Position");

	UDinoAttackState_Spindles_MinigunAOE_C_Get_Spine_Start_and_End_Position_Params params;

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


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireRandomSpines
// ()

void UDinoAttackState_Spindles_MinigunAOE_C::FireRandomSpines()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireRandomSpines");

	UDinoAttackState_Spindles_MinigunAOE_C_FireRandomSpines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedSpines
// ()

void UDinoAttackState_Spindles_MinigunAOE_C::FireGuaranteedSpines()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedSpines");

	UDinoAttackState_Spindles_MinigunAOE_C_FireGuaranteedSpines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_Spindles_MinigunAOE_C::ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE");

	UDinoAttackState_Spindles_MinigunAOE_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
