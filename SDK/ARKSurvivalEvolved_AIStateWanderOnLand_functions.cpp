// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AIStateWanderOnLand_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIStateWanderOnLand.AIStateWanderOnLand_C.FindTargetAreas
// ()
// Parameters:
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAIStateWanderOnLand_C::FindTargetAreas(bool* found)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIStateWanderOnLand.AIStateWanderOnLand_C.FindTargetAreas");

	UAIStateWanderOnLand_C_FindTargetAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
}


// Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnCanUseStateEvent
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateWanderOnLand_C::OnCanUseStateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnCanUseStateEvent");

	UAIStateWanderOnLand_C_OnCanUseStateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnEndEvent
// ()

void UAIStateWanderOnLand_C::OnEndEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnEndEvent");

	UAIStateWanderOnLand_C_OnEndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnTickEvent
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateWanderOnLand_C::OnTickEvent(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnTickEvent");

	UAIStateWanderOnLand_C_OnTickEvent_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIStateWanderOnLand.AIStateWanderOnLand_C.UpgradePawnAcceleration
// ()
// Parameters:
// bool                           Upgrade                        (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateWanderOnLand_C::UpgradePawnAcceleration(bool Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIStateWanderOnLand.AIStateWanderOnLand_C.UpgradePawnAcceleration");

	UAIStateWanderOnLand_C_UpgradePawnAcceleration_Params params;
	params.Upgrade = Upgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIStateWanderOnLand.AIStateWanderOnLand_C.GetRandomTarget
// ()
// Parameters:
// class ATargetArea*             returnTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAIStateWanderOnLand_C::GetRandomTarget(class ATargetArea** returnTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIStateWanderOnLand.AIStateWanderOnLand_C.GetRandomTarget");

	UAIStateWanderOnLand_C_GetRandomTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (returnTarget != nullptr)
		*returnTarget = params.returnTarget;
}


// Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnBeginEvent
// ()
// Parameters:
// class UPrimalAIState**         InParentState                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateWanderOnLand_C::OnBeginEvent(class UPrimalAIState** InParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIStateWanderOnLand.AIStateWanderOnLand_C.OnBeginEvent");

	UAIStateWanderOnLand_C_OnBeginEvent_Params params;
	params.InParentState = InParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIStateWanderOnLand.AIStateWanderOnLand_C.ExecuteUbergraph_AIStateWanderOnLand
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateWanderOnLand_C::ExecuteUbergraph_AIStateWanderOnLand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIStateWanderOnLand.AIStateWanderOnLand_C.ExecuteUbergraph_AIStateWanderOnLand");

	UAIStateWanderOnLand_C_ExecuteUbergraph_AIStateWanderOnLand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
