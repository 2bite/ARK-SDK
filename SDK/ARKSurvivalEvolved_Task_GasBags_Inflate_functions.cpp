// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_GasBags_Inflate_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasBags_Inflate_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ReceiveExecute");

	UTask_GasBags_Inflate_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasBags_Inflate_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ReceiveTick");

	UTask_GasBags_Inflate_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasBags_Inflate_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ReceiveAbort");

	UTask_GasBags_Inflate_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ExecuteUbergraph_Task_GasBags_Inflate
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasBags_Inflate_C::ExecuteUbergraph_Task_GasBags_Inflate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasBags_Inflate.Task_GasBags_Inflate_C.ExecuteUbergraph_Task_GasBags_Inflate");

	UTask_GasBags_Inflate_C_ExecuteUbergraph_Task_GasBags_Inflate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
