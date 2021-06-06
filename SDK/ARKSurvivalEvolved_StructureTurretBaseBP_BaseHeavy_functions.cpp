// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_BaseHeavy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPCopyCustomSettingsFromTurret
// ()
// Parameters:
// class APrimalStructureTurret** FromTurret                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_BaseHeavy_C::BPCopyCustomSettingsFromTurret(class APrimalStructureTurret** FromTurret)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPCopyCustomSettingsFromTurret");

	AStructureTurretBaseBP_BaseHeavy_C_BPCopyCustomSettingsFromTurret_Params params;
	params.FromTurret = FromTurret;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPTurretPreventsTargeting
// ()
// Parameters:
// class APrimalCharacter**       PotentialTarget                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_BaseHeavy_C::BPTurretPreventsTargeting(class APrimalCharacter** PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPTurretPreventsTargeting");

	AStructureTurretBaseBP_BaseHeavy_C_BPTurretPreventsTargeting_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_BaseHeavy_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPServerHandleNetExecCommand");

	AStructureTurretBaseBP_BaseHeavy_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_BaseHeavy_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPTryMultiUse");

	AStructureTurretBaseBP_BaseHeavy_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPClientDoMultiUse
// (NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBaseBP_BaseHeavy_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPClientDoMultiUse");

	AStructureTurretBaseBP_BaseHeavy_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPGetMultiUseEntries
// (NetRequest, Native, NetResponse, Static, NetMulticast, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructureTurretBaseBP_BaseHeavy_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPGetMultiUseEntries");

	AStructureTurretBaseBP_BaseHeavy_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPCanBeActivated
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_BaseHeavy_C::BPCanBeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPCanBeActivated");

	AStructureTurretBaseBP_BaseHeavy_C_BPCanBeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPPostLoadedFromSaveGame
// ()

void AStructureTurretBaseBP_BaseHeavy_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPPostLoadedFromSaveGame");

	AStructureTurretBaseBP_BaseHeavy_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.TurretCheckHardLimit
// ()

void AStructureTurretBaseBP_BaseHeavy_C::TurretCheckHardLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.TurretCheckHardLimit");

	AStructureTurretBaseBP_BaseHeavy_C_TurretCheckHardLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BlueprintDrawHUD
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBaseBP_BaseHeavy_C::STATIC_BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BlueprintDrawHUD");

	AStructureTurretBaseBP_BaseHeavy_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPIsAllowedToBuild
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructureTurretBaseBP_BaseHeavy_C::BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.BPIsAllowedToBuild");

	AStructureTurretBaseBP_BaseHeavy_C_BPIsAllowedToBuild_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.UserConstructionScript
// ()

void AStructureTurretBaseBP_BaseHeavy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.UserConstructionScript");

	AStructureTurretBaseBP_BaseHeavy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBaseBP_BaseHeavy_C::ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C.ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy");

	AStructureTurretBaseBP_BaseHeavy_C_ExecuteUbergraph_StructureTurretBaseBP_BaseHeavy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
