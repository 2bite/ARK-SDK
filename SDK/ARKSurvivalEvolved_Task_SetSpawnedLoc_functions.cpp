// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_SetSpawnedLoc_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_SetSpawnedLoc.Task_SetSpawnedLoc_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_SetSpawnedLoc_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SetSpawnedLoc.Task_SetSpawnedLoc_C.ReceiveExecute");

	UTask_SetSpawnedLoc_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_SetSpawnedLoc.Task_SetSpawnedLoc_C.ExecuteUbergraph_Task_SetSpawnedLoc
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_SetSpawnedLoc_C::ExecuteUbergraph_Task_SetSpawnedLoc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_SetSpawnedLoc.Task_SetSpawnedLoc_C.ExecuteUbergraph_Task_SetSpawnedLoc");

	UTask_SetSpawnedLoc_C_ExecuteUbergraph_Task_SetSpawnedLoc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
