// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_AttackAIState_Grab_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.UpdateGrabAttackLocation
// ()

void UForestKaiju_AttackAIState_Grab_C::UpdateGrabAttackLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.UpdateGrabAttackLocation");

	UForestKaiju_AttackAIState_Grab_C_UpdateGrabAttackLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Is Location in Grab Attack Wedge
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_AttackAIState_Grab_C::Is_Location_in_Grab_Attack_Wedge(const struct FVector& Location, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Is Location in Grab Attack Wedge");

	UForestKaiju_AttackAIState_Grab_C_Is_Location_in_Grab_Attack_Wedge_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugPrintString
// ()
// Parameters:
// class FString                  String                         (Parm, ZeroConstructor)

void UForestKaiju_AttackAIState_Grab_C::DebugPrintString(const class FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugPrintString");

	UForestKaiju_AttackAIState_Grab_C_DebugPrintString_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.StartAttackAnim
// ()

void UForestKaiju_AttackAIState_Grab_C::StartAttackAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.StartAttackAnim");

	UForestKaiju_AttackAIState_Grab_C_StartAttackAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.PublicIsValidVineTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        ForestKaiju                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_AttackAIState_Grab_C::PublicIsValidVineTarget(class APrimalCharacter* Target, class APrimalCharacter* ForestKaiju, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.PublicIsValidVineTarget");

	UForestKaiju_AttackAIState_Grab_C_PublicIsValidVineTarget_Params params;
	params.Target = Target;
	params.ForestKaiju = ForestKaiju;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.IsValidVineTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        ForestKaiju                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidTarget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_AttackAIState_Grab_C::IsValidVineTarget(class APrimalCharacter* Target, class APrimalCharacter* ForestKaiju, bool* ValidTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.IsValidVineTarget");

	UForestKaiju_AttackAIState_Grab_C_IsValidVineTarget_Params params;
	params.Target = Target;
	params.ForestKaiju = ForestKaiju;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidTarget != nullptr)
		*ValidTarget = params.ValidTarget;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_AttackAIState_Grab_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnBeginEvent");

	UForestKaiju_AttackAIState_Grab_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.VineRetracted
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// TArray<struct FVineTargetData> Targets                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UForestKaiju_AttackAIState_Grab_C::STATIC_VineRetracted(TArray<struct FVineTargetData>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.VineRetracted");

	UForestKaiju_AttackAIState_Grab_C_VineRetracted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnEndEvent
// ()

void UForestKaiju_AttackAIState_Grab_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnEndEvent");

	UForestKaiju_AttackAIState_Grab_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Debug Draw Sphere
// ()
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_AttackAIState_Grab_C::Debug_Draw_Sphere(const struct FVector& Center, float Radius, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.Debug Draw Sphere");

	UForestKaiju_AttackAIState_Grab_C_Debug_Draw_Sphere_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.AnimNotifyGrabAttackSmash
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void UForestKaiju_AttackAIState_Grab_C::STATIC_AnimNotifyGrabAttackSmash()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.AnimNotifyGrabAttackSmash");

	UForestKaiju_AttackAIState_Grab_C_AnimNotifyGrabAttackSmash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugDrawLine
// ()
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_AttackAIState_Grab_C::DebugDrawLine(const struct FVector& Start, const struct FVector& End, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.DebugDrawLine");

	UForestKaiju_AttackAIState_Grab_C_DebugDrawLine_Params params;
	params.Start = Start;
	params.End = End;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.SpawnVines
// (Net, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void UForestKaiju_AttackAIState_Grab_C::SpawnVines()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.SpawnVines");

	UForestKaiju_AttackAIState_Grab_C_SpawnVines_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.BPShouldEndAttack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UForestKaiju_AttackAIState_Grab_C::BPShouldEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.BPShouldEndAttack");

	UForestKaiju_AttackAIState_Grab_C_BPShouldEndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnTickEvent
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_AttackAIState_Grab_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.OnTickEvent");

	UForestKaiju_AttackAIState_Grab_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.FailsafeMissingVineRetracts
// ()

void UForestKaiju_AttackAIState_Grab_C::FailsafeMissingVineRetracts()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.FailsafeMissingVineRetracts");

	UForestKaiju_AttackAIState_Grab_C_FailsafeMissingVineRetracts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.ExecuteUbergraph_ForestKaiju_AttackAIState_Grab
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_AttackAIState_Grab_C::ExecuteUbergraph_ForestKaiju_AttackAIState_Grab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackAIState_Grab.ForestKaiju_AttackAIState_Grab_C.ExecuteUbergraph_ForestKaiju_AttackAIState_Grab");

	UForestKaiju_AttackAIState_Grab_C_ExecuteUbergraph_ForestKaiju_AttackAIState_Grab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
