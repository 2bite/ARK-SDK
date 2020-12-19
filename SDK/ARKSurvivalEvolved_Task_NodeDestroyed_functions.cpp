// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_NodeDestroyed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_NodeDestroyed.Task_NodeDestroyed_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_NodeDestroyed_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_NodeDestroyed.Task_NodeDestroyed_C.ReceiveExecute");

	UTask_NodeDestroyed_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_NodeDestroyed.Task_NodeDestroyed_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_NodeDestroyed_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_NodeDestroyed.Task_NodeDestroyed_C.ReceiveAbort");

	UTask_NodeDestroyed_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_NodeDestroyed.Task_NodeDestroyed_C.ExecuteUbergraph_Task_NodeDestroyed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_NodeDestroyed_C::ExecuteUbergraph_Task_NodeDestroyed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_NodeDestroyed.Task_NodeDestroyed_C.ExecuteUbergraph_Task_NodeDestroyed");

	UTask_NodeDestroyed_C_ExecuteUbergraph_Task_NodeDestroyed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
