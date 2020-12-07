// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Archa_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Archa_Character_BP.Archa_Character_BP_C.DoOverrideMountedAirControl
// ()
// Parameters:
// float*                         AirControlIn                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AArcha_Character_BP_C::DoOverrideMountedAirControl(float* AirControlIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.DoOverrideMountedAirControl");

	AArcha_Character_BP_C_DoOverrideMountedAirControl_Params params;
	params.AirControlIn = AirControlIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Archa_Character_BP.Archa_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AArcha_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.BPServerHandleNetExecCommand");

	AArcha_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Archa_Character_BP.Archa_Character_BP_C.OnRep_bPreventGlide
// ()

void AArcha_Character_BP_C::OnRep_bPreventGlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.OnRep_bPreventGlide");

	AArcha_Character_BP_C_OnRep_bPreventGlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_Character_BP.Archa_Character_BP_C.HandleMountedDinoAction
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AArcha_Character_BP_C::STATIC_HandleMountedDinoAction(class AShooterPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.HandleMountedDinoAction");

	AArcha_Character_BP_C_HandleMountedDinoAction_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_Character_BP.Archa_Character_BP_C.BPCharacterSleeped
// ()

void AArcha_Character_BP_C::BPCharacterSleeped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.BPCharacterSleeped");

	AArcha_Character_BP_C_BPCharacterSleeped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_Character_BP.Archa_Character_BP_C.GiveSap
// ()

void AArcha_Character_BP_C::GiveSap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.GiveSap");

	AArcha_Character_BP_C_GiveSap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_Character_BP.Archa_Character_BP_C.BPOnAttachmentReplication
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AArcha_Character_BP_C::BPOnAttachmentReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.BPOnAttachmentReplication");

	AArcha_Character_BP_C_BPOnAttachmentReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Archa_Character_BP.Archa_Character_BP_C.BPOnSetMountedDino
// ()

void AArcha_Character_BP_C::BPOnSetMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.BPOnSetMountedDino");

	AArcha_Character_BP_C_BPOnSetMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_Character_BP.Archa_Character_BP_C.BPOnClearMountedDino
// ()

void AArcha_Character_BP_C::BPOnClearMountedDino()
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.BPOnClearMountedDino");

	AArcha_Character_BP_C_BPOnClearMountedDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_Character_BP.Archa_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AArcha_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.ReceiveTick");

	AArcha_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_Character_BP.Archa_Character_BP_C.BPGetGravityZScale
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AArcha_Character_BP_C::BPGetGravityZScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.BPGetGravityZScale");

	AArcha_Character_BP_C_BPGetGravityZScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Archa_Character_BP.Archa_Character_BP_C.UserConstructionScript
// ()

void AArcha_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.UserConstructionScript");

	AArcha_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_Character_BP.Archa_Character_BP_C.MultiFinishAttachingToTree
// ()
// Parameters:
// struct FVector                 relLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                relRot                         (Parm, ZeroConstructor, IsPlainOldData)

void AArcha_Character_BP_C::MultiFinishAttachingToTree(const struct FVector& relLoc, const struct FRotator& relRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.MultiFinishAttachingToTree");

	AArcha_Character_BP_C_MultiFinishAttachingToTree_Params params;
	params.relLoc = relLoc;
	params.relRot = relRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Archa_Character_BP.Archa_Character_BP_C.ExecuteUbergraph_Archa_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArcha_Character_BP_C::ExecuteUbergraph_Archa_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Archa_Character_BP.Archa_Character_BP_C.ExecuteUbergraph_Archa_Character_BP");

	AArcha_Character_BP_C_ExecuteUbergraph_Archa_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
