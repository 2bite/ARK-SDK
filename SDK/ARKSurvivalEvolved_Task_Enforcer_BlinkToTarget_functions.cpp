// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_Enforcer_BlinkToTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_Enforcer_BlinkToTarget.Task_Enforcer_BlinkToTarget_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Enforcer_BlinkToTarget_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Enforcer_BlinkToTarget.Task_Enforcer_BlinkToTarget_C.ReceiveExecute");

	UTask_Enforcer_BlinkToTarget_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_Enforcer_BlinkToTarget.Task_Enforcer_BlinkToTarget_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Enforcer_BlinkToTarget_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Enforcer_BlinkToTarget.Task_Enforcer_BlinkToTarget_C.ReceiveTick");

	UTask_Enforcer_BlinkToTarget_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_Enforcer_BlinkToTarget.Task_Enforcer_BlinkToTarget_C.ExecuteUbergraph_Task_Enforcer_BlinkToTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Enforcer_BlinkToTarget_C::ExecuteUbergraph_Task_Enforcer_BlinkToTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Enforcer_BlinkToTarget.Task_Enforcer_BlinkToTarget_C.ExecuteUbergraph_Task_Enforcer_BlinkToTarget");

	UTask_Enforcer_BlinkToTarget_C_ExecuteUbergraph_Task_Enforcer_BlinkToTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
