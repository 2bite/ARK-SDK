// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_KingKaijuTurnToFace_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.TraceForChargeLocation
// (NetReliable, NetRequest, Exec, Event, NetResponse, Delegate, NetServer, HasOutParms, NetValidate)
// Parameters:
// bool                           FoundLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Loc                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuTurnToFace_C::TraceForChargeLocation(bool* FoundLocation, struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.TraceForChargeLocation");

	UTask_KingKaijuTurnToFace_C_TraceForChargeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundLocation != nullptr)
		*FoundLocation = params.FoundLocation;
	if (Loc != nullptr)
		*Loc = params.Loc;
}


// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuTurnToFace_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ReceiveExecute");

	UTask_KingKaijuTurnToFace_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuTurnToFace_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ReceiveTick");

	UTask_KingKaijuTurnToFace_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuTurnToFace_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ReceiveAbort");

	UTask_KingKaijuTurnToFace_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ExecuteUbergraph_Task_KingKaijuTurnToFace
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuTurnToFace_C::ExecuteUbergraph_Task_KingKaijuTurnToFace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuTurnToFace.Task_KingKaijuTurnToFace_C.ExecuteUbergraph_Task_KingKaijuTurnToFace");

	UTask_KingKaijuTurnToFace_C_ExecuteUbergraph_Task_KingKaijuTurnToFace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
