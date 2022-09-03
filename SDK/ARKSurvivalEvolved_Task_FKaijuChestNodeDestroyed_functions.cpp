// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKaijuChestNodeDestroyed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C.Wipe Out All Poison Trees And Wyverns
// (NetRequest, Exec, Native, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void UTask_FKaijuChestNodeDestroyed_C::STATIC_Wipe_Out_All_Poison_Trees_And_Wyverns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C.Wipe Out All Poison Trees And Wyverns");

	UTask_FKaijuChestNodeDestroyed_C_Wipe_Out_All_Poison_Trees_And_Wyverns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C.ReceiveExecute
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuChestNodeDestroyed_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C.ReceiveExecute");

	UTask_FKaijuChestNodeDestroyed_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C.ExecuteUbergraph_Task_FKaijuChestNodeDestroyed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_FKaijuChestNodeDestroyed_C::ExecuteUbergraph_Task_FKaijuChestNodeDestroyed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Task_FKaijuChestNodeDestroyed.Task_FKaijuChestNodeDestroyed_C.ExecuteUbergraph_Task_FKaijuChestNodeDestroyed");

	UTask_FKaijuChestNodeDestroyed_C_ExecuteUbergraph_Task_FKaijuChestNodeDestroyed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
