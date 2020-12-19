// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekReplicator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.BPClientHandleNetExecCommand
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStorageBox_TekReplicator_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.BPClientHandleNetExecCommand");

	AStorageBox_TekReplicator_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.NotifyCraftingFinished
// ()

void AStorageBox_TekReplicator_C::NotifyCraftingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.NotifyCraftingFinished");

	AStorageBox_TekReplicator_C_NotifyCraftingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.UserConstructionScript
// ()

void AStorageBox_TekReplicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.UserConstructionScript");

	AStorageBox_TekReplicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.ExecuteUbergraph_StorageBox_TekReplicator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStorageBox_TekReplicator_C::ExecuteUbergraph_StorageBox_TekReplicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorageBox_TekReplicator.StorageBox_TekReplicator_C.ExecuteUbergraph_StorageBox_TekReplicator");

	AStorageBox_TekReplicator_C_ExecuteUbergraph_StorageBox_TekReplicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
