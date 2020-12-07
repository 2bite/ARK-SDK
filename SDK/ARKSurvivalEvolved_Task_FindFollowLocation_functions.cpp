// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FindFollowLocation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_FindFollowLocation.Task_FindFollowLocation_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FindFollowLocation_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FindFollowLocation.Task_FindFollowLocation_C.ReceiveExecute");

	UTask_FindFollowLocation_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FindFollowLocation.Task_FindFollowLocation_C.ExecuteUbergraph_Task_FindFollowLocation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FindFollowLocation_C::ExecuteUbergraph_Task_FindFollowLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FindFollowLocation.Task_FindFollowLocation_C.ExecuteUbergraph_Task_FindFollowLocation");

	UTask_FindFollowLocation_C_ExecuteUbergraph_Task_FindFollowLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
