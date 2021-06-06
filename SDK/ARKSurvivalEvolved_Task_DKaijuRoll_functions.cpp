// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_DKaijuRoll_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_DKaijuRoll.Task_DKaijuRoll_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DKaijuRoll_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DKaijuRoll.Task_DKaijuRoll_C.ReceiveExecute");

	UTask_DKaijuRoll_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_DKaijuRoll.Task_DKaijuRoll_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DKaijuRoll_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DKaijuRoll.Task_DKaijuRoll_C.ReceiveAbort");

	UTask_DKaijuRoll_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_DKaijuRoll.Task_DKaijuRoll_C.ExecuteUbergraph_Task_DKaijuRoll
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DKaijuRoll_C::ExecuteUbergraph_Task_DKaijuRoll(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DKaijuRoll.Task_DKaijuRoll_C.ExecuteUbergraph_Task_DKaijuRoll");

	UTask_DKaijuRoll_C_ExecuteUbergraph_Task_DKaijuRoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
