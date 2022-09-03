// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_StartTorpid_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_StartTorpid.Task_StartTorpid_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_StartTorpid_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_StartTorpid.Task_StartTorpid_C.ReceiveExecute");

	UTask_StartTorpid_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_StartTorpid.Task_StartTorpid_C.ExecuteUbergraph_Task_StartTorpid
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_StartTorpid_C::ExecuteUbergraph_Task_StartTorpid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_StartTorpid.Task_StartTorpid_C.ExecuteUbergraph_Task_StartTorpid");

	UTask_StartTorpid_C_ExecuteUbergraph_Task_StartTorpid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
