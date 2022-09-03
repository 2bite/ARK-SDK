// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_IceKaijuTurnToFace_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuTurnToFace_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveExecute");

	UTask_IceKaijuTurnToFace_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuTurnToFace_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveTick");

	UTask_IceKaijuTurnToFace_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuTurnToFace_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ReceiveAbort");

	UTask_IceKaijuTurnToFace_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ExecuteUbergraph_Task_IceKaijuTurnToFace
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_IceKaijuTurnToFace_C::ExecuteUbergraph_Task_IceKaijuTurnToFace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_IceKaijuTurnToFace.Task_IceKaijuTurnToFace_C.ExecuteUbergraph_Task_IceKaijuTurnToFace");

	UTask_IceKaijuTurnToFace_C_ExecuteUbergraph_Task_IceKaijuTurnToFace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
