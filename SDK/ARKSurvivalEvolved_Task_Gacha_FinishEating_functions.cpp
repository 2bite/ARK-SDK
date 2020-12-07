// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_Gacha_FinishEating_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Gacha_FinishEating_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ReceiveTick");

	UTask_Gacha_FinishEating_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Gacha_FinishEating_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ReceiveExecute");

	UTask_Gacha_FinishEating_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ExecuteUbergraph_Task_Gacha_FinishEating
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_Gacha_FinishEating_C::ExecuteUbergraph_Task_Gacha_FinishEating(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_Gacha_FinishEating.Task_Gacha_FinishEating_C.ExecuteUbergraph_Task_Gacha_FinishEating");

	UTask_Gacha_FinishEating_C_ExecuteUbergraph_Task_Gacha_FinishEating_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
