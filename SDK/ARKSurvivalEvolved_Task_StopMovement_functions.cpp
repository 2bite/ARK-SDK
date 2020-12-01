// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_StopMovement_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_StopMovement.Task_StopMovement_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_StopMovement_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_StopMovement.Task_StopMovement_C.ReceiveExecute");

	UTask_StopMovement_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_StopMovement.Task_StopMovement_C.ExecuteUbergraph_Task_StopMovement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_StopMovement_C::ExecuteUbergraph_Task_StopMovement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_StopMovement.Task_StopMovement_C.ExecuteUbergraph_Task_StopMovement");

	UTask_StopMovement_C_ExecuteUbergraph_Task_StopMovement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
