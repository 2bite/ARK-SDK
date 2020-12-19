// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekCloningChamber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekCloningChamber.TekCloningChamber_C.BPChangedActorTeam
// ()

void ATekCloningChamber_C::BPChangedActorTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BPChangedActorTeam");

	ATekCloningChamber_C_BPChangedActorTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.BPNotifyInventoryItemChange
// ()
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekCloningChamber_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BPNotifyInventoryItemChange");

	ATekCloningChamber_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.BPContainerDeactivated
// ()

void ATekCloningChamber_C::BPContainerDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BPContainerDeactivated");

	ATekCloningChamber_C_BPContainerDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.IsValidToClone
// ()
// Parameters:
// class APrimalDinoCharacter*    InDino                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekCloningChamber_C::IsValidToClone(class APrimalDinoCharacter* InDino, bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.IsValidToClone");

	ATekCloningChamber_C_IsValidToClone_Params params;
	params.InDino = InDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


// Function TekCloningChamber.TekCloningChamber_C.BPOverrideAllowStructureAccess
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAccessAllowed               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCloningChamber_C::BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BPOverrideAllowStructureAccess");

	ATekCloningChamber_C_BPOverrideAllowStructureAccess_Params params;
	params.ForPC = ForPC;
	params.bIsAccessAllowed = bIsAccessAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCloningChamber.TekCloningChamber_C.BlueprintDrawHUD
// (NetRequest, NetMulticast, Public, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)

void ATekCloningChamber_C::BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BlueprintDrawHUD");

	ATekCloningChamber_C_BlueprintDrawHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.ReceiveBeginPlay
// ()

void ATekCloningChamber_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.ReceiveBeginPlay");

	ATekCloningChamber_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.BPPostLoadedFromSaveGame
// ()

void ATekCloningChamber_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BPPostLoadedFromSaveGame");

	ATekCloningChamber_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.BPPreventStasis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCloningChamber_C::BPPreventStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BPPreventStasis");

	ATekCloningChamber_C_BPPreventStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekCloningChamber.TekCloningChamber_C.StartCloneDino
// (NetRequest, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APrimalDinoCharacter*    DinoToClone                    (Parm, ZeroConstructor, IsPlainOldData)

void ATekCloningChamber_C::STATIC_StartCloneDino(class APrimalDinoCharacter* DinoToClone)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.StartCloneDino");

	ATekCloningChamber_C_StartCloneDino_Params params;
	params.DinoToClone = DinoToClone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekCloningChamber_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BPServerHandleNetExecCommand");

	ATekCloningChamber_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function TekCloningChamber.TekCloningChamber_C.BPClientDoMultiUse
// (Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekCloningChamber_C::STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BPClientDoMultiUse");

	ATekCloningChamber_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekCloningChamber_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.BPGetMultiUseEntries");

	ATekCloningChamber_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekCloningChamber.TekCloningChamber_C.UserConstructionScript
// ()

void ATekCloningChamber_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.UserConstructionScript");

	ATekCloningChamber_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.DoNetStartCloning
// ()
// Parameters:
// class FString                  TheCloningDescriptiveName      (Parm, ZeroConstructor)
// double                         TheCloningCompletionTime       (Parm, ZeroConstructor, IsPlainOldData)

void ATekCloningChamber_C::DoNetStartCloning(const class FString& TheCloningDescriptiveName, double TheCloningCompletionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.DoNetStartCloning");

	ATekCloningChamber_C_DoNetStartCloning_Params params;
	params.TheCloningDescriptiveName = TheCloningDescriptiveName;
	params.TheCloningCompletionTime = TheCloningCompletionTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.NetFinishCloning
// ()

void ATekCloningChamber_C::NetFinishCloning()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.NetFinishCloning");

	ATekCloningChamber_C_NetFinishCloning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.DoNetHaltCloning
// ()

void ATekCloningChamber_C::DoNetHaltCloning()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.DoNetHaltCloning");

	ATekCloningChamber_C_DoNetHaltCloning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekCloningChamber.TekCloningChamber_C.ExecuteUbergraph_TekCloningChamber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekCloningChamber_C::ExecuteUbergraph_TekCloningChamber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekCloningChamber.TekCloningChamber_C.ExecuteUbergraph_TekCloningChamber");

	ATekCloningChamber_C_ExecuteUbergraph_TekCloningChamber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
