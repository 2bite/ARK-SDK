// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_KingKaijuHordeMode_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.FindFurthestElementNodeSpawnLoc
// ()
// Parameters:
// struct FVector                 Loc                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuHordeMode_C::FindFurthestElementNodeSpawnLoc(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.FindFurthestElementNodeSpawnLoc");

	UTask_KingKaijuHordeMode_C_FindFurthestElementNodeSpawnLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loc != nullptr)
		*Loc = params.Loc;
}


// Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuHordeMode_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.ReceiveExecute");

	UTask_KingKaijuHordeMode_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuHordeMode_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.ReceiveTick");

	UTask_KingKaijuHordeMode_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.ExecuteUbergraph_Task_KingKaijuHordeMode
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_KingKaijuHordeMode_C::ExecuteUbergraph_Task_KingKaijuHordeMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_KingKaijuHordeMode.Task_KingKaijuHordeMode_C.ExecuteUbergraph_Task_KingKaijuHordeMode");

	UTask_KingKaijuHordeMode_C_ExecuteUbergraph_Task_KingKaijuHordeMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
