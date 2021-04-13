// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekTeleporter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekTeleporter.TekTeleporter_C.DoTeleportBatch
// (NetReliable, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const, NetValidate)

void ATekTeleporter_C::STATIC_DoTeleportBatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.DoTeleportBatch");

	ATekTeleporter_C_DoTeleportBatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTeleporter.TekTeleporter_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekTeleporter_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.BPServerHandleNetExecCommand");

	ATekTeleporter_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function TekTeleporter.TekTeleporter_C.BPPreventSpawnForPlayer
// ()
// Parameters:
// class AShooterPlayerController** PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCheckCooldownTime             (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure**       FromStructure                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekTeleporter_C::BPPreventSpawnForPlayer(class AShooterPlayerController** PC, bool* bCheckCooldownTime, class APrimalStructure** FromStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.BPPreventSpawnForPlayer");

	ATekTeleporter_C_BPPreventSpawnForPlayer_Params params;
	params.PC = PC;
	params.bCheckCooldownTime = bCheckCooldownTime;
	params.FromStructure = FromStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekTeleporter.TekTeleporter_C.BPOverrideAllowStructureAccess
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAccessAllowed               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForInventoryOnly              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekTeleporter_C::BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed, bool* bForInventoryOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.BPOverrideAllowStructureAccess");

	ATekTeleporter_C_BPOverrideAllowStructureAccess_Params params;
	params.ForPC = ForPC;
	params.bIsAccessAllowed = bIsAccessAllowed;
	params.bForInventoryOnly = bForInventoryOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekTeleporter.TekTeleporter_C.GetTeleportEffectScale
// ()
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutScale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekTeleporter_C::GetTeleportEffectScale(class APrimalCharacter* forCharacter, float* OutScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.GetTeleportEffectScale");

	ATekTeleporter_C_GetTeleportEffectScale_Params params;
	params.forCharacter = forCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutScale != nullptr)
		*OutScale = params.OutScale;
}


// Function TekTeleporter.TekTeleporter_C.GetBedFilterClass
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ATekTeleporter_C::GetBedFilterClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.GetBedFilterClass");

	ATekTeleporter_C_GetBedFilterClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekTeleporter.TekTeleporter_C.BPClientDoMultiUse
// (NetReliable, Native, Event, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ATekTeleporter_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.BPClientDoMultiUse");

	ATekTeleporter_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTeleporter.TekTeleporter_C.BPHandleBedFastTravel
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalStructure**       ToBed                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekTeleporter_C::BPHandleBedFastTravel(class AShooterPlayerController** ForPC, class APrimalStructure** ToBed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.BPHandleBedFastTravel");

	ATekTeleporter_C_BPHandleBedFastTravel_Params params;
	params.ForPC = ForPC;
	params.ToBed = ToBed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekTeleporter.TekTeleporter_C.GetElementCostToTeleport
// ()
// Parameters:
// int                            ElementCostToTeleport          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATekTeleporter_C::GetElementCostToTeleport(int* ElementCostToTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.GetElementCostToTeleport");

	ATekTeleporter_C_GetElementCostToTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementCostToTeleport != nullptr)
		*ElementCostToTeleport = params.ElementCostToTeleport;
}


// Function TekTeleporter.TekTeleporter_C.GetCharactersForTeleport
// (Native, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// TArray<class APrimalCharacter*> OutChars                       (Parm, OutParm, ZeroConstructor)
// TArray<struct UObject_FTransform> OutTransforms                  (Parm, OutParm, ZeroConstructor)

void ATekTeleporter_C::GetCharactersForTeleport(TArray<class APrimalCharacter*>* OutChars, TArray<struct UObject_FTransform>* OutTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.GetCharactersForTeleport");

	ATekTeleporter_C_GetCharactersForTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutChars != nullptr)
		*OutChars = params.OutChars;
	if (OutTransforms != nullptr)
		*OutTransforms = params.OutTransforms;
}


// Function TekTeleporter.TekTeleporter_C.DoTeleport
// (Native, Event, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class ATekTeleporter_C*        ToTeleporter                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekTeleporter_C::STATIC_DoTeleport(class ATekTeleporter_C* ToTeleporter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.DoTeleport");

	ATekTeleporter_C_DoTeleport_Params params;
	params.ToTeleporter = ToTeleporter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTeleporter.TekTeleporter_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekTeleporter_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.BPTryMultiUse");

	ATekTeleporter_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekTeleporter.TekTeleporter_C.BPGetMultiUseEntries
// (NetReliable, Exec, Native, Event, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ATekTeleporter_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.BPGetMultiUseEntries");

	ATekTeleporter_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function TekTeleporter.TekTeleporter_C.UserConstructionScript
// ()

void ATekTeleporter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.UserConstructionScript");

	ATekTeleporter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTeleporter.TekTeleporter_C.DoTeleportOutVFX
// ()
// Parameters:
// float                          EffectScale                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EffectLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                EffectRot                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekTeleporter_C::DoTeleportOutVFX(float EffectScale, const struct FVector& EffectLoc, const struct FRotator& EffectRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.DoTeleportOutVFX");

	ATekTeleporter_C_DoTeleportOutVFX_Params params;
	params.EffectScale = EffectScale;
	params.EffectLoc = EffectLoc;
	params.EffectRot = EffectRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTeleporter.TekTeleporter_C.DoTeleportInVFX
// ()
// Parameters:
// float                          EffectScale                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EffectLoc                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                EffectRot                      (Parm, ZeroConstructor, IsPlainOldData)

void ATekTeleporter_C::DoTeleportInVFX(float EffectScale, const struct FVector& EffectLoc, const struct FRotator& EffectRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.DoTeleportInVFX");

	ATekTeleporter_C_DoTeleportInVFX_Params params;
	params.EffectScale = EffectScale;
	params.EffectLoc = EffectLoc;
	params.EffectRot = EffectRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTeleporter.TekTeleporter_C.DoPlayTeleportOutSound
// ()

void ATekTeleporter_C::DoPlayTeleportOutSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.DoPlayTeleportOutSound");

	ATekTeleporter_C_DoPlayTeleportOutSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTeleporter.TekTeleporter_C.DoPlayTeleportInSound
// ()

void ATekTeleporter_C::DoPlayTeleportInSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.DoPlayTeleportInSound");

	ATekTeleporter_C_DoPlayTeleportInSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTeleporter.TekTeleporter_C.ExecuteUbergraph_TekTeleporter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekTeleporter_C::ExecuteUbergraph_TekTeleporter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTeleporter.TekTeleporter_C.ExecuteUbergraph_TekTeleporter");

	ATekTeleporter_C_ExecuteUbergraph_TekTeleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
