// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FeedingTroughBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.Check Team and Set Visual Visibility
// ()

void AFeedingTroughBaseBP_C::Check_Team_and_Set_Visual_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.Check Team and Set Visual Visibility");

	AFeedingTroughBaseBP_C_Check_Team_and_Set_Visual_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFeedingTroughBaseBP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPServerHandleNetExecCommand");

	AFeedingTroughBaseBP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.OnRep_ShowArea
// ()

void AFeedingTroughBaseBP_C::OnRep_ShowArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.OnRep_ShowArea");

	AFeedingTroughBaseBP_C_OnRep_ShowArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPClientDoMultiUse
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AFeedingTroughBaseBP_C::STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPClientDoMultiUse");

	AFeedingTroughBaseBP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPGetMultiUseEntries
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AFeedingTroughBaseBP_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.BPGetMultiUseEntries");

	AFeedingTroughBaseBP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ReceiveBeginPlay
// ()

void AFeedingTroughBaseBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ReceiveBeginPlay");

	AFeedingTroughBaseBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ThrottledTick
// ()

void AFeedingTroughBaseBP_C::ThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ThrottledTick");

	AFeedingTroughBaseBP_C_ThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.UserConstructionScript
// ()

void AFeedingTroughBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.UserConstructionScript");

	AFeedingTroughBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ServerRequest_ToggleShowarea
// ()

void AFeedingTroughBaseBP_C::ServerRequest_ToggleShowarea()
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ServerRequest_ToggleShowarea");

	AFeedingTroughBaseBP_C_ServerRequest_ToggleShowarea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ServerRequest_TurnOffAllShowarea
// ()
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AFeedingTroughBaseBP_C::ServerRequest_TurnOffAllShowarea(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ServerRequest_TurnOffAllShowarea");

	AFeedingTroughBaseBP_C_ServerRequest_TurnOffAllShowarea_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ExecuteUbergraph_FeedingTroughBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFeedingTroughBaseBP_C::ExecuteUbergraph_FeedingTroughBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FeedingTroughBaseBP.FeedingTroughBaseBP_C.ExecuteUbergraph_FeedingTroughBaseBP");

	AFeedingTroughBaseBP_C_ExecuteUbergraph_FeedingTroughBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
