// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTurretBaseBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPCopyCustomSettingsFromTurret
// ()
// Parameters:
// class APrimalStructureTurret** FromTurret                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_C::BPCopyCustomSettingsFromTurret(class APrimalStructureTurret** FromTurret)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPCopyCustomSettingsFromTurret");

	AStructureTurretBaseBP_C_BPCopyCustomSettingsFromTurret_Params params;
	params.FromTurret = FromTurret;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPTurretPreventsTargeting
// ()
// Parameters:
// class APrimalCharacter**       PotentialTarget                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_C::BPTurretPreventsTargeting(class APrimalCharacter** PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPTurretPreventsTargeting");

	AStructureTurretBaseBP_C_BPTurretPreventsTargeting_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPServerHandleNetExecCommand");

	AStructureTurretBaseBP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPClientDoMultiUse
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBaseBP_C::STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPClientDoMultiUse");

	AStructureTurretBaseBP_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPGetMultiUseEntries
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructureTurretBaseBP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPGetMultiUseEntries");

	AStructureTurretBaseBP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPTryMultiUse");

	AStructureTurretBaseBP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPPostLoadedFromSaveGame
// ()

void AStructureTurretBaseBP_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPPostLoadedFromSaveGame");

	AStructureTurretBaseBP_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.TurretCheckHardLimit
// ()

void AStructureTurretBaseBP_C::TurretCheckHardLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.TurretCheckHardLimit");

	AStructureTurretBaseBP_C_TurretCheckHardLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPUseCountStructureInRange
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_C::BPUseCountStructureInRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPUseCountStructureInRange");

	AStructureTurretBaseBP_C_BPUseCountStructureInRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPCanBeActivated
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructureTurretBaseBP_C::BPCanBeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPCanBeActivated");

	AStructureTurretBaseBP_C_BPCanBeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPIsAllowedToBuildEx
// ()
// Parameters:
// struct FPlacementData          OutPlacementData               (Parm, OutParm, ReferenceParm)
// int*                           CurrentAllowedReason           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFinalPlacement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bChoosingRotation              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStructureTurretBaseBP_C::BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BPIsAllowedToBuildEx");

	AStructureTurretBaseBP_C_BPIsAllowedToBuildEx_Params params;
	params.CurrentAllowedReason = CurrentAllowedReason;
	params.PC = PC;
	params.bFinalPlacement = bFinalPlacement;
	params.bChoosingRotation = bChoosingRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlacementData != nullptr)
		*OutPlacementData = params.OutPlacementData;

	return params.ReturnValue;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.BlueprintDrawHUD
// (Net, Exec, Native, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBaseBP_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.BlueprintDrawHUD");

	AStructureTurretBaseBP_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.UserConstructionScript
// ()

void AStructureTurretBaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.UserConstructionScript");

	AStructureTurretBaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StructureTurretBaseBP.StructureTurretBaseBP_C.ExecuteUbergraph_StructureTurretBaseBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructureTurretBaseBP_C::ExecuteUbergraph_StructureTurretBaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureTurretBaseBP.StructureTurretBaseBP_C.ExecuteUbergraph_StructureTurretBaseBP");

	AStructureTurretBaseBP_C_ExecuteUbergraph_StructureTurretBaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
