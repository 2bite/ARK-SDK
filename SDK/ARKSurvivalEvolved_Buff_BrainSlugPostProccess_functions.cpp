// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlugPostProccess_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.InterceptInstigatorPlayerEmoteAnim
// (NetRequest, NetResponse, Static, NetMulticast, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage**           EmoteAnim                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlugPostProccess_C::STATIC_InterceptInstigatorPlayerEmoteAnim(class UAnimMontage** EmoteAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.InterceptInstigatorPlayerEmoteAnim");

	ABuff_BrainSlugPostProccess_C_InterceptInstigatorPlayerEmoteAnim_Params params;
	params.EmoteAnim = EmoteAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlugPostProccess_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BPServerHandleNetExecCommand");

	ABuff_BrainSlugPostProccess_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffOverrideInventoryAccessInput
// ()
// Parameters:
// class AController**            InController                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInputPressed                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlugPostProccess_C::BuffOverrideInventoryAccessInput(class AController** InController, bool* bInputPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffOverrideInventoryAccessInput");

	ABuff_BrainSlugPostProccess_C_BuffOverrideInventoryAccessInput_Params params;
	params.InController = InController;
	params.bInputPressed = bInputPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlugPostProccess_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.AllowPostProcessEffect");

	ABuff_BrainSlugPostProccess_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.UserConstructionScript
// ()

void ABuff_BrainSlugPostProccess_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.UserConstructionScript");

	ABuff_BrainSlugPostProccess_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugPostProccess_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickClient");

	ABuff_BrainSlugPostProccess_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugPostProccess_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.BuffTickServer");

	ABuff_BrainSlugPostProccess_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ReceiveBeginPlay
// ()

void ABuff_BrainSlugPostProccess_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ReceiveBeginPlay");

	ABuff_BrainSlugPostProccess_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ExecuteUbergraph_Buff_BrainSlugPostProccess
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugPostProccess_C::ExecuteUbergraph_Buff_BrainSlugPostProccess(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugPostProccess.Buff_BrainSlugPostProccess_C.ExecuteUbergraph_Buff_BrainSlugPostProccess");

	ABuff_BrainSlugPostProccess_C_ExecuteUbergraph_Buff_BrainSlugPostProccess_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
