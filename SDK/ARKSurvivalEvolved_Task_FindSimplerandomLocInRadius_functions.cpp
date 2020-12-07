// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FindSimplerandomLocInRadius_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_FindSimplerandomLocInRadius.Task_FindSimplerandomLocInRadius_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FindSimplerandomLocInRadius_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FindSimplerandomLocInRadius.Task_FindSimplerandomLocInRadius_C.ReceiveTick");

	UTask_FindSimplerandomLocInRadius_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FindSimplerandomLocInRadius.Task_FindSimplerandomLocInRadius_C.ExecuteUbergraph_Task_FindSimplerandomLocInRadius
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FindSimplerandomLocInRadius_C::ExecuteUbergraph_Task_FindSimplerandomLocInRadius(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FindSimplerandomLocInRadius.Task_FindSimplerandomLocInRadius_C.ExecuteUbergraph_Task_FindSimplerandomLocInRadius");

	UTask_FindSimplerandomLocInRadius_C_ExecuteUbergraph_Task_FindSimplerandomLocInRadius_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
