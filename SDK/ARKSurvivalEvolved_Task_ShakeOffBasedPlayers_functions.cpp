// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ShakeOffBasedPlayers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.MaybeCutGrapplingHooks
// ()

void UTask_ShakeOffBasedPlayers_C::MaybeCutGrapplingHooks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.MaybeCutGrapplingHooks");

	UTask_ShakeOffBasedPlayers_C_MaybeCutGrapplingHooks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ShakeOffBasedPlayers_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveExecute");

	UTask_ShakeOffBasedPlayers_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ShakeOffBasedPlayers_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ReceiveAbort");

	UTask_ShakeOffBasedPlayers_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ExecuteUbergraph_Task_ShakeOffBasedPlayers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ShakeOffBasedPlayers_C::ExecuteUbergraph_Task_ShakeOffBasedPlayers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ShakeOffBasedPlayers.Task_ShakeOffBasedPlayers_C.ExecuteUbergraph_Task_ShakeOffBasedPlayers");

	UTask_ShakeOffBasedPlayers_C_ExecuteUbergraph_Task_ShakeOffBasedPlayers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
