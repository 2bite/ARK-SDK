// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_AIController_Bp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.OnLosingTargetEvent
// ()

void ADragon_AIController_Bp_C::OnLosingTargetEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.OnLosingTargetEvent");

	ADragon_AIController_Bp_C_OnLosingTargetEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_AIController_Bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ReceiveTick");

	ADragon_AIController_Bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ShouldStayOnLand
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADragon_AIController_Bp_C::ShouldStayOnLand(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ShouldStayOnLand");

	ADragon_AIController_Bp_C_ShouldStayOnLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.IsUsingSpline
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADragon_AIController_Bp_C::IsUsingSpline(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.IsUsingSpline");

	ADragon_AIController_Bp_C_IsUsingSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.CalculateAndSetWonderingAIStateEvent
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintPure)
// Parameters:
// bool*                          StateChanged                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADragon_AIController_Bp_C::STATIC_CalculateAndSetWonderingAIStateEvent(bool* StateChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.CalculateAndSetWonderingAIStateEvent");

	ADragon_AIController_Bp_C_CalculateAndSetWonderingAIStateEvent_Params params;
	params.StateChanged = StateChanged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.OnPossess
// ()
// Parameters:
// class APawn**                  PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_AIController_Bp_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.OnPossess");

	ADragon_AIController_Bp_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.UserConstructionScript
// ()

void ADragon_AIController_Bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.UserConstructionScript");

	ADragon_AIController_Bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ReceiveBeginPlay
// ()

void ADragon_AIController_Bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ReceiveBeginPlay");

	ADragon_AIController_Bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ExecuteUbergraph_Dragon_AIController_Bp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_AIController_Bp_C::ExecuteUbergraph_Dragon_AIController_Bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_AIController_Bp.Dragon_AIController_Bp_C.ExecuteUbergraph_Dragon_AIController_Bp");

	ADragon_AIController_Bp_C_ExecuteUbergraph_Dragon_AIController_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
