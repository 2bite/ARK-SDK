// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKaijuProtect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_FKaijuProtect.Task_FKaijuProtect_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuProtect_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuProtect.Task_FKaijuProtect_C.ReceiveExecute");

	UTask_FKaijuProtect_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FKaijuProtect.Task_FKaijuProtect_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuProtect_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuProtect.Task_FKaijuProtect_C.ReceiveAbort");

	UTask_FKaijuProtect_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FKaijuProtect.Task_FKaijuProtect_C.ExecuteUbergraph_Task_FKaijuProtect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuProtect_C::ExecuteUbergraph_Task_FKaijuProtect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuProtect.Task_FKaijuProtect_C.ExecuteUbergraph_Task_FKaijuProtect");

	UTask_FKaijuProtect_C_ExecuteUbergraph_Task_FKaijuProtect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
