// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_GasBags_TryLaunch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_GasBags_TryLaunch.Task_GasBags_TryLaunch_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasBags_TryLaunch_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasBags_TryLaunch.Task_GasBags_TryLaunch_C.ReceiveExecute");

	UTask_GasBags_TryLaunch_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasBags_TryLaunch.Task_GasBags_TryLaunch_C.ExecuteUbergraph_Task_GasBags_TryLaunch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasBags_TryLaunch_C::ExecuteUbergraph_Task_GasBags_TryLaunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_GasBags_TryLaunch.Task_GasBags_TryLaunch_C.ExecuteUbergraph_Task_GasBags_TryLaunch");

	UTask_GasBags_TryLaunch_C_ExecuteUbergraph_Task_GasBags_TryLaunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
