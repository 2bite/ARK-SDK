// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_DKaijuFindMovePointWithinArena_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointNoMin
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 _return                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_DKaijuFindMovePointWithinArena_C::Get_Random_PointNoMin(const struct FVector& Origin, struct FVector* _return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointNoMin");

	UTask_DKaijuFindMovePointWithinArena_C_Get_Random_PointNoMin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_return != nullptr)
		*_return = params._return;
}


// Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointMin
// ()
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 _return                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           DidNotFindLoc                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTask_DKaijuFindMovePointWithinArena_C::Get_Random_PointMin(const struct FVector& Origin, struct FVector* _return, bool* DidNotFindLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.Get Random PointMin");

	UTask_DKaijuFindMovePointWithinArena_C_Get_Random_PointMin_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_return != nullptr)
		*_return = params._return;
	if (DidNotFindLoc != nullptr)
		*DidNotFindLoc = params.DidNotFindLoc;
}


// Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ReceiveExecute
// (NetReliable, Event, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintPure, Const)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DKaijuFindMovePointWithinArena_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ReceiveExecute");

	UTask_DKaijuFindMovePointWithinArena_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_DKaijuFindMovePointWithinArena_C::ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_DKaijuFindMovePointWithinArena.Task_DKaijuFindMovePointWithinArena_C.ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena");

	UTask_DKaijuFindMovePointWithinArena_C_ExecuteUbergraph_Task_DKaijuFindMovePointWithinArena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
