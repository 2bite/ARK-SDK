// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ShakePlayersOff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_ShakePlayersOff.Task_ShakePlayersOff_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ShakePlayersOff_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ShakePlayersOff.Task_ShakePlayersOff_C.ReceiveExecute");

	UTask_ShakePlayersOff_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_ShakePlayersOff.Task_ShakePlayersOff_C.ReceiveAbort
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ShakePlayersOff_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ShakePlayersOff.Task_ShakePlayersOff_C.ReceiveAbort");

	UTask_ShakePlayersOff_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_ShakePlayersOff.Task_ShakePlayersOff_C.ExecuteUbergraph_Task_ShakePlayersOff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_ShakePlayersOff_C::ExecuteUbergraph_Task_ShakePlayersOff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_ShakePlayersOff.Task_ShakePlayersOff_C.ExecuteUbergraph_Task_ShakePlayersOff");

	UTask_ShakePlayersOff_C_ExecuteUbergraph_Task_ShakePlayersOff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
