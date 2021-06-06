// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRanged_Scout_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.GetScout
// ()
// Parameters:
// class AScout_Character_BP_C*   Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_Scout_C::GetScout(class AScout_Character_BP_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.GetScout");

	UDinoAttackStateRanged_Scout_C_GetScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnTickEvent
// (NetReliable, Event, Static, NetMulticast, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_Scout_C::STATIC_OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnTickEvent");

	UDinoAttackStateRanged_Scout_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnEndEvent
// (NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UDinoAttackStateRanged_Scout_C::STATIC_OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnEndEvent");

	UDinoAttackStateRanged_Scout_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.BPRangedAttackOnBegin
// ()
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDinoAttackStateRanged_Scout_C::BPRangedAttackOnBegin(struct FVector* TargetLocation, struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.BPRangedAttackOnBegin");

	UDinoAttackStateRanged_Scout_C_BPRangedAttackOnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;
}


// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.Tracker Impact Pawn or Terrain
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValidTarget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_Scout_C::Tracker_Impact_Pawn_or_Terrain(class AActor* Target, const struct FVector& ImpactLocation, bool* IsValidTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.Tracker Impact Pawn or Terrain");

	UDinoAttackStateRanged_Scout_C_Tracker_Impact_Pawn_or_Terrain_Params params;
	params.Target = Target;
	params.ImpactLocation = ImpactLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValidTarget != nullptr)
		*IsValidTarget = params.IsValidTarget;
}


// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.CalculateProjectileImpacts
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_Scout_C::STATIC_CalculateProjectileImpacts(const struct FVector& Origin, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.CalculateProjectileImpacts");

	UDinoAttackStateRanged_Scout_C_CalculateProjectileImpacts_Params params;
	params.Origin = Origin;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_Scout_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.OnBeginEvent");

	UDinoAttackStateRanged_Scout_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.ExecuteUbergraph_DinoAttackStateRanged_Scout
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_Scout_C::ExecuteUbergraph_DinoAttackStateRanged_Scout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Scout.DinoAttackStateRanged_Scout_C.ExecuteUbergraph_DinoAttackStateRanged_Scout");

	UDinoAttackStateRanged_Scout_C_ExecuteUbergraph_DinoAttackStateRanged_Scout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
