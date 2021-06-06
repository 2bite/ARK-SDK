// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateFollowSpline_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnTickEvent
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFollowSpline_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnTickEvent");

	UDinoAttackStateFollowSpline_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFollowSpline_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnBeginEvent");

	UDinoAttackStateFollowSpline_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.ShouldSkipIntervalCheckEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackStateFollowSpline_C::ShouldSkipIntervalCheckEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.ShouldSkipIntervalCheckEvent");

	UDinoAttackStateFollowSpline_C_ShouldSkipIntervalCheckEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.EndAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFollowSpline_C::EndAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.EndAnimationStateEvent");

	UDinoAttackStateFollowSpline_C_EndAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnChildStateEndedEvent
// ()
// Parameters:
// class UPrimalAIState**         PrimalAIState                  (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFollowSpline_C::OnChildStateEndedEvent(class UPrimalAIState** PrimalAIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnChildStateEndedEvent");

	UDinoAttackStateFollowSpline_C_OnChildStateEndedEvent_Params params;
	params.PrimalAIState = PrimalAIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.StartAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFollowSpline_C::StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.StartAnimationStateEvent");

	UDinoAttackStateFollowSpline_C_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.TickAnimationStateEvent
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFollowSpline_C::TickAnimationStateEvent(float* DeltaTime, struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.TickAnimationStateEvent");

	UDinoAttackStateFollowSpline_C_TickAnimationStateEvent_Params params;
	params.DeltaTime = DeltaTime;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDinoAttackStateFollowSpline_C::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnCanUseStateEvent");

	UDinoAttackStateFollowSpline_C_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnEndEvent
// ()

void UDinoAttackStateFollowSpline_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.OnEndEvent");

	UDinoAttackStateFollowSpline_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.TickRangedState
// ()

void UDinoAttackStateFollowSpline_C::TickRangedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.TickRangedState");

	UDinoAttackStateFollowSpline_C_TickRangedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.GotoNextSpline
// ()

void UDinoAttackStateFollowSpline_C::GotoNextSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.GotoNextSpline");

	UDinoAttackStateFollowSpline_C_GotoNextSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.UpgradePawnAcceleration
// ()
// Parameters:
// bool                           Upgrade                        (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFollowSpline_C::UpgradePawnAcceleration(bool Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.UpgradePawnAcceleration");

	UDinoAttackStateFollowSpline_C_UpgradePawnAcceleration_Params params;
	params.Upgrade = Upgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.FindDragonSplines
// ()
// Parameters:
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFollowSpline_C::FindDragonSplines(bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.FindDragonSplines");

	UDinoAttackStateFollowSpline_C_FindDragonSplines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
}


// Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.ExecuteUbergraph_DinoAttackStateFollowSpline
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateFollowSpline_C::ExecuteUbergraph_DinoAttackStateFollowSpline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateFollowSpline.DinoAttackStateFollowSpline_C.ExecuteUbergraph_DinoAttackStateFollowSpline");

	UDinoAttackStateFollowSpline_C_ExecuteUbergraph_DinoAttackStateFollowSpline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
