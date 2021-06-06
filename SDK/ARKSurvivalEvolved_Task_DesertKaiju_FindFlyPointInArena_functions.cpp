// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_DesertKaiju_FindFlyPointInArena_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_DesertKaiju_FindFlyPointInArena.Task_DesertKaiju_FindFlyPointInArena_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DesertKaiju_FindFlyPointInArena_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DesertKaiju_FindFlyPointInArena.Task_DesertKaiju_FindFlyPointInArena_C.ReceiveExecute");

	UTask_DesertKaiju_FindFlyPointInArena_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_DesertKaiju_FindFlyPointInArena.Task_DesertKaiju_FindFlyPointInArena_C.ExecuteUbergraph_Task_DesertKaiju_FindFlyPointInArena
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DesertKaiju_FindFlyPointInArena_C::ExecuteUbergraph_Task_DesertKaiju_FindFlyPointInArena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DesertKaiju_FindFlyPointInArena.Task_DesertKaiju_FindFlyPointInArena_C.ExecuteUbergraph_Task_DesertKaiju_FindFlyPointInArena");

	UTask_DesertKaiju_FindFlyPointInArena_C_ExecuteUbergraph_Task_DesertKaiju_FindFlyPointInArena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
