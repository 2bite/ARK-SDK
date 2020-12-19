// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_SimpleMove_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_SimpleMove.Task_SimpleMove_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_SimpleMove_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SimpleMove.Task_SimpleMove_C.ReceiveExecute");

	UTask_SimpleMove_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_SimpleMove.Task_SimpleMove_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_SimpleMove_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SimpleMove.Task_SimpleMove_C.ReceiveTick");

	UTask_SimpleMove_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_SimpleMove.Task_SimpleMove_C.ExecuteUbergraph_Task_SimpleMove
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_SimpleMove_C::ExecuteUbergraph_Task_SimpleMove(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SimpleMove.Task_SimpleMove_C.ExecuteUbergraph_Task_SimpleMove");

	UTask_SimpleMove_C_ExecuteUbergraph_Task_SimpleMove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_SimpleMove.Task_SimpleMove_C.MoveCompleted__DelegateSignature
// ()
// Parameters:
// TEnumAsByte<EPathFollowingRequestResult> NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void UTask_SimpleMove_C::MoveCompleted__DelegateSignature(TEnumAsByte<EPathFollowingRequestResult> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SimpleMove.Task_SimpleMove_C.MoveCompleted__DelegateSignature");

	UTask_SimpleMove_C_MoveCompleted__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
