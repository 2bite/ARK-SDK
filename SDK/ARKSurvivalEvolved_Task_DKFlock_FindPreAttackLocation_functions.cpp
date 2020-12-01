// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_DKFlock_FindPreAttackLocation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_DKFlock_FindPreAttackLocation.Task_DKFlock_FindPreAttackLocation_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DKFlock_FindPreAttackLocation_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DKFlock_FindPreAttackLocation.Task_DKFlock_FindPreAttackLocation_C.ReceiveExecute");

	UTask_DKFlock_FindPreAttackLocation_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_DKFlock_FindPreAttackLocation.Task_DKFlock_FindPreAttackLocation_C.ExecuteUbergraph_Task_DKFlock_FindPreAttackLocation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DKFlock_FindPreAttackLocation_C::ExecuteUbergraph_Task_DKFlock_FindPreAttackLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DKFlock_FindPreAttackLocation.Task_DKFlock_FindPreAttackLocation_C.ExecuteUbergraph_Task_DKFlock_FindPreAttackLocation");

	UTask_DKFlock_FindPreAttackLocation_C_ExecuteUbergraph_Task_DKFlock_FindPreAttackLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
