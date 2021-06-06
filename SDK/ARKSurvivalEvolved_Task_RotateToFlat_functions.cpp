// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_RotateToFlat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_RotateToFlat.Task_RotateToFlat_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_RotateToFlat_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_RotateToFlat.Task_RotateToFlat_C.ReceiveExecute");

	UTask_RotateToFlat_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_RotateToFlat.Task_RotateToFlat_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_RotateToFlat_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_RotateToFlat.Task_RotateToFlat_C.ReceiveAbort");

	UTask_RotateToFlat_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_RotateToFlat.Task_RotateToFlat_C.ExecuteUbergraph_Task_RotateToFlat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_RotateToFlat_C::ExecuteUbergraph_Task_RotateToFlat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_RotateToFlat.Task_RotateToFlat_C.ExecuteUbergraph_Task_RotateToFlat");

	UTask_RotateToFlat_C_ExecuteUbergraph_Task_RotateToFlat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
