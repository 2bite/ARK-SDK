// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKaijuTurnToFace_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuTurnToFace_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveExecute");

	UTask_FKaijuTurnToFace_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuTurnToFace_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveTick");

	UTask_FKaijuTurnToFace_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuTurnToFace_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ReceiveAbort");

	UTask_FKaijuTurnToFace_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ExecuteUbergraph_Task_FKaijuTurnToFace
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuTurnToFace_C::ExecuteUbergraph_Task_FKaijuTurnToFace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuTurnToFace.Task_FKaijuTurnToFace_C.ExecuteUbergraph_Task_FKaijuTurnToFace");

	UTask_FKaijuTurnToFace_C_ExecuteUbergraph_Task_FKaijuTurnToFace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
