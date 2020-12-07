// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ClearBBKey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_ClearBBKey.Task_ClearBBKey_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ClearBBKey_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ClearBBKey.Task_ClearBBKey_C.ReceiveExecute");

	UTask_ClearBBKey_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_ClearBBKey.Task_ClearBBKey_C.ExecuteUbergraph_Task_ClearBBKey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ClearBBKey_C::ExecuteUbergraph_Task_ClearBBKey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ClearBBKey.Task_ClearBBKey_C.ExecuteUbergraph_Task_ClearBBKey");

	UTask_ClearBBKey_C_ExecuteUbergraph_Task_ClearBBKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
