// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlugControl_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorDied
// ()

void ABuff_BrainSlugControl_C::BPInstigatorDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorDied");

	ABuff_BrainSlugControl_C_BPInstigatorDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.SetupInstigatorDinoAndAttachSlug
// ()
// Parameters:
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PossessDino                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::SetupInstigatorDinoAndAttachSlug(class AActor* Instigator, bool PossessDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.SetupInstigatorDinoAndAttachSlug");

	ABuff_BrainSlugControl_C_SetupInstigatorDinoAndAttachSlug_Params params;
	params.Instigator = Instigator;
	params.PossessDino = PossessDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPStasis
// ()

void ABuff_BrainSlugControl_C::BPStasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPStasis");

	ABuff_BrainSlugControl_C_BPStasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPUnstasis
// ()

void ABuff_BrainSlugControl_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPUnstasis");

	ABuff_BrainSlugControl_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickClient
// (Exec, Event, NetResponse, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickClient");

	ABuff_BrainSlugControl_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSerializeForInstigator
// ()
// Parameters:
// bool*                          bBeginningSerialize            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::BPPreSerializeForInstigator(bool* bBeginningSerialize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSerializeForInstigator");

	ABuff_BrainSlugControl_C_BPPreSerializeForInstigator_Params params;
	params.bBeginningSerialize = bBeginningSerialize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorReceivedKillingDamage
// ()

void ABuff_BrainSlugControl_C::BPInstigatorReceivedKillingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorReceivedKillingDamage");

	ABuff_BrainSlugControl_C_BPInstigatorReceivedKillingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorSleeped
// ()
// Parameters:
// bool*                          bIsSleeped                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::BPInstigatorSleeped(bool* bIsSleeped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPInstigatorSleeped");

	ABuff_BrainSlugControl_C_BPInstigatorSleeped_Params params;
	params.bIsSleeped = bIsSleeped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPBuffPreventUploading
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlugControl_C::BPBuffPreventUploading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPBuffPreventUploading");

	ABuff_BrainSlugControl_C_BPBuffPreventUploading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffOverrideInventoryAccessInput
// ()
// Parameters:
// class AController**            InController                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInputPressed                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlugControl_C::BuffOverrideInventoryAccessInput(class AController** InController, bool* bInputPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffOverrideInventoryAccessInput");

	ABuff_BrainSlugControl_C_BuffOverrideInventoryAccessInput_Params params;
	params.InController = InController;
	params.bInputPressed = bInputPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UpdateTimeAndDamageForInstigator
// ()

void ABuff_BrainSlugControl_C::UpdateTimeAndDamageForInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UpdateTimeAndDamageForInstigator");

	ABuff_BrainSlugControl_C_UpdateTimeAndDamageForInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPForceDinoNameTargetingTeamOverride
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TargetingTeamToCheck           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABuff_BrainSlugControl_C::BPForceDinoNameTargetingTeamOverride(class AShooterHUD** HUD, int* TargetingTeamToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPForceDinoNameTargetingTeamOverride");

	ABuff_BrainSlugControl_C_BPForceDinoNameTargetingTeamOverride_Params params;
	params.HUD = HUD;
	params.TargetingTeamToCheck = TargetingTeamToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.EndBrainControlEffects
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintEvent, Const)

void ABuff_BrainSlugControl_C::STATIC_EndBrainControlEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.EndBrainControlEffects");

	ABuff_BrainSlugControl_C_EndBrainControlEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetDinoNameColorOverride
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor*                 ColorToOverride                (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FColor ABuff_BrainSlugControl_C::BPGetDinoNameColorOverride(class AShooterHUD** HUD, struct FColor* ColorToOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetDinoNameColorOverride");

	ABuff_BrainSlugControl_C_BPGetDinoNameColorOverride_Params params;
	params.HUD = HUD;
	params.ColorToOverride = ColorToOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DrawBuffFloatingHUD");

	ABuff_BrainSlugControl_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPOverrideTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_BrainSlugControl_C::BPOverrideTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPOverrideTargetingDesire");

	ABuff_BrainSlugControl_C_BPOverrideTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreventFirstPerson
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlugControl_C::BPPreventFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreventFirstPerson");

	ABuff_BrainSlugControl_C_BPPreventFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetHUDElements
// (NetReliable, NetRequest, Native, Event, Static, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_BrainSlugControl_C::STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetHUDElements");

	ABuff_BrainSlugControl_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BrainSlugControl_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPTryMultiUse");

	ABuff_BrainSlugControl_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetMultiUseEntries
// (Native, Static, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_BrainSlugControl_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPGetMultiUseEntries");

	ABuff_BrainSlugControl_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::BPPreSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPPreSetupForInstigator");

	ABuff_BrainSlugControl_C_BPPreSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveDestroyed
// ()

void ABuff_BrainSlugControl_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveDestroyed");

	ABuff_BrainSlugControl_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPDeactivated");

	ABuff_BrainSlugControl_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BPSetupForInstigator");

	ABuff_BrainSlugControl_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UserConstructionScript
// ()

void ABuff_BrainSlugControl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.UserConstructionScript");

	ABuff_BrainSlugControl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.LaunchClearOfAttachment
// ()

void ABuff_BrainSlugControl_C::LaunchClearOfAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.LaunchClearOfAttachment");

	ABuff_BrainSlugControl_C_LaunchClearOfAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveBeginPlay
// ()

void ABuff_BrainSlugControl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ReceiveBeginPlay");

	ABuff_BrainSlugControl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerClearPossessor
// ()
// Parameters:
// bool                           RetainSlugControl              (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::ServerClearPossessor(bool RetainSlugControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerClearPossessor");

	ABuff_BrainSlugControl_C_ServerClearPossessor_Params params;
	params.RetainSlugControl = RetainSlugControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_DisableInput
// ()

void ABuff_BrainSlugControl_C::Multi_DisableInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_DisableInput");

	ABuff_BrainSlugControl_C_Multi_DisableInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BeginPossessionResponse
// ()

void ABuff_BrainSlugControl_C::BeginPossessionResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BeginPossessionResponse");

	ABuff_BrainSlugControl_C_BeginPossessionResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerDeath
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::RespondToPlayerDeath(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerDeath");

	ABuff_BrainSlugControl_C_RespondToPlayerDeath_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerSleep
// ()
// Parameters:
// class APrimalCharacter*        forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSleeping                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::RespondToPlayerSleep(class APrimalCharacter* forCharacter, bool bIsSleeping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.RespondToPlayerSleep");

	ABuff_BrainSlugControl_C_RespondToPlayerSleep_Params params;
	params.forCharacter = forCharacter;
	params.bIsSleeping = bIsSleeping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerTryRepossesion
// ()
// Parameters:
// class AShooterPlayerController* NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::ServerTryRepossesion(class AShooterPlayerController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerTryRepossesion");

	ABuff_BrainSlugControl_C_ServerTryRepossesion_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_EnablePossession
// ()
// Parameters:
// class AShooterPlayerController* NewPossessingPC                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::Multi_EnablePossession(class AShooterPlayerController* NewPossessingPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_EnablePossession");

	ABuff_BrainSlugControl_C_Multi_EnablePossession_Params params;
	params.NewPossessingPC = NewPossessingPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BuffTickServer");

	ABuff_BrainSlugControl_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TryingToClearRider
// ()
// Parameters:
// class AShooterCharacter*       RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)
// class APrimalDinoCharacter*    ForDino                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::TryingToClearRider(class AShooterCharacter* RiderClearing, class APrimalDinoCharacter* ForDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TryingToClearRider");

	ABuff_BrainSlugControl_C_TryingToClearRider_Params params;
	params.RiderClearing = RiderClearing;
	params.ForDino = ForDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BindClearRiderEvent
// ()

void ABuff_BrainSlugControl_C::BindClearRiderEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.BindClearRiderEvent");

	ABuff_BrainSlugControl_C_BindClearRiderEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.KillAttachedChar
// ()

void ABuff_BrainSlugControl_C::KillAttachedChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.KillAttachedChar");

	ABuff_BrainSlugControl_C_KillAttachedChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DoMultiUseAccessInventory
// ()

void ABuff_BrainSlugControl_C::DoMultiUseAccessInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DoMultiUseAccessInventory");

	ABuff_BrainSlugControl_C_DoMultiUseAccessInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DelayedDeactivate
// ()

void ABuff_BrainSlugControl_C::DelayedDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.DelayedDeactivate");

	ABuff_BrainSlugControl_C_DelayedDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerDeactivate
// ()

void ABuff_BrainSlugControl_C::ServerDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ServerDeactivate");

	ABuff_BrainSlugControl_C_ServerDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TestingMessage
// ()
// Parameters:
// class FString                  OutMessage                     (Parm, ZeroConstructor)

void ABuff_BrainSlugControl_C::TestingMessage(const class FString& OutMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.TestingMessage");

	ABuff_BrainSlugControl_C_TestingMessage_Params params;
	params.OutMessage = OutMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_SetupDinos
// ()

void ABuff_BrainSlugControl_C::Multi_SetupDinos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.Multi_SetupDinos");

	ABuff_BrainSlugControl_C_Multi_SetupDinos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ExecuteUbergraph_Buff_BrainSlugControl
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlugControl_C::ExecuteUbergraph_Buff_BrainSlugControl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlugControl.Buff_BrainSlugControl_C.ExecuteUbergraph_Buff_BrainSlugControl");

	ABuff_BrainSlugControl_C_ExecuteUbergraph_Buff_BrainSlugControl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
